#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-26.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_messageInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 38)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                          extensionMethod_messageInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_messageInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-message.galgas", 52)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 51)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 58)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 60)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 60)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 60))  COMMA_SOURCE_FILE ("instruction-message.galgas", 59)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression, object->mAttribute_mInstructionLocation  COMMA_SOURCE_FILE ("instruction-message.galgas", 63))  COMMA_SOURCE_FILE ("instruction-message.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                   extensionMethod_messageInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@messageInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_messageInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionForGeneration * object = (const cPtr_messageInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionForGeneration) ;
  GALGAS_string var_messageCppVarName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 87)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 95)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 95)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 95)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_messageInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_messageInstructionForGeneration.mSlotID,
                                            extensionMethod_messageInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionForGeneration_generateInstruction (defineExtensionMethod_messageInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  cEnumerator_actualParameterListAST enumerator_1913 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_1913.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1913.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
    enumerator_1913.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                          extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 62)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 61)) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_methodKind var_kind ;
  GALGAS_string var_errorMessage ;
  GALGAS_location joker_2940 ; // Joker input parameter
  GALGAS_methodQualifier joker_2964 ; // Joker input parameter
  var_receiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 72)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 72)).method_searchKey (object->mAttribute_mMethodName, var_kind, var_routineSignature, joker_2940, var_hasCompilerArgument, joker_2964, var_errorMessage, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 72)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_errorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mMethodName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, var_errorMessage  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 74)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 80)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 80)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = var_receiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 88)) ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 91)).isValid ()) {
      uint32_t variant_3551 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 91)).uintValue () ;
      bool loop_3551 = true ;
      while (loop_3551) {
        loop_3551 = var_searching.isValid () ;
        if (loop_3551) {
          loop_3551 = var_searching.boolValue () ;
        }
        if (loop_3551 && (0 == variant_3551)) {
          loop_3551 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 91)) ;
        }
        if (loop_3551) {
          variant_3551 -- ;
          const enumGalgasBool test_3 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 92)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 92)).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_searching = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_3) {
            const enumGalgasBool test_4 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 95)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 95)).getter_hasKey (object->mAttribute_mMethodName.mAttribute_string COMMA_SOURCE_FILE ("instruction-method-call.galgas", 95)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_baseType = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 96)) ;
            }else if (kBoolFalse == test_4) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 106)), var_receiverExpression, object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 108)), var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument, var_baseType  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 104))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 104)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                   extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@methodCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_methodCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionForGeneration * object = (const cPtr_methodCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionForGeneration) ;
  GALGAS_string var_receiverCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 140)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName COMMA_SOURCE_FILE ("instruction-method-call.galgas", 141)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 143)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 144)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 145)) ;
  cEnumerator_actualParameterListForGeneration enumerator_5662 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_5662.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5662.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 148)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 149)) ;
    enumerator_5662.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)).add_operation (object->mAttribute_mMethodName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-method-call.galgas", 155)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156)).add_operation (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 157)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 156)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (object->mAttribute_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_6701 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_6701.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6701.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
    if (enumerator_6701.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 166)) ;
    }
    enumerator_6701.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 170)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 170)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 179)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_methodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_methodCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_1673 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_1673.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1673.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 39)) ;
    enumerator_1673.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                          extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.method_searchKey (object->mAttribute_mRoutineName, var_routineSignature, var_isInternal, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 52)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mRoutineMap.getter_locationForKey (object->mAttribute_mRoutineName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 59)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mRoutineName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 60)).objectCompare (var_procDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 60)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 61)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 61))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 61)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mRoutineName, GALGAS_string ("'").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 68)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 68)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (object->mAttribute_mRoutineName, var_actualParameterListForGeneration  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                   extensionMethod_procCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@procCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionForGeneration * object = (const cPtr_procCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 99))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 99)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 102)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 103)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 104)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4311 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_4311.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4311.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 115)) ;
    enumerator_4311.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 118)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)) ;
  cEnumerator_stringlist enumerator_4773 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_4773.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_4773.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 120)) ;
    enumerator_4773.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 122)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 124)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_procCallInstructionForGeneration.mSlotID,
                                            extensionMethod_procCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procCallInstructionForGeneration_generateInstruction (defineExtensionMethod_procCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 113)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 125)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 131)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 151)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 152)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments = var_selfTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 158)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 159)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 161)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 161))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 163)).objectCompare (var_addAssignOperatorArguments.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 163)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 165)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 165)).add_operation (var_addAssignOperatorArguments.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 166)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 165)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)).add_operation (object->mAttribute_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 167)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 164)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 169)) ;
      cEnumerator_actualOutputExpressionList enumerator_7360 (object->mAttribute_mExpressions, kEnumeration_up) ;
      cEnumerator_functionSignature enumerator_7394 (var_addAssignOperatorArguments, kEnumeration_up) ;
      while (enumerator_7360.hasCurrentObject () && enumerator_7394.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_exp ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7360.current_mExpression (HERE).ptr (), enumerator_7394.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_7394.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_7360.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
        if (kBoolTrue == test_3) {
          GALGAS_string temp_4 ;
          const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_7394.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_5) {
            temp_4 = enumerator_7394.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 178)) ;
          }else if (kBoolFalse == test_5) {
            temp_4 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_location location_6 (enumerator_7360.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("the selector should be '!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 178)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 178))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 178)) ;
        }
        {
        routine_checkAssignmentTypes (enumerator_7394.current_mFormalArgumentType (HERE), var_exp.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 180)), enumerator_7360.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 180)) ;
        }
        var_effectiveParameterList.addAssign_operation (var_exp  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)) ;
        enumerator_7360.gotoNextObject () ;
        enumerator_7394.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName, var_selfTypeProxy, GALGAS_string::makeEmptyString (), object->mAttribute_mInstructionLocation, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 189)), var_effectiveParameterList  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 184))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 184)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 203)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)).operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 212)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 212))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 211)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 215)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 222)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 222)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 229)), var_expression, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 224))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 224)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 244)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 245)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 251)).operator_and (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 251)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 251)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 253)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 253))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 252)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 263)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 270)), var_expression, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 265))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 265)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 285)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 286)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 292)).operator_and (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 292)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 292)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 293)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 297)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 304)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 304)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 311)), var_expression, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 306))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 306)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 326)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 327)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_selfTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 333)).operator_and (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 333)) COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 333)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 335)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 335))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 334)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), var_selfTypeProxy, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 338)) ;
  {
  routine_checkAssignmentTypes (var_selfTypeProxy, var_expression.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 345)), object->mAttribute_mInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 345)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_selfTypeProxy, var_selfObjectCppName, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 352)), var_expression, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 347))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 347)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3382 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_3382.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3382.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 98)) ;
    enumerator_3382.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                          extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3797 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_3797.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3797.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 109)) ;
    enumerator_3797.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                          extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType ;
  GALGAS_string var_receiverVariableCppName ;
  GALGAS_string var_receiverVariableBaseName ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_receiverType, var_receiverVariableCppName, var_receiverVariableBaseName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 123)) ;
  }
  cEnumerator_lstringlist enumerator_4608 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_4608.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_receiverType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 130)) ;
    var_attributeMap.method_searchKey (enumerator_4608.current_mValue (HERE), var_receiverType, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 131)) ;
    enumerator_4608.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_castType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeNameForCasting.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_castType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeNameForCasting, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 143)) ;
    {
    routine_checkAssignmentTypes (var_receiverType, var_castType, object->mAttribute_mTypeNameForCasting.mAttribute_location, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
    }
  }else if (kBoolFalse == test_0) {
    var_castType = var_receiverType ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_string var_modifierErrorMessage ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_5522 ; // Joker input parameter
  var_castType.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_5522, var_modifierErrorMessage, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_modifierErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_2, var_modifierErrorMessage  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 161)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = var_castType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).isValid ()) {
      uint32_t variant_6105 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).uintValue () ;
      bool loop_6105 = true ;
      while (loop_6105) {
        loop_6105 = var_searching.isValid () ;
        if (loop_6105) {
          loop_6105 = var_searching.boolValue () ;
        }
        if (loop_6105 && (0 == variant_6105)) {
          loop_6105 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 175)) ;
        }
        if (loop_6105) {
          variant_6105 -- ;
          const enumGalgasBool test_4 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 176)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 176)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_searching = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_4) {
            const enumGalgasBool test_5 = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_hasKey (object->mAttribute_mModifierName.mAttribute_string COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_baseType = var_baseType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
            }else if (kBoolFalse == test_5) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (object->mAttribute_mReceiverName.mAttribute_location, var_receiverVariableCppName, var_receiverVariableBaseName, object->mAttribute_mReceiverStructAttributes, var_castType, var_receiverType, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument, var_baseType  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                   extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy ;
  GALGAS_string var_selfObjectCppName ;
  const enumGalgasBool test_0 = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy.getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 212)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mModifierName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'self' can be used only in extension setters")  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
    var_selfObjectCppName.drop () ; // Release error dropped variable
    var_selfTypeProxy.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_selfObjectCppName = constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName ;
    var_selfTypeProxy = constinArgument_inAnalysisContext.mAttribute_mSelfTypeProxy ;
  }
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  GALGAS_methodKind var_kind ;
  GALGAS_methodQualifier joker_7755 ; // Joker input parameter
  GALGAS_string joker_7758 ; // Joker input parameter
  var_selfTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)).method_searchKey (object->mAttribute_mModifierName, var_kind, var_routineSignature, var_hasCompilerArgument, joker_7755, joker_7758, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mModifierName, GALGAS_string ("'").add_operation (object->mAttribute_mModifierName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 227)).add_operation (GALGAS_string ("' modifier header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 227)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName, var_selfTypeProxy, object->mAttribute_mModifierName, var_kind, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 235))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                   extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@setterCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_setterCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionForGeneration * object = (const cPtr_setterCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 304)) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_10713 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_10713.hasCurrentObject ()) {
    var_receiverCppName.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_10713.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 307)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)) ;
    enumerator_10713.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverBaseName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 309)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 311)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 312)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 313)) ;
  cEnumerator_actualParameterListForGeneration enumerator_11041 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_11041.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_11041.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 315)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) ;
    enumerator_11041.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)).add_operation (object->mAttribute_mModifierName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 329)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 330)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mReceiverType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mReceiverType.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 332)) ;
        }
        GALGAS_string var_pointerUniqueName = GALGAS_string ("ptr_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 334)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 334)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).objectCompare (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 342)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 342)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 343)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 346)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mAttribute_mModifierName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)).add_operation (object->mAttribute_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mModifierName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      extensionMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 354)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).add_operation (object->mAttribute_mModifierName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 355)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 355)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_13358 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_13358.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_13358.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)) ;
    if (enumerator_13358.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)) ;
    }
    enumerator_13358.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 362)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 368)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mModifierName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfSetterCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionForGeneration * object = (const cPtr_selfSetterCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 386)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 388)) ;
  cEnumerator_actualParameterListForGeneration enumerator_14567 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_14567.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_14567.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 390)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 398)) ;
    enumerator_14567.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)).add_operation (object->mAttribute_mModifierName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 404)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 404)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mAttribute_mModifierName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mAttribute_mModifierName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 410)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("instruction-setter-call.galgas", 410)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mSelfCppName.add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)).add_operation (object->mAttribute_mModifierName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 411)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mSelfCppName.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)).add_operation (object->mAttribute_mModifierName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_15707 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_15707.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_15707.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 417)) ;
    if (enumerator_15707.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 418)) ;
    }
    enumerator_15707.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 421)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 422)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 424)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 425)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 426)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 427)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mModifierName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_selfSetterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfSetterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 115)) ;
  cEnumerator_switchBranchesAST enumerator_3977 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_3977.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_3977.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 117)) ;
    enumerator_3977.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                          extensionMethod_switchInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 132)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 131)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 138)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 138)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 138)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 141)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 140)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 141))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 139)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 144)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 144)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 145)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 147)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 148)) ;
  cEnumerator_switchBranchesAST enumerator_5437 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_5437.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 150)) ;
    GALGAS_bool var_firstConstant = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_5593 (enumerator_5437.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_5593.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.getter_hasKey (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 153)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 153)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_constantsNamedInSwitchInstruction.getter_hasKey (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 154)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 154)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_location location_3 (enumerator_5593.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 156)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 156))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 155)) ;
        }
        var_constantsNamedInSwitchInstruction.addAssign_operation (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 158))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 158)) ;
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList ;
        GALGAS_uint joker_5957 ; // Joker input parameter
        var_enumConstantMap.method_searchKey (enumerator_5593.current_mValue (HERE), joker_5957, var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 159)) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.getter_length (SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5437.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_location location_5 (enumerator_5593.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("the associated values of '").add_operation (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_associatedTypeList.getter_length (SOURCE_FILE ("instruction-switch.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5437.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_location location_7 (enumerator_5593.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 165)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 165))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 164)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_associatedTypeList.getter_length (SOURCE_FILE ("instruction-switch.galgas", 166)).objectCompare (enumerator_5437.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 166)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              GALGAS_string temp_9 ;
              const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_associatedTypeList.getter_length (SOURCE_FILE ("instruction-switch.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_10) {
                temp_9 = GALGAS_string ("s") ;
              }else if (kBoolFalse == test_10) {
                temp_9 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_location location_11 (enumerator_5593.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_11, GALGAS_string ("the '").add_operation (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (var_associatedTypeList.getter_length (SOURCE_FILE ("instruction-switch.galgas", 168)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 168))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 167)) ;
            }else if (kBoolFalse == test_8) {
              GALGAS_uint var_associatedValueIndex = GALGAS_uint ((uint32_t) 0U) ;
              cEnumerator_unifiedTypeMapProxyList enumerator_6784 (var_associatedTypeList, kEnumeration_up) ;
              cEnumerator_switchExtractedValuesListAST enumerator_6819 (enumerator_5437.current_mAssociatedValuesExtraction (HERE), kEnumeration_up) ;
              while (enumerator_6784.hasCurrentObject () && enumerator_6819.hasCurrentObject ()) {
                const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_6819.current_mExtractedValueTypeName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_6784.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 174)).objectCompare (enumerator_6819.current_mExtractedValueTypeName (HERE).mAttribute_string)).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    GALGAS_location location_14 (enumerator_6819.current_mExtractedValueTypeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
                    inCompiler->emitSemanticError (location_14, GALGAS_string ("the required type is '@").add_operation (enumerator_6784.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 175))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)) ;
                  }
                }
                const enumGalgasBool test_15 = var_firstConstant.operator_and (GALGAS_bool (kIsNotEqual, enumerator_6819.current_mExtractedValueName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).boolEnum () ;
                if (kBoolTrue == test_15) {
                  GALGAS_string var_cppName = GALGAS_string ("extractedValue_").add_operation (enumerator_6819.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 179)) ;
                  var_extractedAssociatedValuesForGeneration.addAssign_operation (enumerator_6784.current_mType (HERE), var_cppName, var_associatedValueIndex  COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
                  const enumGalgasBool test_16 = enumerator_6819.current_mMarkedAsUnused (HERE).boolEnum () ;
                  if (kBoolTrue == test_16) {
                    {
                    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_6819.current_mExtractedValueName (HERE), enumerator_6784.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)) ;
                    }
                  }else if (kBoolFalse == test_16) {
                    {
                    ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_6819.current_mExtractedValueName (HERE), enumerator_6784.current_mType (HERE), var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)) ;
                    }
                  }
                }
                var_associatedValueIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)) ;
                enumerator_6784.gotoNextObject () ;
                enumerator_6819.gotoNextObject () ;
              }
            }
          }
        }
      }else if (kBoolFalse == test_1) {
        GALGAS_location location_17 (enumerator_5593.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_17, GALGAS_string ("'").add_operation (enumerator_5593.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (var_switchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 192)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 192))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 191)) ;
      }
      var_firstConstant = GALGAS_bool (false) ;
      enumerator_5593.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 198)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 199)), enumerator_5437.current_mInstructions (HERE), enumerator_5437.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)) ;
    }
    var_switchBranchesForGeneration.addAssign_operation (enumerator_5437.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration, enumerator_5437.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)), var_instructionList  COMMA_SOURCE_FILE ("instruction-switch.galgas", 205)) ;
    enumerator_5437.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 207)) ;
  }
  GALGAS_stringset var_forgottenConstants = var_enumConstantMap.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 209)).substract_operation (var_constantsNamedInSwitchInstruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
  const enumGalgasBool test_18 = GALGAS_bool (kIsStrictSup, var_forgottenConstants.getter_count (SOURCE_FILE ("instruction-switch.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_18) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_8592 (var_forgottenConstants, kEnumeration_up) ;
    while (enumerator_8592.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_8592.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
      enumerator_8592.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 216))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 215)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 220)), var_switchExpression, var_switchBranchesForGeneration  COMMA_SOURCE_FILE ("instruction-switch.galgas", 219))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                   extensionMethod_switchInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@switchInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_switchInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionForGeneration * object = (const cPtr_switchInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionForGeneration) ;
  GALGAS_string var_switchVar ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 269)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)) ;
  cEnumerator_switchBranchesForGeneration enumerator_10839 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_10839.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_10876 (enumerator_10839.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_10876.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 273)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (enumerator_10876.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 273)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)) ;
      enumerator_10876.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_10839.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mAttribute_mEnumType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (enumerator_10839.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
      GALGAS_string var_varPtr = GALGAS_string ("extractPtr_").add_operation (enumerator_10839.current_mLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_11566 (enumerator_10839.current_mExtractedAssociatedValuesForGeneration (HERE), kEnumeration_up) ;
      while (enumerator_11566.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_11566.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (enumerator_11566.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (enumerator_11566.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)) ;
        enumerator_11566.gotoNextObject () ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10839.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)) ;
    }
    enumerator_10839.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                            extensionMethod_switchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineExtensionMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_1830 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_1830.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1830.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 43)) ;
    enumerator_1830.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                          extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 56)) ;
  GALGAS_formalParameterSignature var_routineSignature ;
  GALGAS_bool var_hasCompilerArgument ;
  var_type.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 60)).method_searchKey (object->mAttribute_mMethodName, var_routineSignature, var_hasCompilerArgument, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 60)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mMethodName, GALGAS_string ("'").add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 65)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 65)), var_routineSignature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (object->mAttribute_mTypeName, object->mAttribute_mMethodName, var_actualParameterListForGeneration, var_hasCompilerArgument  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 73))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                   extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_typeMethodCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionForGeneration * object = (const cPtr_typeMethodCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 99)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 101)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 102)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4375 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_4375.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4375.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 113)) ;
    enumerator_4375.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 116)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 116)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 116)).add_operation (object->mAttribute_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 117)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 116)) ;
  cEnumerator_stringlist enumerator_4924 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_4924.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_4924.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 119)) ;
    if (enumerator_4924.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
    }
    enumerator_4924.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 125)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 130)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mMethodName.getter_location (SOURCE_FILE ("instruction-type-method-call.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_typeMethodCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_warningInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 43)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                          extensionMethod_warningInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_warningInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression ;
  GALGAS_semanticExpressionForGeneration var_messageExpression ;
  GALGAS_bool var_useLocationReader ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inAnalysisContext, object->mAttribute_mLocationExpression, object->mAttribute_mMessageExpression, object->mAttribute_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression, var_messageExpression, var_useLocationReader, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 56)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_locationExpression, var_useLocationReader, var_messageExpression  COMMA_SOURCE_FILE ("instruction-warning.galgas", 68))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 68)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                   extensionMethod_warningInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@warningInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_warningInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionForGeneration * object = (const cPtr_warningInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 97)) ;
  GALGAS_string var_messageCppVarName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 100)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationGetter.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-warning.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 103)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 103)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)).add_operation (GALGAS_string (".getter_location (HERE)) ; // Implicit use of 'location' getter\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 104)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 108)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 108)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 110)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                            extensionMethod_warningInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineExtensionMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 163)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 164)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 165)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 166)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 174)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 175)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mAttribute_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mReceiverExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 189)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 188)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = var_receiverExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 194)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_7438 (var_receiverType.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 198)), kEnumeration_up) ;
    bool bool_1 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 198)).isValidAndTrue () ;
    if (enumerator_7438.hasCurrentObject () && bool_1) {
      while (enumerator_7438.hasCurrentObject () && bool_1) {
        var_found = GALGAS_bool (kIsEqual, enumerator_7438.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_7438.gotoNextObject () ;
        if (enumerator_7438.hasCurrentObject ()) {
          bool_1 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 198)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 201)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)).add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 202))  COMMA_SOURCE_FILE ("instruction-with.galgas", 202)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 207)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 213)).getter_string (SOURCE_FILE ("instruction-with.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 213)) ;
  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_receiverType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 215)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 215)) COMMA_SOURCE_FILE ("instruction-with.galgas", 215)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 216)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 216))  COMMA_SOURCE_FILE ("instruction-with.galgas", 216)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 219)) ;
  }
  GALGAS_localConstantList var_localConstantList = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 221)) ;
  cEnumerator_typedPropertyList enumerator_8550 (var_receiverType.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 222)), kEnumeration_up) ;
  while (enumerator_8550.hasCurrentObject ()) {
    var_localConstantList.addAssign_operation (enumerator_8550.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_8550.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 225)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 225)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)).add_operation (enumerator_8550.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227))  COMMA_SOURCE_FILE ("instruction-with.galgas", 223)) ;
    enumerator_8550.gotoNextObject () ;
  }
  var_localConstantList.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 231)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 232)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 232)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 234))  COMMA_SOURCE_FILE ("instruction-with.galgas", 230)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 238)), object->mAttribute_mDoBranchInstructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 235)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 247)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 248)), object->mAttribute_mElseBranchInstructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 245)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverExpression, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("instruction-with.galgas", 256))  COMMA_SOURCE_FILE ("instruction-with.galgas", 256)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_keyExpression ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mKeyExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 274)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 273)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 281)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 281)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 282)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 282)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 282))  COMMA_SOURCE_FILE ("instruction-with.galgas", 282)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_keyExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 284)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 284)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 285)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 285))  COMMA_SOURCE_FILE ("instruction-with.galgas", 285)) ;
    }
  }
  GALGAS_string var_objectArrayCppName = GALGAS_string ("objectArray_").add_operation (object->mAttribute_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 288)).getter_string (SOURCE_FILE ("instruction-with.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 288)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType ;
  GALGAS_string var_receiverVariableCppName ;
  {
  GALGAS_string joker_11413 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mReceiverName, var_targetType, var_receiverVariableCppName, joker_11413, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 290)) ;
  }
  cEnumerator_lstringlist enumerator_11441 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_11441.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap = var_targetType.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 297)) ;
    var_attributeMap.method_searchKey (enumerator_11441.current_mValue (HERE), var_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 298)) ;
    enumerator_11441.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_targetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 308)).operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) COMMA_SOURCE_FILE ("instruction-with.galgas", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 309)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 309))  COMMA_SOURCE_FILE ("instruction-with.galgas", 309)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_bool var_found = GALGAS_bool (false) ;
    cEnumerator_mapSearchMethodListAST enumerator_12147 (var_targetType.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 314)), kEnumeration_up) ;
    bool bool_5 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 314)).isValidAndTrue () ;
    if (enumerator_12147.hasCurrentObject () && bool_5) {
      while (enumerator_12147.hasCurrentObject () && bool_5) {
        var_found = GALGAS_bool (kIsEqual, enumerator_12147.current_mSearchMethodName (HERE).mAttribute_string.objectCompare (object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string)) ;
        enumerator_12147.gotoNextObject () ;
        if (enumerator_12147.hasCurrentObject ()) {
          bool_5 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 314)).isValidAndTrue () ;
        }
      }
    }
    const enumGalgasBool test_6 = var_found.operator_not (SOURCE_FILE ("instruction-with.galgas", 317)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_location location_7 (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_7, GALGAS_string ("there is no '").add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)).add_operation (var_targetType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318))  COMMA_SOURCE_FILE ("instruction-with.galgas", 318)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 324)) ;
  cEnumerator_typedPropertyList enumerator_12675 (var_targetType.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 325)), kEnumeration_up) ;
  while (enumerator_12675.hasCurrentObject ()) {
    var_localInitializedVariableList.addAssign_operation (enumerator_12675.current_mAttributeTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (enumerator_12675.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 328)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 328)), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329)).add_operation (enumerator_12675.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 329))  COMMA_SOURCE_FILE ("instruction-with.galgas", 326)) ;
    enumerator_12675.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_8 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 335)) ;
  temp_8.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 332)), GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.mAttribute_string.add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 333)), object->mAttribute_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 333)), GALGAS_bool (true), var_objectArrayCppName.add_operation (GALGAS_string ("->mAttribute_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 335))  COMMA_SOURCE_FILE ("instruction-with.galgas", 335)) ;
  GALGAS_localConstantList var_localConstantList = temp_8 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, var_localConstantList, var_localInitializedVariableList, object->mAttribute_m_5F_do_5F_Instructions, object->mAttribute_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 337)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 350)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 351)), object->mAttribute_m_5F_else_5F_Instructions, object->mAttribute_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 348)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mAttribute_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 357)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_receiverVariableCppName, var_targetType, object->mAttribute_mFieldList, var_objectArrayCppName, var_keyExpression, object->mAttribute_mSearchMethodNameForErrorSignaling.mAttribute_string, var_do_5F_instructionList, var_else_5F_instructionList  COMMA_SOURCE_FILE ("instruction-with.galgas", 359))  COMMA_SOURCE_FILE ("instruction-with.galgas", 359)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readOnlyWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readOnlyWithInstructionForGeneration * object = (const cPtr_readOnlyWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readOnlyWithInstructionForGeneration) ;
  GALGAS_string var_receiverVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 410)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 411)) ;
  GALGAS_string var_keyVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (var_receiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 415)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 415)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (var_receiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).add_operation (var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 417)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 415)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 419)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 419)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 422)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 422)).add_operation (var_receiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 423)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 424)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 424)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 421)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 425)) COMMA_SOURCE_FILE ("instruction-with.galgas", 425)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (var_receiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 427)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 429)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 437)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 438)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 439)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 448)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readOnlyWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readOnlyWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_readWriteWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteWithInstructionForGeneration * object = (const cPtr_readWriteWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteWithInstructionForGeneration) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_18474 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_18474.hasCurrentObject ()) {
    var_receiverCppName.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_18474.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 461)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 461)) ;
    enumerator_18474.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 464)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 466)) COMMA_SOURCE_FILE ("instruction-with.galgas", 466)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mReceiverVariableCppName COMMA_SOURCE_FILE ("instruction-with.galgas", 467)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 468)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 468)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 468)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 469)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 470)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 468)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 472)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 474)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 475)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 477)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 478)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 478)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 478)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)).add_operation (object->mAttribute_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 477)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 480)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 488)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 489)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 490)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 499)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readWriteWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("enum.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 75)), object->mAttribute_mEnumTypeName.getter_location (SOURCE_FILE ("enum.galgas", 75))  COMMA_SOURCE_FILE ("enum.galgas", 75)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 76)) ;
  }
  GALGAS_bool var_circularReference = GALGAS_bool (true) ;
  cEnumerator_enumConstantList enumerator_3670 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_3670.hasCurrentObject ()) {
    GALGAS_bool var_namesCurrentType = GALGAS_bool (false) ;
    cEnumerator__32_lstringlist enumerator_3751 (enumerator_3670.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_3751.hasCurrentObject ()) {
      GALGAS_lstring var_propertyKey = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3751.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("enum.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 82)), enumerator_3751.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("enum.galgas", 82))  COMMA_SOURCE_FILE ("enum.galgas", 82)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_propertyKey.mAttribute_string.objectCompare (var_key.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_namesCurrentType = GALGAS_bool (true) ;
      }
      enumerator_3751.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = var_namesCurrentType.operator_not (SOURCE_FILE ("enum.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_circularReference = GALGAS_bool (false) ;
    }
    enumerator_3670.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_4082 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_4082.hasCurrentObject ()) {
    cEnumerator__32_lstringlist enumerator_4130 (enumerator_4082.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_4130.hasCurrentObject ()) {
      GALGAS_lstring var_propertyKey = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4130.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("enum.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 94)), enumerator_4130.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("enum.galgas", 94))  COMMA_SOURCE_FILE ("enum.galgas", 94)) ;
      GALGAS_bool test_3 = GALGAS_bool (kIsNotEqual, var_propertyKey.mAttribute_string.objectCompare (var_key.mAttribute_string)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = var_circularReference ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, var_propertyKey COMMA_SOURCE_FILE ("enum.galgas", 96)) ;
        }
      }
      enumerator_4130.gotoNextObject () ;
    }
    enumerator_4082.gotoNextObject () ;
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
                                                                       const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 112)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 113)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 114)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 115)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, var_enumTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 117)) ;
  }
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 119)) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_5513 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_5513.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 122)) ;
    GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 123)) ;
    cEnumerator__32_lstringlist enumerator_5680 (enumerator_5513.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_5680.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5680.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 125)) ;
      }
      var_argumentTypeList.addAssign_operation (enumerator_5680.current_mValue_31_ (HERE), var_associatedTypeProxy, enumerator_5680.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 126)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 127)) ;
      var_hasAssociatedValues = GALGAS_bool (true) ;
      enumerator_5680.gotoNextObject () ;
    }
    {
    var_constantMap.setter_insertKey (enumerator_5513.current_mConstantName (HERE), var_constantMap.getter_count (SOURCE_FILE ("enum.galgas", 130)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 130)) ;
    }
    {
    var_constructorMap.setter_insertOrReplace (enumerator_5513.current_mConstantName (HERE), var_argumentTypeList, GALGAS_bool (false), var_enumTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 131)) ;
    }
    enumerator_5513.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_6231 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_6231.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_6231.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("enum.galgas", 140)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 141)) ;
      GALGAS_formalParameterSignature var_argumentTypeList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 142)) ;
      cEnumerator__32_lstringlist enumerator_6467 (enumerator_6231.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
      while (enumerator_6467.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_6467.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 144)) ;
        }
        var_argumentTypeList.addAssign_operation (enumerator_6467.current_mValue_31_ (HERE), var_associatedTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("enum.galgas", 145)), enumerator_6467.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 145)) ;
        var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 146)) ;
        var_hasAssociatedValues = GALGAS_bool (true) ;
        enumerator_6467.gotoNextObject () ;
      }
      {
      var_instanceMethodMap.setter_insertKey (enumerator_6231.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("enum.galgas", 151)), var_argumentTypeList, enumerator_6231.current_mConstantName (HERE).mAttribute_location, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("enum.galgas", 155)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 149)) ;
      }
    }
    enumerator_6231.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 161)) ;
  }
  cEnumerator_enumConstantList enumerator_7128 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_7128.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("is").add_operation (enumerator_7128.current_mConstantName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("enum.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 166)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 163)) ;
    }
    enumerator_7128.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mEnumTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 172)) ;
  }
  {
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = var_hasAssociatedValues.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("enum.galgas", 210)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("enum.galgas", 210)) ;
  }
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mEnumTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enum.galgas", 187)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("enum.galgas", 188)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 190)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 191)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 192)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 197)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 198)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 199)), function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 200)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 200)) COMMA_SOURCE_FILE ("enum.galgas", 200)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 201)), var_constantMap, object->mAttribute_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("enum.galgas", 204)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("enum.galgas", 205)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enum.galgas", 207)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("enum.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 209)), temp_1, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 183)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_stringlist var_constantList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 224)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("enum.galgas", 225)) ;
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 226)) ;
  cEnumerator_enumConstantList enumerator_9563 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_9563.hasCurrentObject ()) {
    var_constantList.addAssign_operation (enumerator_9563.current_mConstantName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 228)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 229)) ;
    GALGAS_stringset var_associatedValueNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("enum.galgas", 230)) ;
    cEnumerator__32_lstringlist enumerator_9749 (enumerator_9563.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_9749.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9749.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 232)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 233)) ;
      const enumGalgasBool test_0 = var_associatedValueNameSet.getter_hasKey (enumerator_9749.current_mValue_31_ (HERE).mAttribute_string COMMA_SOURCE_FILE ("enum.galgas", 234)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_9749.current_mValue_31_ (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("duplicated name")  COMMA_SOURCE_FILE ("enum.galgas", 235)) ;
      }
      var_associatedValueNameSet.addAssign_operation (enumerator_9749.current_mValue_31_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 237)) ;
      enumerator_9749.gotoNextObject () ;
    }
    {
    var_constantMap.setter_insertKey (enumerator_9563.current_mConstantName (HERE), var_constantMap.getter_count (SOURCE_FILE ("enum.galgas", 239)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 239)) ;
    }
    var_enumConstantListForGeneration.addAssign_operation (enumerator_9563.current_mConstantName (HERE).mAttribute_string, var_associatedTypeList  COMMA_SOURCE_FILE ("enum.galgas", 240)) ;
    enumerator_9563.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("enum.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 244)), GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 246)), var_enumConstantListForGeneration  COMMA_SOURCE_FILE ("enum.galgas", 245)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("enum.galgas", 243)) ;
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
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_12303 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 298)).isValidAndTrue () ;
  if (enumerator_12303.hasCurrentObject () && bool_0) {
    while (enumerator_12303.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_12303.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("enum.galgas", 299)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_12303.gotoNextObject () ;
      if (enumerator_12303.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 298)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 302)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 303)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 301))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 308)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 309)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 310)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 311)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 312)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 313)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 314)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 315)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 316)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 317)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 318)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 319)) COMMA_SOURCE_FILE ("enum.galgas", 307))), inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 307)) ;
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
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13434 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 330)).isValidAndTrue () ;
  if (enumerator_13434.hasCurrentObject () && bool_0) {
    while (enumerator_13434.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_13434.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("enum.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13434.gotoNextObject () ;
      if (enumerator_13434.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 330)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_13563 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_13563.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_13605 (enumerator_13563.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
    while (enumerator_13605.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13605.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 335)) ;
      enumerator_13605.gotoNextObject () ;
    }
    enumerator_13563.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 339)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 340)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 338))) ;
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
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_14207 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 353)).isValidAndTrue () ;
  if (enumerator_14207.hasCurrentObject () && bool_0) {
    while (enumerator_14207.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_14207.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("enum.galgas", 354)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14207.gotoNextObject () ;
      if (enumerator_14207.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 353)).isValidAndTrue () ;
      }
    }
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 356)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 358)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 359)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 357))) ;
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
//                   Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                             GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("shared-map.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 289)), object->mAttribute_mMapTypeName.getter_location (SOURCE_FILE ("shared-map.galgas", 289))  COMMA_SOURCE_FILE ("shared-map.galgas", 289)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 290)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_11547 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_11547.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_11547.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 292)), enumerator_11547.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("shared-map.galgas", 292))  COMMA_SOURCE_FILE ("shared-map.galgas", 292)) COMMA_SOURCE_FILE ("shared-map.galgas", 292)) ;
    }
    enumerator_11547.gotoNextObject () ;
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
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("shared-map.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 299)) ;
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
                                                                            const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 313)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 315)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 317)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 319)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("shared-map.galgas", 319)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = temp_0 ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 320)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("shared-map.galgas", 321)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("shared-map.galgas", 322)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_13362 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_13362.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13362.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_13362.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 328)) ;
      }
      var_usesSelectorsInInsertAndSearch = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_4 (enumerator_13362.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 332)) ;
    }
    enumerator_13362.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 336)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 337)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 338)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 339)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("shared-map.galgas", 345)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 341)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 349)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 356)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 363)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 372)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 381)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 388)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 395)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 402)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 410)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 411)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList.addAssign_operation (temp_5.getter_nowhere (SOURCE_FILE ("shared-map.galgas", 413)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 415)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 412)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 417)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("shared-map.galgas", 419)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 421)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 418)) ;
  cEnumerator_propertyInCollectionListAST enumerator_16043 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_16043.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_16043.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 425)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_16043.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 428)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_16043.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 429))  COMMA_SOURCE_FILE ("shared-map.galgas", 429)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_16043.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 431)) ;
    }
    var_insertMethodFormalArgumentList.addAssign_operation (temp_9, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 433)), enumerator_16043.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 430)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_16043.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 436)) ;
    }
    var_removeMethodFormalArgumentList.addAssign_operation (temp_11, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 438)), enumerator_16043.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 435)) ;
    enumerator_16043.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_16884 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16884.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_modifierMap.getter_hasKey (enumerator_16884.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 443)) COMMA_SOURCE_FILE ("shared-map.galgas", 443)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location location_14 (enumerator_16884.current_mInsertMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_16884.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 444)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 444))  COMMA_SOURCE_FILE ("shared-map.galgas", 444)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_modifierMap.setter_insertOrReplace (enumerator_16884.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 448)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 451)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 446)) ;
      }
    }
    enumerator_16884.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 457)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 458)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 458)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("shared-map.galgas", 458)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 459)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 459)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("shared-map.galgas", 459)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("shared-map.galgas", 461)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 462)), var_enterEdgeFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 465)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 460)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 469)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 470)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 470)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 470)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 471)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 471)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 471)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("shared-map.galgas", 473)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 474)), var_topologicalSortFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 476)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 478)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 472)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("shared-map.galgas", 482)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18536 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18536.hasCurrentObject ()) {
      {
      var_instanceMethodMap.setter_insertKey (enumerator_18536.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 486)), var_removeMethodFormalArgumentList, enumerator_18536.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("shared-map.galgas", 488)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 490)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 484)) ;
      }
      enumerator_18536.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18852 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18852.hasCurrentObject ()) {
      {
      var_modifierMap.setter_insertKey (enumerator_18852.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 498)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 501)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 496)) ;
      }
      enumerator_18852.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("shared-map.galgas", 507)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 509)) ;
    }
    {
    var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 511))  COMMA_SOURCE_FILE ("shared-map.galgas", 511)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 512)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 513)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 515)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 510)) ;
    }
    {
    var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 519))  COMMA_SOURCE_FILE ("shared-map.galgas", 519)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 520)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 521)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 521)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 521)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 523)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 518)) ;
    }
    {
    var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 527))  COMMA_SOURCE_FILE ("shared-map.galgas", 527)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 528)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 529)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 529)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 529)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 531)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 526)) ;
    }
    {
    var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 535))  COMMA_SOURCE_FILE ("shared-map.galgas", 535)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 536)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 537)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 537)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 537)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 538)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 540)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 534)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_20619 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_20619.hasCurrentObject ()) {
      {
      var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_20619.current_mOverrideBlockName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 545)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 545))  COMMA_SOURCE_FILE ("shared-map.galgas", 545)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 546)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 547)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 549)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 544)) ;
      }
      enumerator_20619.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_21017 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21017.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_21017.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 556)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 556)), enumerator_21017.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("shared-map.galgas", 556))  COMMA_SOURCE_FILE ("shared-map.galgas", 556)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_21017.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 558)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 562)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 562)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 562)) ;
    var_getterMap.setter_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 561)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 563)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 566)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 559)) ;
    }
    enumerator_21017.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_21671 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_21671.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_21671.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 572)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 572)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 572)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 572)), enumerator_21671.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("shared-map.galgas", 572))  COMMA_SOURCE_FILE ("shared-map.galgas", 572)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_21671.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 573)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 574)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 575)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 575)), enumerator_21671.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 575)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("shared-map.galgas", 576)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 576)), enumerator_21671.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 576)) ;
    {
    var_modifierMap.setter_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 579)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 582)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 577)) ;
    }
    enumerator_21671.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 587)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 602)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("shared-map.galgas", 603)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 605)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 606)), var_typedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 612)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 615)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 615)) COMMA_SOURCE_FILE ("shared-map.galgas", 615)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 616)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 617)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 618)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 620)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 622)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("shared-map.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 624)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("shared-map.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 598)) ;
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
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 705)) ;
  GALGAS_string var_shadowMessage = GALGAS_string::makeEmptyString () ;
  cEnumerator_sharedMapAttributeListAST enumerator_26563 (object->mAttribute_mSharedMapAttributeListAST, kEnumeration_up) ;
  while (enumerator_26563.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_26563.current_mAttributeName (HERE).mAttribute_string.objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_26563.current_mAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("only %shadow attribute is allowed here")  COMMA_SOURCE_FILE ("shared-map.galgas", 709)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 710)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_26563.current_mAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 711)) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_mapAutomatonMessageKind temp_4 ;
        const enumGalgasBool test_5 = enumerator_26563.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("shared-map.galgas", 713)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("shared-map.galgas", 713)) ;
        }
        var_shadowBehaviour = temp_4 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26563.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 714)) ;
        }
        var_shadowMessage = enumerator_26563.current_mMessage (HERE).mAttribute_string ;
      }
    }
    enumerator_26563.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 719)) ;
  cEnumerator_insertMethodListAST enumerator_27074 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_27074.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("shared-map.galgas", 721)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_27074.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 722)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (enumerator_27074.current_mInsertMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (enumerator_27074.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 723)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 723))  COMMA_SOURCE_FILE ("shared-map.galgas", 723)) ;
      }else if (kBoolFalse == test_7) {
        var_initialStateSet.addAssign_operation (enumerator_27074.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 725))  COMMA_SOURCE_FILE ("shared-map.galgas", 725)) ;
      }
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_27074.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 727)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_27074.current_mInsertMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (enumerator_27074.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 728)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 728))  COMMA_SOURCE_FILE ("shared-map.galgas", 728)) ;
      }
    }
    enumerator_27074.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 732)) ;
  cEnumerator_mapSearchMethodListAST enumerator_27645 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_27645.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("shared-map.galgas", 734)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_27645.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 735)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        GALGAS_location location_13 (enumerator_27645.current_mSearchMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_13, GALGAS_string ("the '").add_operation (enumerator_27645.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 736)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 736)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 736))  COMMA_SOURCE_FILE ("shared-map.galgas", 736)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_mapAutomatonActionMap.getter_hasKey (enumerator_27645.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 737)) COMMA_SOURCE_FILE ("shared-map.galgas", 737)).operator_not (SOURCE_FILE ("shared-map.galgas", 737)).boolEnum () ;
        if (kBoolTrue == test_14) {
          {
          var_mapAutomatonActionMap.setter_insertKey (enumerator_27645.current_mActionName (HERE), var_mapAutomatonActionMap.getter_count (SOURCE_FILE ("shared-map.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 738)) ;
          }
        }
      }
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_27645.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 740)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_location location_16 (enumerator_27645.current_mSearchMethodName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_16, GALGAS_string ("the '").add_operation (enumerator_27645.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 741)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 741))  COMMA_SOURCE_FILE ("shared-map.galgas", 741)) ;
      }
    }
    enumerator_27645.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 745)) ;
  cEnumerator_mapStateList enumerator_28287 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28287.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap.setter_insertKey (enumerator_28287.current_mStateName (HERE), var_mapAutomatonStateMap.getter_count (SOURCE_FILE ("shared-map.galgas", 747)), enumerator_28287.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 747)) ;
    }
    enumerator_28287.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_28422 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28422.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_28455 (enumerator_28422.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_28455.hasCurrentObject ()) {
      GALGAS_uint joker_28516_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_28516_1 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_28455.current_mTargetStateName (HERE), joker_28516_2, joker_28516_1, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 751)) ;
      enumerator_28455.gotoNextObject () ;
    }
    enumerator_28422.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions = var_mapAutomatonActionMap.getter_keySet (SOURCE_FILE ("shared-map.galgas", 755)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 756)) ;
  cEnumerator_mapStateList enumerator_28711 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_28711.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 758)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 759)) ;
    cEnumerator_mapStateTransitionList enumerator_28855 (enumerator_28711.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_28855.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex ;
      var_mapAutomatonActionMap.method_searchKey (enumerator_28855.current_mActionName (HERE), var_actionIndex, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 761)) ;
      const enumGalgasBool test_17 = var_actionsForCurrentState.getter_hasKey (enumerator_28855.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 762)) COMMA_SOURCE_FILE ("shared-map.galgas", 762)).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_location location_18 (enumerator_28855.current_mActionName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_18, GALGAS_string ("the '").add_operation (enumerator_28855.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 763)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 763))  COMMA_SOURCE_FILE ("shared-map.galgas", 763)) ;
      }
      var_actionsForCurrentState.addAssign_operation (enumerator_28855.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 765))  COMMA_SOURCE_FILE ("shared-map.galgas", 765)) ;
      GALGAS_uint var_targetStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_29246 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_28855.current_mTargetStateName (HERE), var_targetStateIndex, joker_29246, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 766)) ;
      var_mapStateTransitionSortedList.addAssign_operation (var_actionIndex, enumerator_28855.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 769)), var_targetStateIndex, enumerator_28855.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 771)), enumerator_28855.current_mTransitionMessageKind (HERE), enumerator_28855.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 773))  COMMA_SOURCE_FILE ("shared-map.galgas", 767)) ;
      enumerator_28855.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex ;
    GALGAS_mapAutomatonMessageKind joker_29547 ; // Joker input parameter
    var_mapAutomatonStateMap.method_searchKey (enumerator_28711.current_mStateName (HERE), var_stateIndex, joker_29547, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 775)) ;
    var_mapStateSortedList.addAssign_operation (var_stateIndex, enumerator_28711.current_mStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 778)), enumerator_28711.current_mStateMessageKind (HERE), enumerator_28711.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 780)), var_mapStateTransitionSortedList  COMMA_SOURCE_FILE ("shared-map.galgas", 776)) ;
    GALGAS_stringset var_missingActions = var_allActions.substract_operation (var_actionsForCurrentState, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 782)) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_missingActions.getter_count (SOURCE_FILE ("shared-map.galgas", 783)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_29874 (var_missingActions, kEnumeration_up) ;
      while (enumerator_29874.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_29874.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 786)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 786)) ;
        if (enumerator_29874.hasNextObject ()) {
          var_s.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 787)) ;
        }
        enumerator_29874.gotoNextObject () ;
      }
      GALGAS_location location_20 (enumerator_28711.current_mStateName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_20, GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 789))  COMMA_SOURCE_FILE ("shared-map.galgas", 789)) ;
    }
    enumerator_28711.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates = var_initialStateSet ;
  GALGAS_bool var_progress = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("shared-map.galgas", 795)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 795)).isValid ()) {
    uint32_t variant_30168 = object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("shared-map.galgas", 795)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 795)).uintValue () ;
    bool loop_30168 = true ;
    while (loop_30168) {
      loop_30168 = var_progress.isValid () ;
      if (loop_30168) {
        loop_30168 = var_progress.boolValue () ;
      }
      if (loop_30168 && (0 == variant_30168)) {
        loop_30168 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 795)) ;
      }
      if (loop_30168) {
        variant_30168 -- ;
        var_progress = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_30264 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_30264.hasCurrentObject ()) {
          const enumGalgasBool test_21 = var_accessibleStates.getter_hasKey (enumerator_30264.current_mStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 798)) COMMA_SOURCE_FILE ("shared-map.galgas", 798)).boolEnum () ;
          if (kBoolTrue == test_21) {
            cEnumerator_mapStateTransitionList enumerator_30362 (enumerator_30264.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_30362.hasCurrentObject ()) {
              const enumGalgasBool test_22 = var_accessibleStates.getter_hasKey (enumerator_30362.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 800)) COMMA_SOURCE_FILE ("shared-map.galgas", 800)).operator_not (SOURCE_FILE ("shared-map.galgas", 800)).boolEnum () ;
              if (kBoolTrue == test_22) {
                var_accessibleStates.addAssign_operation (enumerator_30362.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 801))  COMMA_SOURCE_FILE ("shared-map.galgas", 801)) ;
                var_progress = GALGAS_bool (true) ;
              }
              enumerator_30362.gotoNextObject () ;
            }
          }
          enumerator_30264.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates = var_mapAutomatonStateMap.getter_keySet (SOURCE_FILE ("shared-map.galgas", 808)).substract_operation (var_accessibleStates, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 808)) ;
  const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, var_uselessStates.getter_count (SOURCE_FILE ("shared-map.galgas", 809)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_30738 (var_uselessStates, kEnumeration_up) ;
    while (enumerator_30738.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_30738.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 812)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 812)) ;
      if (enumerator_30738.hasNextObject ()) {
        var_s.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 813)) ;
      }
      enumerator_30738.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 815)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 815))  COMMA_SOURCE_FILE ("shared-map.galgas", 815)) ;
  }
  GALGAS_stringset var_neededAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 819)) ;
  GALGAS_stringset var_accessibilityGraph = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 820)) ;
  cEnumerator_mapAutomatonStateMap enumerator_31083 (var_mapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_31083.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 822)) ;
    var_reachableStates.addAssign_operation (enumerator_31083.current_lkey (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 823))  COMMA_SOURCE_FILE ("shared-map.galgas", 823)) ;
    GALGAS_bool var_progress = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap.getter_count (SOURCE_FILE ("shared-map.galgas", 825)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 825)).isValid ()) {
      uint32_t variant_31195 = var_mapAutomatonStateMap.getter_count (SOURCE_FILE ("shared-map.galgas", 825)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 825)).uintValue () ;
      bool loop_31195 = true ;
      while (loop_31195) {
        loop_31195 = var_progress.isValid () ;
        if (loop_31195) {
          loop_31195 = var_progress.boolValue () ;
        }
        if (loop_31195 && (0 == variant_31195)) {
          loop_31195 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 825)) ;
        }
        if (loop_31195) {
          variant_31195 -- ;
          var_progress = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_31301 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_31301.hasCurrentObject ()) {
            const enumGalgasBool test_24 = var_reachableStates.getter_hasKey (enumerator_31301.current_mStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 828)) COMMA_SOURCE_FILE ("shared-map.galgas", 828)).boolEnum () ;
            if (kBoolTrue == test_24) {
              cEnumerator_mapStateTransitionList enumerator_31402 (enumerator_31301.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_31402.hasCurrentObject ()) {
                const enumGalgasBool test_25 = var_reachableStates.getter_hasKey (enumerator_31402.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 830)) COMMA_SOURCE_FILE ("shared-map.galgas", 830)).operator_not (SOURCE_FILE ("shared-map.galgas", 830)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_reachableStates.addAssign_operation (enumerator_31402.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 831))  COMMA_SOURCE_FILE ("shared-map.galgas", 831)) ;
                  var_accessibilityGraph.addAssign_operation (enumerator_31083.current_lkey (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 832)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 832)).add_operation (enumerator_31402.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 832))  COMMA_SOURCE_FILE ("shared-map.galgas", 832)) ;
                  var_progress = GALGAS_bool (true) ;
                }
                enumerator_31402.gotoNextObject () ;
              }
            }
            enumerator_31301.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_31746 (var_reachableStates, kEnumeration_up) ;
    while (enumerator_31746.hasCurrentObject ()) {
      const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, enumerator_31083.current_lkey (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 840)).objectCompare (enumerator_31746.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_26) {
        var_neededAssociations.addAssign_operation (enumerator_31083.current_lkey (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 841)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 841)).add_operation (enumerator_31746.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 841))  COMMA_SOURCE_FILE ("shared-map.galgas", 841)) ;
      }
      enumerator_31746.gotoNextObject () ;
    }
    enumerator_31083.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 846)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_31947 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_31947.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 848)) ;
    GALGAS_stringset var_neededCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 849)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 850)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_32206 (enumerator_31947.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_32206.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_32286 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_32206.current_mLeftState (HERE), var_startStateNameIndex, joker_32286, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 852)) ;
      GALGAS_uint var_currentStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_32368 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_32206.current_mRightState (HERE), var_currentStateNameIndex, joker_32368, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 853)) ;
      GALGAS_string var_association = enumerator_32206.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 854)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 854)).add_operation (enumerator_32206.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 854)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 854)) ;
      const enumGalgasBool test_27 = var_neededAssociations.getter_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 855)).operator_not (SOURCE_FILE ("shared-map.galgas", 855)).boolEnum () ;
      if (kBoolTrue == test_27) {
        GALGAS_location location_28 (enumerator_32206.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticWarning (location_28, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 856)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 856))  COMMA_SOURCE_FILE ("shared-map.galgas", 856)) ;
      }
      const enumGalgasBool test_29 = var_handledAssociations.getter_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 858)).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_32206.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 860)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 860))  COMMA_SOURCE_FILE ("shared-map.galgas", 859)) ;
      }
      var_handledAssociations.addAssign_operation (var_association  COMMA_SOURCE_FILE ("shared-map.galgas", 862)) ;
      GALGAS_uint var_finalStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_32884 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_32206.current_mResultingState (HERE), var_finalStateNameIndex, joker_32884, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 863)) ;
      const enumGalgasBool test_31 = GALGAS_bool (kIsNotEqual, enumerator_32206.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 864)).objectCompare (enumerator_32206.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 864)))).boolEnum () ;
      if (kBoolTrue == test_31) {
        var_neededCombinaisons.addAssign_operation (enumerator_32206.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 865)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (enumerator_32206.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865))  COMMA_SOURCE_FILE ("shared-map.galgas", 865)) ;
        var_neededCombinaisons.addAssign_operation (enumerator_32206.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 866)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 866)).add_operation (enumerator_32206.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 866)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 866))  COMMA_SOURCE_FILE ("shared-map.galgas", 866)) ;
        const enumGalgasBool test_32 = var_accessibilityGraph.getter_hasKey (enumerator_32206.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 867)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 867)).add_operation (enumerator_32206.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 867)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 867)) COMMA_SOURCE_FILE ("shared-map.galgas", 867)).operator_not (SOURCE_FILE ("shared-map.galgas", 867)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GALGAS_location location_33 (enumerator_32206.current_mResultingState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_33, GALGAS_string ("the '").add_operation (enumerator_32206.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 869)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 869)).add_operation (enumerator_32206.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 869)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 869))  COMMA_SOURCE_FILE ("shared-map.galgas", 868)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_32206.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 872)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31_.addAssign_operation (var_startStateNameIndex, enumerator_32206.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 875)), var_currentStateNameIndex, enumerator_32206.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 877)), var_finalStateNameIndex, enumerator_32206.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 879)), enumerator_32206.current_mMessageKind (HERE), enumerator_32206.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 881))  COMMA_SOURCE_FILE ("shared-map.galgas", 873)) ;
      enumerator_32206.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations = var_neededAssociations.substract_operation (var_handledAssociations, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 883)) ;
    const enumGalgasBool test_34 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations.getter_count (SOURCE_FILE ("shared-map.galgas", 884)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_34) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_33905 (var_forgottenAssociations, kEnumeration_up) ;
      while (enumerator_33905.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_33905.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 887)), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 887)) ;
        enumerator_33905.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 889)), var_forgottenAssociations.getter_count (SOURCE_FILE ("shared-map.galgas", 889)).getter_string (SOURCE_FILE ("shared-map.galgas", 889)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 889)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 889))  COMMA_SOURCE_FILE ("shared-map.galgas", 889)) ;
    }
    GALGAS_stringset var_definedCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 891)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 892)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_34268 (enumerator_31947.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_34268.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_34343 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_34268.current_mLeftState (HERE), var_leftStateIndex, joker_34343, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 894)) ;
      GALGAS_uint var_rightStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_34419 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_34268.current_mRightState (HERE), var_rightStateIndex, joker_34419, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 895)) ;
      GALGAS_string var_combinaison = enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 896)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 896)).add_operation (enumerator_34268.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 896)) ;
      const enumGalgasBool test_35 = var_neededCombinaisons.getter_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 897)).operator_not (SOURCE_FILE ("shared-map.galgas", 897)).boolEnum () ;
      if (kBoolTrue == test_35) {
        GALGAS_location location_36 (enumerator_34268.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_36, GALGAS_string ("the '").add_operation (enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 899)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 899)).add_operation (enumerator_34268.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 899)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 899))  COMMA_SOURCE_FILE ("shared-map.galgas", 898)) ;
      }
      const enumGalgasBool test_37 = var_definedCombinaisons.getter_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 901)).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_location location_38 (enumerator_34268.current_mRightState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_38, GALGAS_string ("the '").add_operation (enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 903)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 903)).add_operation (enumerator_34268.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 903)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 903))  COMMA_SOURCE_FILE ("shared-map.galgas", 902)) ;
      }
      var_definedCombinaisons.addAssign_operation (var_combinaison  COMMA_SOURCE_FILE ("shared-map.galgas", 905)) ;
      GALGAS_uint var_resultingStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_34983 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_34268.current_mResultingState (HERE), var_resultingStateNameIndex, joker_34983, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 906)) ;
      const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 907)).objectCompare (enumerator_34268.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 907)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_34268.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 908)).objectCompare (enumerator_34268.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 908)))) COMMA_SOURCE_FILE ("shared-map.galgas", 907)).operator_and (var_accessibilityGraph.getter_hasKey (enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 909)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 909)).add_operation (enumerator_34268.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 909)) COMMA_SOURCE_FILE ("shared-map.galgas", 909)).operator_not (SOURCE_FILE ("shared-map.galgas", 909)) COMMA_SOURCE_FILE ("shared-map.galgas", 908)).boolEnum () ;
      if (kBoolTrue == test_39) {
        GALGAS_location location_40 (enumerator_34268.current_mResultingState (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_40, GALGAS_string ("the '").add_operation (enumerator_34268.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 911)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 911)).add_operation (enumerator_34268.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 911)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 911)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 911))  COMMA_SOURCE_FILE ("shared-map.galgas", 910)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_34268.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 913)) ;
      }
      const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_34268.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 914)))).boolEnum () ;
      if (kBoolTrue == test_41) {
        var_definedCombinaisons.addAssign_operation (enumerator_34268.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 915)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 915)).add_operation (enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 915))  COMMA_SOURCE_FILE ("shared-map.galgas", 915)) ;
        var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_rightStateIndex, enumerator_34268.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 918)), var_leftStateIndex, enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 920)), var_resultingStateNameIndex, enumerator_34268.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 922)), enumerator_34268.current_mMessageKind (HERE), enumerator_34268.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 924))  COMMA_SOURCE_FILE ("shared-map.galgas", 916)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_leftStateIndex, enumerator_34268.current_mLeftState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 928)), var_rightStateIndex, enumerator_34268.current_mRightState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 930)), var_resultingStateNameIndex, enumerator_34268.current_mResultingState (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 932)), enumerator_34268.current_mMessageKind (HERE), enumerator_34268.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 934))  COMMA_SOURCE_FILE ("shared-map.galgas", 926)) ;
      enumerator_34268.gotoNextObject () ;
    }
    const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, var_forgottenAssociations.getter_count (SOURCE_FILE ("shared-map.galgas", 936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_42) {
      GALGAS_stringset var_forgottenCombinaisons = var_neededCombinaisons.substract_operation (var_definedCombinaisons, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 937)) ;
      const enumGalgasBool test_43 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons.getter_count (SOURCE_FILE ("shared-map.galgas", 938)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_43) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_36440 (var_forgottenCombinaisons, kEnumeration_up) ;
        while (enumerator_36440.hasCurrentObject ()) {
          var_s.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_36440.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 941)), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 941)) ;
          enumerator_36440.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 943)), var_forgottenCombinaisons.getter_count (SOURCE_FILE ("shared-map.galgas", 943)).getter_string (SOURCE_FILE ("shared-map.galgas", 943)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 943)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 943))  COMMA_SOURCE_FILE ("shared-map.galgas", 943)) ;
      }
    }
    var_mapOverrideList.addAssign_operation (enumerator_31947.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 947)), var_branchBehaviourSortedListForMapOverride_31_, var_branchBehaviourSortedListForMapOverride_32_  COMMA_SOURCE_FILE ("shared-map.galgas", 946)) ;
    enumerator_31947.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 952)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 953)) ;
  cEnumerator_propertyInCollectionListAST enumerator_36904 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_36904.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_36904.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 955)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_36904.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 958)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_36904.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 963)) ;
    }
    enumerator_36904.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 966)) ;
  cEnumerator_insertMethodListAST enumerator_37293 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_37293.hasCurrentObject ()) {
    {
    var_insertMethodMap.setter_insertKey (enumerator_37293.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 968)) ;
    }
    cEnumerator_stringlist enumerator_37486 (enumerator_37293.current_mErrorMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 970)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 970)), kEnumeration_up) ;
    while (enumerator_37486.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_37486.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 971)) ;
      {
      GALGAS_string joker_37599 ; // Joker input parameter
      var_explodedArray.setter_popFirst (joker_37599, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 972)) ;
      }
      cEnumerator_stringlist enumerator_37631 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_37631.hasCurrentObject ()) {
        const enumGalgasBool test_44 = GALGAS_bool (kIsStrictSup, enumerator_37631.current_mValue (HERE).getter_length (SOURCE_FILE ("shared-map.galgas", 974)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_44) {
          GALGAS_char var_c = enumerator_37631.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 975)) ;
          const enumGalgasBool test_45 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 976)).boolEnum () ;
          if (kBoolTrue == test_45) {
            GALGAS_location location_46 (enumerator_37293.current_mErrorMessage (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_46, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 977)) ;
          }
        }
        enumerator_37631.gotoNextObject () ;
      }
      enumerator_37486.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_38075 (enumerator_37293.current_mShadowErrorMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 983)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 983)), kEnumeration_up) ;
    while (enumerator_38075.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_38075.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 984)) ;
      {
      GALGAS_string joker_38188 ; // Joker input parameter
      var_explodedArray.setter_popFirst (joker_38188, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 985)) ;
      }
      cEnumerator_stringlist enumerator_38220 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_38220.hasCurrentObject ()) {
        const enumGalgasBool test_47 = GALGAS_bool (kIsStrictSup, enumerator_38220.current_mValue (HERE).getter_length (SOURCE_FILE ("shared-map.galgas", 987)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_47) {
          GALGAS_char var_c = enumerator_38220.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 988)) ;
          const enumGalgasBool test_48 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 989)).boolEnum () ;
          if (kBoolTrue == test_48) {
            GALGAS_location location_49 (enumerator_37293.current_mErrorMessage (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_49, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 990)) ;
          }
        }
        enumerator_38220.gotoNextObject () ;
      }
      enumerator_38075.gotoNextObject () ;
    }
    enumerator_37293.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 997)) ;
  cEnumerator_mapSearchMethodListAST enumerator_38615 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_38615.hasCurrentObject ()) {
    const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.getter_length (SOURCE_FILE ("shared-map.galgas", 999)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_50) {
      {
      var_searchMethodMap.setter_insertKey (enumerator_38615.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)) ;
      }
    }else if (kBoolFalse == test_50) {
      {
      var_searchMethodMap.setter_insertKey (enumerator_38615.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1002)) ;
      }
    }
    cEnumerator_stringlist enumerator_38922 (enumerator_38615.current_mErrorMessage (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 1005)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 1005)), kEnumeration_up) ;
    while (enumerator_38922.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_38922.current_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 1006)) ;
      {
      GALGAS_string joker_39035 ; // Joker input parameter
      var_explodedArray.setter_popFirst (joker_39035, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1007)) ;
      }
      cEnumerator_stringlist enumerator_39067 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_39067.hasCurrentObject ()) {
        const enumGalgasBool test_51 = GALGAS_bool (kIsStrictSup, enumerator_39067.current_mValue (HERE).getter_length (SOURCE_FILE ("shared-map.galgas", 1009)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_51) {
          GALGAS_char var_c = enumerator_39067.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1010)) ;
          const enumGalgasBool test_52 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_52) {
            GALGAS_location location_53 (enumerator_38615.current_mErrorMessage (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_53, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 1012)) ;
          }
        }
        enumerator_39067.gotoNextObject () ;
      }
      enumerator_38922.gotoNextObject () ;
    }
    enumerator_38615.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("shared-map.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1020)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1022)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap, var_mapAutomatonActionMap, var_mapStateSortedList, var_mapOverrideList, var_shadowBehaviour, var_shadowMessage  COMMA_SOURCE_FILE ("shared-map.galgas", 1021)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("shared-map.galgas", 1019)) ;
  GALGAS_string var_graphFile = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1036)).add_operation (object->mAttribute_mMapTypeName.getter_string (SOURCE_FILE ("shared-map.galgas", 1036)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1036)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1036)) ;
  const enumGalgasBool test_54 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_54) {
    GALGAS_string var_theGraph = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_40101 (var_mapAutomatonStateMap, kEnumeration_up) ;
    while (enumerator_40101.hasCurrentObject ()) {
      var_theGraph.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_40101.current_lkey (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1040)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1040)).add_operation (enumerator_40101.current_lkey (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1040)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1040)), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1040)) ;
      const enumGalgasBool test_55 = var_initialStateSet.getter_hasKey (enumerator_40101.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("shared-map.galgas", 1041)).boolEnum () ;
      if (kBoolTrue == test_55) {
        var_theGraph.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1042)) ;
      }else if (kBoolFalse == test_55) {
        var_theGraph.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1044)) ;
      }
      switch (enumerator_40101.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1049)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1051)) ;
        }
        break ;
      }
      var_theGraph.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1053)) ;
      enumerator_40101.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_40579 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_40579.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_40614 (enumerator_40579.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_40614.hasCurrentObject ()) {
        var_theGraph.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_40579.current_mStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1057)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1057)).add_operation (enumerator_40614.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1057)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1057)).add_operation (enumerator_40614.current_mActionName (HERE).getter_string (SOURCE_FILE ("shared-map.galgas", 1057)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1057)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1057)), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1057)) ;
        switch (enumerator_40614.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1061)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1063)) ;
          }
          break ;
        }
        var_theGraph.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1065)) ;
        enumerator_40614.gotoNextObject () ;
      }
      enumerator_40579.gotoNextObject () ;
    }
    var_theGraph.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1068)) ;
    GALGAS_bool joker_41109 ; // Joker input parameter
    var_theGraph.method_writeToFileWhenDifferentContents (var_graphFile, joker_41109, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1069)) ;
  }else if (kBoolFalse == test_54) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1071)) ;
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
  cEnumerator_typedPropertyList enumerator_43471 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_43471.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_43471.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1131)) ;
    enumerator_43471.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1135)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1136)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("shared-map.galgas", 1134))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1141)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1142)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1143)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1144)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1145)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1146)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1147)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1148)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1149)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1150)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1151)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1152)) COMMA_SOURCE_FILE ("shared-map.galgas", 1140))), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 1140)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1164)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1165)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("shared-map.galgas", 1163))) ;
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
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1176)) ;
  GALGAS_keySortedList var_keySortedList = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 1177)) ;
  cEnumerator_mapAutomatonStateMap enumerator_45125 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_45125.hasCurrentObject ()) {
    var_keySortedList.addAssign_operation (enumerator_45125.current_lkey (HERE).mAttribute_string, enumerator_45125.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("shared-map.galgas", 1179)) ;
    enumerator_45125.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1182)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList, object->mAttribute_mShadowBehaviour, object->mAttribute_mShadowMessage COMMA_SOURCE_FILE ("shared-map.galgas", 1181))) ;
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
//                    Overriding extension method '@mapProxyDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                            GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                            GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 20)), object->mAttribute_mMapProxyTypeName.getter_location (SOURCE_FILE ("map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 22)), object->mAttribute_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) ;
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
                                                                           const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedPropertyList var_mapTypedAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_2430_3 ; // Joker input parameter
  GALGAS_bool joker_2430_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2430_1 ; // Joker input parameter
  GALGAS_bool joker_2474_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2474_2 ; // Joker input parameter
  GALGAS_attributeMap joker_2474_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2532_11 ; // Joker input parameter
  GALGAS_getterMap joker_2532_10 ; // Joker input parameter
  GALGAS_setterMap joker_2532_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2532_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2532_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2532_6 ; // Joker input parameter
  GALGAS_stringlist joker_2532_5 ; // Joker input parameter
  GALGAS_uint joker_2532_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2532_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2532_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2532_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2591_6 ; // Joker input parameter
  GALGAS_bool joker_2591_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2591_4 ; // Joker input parameter
  GALGAS_string joker_2591_3 ; // Joker input parameter
  GALGAS_string joker_2591_2 ; // Joker input parameter
  GALGAS_headerKind joker_2591_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_2430_3, joker_2430_2, joker_2430_1, var_typeKindEnum, joker_2474_3, joker_2474_2, joker_2474_1, var_mapTypedAttributeList, joker_2532_11, joker_2532_10, joker_2532_9, joker_2532_8, joker_2532_7, joker_2532_6, joker_2532_5, joker_2532_4, joker_2532_3, joker_2532_2, joker_2532_1, var_searchMethodList, joker_2591_6, joker_2591_5, joker_2591_4, joker_2591_3, joker_2591_2, joker_2591_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("map-proxy.galgas", 45)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedMapTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46))  COMMA_SOURCE_FILE ("map-proxy.galgas", 46)) ;
    var_mapTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 47)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 59)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy COMMA_SOURCE_FILE ("map-proxy.galgas", 65)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 67)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 68)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 68)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 68)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 69)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 69)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 69)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 70)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 70)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 70)) ;
  {
  var_classMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 72))  COMMA_SOURCE_FILE ("map-proxy.galgas", 72)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 71)) ;
  }
  var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 77)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 78)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 78)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 78)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 79)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 79)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 79)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 80)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 80)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 80)) ;
  {
  var_classMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 82))  COMMA_SOURCE_FILE ("map-proxy.galgas", 82)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 81)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("map-proxy.galgas", 91)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 87)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 95)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 96)), var_associatedMapTypeIndex, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 96)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("map-proxy.galgas", 97)), var_lstringTypeIndex, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 97)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5321 (var_searchMethodList, kEnumeration_up) ;
  while (enumerator_5321.hasCurrentObject ()) {
    {
    var_constructorMap.setter_insertKey (enumerator_5321.current_mSearchMethodName (HERE), var_constructorAttributeTypeList, GALGAS_bool (true), var_mapProxyTypeProxy, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 99)) ;
    }
    enumerator_5321.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 107)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 114)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 121)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 128)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 142)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap = var_getterMap ;
  cEnumerator_typedPropertyList enumerator_6583 (var_mapTypedAttributeList, kEnumeration_up) ;
  while (enumerator_6583.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedGetterMap.getter_hasKey (enumerator_6583.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("map-proxy.galgas", 152)) COMMA_SOURCE_FILE ("map-proxy.galgas", 152)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6716 (var_inheritedGetterMap.getter_keySet (SOURCE_FILE ("map-proxy.galgas", 154)), kEnumeration_up) ;
      while (enumerator_6716.hasCurrentObject ()) {
        var_s.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6716.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 155)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 155)) ;
        if (enumerator_6716.hasNextObject ()) {
          var_s.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 156)) ;
        }
        enumerator_6716.gotoNextObject () ;
      }
      GALGAS_location location_3 (enumerator_6583.current_mAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the map has a associated map proxy, which has predefined getters: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 158)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 158))  COMMA_SOURCE_FILE ("map-proxy.galgas", 158)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap.setter_insertKey (enumerator_6583.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("map-proxy.galgas", 163)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 164)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 165)), GALGAS_bool (true), enumerator_6583.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("map-proxy.galgas", 168)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 161)) ;
      }
    }
    enumerator_6583.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 174)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 189)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("map-proxy.galgas", 190)), GALGAS_bool (false), var_mapTypedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 193)), var_mapTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 200)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 201)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 202)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 203)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 204)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 205)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 206)), var_searchMethodList, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 209)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("map-proxy.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 211)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("map-proxy.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 185)) ;
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
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typedPropertyList var_listTypeAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_9212_7 ; // Joker input parameter
  GALGAS_bool joker_9212_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9212_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9212_4 ; // Joker input parameter
  GALGAS_bool joker_9212_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9212_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9212_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9270_11 ; // Joker input parameter
  GALGAS_getterMap joker_9270_10 ; // Joker input parameter
  GALGAS_setterMap joker_9270_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9270_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9270_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9270_6 ; // Joker input parameter
  GALGAS_stringlist joker_9270_5 ; // Joker input parameter
  GALGAS_uint joker_9270_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9270_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9270_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9270_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9329_6 ; // Joker input parameter
  GALGAS_bool joker_9329_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9329_4 ; // Joker input parameter
  GALGAS_string joker_9329_3 ; // Joker input parameter
  GALGAS_string joker_9329_2 ; // Joker input parameter
  GALGAS_headerKind joker_9329_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9212_7, joker_9212_6, joker_9212_5, joker_9212_4, joker_9212_3, joker_9212_2, joker_9212_1, var_listTypeAttributeList, joker_9270_11, joker_9270_10, joker_9270_9, joker_9270_8, joker_9270_7, joker_9270_6, joker_9270_5, joker_9270_4, joker_9270_3, joker_9270_2, joker_9270_1, var_searchMethodList, joker_9329_6, joker_9329_5, joker_9329_4, joker_9329_3, joker_9329_2, joker_9329_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 226)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.getter_string (SOURCE_FILE ("map-proxy.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 236)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 238)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 239)), var_listTypeAttributeList, var_searchMethodList  COMMA_SOURCE_FILE ("map-proxy.galgas", 237)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("map-proxy.galgas", 235)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 280)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 281)) COMMA_SOURCE_FILE ("map-proxy.galgas", 279))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 284)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 285)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 286)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 287)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 288)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 289)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 290)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 291)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 292)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 293)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 294)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 295)) COMMA_SOURCE_FILE ("map-proxy.galgas", 283))), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 283)) ;
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
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 305)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 306)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 308)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 309)), object->mAttribute_mAssociatedMapTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 310)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("map-proxy.galgas", 307))) ;
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
//                      Overriding extension method '@listDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("list.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 48)), object->mAttribute_mListTypeName.getter_location (SOURCE_FILE ("list.galgas", 48))  COMMA_SOURCE_FILE ("list.galgas", 48)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("list.galgas", 49)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2412 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2412.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2412.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("list.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 51)), enumerator_2412.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("list.galgas", 51))  COMMA_SOURCE_FILE ("list.galgas", 51)) COMMA_SOURCE_FILE ("list.galgas", 51)) ;
    }
    enumerator_2412.gotoNextObject () ;
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
                                                                       const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 65)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3369 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3369.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3369.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("list.galgas", 67)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3586 (enumerator_3369.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_3586.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3586.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3586.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter = GALGAS_bool (true) ;
        }
      }
      enumerator_3586.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_3369.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("list.galgas", 77)) ;
    enumerator_3369.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("list.galgas", 80)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("list.galgas", 82)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 86)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 86)), var_listElementTypeIndex COMMA_SOURCE_FILE ("list.galgas", 84)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("list.galgas", 90)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 91)) ;
  GALGAS_formalParameterSignature var_modifierOutputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 92)) ;
  GALGAS_formalParameterSignature var_modifierInputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 93)) ;
  cEnumerator_typedPropertyList enumerator_4702 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_4702.hasCurrentObject ()) {
    var_enumerationDescriptor.addAssign_operation (enumerator_4702.current_mAttributeTypeProxy (HERE), enumerator_4702.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("list.galgas", 95))  COMMA_SOURCE_FILE ("list.galgas", 95)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 96)), enumerator_4702.current_mAttributeTypeProxy (HERE), enumerator_4702.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 96)) ;
    var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 97)), enumerator_4702.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("list.galgas", 97)), enumerator_4702.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 97)) ;
    var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 98)), enumerator_4702.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 98)), enumerator_4702.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 98)) ;
    enumerator_4702.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 101)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyList"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("list.galgas", 106)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 102)) ;
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 110))  COMMA_SOURCE_FILE ("list.galgas", 110)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("list.galgas", 109)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 116)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 117)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 124)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("list.galgas", 135)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 131)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("list.galgas", 142)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 138)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("list.galgas", 149)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 145)) ;
  }
  cEnumerator_typedPropertyList enumerator_6579 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_6579.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_6579.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 157)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 157)), var_uintType, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("list.galgas", 157)) ;
      var_getterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6579.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("list.galgas", 155)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("list.galgas", 155)), enumerator_6579.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("list.galgas", 155))  COMMA_SOURCE_FILE ("list.galgas", 155)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 156)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 158)), GALGAS_bool (true), enumerator_6579.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 161)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 154)) ;
      }
    }
    enumerator_6579.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 167)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 169))  COMMA_SOURCE_FILE ("list.galgas", 169)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 170)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 172)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 174)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("list.galgas", 168)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 178))  COMMA_SOURCE_FILE ("list.galgas", 178)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 179)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 181)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 183)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("list.galgas", 177)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 187)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 189))  COMMA_SOURCE_FILE ("list.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 190)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 193)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 188)) ;
  }
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 197))  COMMA_SOURCE_FILE ("list.galgas", 197)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 198)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 201)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 196)) ;
  }
  var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 204)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 204)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("list.galgas", 204)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 206))  COMMA_SOURCE_FILE ("list.galgas", 206)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 207)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 210)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 205)) ;
  }
  cEnumerator_typedPropertyList enumerator_8428 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_8428.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_8428.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("list.galgas", 216)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 217)), enumerator_8428.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 217)), enumerator_8428.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 217)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 218)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 218)), enumerator_8428.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("list.galgas", 218)) ;
      {
      var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_8428.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("list.galgas", 220)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("list.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 220)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("list.galgas", 220)), enumerator_8428.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("list.galgas", 220))  COMMA_SOURCE_FILE ("list.galgas", 220)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 221)), var_setterFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 224)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 219)) ;
      }
    }
    enumerator_8428.gotoNextObject () ;
  }
  var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("list.galgas", 230)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("list.galgas", 230)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("list.galgas", 230)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("list.galgas", 232))  COMMA_SOURCE_FILE ("list.galgas", 232)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("list.galgas", 233)), var_modifierInputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("list.galgas", 236)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("list.galgas", 231)) ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("list.galgas", 241)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("list.galgas", 242)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("list.galgas", 243)) ;
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 245)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("list.galgas", 260)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("list.galgas", 261)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 264)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 265)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 270)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("list.galgas", 273)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("list.galgas", 273)) COMMA_SOURCE_FILE ("list.galgas", 273)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("list.galgas", 273)) COMMA_SOURCE_FILE ("list.galgas", 273)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 275)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("list.galgas", 276)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 277)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 278)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("list.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 282)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("list.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 256)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("list.galgas", 292)) ;
  cEnumerator_propertyInCollectionListAST enumerator_11242 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_11242.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_11242.current_mPropertyTypeName (HERE), enumerator_11242.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("list.galgas", 297))  COMMA_SOURCE_FILE ("list.galgas", 294)) ;
    enumerator_11242.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 301)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 301)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("list.galgas", 299))  COMMA_SOURCE_FILE ("list.galgas", 299)) ;
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
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("list.galgas", 317)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("list.galgas", 318)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12311 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12311.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_12311.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 320)) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12485 (enumerator_12311.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_12485.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_12485.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter.operator_not (SOURCE_FILE ("list.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_12485.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("list.galgas", 326)) ;
        }
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12485.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_location location_5 (enumerator_12485.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("list.galgas", 331)) ;
          }
          var_hasSetter = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_6 (enumerator_12485.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown feature; the features available here are: 'nogetter', 'setter'")  COMMA_SOURCE_FILE ("list.galgas", 335)) ;
        }
      }
      enumerator_12485.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_12311.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("list.galgas", 338)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_12311.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("list.galgas", 343)) ;
    }
    enumerator_12311.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("list.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 347)), GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("list.galgas", 349)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("list.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("list.galgas", 350)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("list.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 350)), var_typedAttributeList  COMMA_SOURCE_FILE ("list.galgas", 348)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("list.galgas", 346)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 387)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 388)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("list.galgas", 386))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 392)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 393)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("list.galgas", 394)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 395)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 396)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 397)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 398)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("list.galgas", 399)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("list.galgas", 400)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("list.galgas", 401)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("list.galgas", 402)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("list.galgas", 403)) COMMA_SOURCE_FILE ("list.galgas", 391))), inCompiler  COMMA_SOURCE_FILE ("list.galgas", 391)) ;
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
  cEnumerator_typedPropertyList enumerator_15693 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_15693.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15693.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 414)) ;
    enumerator_15693.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 416)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("list.galgas", 417)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("list.galgas", 419)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("list.galgas", 420)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("list.galgas", 418))) ;
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
//                     Overriding extension method '@structDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                          GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                          GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("struct.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 49)), object->mAttribute_mStructTypeName.getter_location (SOURCE_FILE ("struct.galgas", 49))  COMMA_SOURCE_FILE ("struct.galgas", 49)) ;
  {
  const GALGAS_structDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2444 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2444.hasCurrentObject ()) {
    GALGAS_lstring var_propertyKey = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2444.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("struct.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 52)), enumerator_2444.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("struct.galgas", 52))  COMMA_SOURCE_FILE ("struct.galgas", 52)) ;
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, var_propertyKey COMMA_SOURCE_FILE ("struct.galgas", 53)) ;
    }
    enumerator_2444.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                                extensionMethod_structDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_structDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@structDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                         const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_structTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, var_structTypeIndex COMMA_SOURCE_FILE ("struct.galgas", 68)) ;
  }
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 70)) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 71)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("struct.galgas", 72)) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 73)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 74)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3855 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3855.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3855.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("struct.galgas", 76)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("struct.galgas", 77)), var_attributeTypeIndex, enumerator_3855.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("struct.galgas", 77)) ;
    var_typesToIncludeInHeaderCompilation.addAssign_operation (var_attributeTypeIndex  COMMA_SOURCE_FILE ("struct.galgas", 78)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_3855.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("struct.galgas", 81)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_3855.current_mPropertyName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 82)) ;
    }
    enumerator_3855.gotoNextObject () ;
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 89))  COMMA_SOURCE_FILE ("struct.galgas", 89)), var_constructorAttributeTypeList, GALGAS_bool (false), var_structTypeIndex, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 88)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 96)) ;
  }
  cEnumerator_typedPropertyList enumerator_4659 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_4659.hasCurrentObject ()) {
    {
    routine_enterBaseFinalGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_4659.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("struct.galgas", 101)), enumerator_4659.current_mAttributeTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 102)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 98)) ;
    }
    enumerator_4659.gotoNextObject () ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 107)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 109)) ;
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mStructTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 111)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_enumeratedType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mEnumeratedElementTypeName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_enumeratedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("struct.galgas", 124)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumeratedElementTypeName, var_enumeratedType COMMA_SOURCE_FILE ("struct.galgas", 126)) ;
    }
  }
  GALGAS_string var_defaultConstructorName = GALGAS_string ("default") ;
  cEnumerator_typedPropertyList enumerator_5711 (var_typedAttributeList, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_5711.hasCurrentObject () && bool_1) {
    while (enumerator_5711.hasCurrentObject () && bool_1) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_5711.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 135)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_5711.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 135)).operator_not (SOURCE_FILE ("struct.galgas", 135)) COMMA_SOURCE_FILE ("struct.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_5711.gotoNextObject () ;
      if (enumerator_5711.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mStructTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("struct.galgas", 144)), GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("struct.galgas", 145)), GALGAS_bool (false), var_typedAttributeList, var_attributeMap, var_typedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 154)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 155)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("struct.galgas", 156)), function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 157)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("struct.galgas", 158)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 159)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 160)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 161)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("struct.galgas", 162)), GALGAS_bool (false), var_enumeratedType, var_defaultConstructorName, GALGAS_string ("struct-").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("struct.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 166)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("struct.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 140)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                               extensionMethod_structDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_enterInSemanticContext (defineExtensionMethod_structDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@structDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                   GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclarationAST * object = (const cPtr_structDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mAttributeList.getter_length (SOURCE_FILE ("struct.galgas", 189)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("a structure cannot be empty: it must have at least one field")  COMMA_SOURCE_FILE ("struct.galgas", 190)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("struct.galgas", 192)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("struct.galgas", 193)) ;
  cEnumerator_propertyInCollectionListAST enumerator_8005 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_8005.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_8005.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 195)) ;
    cEnumerator_lstringlist enumerator_8128 (enumerator_8005.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8128.hasCurrentObject ()) {
      GALGAS_location location_2 (enumerator_8128.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("a struct attribute does not accept any feature")  COMMA_SOURCE_FILE ("struct.galgas", 197)) ;
      enumerator_8128.gotoNextObject () ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (false) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_8005.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("struct.galgas", 201)) ;
    const enumGalgasBool test_3 = function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 206)).getter_hasKey (enumerator_8005.current_mPropertyName (HERE).mAttribute_string COMMA_SOURCE_FILE ("struct.galgas", 206)).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_m = GALGAS_string ("an attribute cannot be named:") ;
      cEnumerator_stringset enumerator_8523 (function_forbiddenKeysForStruct (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 208)), kEnumeration_up) ;
      while (enumerator_8523.hasCurrentObject ()) {
        var_m.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_8523.current (HERE), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 209)) ;
        enumerator_8523.gotoNextObject () ;
      }
      var_m.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 211)) ;
      GALGAS_location location_4 (enumerator_8005.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_4, var_m  COMMA_SOURCE_FILE ("struct.galgas", 212)) ;
    }
    {
    var_attributeMap.setter_insertKey (enumerator_8005.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 214)) ;
    }
    enumerator_8005.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("struct ").add_operation (object->mAttribute_mStructTypeName.getter_string (SOURCE_FILE ("struct.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("struct.galgas", 217)), GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mStructTypeName, inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 219)), var_typedAttributeList  COMMA_SOURCE_FILE ("struct.galgas", 218)), GALGAS_string ("~")  COMMA_SOURCE_FILE ("struct.galgas", 216)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_structDeclarationAST.mSlotID,
                                         extensionMethod_structDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclarationAST_semanticAnalysis (defineExtensionMethod_structDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@structTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_string & outArgument_outHeader,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10263 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10263.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10263.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 258)) ;
    enumerator_10263.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 262)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 263)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 265)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("struct.galgas", 261))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 268)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 269)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 270)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 271)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 272)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 273)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 274)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 275)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 276)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 277)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 278)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 279)) COMMA_SOURCE_FILE ("struct.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("struct.galgas", 267)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                              extensionMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@structTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("struct.galgas", 290)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 292)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 293)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("struct.galgas", 295)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("struct.galgas", 291))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                     extensionMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sortedListDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("sorted-list.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 66)), object->mAttribute_mSortedListTypeName.getter_location (SOURCE_FILE ("sorted-list.galgas", 66))  COMMA_SOURCE_FILE ("sorted-list.galgas", 66)) ;
  {
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 67)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2921 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2921.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2921.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("sorted-list.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 69)), enumerator_2921.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("sorted-list.galgas", 69))  COMMA_SOURCE_FILE ("sorted-list.galgas", 69)) COMMA_SOURCE_FILE ("sorted-list.galgas", 69)) ;
    }
    enumerator_2921.gotoNextObject () ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 79)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3633 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3633.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_3633.current_mPropertyTypeName (HERE), enumerator_3633.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 85))  COMMA_SOURCE_FILE ("sorted-list.galgas", 81)) ;
    enumerator_3633.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 89)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("sorted-list.galgas", 87))  COMMA_SOURCE_FILE ("sorted-list.galgas", 87)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                             extensionMethod_sortedListDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_addAssociatedElement (defineExtensionMethod_sortedListDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sortedListDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 106)), var_listElementTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 104)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 110)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 111)) ;
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 112)) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 113)) ;
  cEnumerator_propertyInCollectionListAST enumerator_5186 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_5186.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5186.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("sorted-list.galgas", 115)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_5186.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("sorted-list.galgas", 118)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_5186.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 119)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("sorted-list.galgas", 120)), var_attributeTypeIndex, enumerator_5186.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 120)) ;
    var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("sorted-list.galgas", 121)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("sorted-list.galgas", 121)), enumerator_5186.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("sorted-list.galgas", 121)) ;
    enumerator_5186.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 124)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptySortedList"), object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("sorted-list.galgas", 129)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 125)) ;
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("sortedListWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 133))  COMMA_SOURCE_FILE ("sorted-list.galgas", 133)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 132)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 140)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 148)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popGreatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 150))  COMMA_SOURCE_FILE ("sorted-list.galgas", 150)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 151)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 154)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("sorted-list.galgas", 149)) ;
  }
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popSmallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 158))  COMMA_SOURCE_FILE ("sorted-list.galgas", 158)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 159)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 162)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("sorted-list.galgas", 157)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 166)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("greatest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 168))  COMMA_SOURCE_FILE ("sorted-list.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 169)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 171)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 167)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("smallest"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 177))  COMMA_SOURCE_FILE ("sorted-list.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("sorted-list.galgas", 178)), var_modifierFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 180)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("sorted-list.galgas", 182)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 176)) ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 186)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("sorted-list.galgas", 187)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("sorted-list.galgas", 188)) ;
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mSortedListTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 190)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mSortedListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("sorted-list.galgas", 205)), GALGAS_typeKindEnum::constructor_sortedListType (SOURCE_FILE ("sorted-list.galgas", 206)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 209)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 210)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 215)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 218)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 218)) COMMA_SOURCE_FILE ("sorted-list.galgas", 218)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 220)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 221)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 222)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 223)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptySortedList"), GALGAS_string ("sortedlist-").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("sorted-list.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 229)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("sorted-list.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 201)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                               extensionMethod_sortedListDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_enterInSemanticContext (defineExtensionMethod_sortedListDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@sortedListDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 244)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("sorted-list.galgas", 245)) ;
  cEnumerator_propertyInCollectionListAST enumerator_9734 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_9734.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9734.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 247)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_9734.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("sorted-list.galgas", 250)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_9734.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 255)) ;
    }
    enumerator_9734.gotoNextObject () ;
  }
  GALGAS_stringset var_attributesUsedForSorting = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("sorted-list.galgas", 258)) ;
  GALGAS_sortDescriptorListForGeneration var_sortDescriptorList = GALGAS_sortDescriptorListForGeneration::constructor_emptyList (SOURCE_FILE ("sorted-list.galgas", 259)) ;
  cEnumerator_sortedListSortDescriptorListAST enumerator_10207 (object->mAttribute_mSortDescriptorList, kEnumeration_up) ;
  while (enumerator_10207.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type ;
    var_attributeMap.method_searchKey (enumerator_10207.current_mSortedAttributeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 261)) ;
    var_sortDescriptorList.addAssign_operation (var_type, enumerator_10207.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("sorted-list.galgas", 262)), enumerator_10207.current_mAscending (HERE)  COMMA_SOURCE_FILE ("sorted-list.galgas", 262)) ;
    const enumGalgasBool test_0 = var_attributesUsedForSorting.getter_hasKey (enumerator_10207.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("sorted-list.galgas", 263)) COMMA_SOURCE_FILE ("sorted-list.galgas", 263)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location location_1 (enumerator_10207.current_mSortedAttributeName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (enumerator_10207.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("sorted-list.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 264)).add_operation (GALGAS_string ("' is already used for sorting"), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 264))  COMMA_SOURCE_FILE ("sorted-list.galgas", 264)) ;
    }
    var_attributesUsedForSorting.addAssign_operation (enumerator_10207.current_mSortedAttributeName (HERE).getter_string (SOURCE_FILE ("sorted-list.galgas", 266))  COMMA_SOURCE_FILE ("sorted-list.galgas", 266)) ;
    enumerator_10207.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("sorted list ").add_operation (object->mAttribute_mSortedListTypeName.getter_string (SOURCE_FILE ("sorted-list.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 270)), GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSortedListTypeName, inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 272)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mSortedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 273)), object->mAttribute_mSortedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("sorted-list.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 273)), var_typedAttributeList, var_sortDescriptorList  COMMA_SOURCE_FILE ("sorted-list.galgas", 271)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("sorted-list.galgas", 269)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                         extensionMethod_sortedListDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListDeclarationAST_semanticAnalysis (defineExtensionMethod_sortedListDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sortedListTypeForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_string & outArgument_outHeader,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 320)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 321)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("sorted-list.galgas", 319))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 325)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 326)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 327)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 328)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 329)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 330)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 331)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 332)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 333)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 334)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 335)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 336)) COMMA_SOURCE_FILE ("sorted-list.galgas", 324))), inCompiler  COMMA_SOURCE_FILE ("sorted-list.galgas", 324)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                              extensionMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@sortedListTypeForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_string & outArgument_outImplementation,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_13736 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_13736.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13736.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 347)) ;
    enumerator_13736.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 349)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 350)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sortedListGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("sorted-list.galgas", 352)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("sorted-list.galgas", 351))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                     extensionMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inPosfix,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 49)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 50))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                              extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                         const GALGAS_string /* constinArgument_inPosfix */,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 64)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 66)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 67))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                              extensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  const GALGAS_string constinArgument_inPosfix,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 77)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4763 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4763.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4763.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)), enumerator_4763.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)) ;
    enumerator_4763.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                              extensionMethod_repeatInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_repeatInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  const GALGAS_string constinArgument_inPosfix,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 100)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_5641 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_5641.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_5641.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 103)), enumerator_5641.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 102)) ;
    enumerator_5641.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                              extensionMethod_selectInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_selectInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@parseRewindInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inPosfix,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_location joker_6420 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList, joker_6420, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                              extensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     const GALGAS_string constinArgument_inPosfix,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                              extensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@parseWhenInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     const GALGAS_string constinArgument_inPosfix,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                              extensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@terminalCheckInstructionForGeneration compareSyntaxInstruction'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_terminalCheckInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                   const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_10092_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("syntaxSignature.galgas", 192)).objectCompare (cast_10092_si.getter_mTerminalName (SOURCE_FILE ("syntaxSignature.galgas", 192)).getter_string (SOURCE_FILE ("syntaxSignature.galgas", 192)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 193)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_10092_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 194)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("syntaxSignature.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_10391_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_10391_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 198)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("syntaxSignature.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 202)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 205)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 206)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_terminalCheckInstructionForGeneration_compareSyntaxInstruction (void) {
  enterExtensionGetter_compareSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                                 extensionGetter_terminalCheckInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_terminalCheckInstructionForGeneration_compareSyntaxInstruction (defineExtensionGetter_terminalCheckInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension getter '@nonterminalInstructionForGeneration compareSyntaxInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_nonterminalInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                 const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_11108_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_11108_si.getter_mNonterminalName (SOURCE_FILE ("syntaxSignature.galgas", 218)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_11108_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 220)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_11406_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_11406_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 224)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 228)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 231)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 232)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_nonterminalInstructionForGeneration_compareSyntaxInstruction (void) {
  enterExtensionGetter_compareSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                 extensionGetter_nonterminalInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_nonterminalInstructionForGeneration_compareSyntaxInstruction (defineExtensionGetter_nonterminalInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@repeatInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_repeatInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                            const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_12124_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_12124_si.getter_m_5F_repeated_5F_instructionList (SOURCE_FILE ("syntaxSignature.galgas", 244)), cast_12124_si.getter_mEndOfRepeatedInstructions (SOURCE_FILE ("syntaxSignature.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 244)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 245)).objectCompare (cast_12124_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 245)).getter_length (SOURCE_FILE ("syntaxSignature.galgas", 245)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 245)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_12124_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 246)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 248)).getter_string (SOURCE_FILE ("syntaxSignature.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 247)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 248)).add_operation (cast_12124_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 250)).getter_length (SOURCE_FILE ("syntaxSignature.galgas", 250)).getter_string (SOURCE_FILE ("syntaxSignature.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 249))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 246)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12805 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12867 (cast_12124_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 253)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
        while (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_12805.current_mInstructionList (HERE), enumerator_12867.current_mInstructionList (HERE), enumerator_12867.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 254)) ;
          enumerator_12805.gotoNextObject () ;
          enumerator_12867.gotoNextObject () ;
          if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_13051_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_13051_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 257)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 257)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 261)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 264)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 265)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_repeatInstructionForGeneration_compareSyntaxInstruction (void) {
  enterExtensionGetter_compareSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                                 extensionGetter_repeatInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_repeatInstructionForGeneration_compareSyntaxInstruction (defineExtensionGetter_repeatInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@selectInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_selectInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                            const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_13736_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 278)).objectCompare (cast_13736_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 278)).getter_length (SOURCE_FILE ("syntaxSignature.galgas", 278)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 278)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_13736_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 279)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 281)).getter_string (SOURCE_FILE ("syntaxSignature.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 280)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 281)).add_operation (cast_13736_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 283)).getter_length (SOURCE_FILE ("syntaxSignature.galgas", 283)).getter_string (SOURCE_FILE ("syntaxSignature.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 282))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 279)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14303 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14365 (cast_13736_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 286)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
        while (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_14303.current_mInstructionList (HERE), enumerator_14365.current_mInstructionList (HERE), enumerator_14365.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 287)) ;
          enumerator_14303.gotoNextObject () ;
          enumerator_14365.gotoNextObject () ;
          if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_14549_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_14549_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 290)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 290)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 294)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 297)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 298)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_selectInstructionForGeneration_compareSyntaxInstruction (void) {
  enterExtensionGetter_compareSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                                 extensionGetter_selectInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_selectInstructionForGeneration_compareSyntaxInstruction (defineExtensionGetter_selectInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@semanticInstructionAST transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_semanticInstructionAST_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                         GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                         GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                         GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_semanticInstructionAST_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                             extensionMethod_semanticInstructionAST_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_transformInstruction (defineExtensionMethod_semanticInstructionAST_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@syntaxSendInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxSendInstruction_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                        GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxSendInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                             extensionMethod_syntaxSendInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_transformInstruction (defineExtensionMethod_syntaxSendInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@terminalCheckInstruction transformInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_terminalCheckInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                           const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                           GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                           GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_uint var_terminalSymbolIndex ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_10071 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("grammarCompilation.galgas", 194))) ;
  if (NULL != objectArray_10071) {
      macroValidSharedObject (objectArray_10071, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex = objectArray_10071->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 197)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 198)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_terminalCheckInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                             extensionMethod_terminalCheckInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineExtensionMethod_terminalCheckInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@nonterminalCallInstruction transformInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                             GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_11105 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex, joker_11105, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 214)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                             extensionMethod_nonterminalCallInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineExtensionMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@repeatInstruction transformInstruction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_repeatInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 229)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 231)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 232)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 239)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_12292 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_12292.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 242)) ;
    {
    routine_transformInstructionList (enumerator_12292.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 243)) ;
    }
    var_repeatBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 250)) ;
    enumerator_12292.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_repeatInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                             extensionMethod_repeatInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_transformInstruction (defineExtensionMethod_repeatInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@selectInstruction transformInstruction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 267)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 269)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_13509 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_13509.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 271)) ;
    {
    routine_transformInstructionList (enumerator_13509.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 272)) ;
    }
    var_selectBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 279)) ;
    enumerator_13509.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                             extensionMethod_selectInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_transformInstruction (defineExtensionMethod_selectInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@parseRewindInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseRewindInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                         GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                         GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                         GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_syntaxInstructionList var_syntaxInstructionList ;
  GALGAS_location joker_14649 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList, joker_14649, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 296)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 298)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseRewindInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                             extensionMethod_parseRewindInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_transformInstruction (defineExtensionMethod_parseRewindInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@parseWhenInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseWhenInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                       GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 314)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseWhenInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                             extensionMethod_parseWhenInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_transformInstruction (defineExtensionMethod_parseWhenInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@parseLoopInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_parseLoopInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                       GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 330)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_parseLoopInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                             extensionMethod_parseLoopInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_transformInstruction (defineExtensionMethod_parseLoopInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@abstractExtensionModifierAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionModifierAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionModifierListMapAST,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionModifierAST * object = (const cPtr_abstractExtensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionModifierAST) ;
  ioArgument_ioAbstractExtensionModifierListMapAST.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 61)), object->mAttribute_mAbstractExtensionModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionModifierAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionModifierAST.mSlotID,
                                               extensionMethod_abstractExtensionModifierAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionModifierAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionModifierAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@extensionModifierAST buildExtensionListMaps'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionModifierAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionModifierListMap,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionModifierAST * object = (const cPtr_extensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionModifierAST) ;
  ioArgument_ioExtensionModifierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 81)), object->mAttribute_mExtensionModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionModifierAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionModifierAST.mSlotID,
                                               extensionMethod_extensionModifierAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionModifierAST_buildExtensionListMaps (defineExtensionMethod_extensionModifierAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@overridingExtensionModifierAST buildExtensionListMaps'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionModifierAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionModifierListMap,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                   GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionModifierAST * object = (const cPtr_overridingExtensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionModifierAST) ;
  ioArgument_ioOverridingExtensionModifierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 101)), object->mAttribute_mOverridingExtensionModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 100)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionModifierAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionModifierAST.mSlotID,
                                               extensionMethod_overridingExtensionModifierAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionModifierAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionModifierAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@overridingAbstractExtensionModifierAST buildExtensionListMaps'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionModifierAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionModifierListMap,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionModifierAST * object = (const cPtr_overridingAbstractExtensionModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionModifierAST) ;
  ioArgument_ioOverridingAbstractExtensionModifierListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 121)), object->mAttribute_mOverridingExtensionModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 120)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionModifierAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionModifierAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionModifierAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionModifierAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionModifierAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionMethodAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionMethodListMapAST,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionMethodAST * object = (const cPtr_abstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionMethodAST) ;
  ioArgument_ioAbstractExtensionMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 141)), object->mAttribute_mAbstractExtensionMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 140)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionMethodAST.mSlotID,
                                               extensionMethod_abstractExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionMethodAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionMethodListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionMethodAST * object = (const cPtr_extensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionMethodAST) ;
  ioArgument_ioExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 161)), object->mAttribute_mExtensionMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 160)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionMethodAST.mSlotID,
                                               extensionMethod_extensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionMethodAST_buildExtensionListMaps (defineExtensionMethod_extensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 181)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 180)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 201)), object->mAttribute_mOverridingExtensionMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@abstractExtensionGetterAST buildExtensionListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & ioArgument_ioAbstractExtensionGetterListMap,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                               GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractExtensionGetterAST * object = (const cPtr_abstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractExtensionGetterAST) ;
  ioArgument_ioAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 221)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_abstractExtensionGetterAST.mSlotID,
                                               extensionMethod_abstractExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_abstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@extensionGetterAST buildExtensionListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_extensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionGetterListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionGetterAST * object = (const cPtr_extensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionGetterAST) ;
  ioArgument_ioExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 241)), object->mAttribute_mExtensionGetterName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 240)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionGetterAST.mSlotID,
                                               extensionMethod_extensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extensionGetterAST_buildExtensionListMaps (defineExtensionMethod_extensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 261)), object->mAttribute_mOverridingExtensionGetterName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 260)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionModifierListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionModifierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionModifierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionModifierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 281)), object->mAttribute_mAbstractExtensionGetterName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 280)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

