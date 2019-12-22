#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-28.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@matchInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_matchInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionForGeneration * object = (const cPtr_matchInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionForGeneration) ;
  GALGAS_stringlist var_receiverList_11859 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 296)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_11910 (object->mProperty_mMatchedExpressionList, kENUMERATION_UP) ;
  while (enumerator_11910.hasCurrentObject ()) {
    GALGAS_string var_variable_12062 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_11910.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12062, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
    var_receiverList_11859.addAssign_operation (var_variable_12062  COMMA_SOURCE_FILE ("instruction-match.galgas", 299)) ;
    enumerator_11910.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 301)) ;
  cEnumerator_stringlist enumerator_12152 (var_receiverList_11859, kENUMERATION_UP) ;
  while (enumerator_12152.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12152.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 303)) ;
    if (enumerator_12152.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
    }
    enumerator_12152.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 306)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
  }
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12354 (object->mProperty_mMatchInstructionBranchList, kENUMERATION_UP) ;
  while (enumerator_12354.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 309)) ;
    cEnumerator_matchListForGeneration enumerator_12425 (enumerator_12354.current_mMatchListForGeneration (HERE), kENUMERATION_UP) ;
    cEnumerator_stringlist enumerator_12445 (var_receiverList_11859, kENUMERATION_UP) ;
    while (enumerator_12425.hasCurrentObject () && enumerator_12445.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = enumerator_12425.current_mIsType (HERE).boolEnum () ;
        if (kBoolTrue == test_0) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_12425.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (enumerator_12445.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 312)) ;
        }
      }
      if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_12445.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (enumerator_12425.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (enumerator_12425.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 315)) ;
      }
      if (enumerator_12425.hasNextObject () && enumerator_12445.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 319)) ;
      }
      enumerator_12425.gotoNextObject () ;
      enumerator_12445.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 321)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12354.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 322)) ;
    }
    if (enumerator_12354.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 330)) ;
    }
    enumerator_12354.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 332)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 341)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 342)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 343)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_matchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_matchInstructionForGeneration.mSlotID,
                                            extensionMethod_matchInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_matchInstructionForGeneration_generateInstruction (defineExtensionMethod_matchInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_messageInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                          extensionMethod_messageInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_messageInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_messageInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2228 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-message.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2228, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 50)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_expression_2228.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 59)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the expression has the '@").add_operation (var_expression_2228.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 61)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), fixItArray1  COMMA_SOURCE_FILE ("instruction-message.galgas", 60)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2228, object->mProperty_mInstructionLocation  COMMA_SOURCE_FILE ("instruction-message.galgas", 64))  COMMA_SOURCE_FILE ("instruction-message.galgas", 64)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                   extensionMethod_messageInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_messageInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@messageInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_messageCppVarName_3878 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3878, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 88)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (var_messageCppVarName_3878, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_messageInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_messageInstructionForGeneration.mSlotID,
                                            extensionMethod_messageInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_messageInstructionForGeneration_generateInstruction (defineExtensionMethod_messageInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  cEnumerator_actualParameterListAST enumerator_1913 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_1913.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1913.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
    enumerator_1913.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                          extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_methodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2837 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2837, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_formalParameterSignature var_routineSignature_2917 ;
  GALGAS_bool var_hasCompilerArgument_2945 ;
  GALGAS_methodKind var_kind_2964 ;
  GALGAS_string var_errorMessage_2987 ;
  GALGAS_location joker_3093 ; // Joker input parameter
  GALGAS_methodQualifier joker_3117 ; // Joker input parameter
  var_receiverExpression_2837.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 76)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)).method_searchKey (object->mProperty_mMethodName, var_kind_2964, var_routineSignature_2917, joker_3093, var_hasCompilerArgument_2945, joker_3117, var_errorMessage_2987, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_errorMessage_2987.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mMethodName.getter_location (SOURCE_FILE ("instruction-method-call.galgas", 78)), var_errorMessage_2987, fixItArray1  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 78)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3600 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mMethodName, GALGAS_string ("'").add_operation (object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)), var_routineSignature_2917, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3600, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_3666 = var_receiverExpression_2837.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 94)) ;
  GALGAS_bool var_searching_3717 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).isValid ()) {
        uint32_t variant_3766 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).uintValue () ;
        bool loop_3766 = true ;
        while (loop_3766) {
          loop_3766 = var_searching_3717.isValid () ;
          if (loop_3766) {
            loop_3766 = var_searching_3717.boolValue () ;
          }
          if (loop_3766 && (0 == variant_3766)) {
            loop_3766 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
          }
          if (loop_3766) {
            variant_3766 -- ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_baseType_3666.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 98)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_searching_3717 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_baseType_3666.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_hasKey (object->mProperty_mMethodName.getter_string (HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  var_baseType_3666 = var_baseType_3666.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
                }
              }
              if (kBoolFalse == test_4) {
                var_searching_3717 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_receiverExpression_2837.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 112)), var_receiverExpression_2837, object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-method-call.galgas", 114)), var_kind_2964, var_actualParameterListForGeneration_3600, var_hasCompilerArgument_2945, var_baseType_3666  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                   extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@methodCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_receiverCppName_5617 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5617, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5617 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5710 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 149)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5761 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 150)) ;
  GALGAS_stringlist var_inputVariableList_5801 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
  cEnumerator_actualParameterListForGeneration enumerator_5850 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_5850.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5882 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5850.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5761, var_inputVariableList_5801, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5882, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
    var_parameterCppNameList_5710.addAssign_operation (var_parameterCppName_5882  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
    enumerator_5850.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mProperty_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (object->mProperty_mMethodName.getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 161)).boolEnum () ;
        if (kBoolTrue == test_0) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (object->mProperty_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 163)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (var_receiverCppName_5617, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
        }
      }
      if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (object->mProperty_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (var_receiverCppName_5617, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5617.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (object->mProperty_mMethodName.getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_6925 (var_parameterCppNameList_5710, kENUMERATION_UP) ;
  while (enumerator_6925.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6925.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
    if (enumerator_6925.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
    }
    enumerator_6925.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5710.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = object->mProperty_mHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = object->mProperty_mHasCompilerArgument.boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
      }
    }
    if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_methodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_methodCallInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_methodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_1673 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_1673.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1673.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 39)) ;
    enumerator_1673.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                          extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_procCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  GALGAS_lstring var_usefulnessName_2336 = function_procedureNameForUsefulEntitiesGraph (object->mProperty_mRoutineName, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 54)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2336 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 55)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_2631 ;
  GALGAS_bool var_isInternal_2658 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).method_searchKey (object->mProperty_mRoutineName, var_routineSignature_2631, var_isInternal_2658, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 57)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_isInternal_2658.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_location var_procDeclarationLocation_2736 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).getter_locationForKey (object->mProperty_mRoutineName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 64)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mRoutineName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)).objectCompare (var_procDeclarationLocation_2736.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 66)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2736.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)), fixItArray2  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3401 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mRoutineName, GALGAS_string ("'").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)), var_routineSignature_2631, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3401, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 70)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (object->mProperty_mRoutineName, var_actualParameterListForGeneration_3401  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 83))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 83)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                   extensionMethod_procCallInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@procCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mProperty_mRoutineName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 106)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 107)) ;
  GALGAS_stringlist var_parameterCppNameList_4524 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 109)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4572 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
  GALGAS_stringlist var_inputVariableList_4609 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 111)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4647 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_4647.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4902 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4647.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4572, var_inputVariableList_4609, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4902, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 113)) ;
    var_parameterCppNameList_4524.addAssign_operation (var_parameterCppName_4902  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 122)) ;
    enumerator_4647.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 125)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 125)) ;
  cEnumerator_stringlist enumerator_5109 (var_parameterCppNameList_4524, kENUMERATION_UP) ;
  while (enumerator_5109.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5109.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
    enumerator_5109.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_procCallInstructionForGeneration.mSlotID,
                                            extensionMethod_procCallInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procCallInstructionForGeneration_generateInstruction (defineExtensionMethod_procCallInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                          extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2502 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2502, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 55)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 64)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 65)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 66)).getter_isClassType (SOURCE_FILE ("instruction-self-assignment.galgas", 66)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' assignment is not allowed for class instances"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 67)) ;
      }
    }
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE), var_expression_2502.getter_mResultType (SOURCE_FILE ("instruction-self-assignment.galgas", 70)), object->mProperty_mInstructionLocation, var_expression_2502, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 70)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-assignment.galgas", 76)), var_expression_2502  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                   extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 113)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 125)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 131)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_6261 ;
  GALGAS_string var_selfObjectCppName_6289 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
      var_selfObjectCppName_6289.drop () ; // Release error dropped variable
      var_selfTypeProxy_6261.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_6289 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_6261 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_6669 = var_selfTypeProxy_6261.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_6261.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 162)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)).objectCompare (var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeProxy_6261.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (var_addAssignOperatorArguments_6669.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 168)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)) ;
      }
    }
    if (kBoolFalse == test_4) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7375 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
      cEnumerator_actualOutputExpressionList enumerator_7443 (object->mProperty_mExpressions, kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_7477 (var_addAssignOperatorArguments_6669, kENUMERATION_UP) ;
      while (enumerator_7443.hasCurrentObject () && enumerator_7477.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_7728 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7443.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7477.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7728, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 173)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, enumerator_7477.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_7443.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_7477.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = enumerator_7477.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
            }else if (kBoolFalse == test_8) {
              temp_7 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_7443.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-self-concat.galgas", 182)), GALGAS_string ("the selector should be '!").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)), fixItArray9  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 182)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7477.current_mFormalArgumentType (HERE), var_expression_7728.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 185)), enumerator_7443.current_mEndOfExpressionLocation (HERE), var_expression_7728, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 185)) ;
        }
        var_effectiveParameterList_7375.addAssign_operation (var_expression_7728  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
        enumerator_7443.gotoNextObject () ;
        enumerator_7477.gotoNextObject () ;
      }
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName_6289, var_selfTypeProxy_6261, GALGAS_string::makeEmptyString (), object->mProperty_mInstructionLocation, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 194)), var_effectiveParameterList_7375  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_8939 ;
  GALGAS_string var_selfObjectCppName_8967 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 211)) ;
      var_selfObjectCppName_8967.drop () ; // Release error dropped variable
      var_selfTypeProxy_8939.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_8967 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_8939 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfTypeProxy_8939.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 217)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_8939.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 218)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9805 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_8939, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9805, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 222)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_8939, var_expression_9805.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 231)), object->mProperty_mInstructionLocation, var_expression_9805, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_8939, var_selfObjectCppName_8967, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 238)), var_expression_9805, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_10735 ;
  GALGAS_string var_selfObjectCppName_10763 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 255)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)) ;
      var_selfObjectCppName_10763.drop () ; // Release error dropped variable
      var_selfTypeProxy_10735.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_10763 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_10735 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfTypeProxy_10735.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 262)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 262)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_10735.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_11602 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_10735, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11602, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_10735, var_expression_11602.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 276)), object->mProperty_mInstructionLocation, var_expression_11602, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_10735, var_selfObjectCppName_10763, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 283)), var_expression_11602, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_12531 ;
  GALGAS_string var_selfObjectCppName_12559 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)) ;
      var_selfObjectCppName_12559.drop () ; // Release error dropped variable
      var_selfTypeProxy_12531.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_12559 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_12531 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfTypeProxy_12531.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_12531.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 308)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13392 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_12531, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13392, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_12531, var_expression_13392.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 321)), object->mProperty_mInstructionLocation, var_expression_13392, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 321)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_12531, var_selfObjectCppName_12559, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 328)), var_expression_13392, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_14319 ;
  GALGAS_string var_selfObjectCppName_14347 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 345)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
      var_selfObjectCppName_14347.drop () ; // Release error dropped variable
      var_selfTypeProxy_14319.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_14347 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_14319 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_selfTypeProxy_14319.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 352)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("the target object has the '@").add_operation (var_selfTypeProxy_14319.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 353)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15180 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeProxy_14319, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15180, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 357)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeProxy_14319, var_expression_15180.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 366)), object->mProperty_mInstructionLocation, var_expression_15180, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_selfTypeProxy_14319, var_selfObjectCppName_14347, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 373)), var_expression_15180, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3357 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_3357.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3357.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 98)) ;
    enumerator_3357.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                          extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_setterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_3772 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_3772.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3772.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 109)) ;
    enumerator_3772.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                          extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_4548 ;
  GALGAS_string var_receiverVariableCppName_4590 ;
  GALGAS_string var_receiverVariableBaseName_4633 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_receiverType_4548, var_receiverVariableCppName_4590, var_receiverVariableBaseName_4633, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 125)) ;
  }
  cEnumerator_lstringlist enumerator_4675 (object->mProperty_mReceiverStructAttributes, kENUMERATION_UP) ;
  while (enumerator_4675.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_4698 = var_receiverType_4548.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 132)) ;
    GALGAS_bool var_isPublic_4777 ;
    var_propertyMap_4698.method_searchKey (enumerator_4675.current_mValue (HERE), var_isPublic_4777, var_receiverType_4548, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 133)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_isPublic_4777.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 134)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_4675.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 135)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
      }
    }
    enumerator_4675.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_castType_4960 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mTypeNameForCasting.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_castType_4960 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeNameForCasting, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
      {
      routine_checkAssignmentTypes (var_receiverType_4548, var_castType_4960, object->mProperty_mTypeNameForCasting.getter_location (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    var_castType_4960 = var_receiverType_4548 ;
  }
  GALGAS_methodKind var_kind_5312 ;
  GALGAS_formalParameterSignature var_routineSignature_5338 ;
  GALGAS_bool var_hasCompilerArgument_5367 ;
  GALGAS_string var_setterErrorMessage_5402 ;
  GALGAS_methodQualifier joker_5373 ; // Joker input parameter
  var_castType_4960.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)).method_searchKey (object->mProperty_mSetterName, var_kind_5312, var_routineSignature_5338, var_hasCompilerArgument_5367, joker_5373, var_setterErrorMessage_5402, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_5402.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 156)), var_setterErrorMessage_5402, fixItArray4  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 156)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5876 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mSetterName, GALGAS_string ("'").add_operation (object->mProperty_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 164)), var_routineSignature_5338, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5876, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 159)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType_5942 = var_castType_4960 ;
  GALGAS_bool var_searching_5969 = GALGAS_bool (true) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).isValid ()) {
        uint32_t variant_6017 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 175)).uintValue () ;
        bool loop_6017 = true ;
        while (loop_6017) {
          loop_6017 = var_searching_5969.isValid () ;
          if (loop_6017) {
            loop_6017 = var_searching_5969.boolValue () ;
          }
          if (loop_6017 && (0 == variant_6017)) {
            loop_6017 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 175)) ;
          }
          if (loop_6017) {
            variant_6017 -- ;
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = var_baseType_5942.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 176)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 176)).boolEnum () ;
              if (kBoolTrue == test_6) {
                var_searching_5969 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = var_baseType_5942.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).getter_hasKey (object->mProperty_mSetterName.getter_string (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_baseType_5942 = var_baseType_5942.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 180)) ;
                }
              }
              if (kBoolFalse == test_7) {
                var_searching_5969 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (object->mProperty_mReceiverName.getter_location (HERE), var_receiverVariableCppName_4590, var_receiverVariableBaseName_4633, object->mProperty_mReceiverStructAttributes, var_castType_4960, var_receiverType_4548, object->mProperty_mSetterName, var_kind_5312, var_actualParameterListForGeneration_5876, var_hasCompilerArgument_5367, var_baseType_5942  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                   extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_setterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfTypeProxy_7215 ;
  GALGAS_string var_selfObjectCppName_7243 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 214)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 215)), GALGAS_string ("'self' can be used only in extension setters"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 215)) ;
      var_selfObjectCppName_7243.drop () ; // Release error dropped variable
      var_selfTypeProxy_7215.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_7243 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeProxy_7215 = constinArgument_inAnalysisContext.getter_mSelfTypeProxy (HERE) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_7598 ;
  GALGAS_bool var_hasCompilerArgument_7626 ;
  GALGAS_methodKind var_kind_7645 ;
  GALGAS_methodQualifier joker_7745 ; // Joker input parameter
  GALGAS_string joker_7748 ; // Joker input parameter
  var_selfTypeProxy_7215.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)).method_searchKey (object->mProperty_mSetterName, var_kind_7645, var_routineSignature_7598, var_hasCompilerArgument_7626, joker_7745, joker_7748, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_8136 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mSetterName, GALGAS_string ("'").add_operation (object->mProperty_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 231)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 231)), var_routineSignature_7598, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_8136, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName_7243, var_selfTypeProxy_7215, object->mProperty_mSetterName, var_kind_7645, var_actualParameterListForGeneration_8136, var_hasCompilerArgument_7626  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                   extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@setterCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 286)) ;
  GALGAS_string var_receiverCppName_9935 = object->mProperty_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_9992 (object->mProperty_mReceiverStructAttributes, kENUMERATION_UP) ;
  while (enumerator_9992.hasCurrentObject ()) {
    var_receiverCppName_9935.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_9992.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 289)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 289)) ;
    enumerator_9992.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverBaseName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 291)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_10196 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 293)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_10244 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 294)) ;
  GALGAS_stringlist var_inputVariableList_10281 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 295)) ;
  cEnumerator_actualParameterListForGeneration enumerator_10319 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_10319.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_10574 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_10319.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10244, var_inputVariableList_10281, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_10574, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 297)) ;
    var_parameterCppNameList_10196.addAssign_operation (var_parameterCppName_10574  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 306)) ;
    enumerator_10319.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mProperty_mMethodBaseType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 311)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 312)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 312)).boolEnum () ;
        if (kBoolTrue == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mReceiverType.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 313)).getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 313)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_1) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_9935.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 314)) ;
            }
          }
          GALGAS_string var_pointerUniqueName_11096 = GALGAS_string ("ptr_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 316)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 316)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)).add_operation (var_pointerUniqueName_11096, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 317)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (var_receiverCppName_9935, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 318)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, object->mProperty_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)).objectCompare (object->mProperty_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mProperty_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 320)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_11096, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)).add_operation (object->mProperty_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (var_pointerUniqueName_11096, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 322)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 321)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 324)) ;
              }
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (object->mProperty_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_11096, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 327)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 328)) ;
            }
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)).add_operation (object->mProperty_mCastType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (var_pointerUniqueName_11096, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 330)) ;
        }
      }
      if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (var_receiverCppName_9935, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      extensionMethod_addHeaderFileName (object->mProperty_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_9935.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).add_operation (object->mProperty_mSetterName.getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 337)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 337)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_12678 (var_parameterCppNameList_10196, kENUMERATION_UP) ;
  while (enumerator_12678.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12678.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)) ;
    if (enumerator_12678.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 341)) ;
    }
    enumerator_12678.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = object->mProperty_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10196.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 344)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 347)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 347)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 349)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_10196.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 350)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 351)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 354)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mSelfCppName COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_13718 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 368)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_13769 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 369)) ;
  GALGAS_stringlist var_inputVariableList_13809 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 370)) ;
  cEnumerator_actualParameterListForGeneration enumerator_13858 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_13858.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_14121 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_13858.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_13769, var_inputVariableList_13809, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_14121, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
    var_parameterCppNameList_13718.addAssign_operation (var_parameterCppName_14121  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)) ;
    enumerator_13858.gotoNextObject () ;
  }
  switch (object->mProperty_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mProperty_mReceiverType.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 385)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 386)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 386)).boolEnum () ;
        if (kBoolTrue == test_0) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (object->mProperty_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
        }
      }
      if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (object->mProperty_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = object->mProperty_mReceiverType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 392)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mSelfCppName.add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 393)) ;
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(object->mProperty_mSelfCppName.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)).add_operation (object->mProperty_mSetterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_15008 (var_parameterCppNameList_13718, kENUMERATION_UP) ;
  while (enumerator_15008.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_15008.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 399)) ;
    if (enumerator_15008.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 400)) ;
    }
    enumerator_15008.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = object->mProperty_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_13718.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 403)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 404)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 407)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 408)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_13718.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 409)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 410)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mSetterName.getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 412)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_selfSetterCallInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selfSetterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_switchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  cEnumerator_switchBranchesAST enumerator_4398 (object->mProperty_mBranches, kENUMERATION_UP) ;
  while (enumerator_4398.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4398.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    enumerator_4398.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                          extensionMethod_switchInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_switchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_switchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_5124 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSwitchExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 154)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_5124, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 160)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 160)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfSwitchExpression, GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 163)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), fixItArray1  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_5729 = var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 166)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_5828 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 167)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_5961 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 170)) ;
  cEnumerator_switchBranchesAST enumerator_5988 (object->mProperty_mBranches, kENUMERATION_UP) ;
  while (enumerator_5988.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6074 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    GALGAS_bool var_firstConstant_6103 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_6144 (enumerator_5988.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_6144.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_enumConstantMap_5729.getter_hasKey (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 175)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_constantsNamedInSwitchInstruction_5828.getter_hasKey (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 176)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_string ("the '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)), fixItArray4  COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_5828.addAssign_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 180))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
          GALGAS_unifiedTypeMapProxyList var_associatedTypeList_6558 ;
          GALGAS_uint joker_6508 ; // Joker input parameter
          var_enumConstantMap_5729.method_searchKey (enumerator_6144.current_mValue (HERE), joker_6508, var_associatedTypeList_6558, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_5988.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 183)), GALGAS_string ("the associated values of '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)), fixItArray6  COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
            }
          }
          if (kBoolFalse == test_5) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_5988.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 185)).boolEnum () ;
              if (kBoolTrue == test_7) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 186)), GALGAS_string ("the '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)), fixItArray8  COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
              }
            }
            if (kBoolFalse == test_7) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)).objectCompare (enumerator_5988.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_string temp_10 ;
                  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 191)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    temp_10 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_11) {
                    temp_10 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string ("the '").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (var_associatedTypeList_6558.getter_length (SOURCE_FILE ("instruction-switch.galgas", 190)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)), fixItArray12  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
                }
              }
              if (kBoolFalse == test_9) {
                GALGAS_uint var_associatedValueIndex_7292 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapProxyList enumerator_7335 (var_associatedTypeList_6558, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_7370 (enumerator_5988.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_7335.hasCurrentObject () && enumerator_7370.hasCurrentObject ()) {
                  enumGalgasBool test_13 = kBoolTrue ;
                  if (kBoolTrue == test_13) {
                    test_13 = GALGAS_bool (kIsNotEqual, enumerator_7370.current_mExtractedValueTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_13) {
                      enumGalgasBool test_14 = kBoolTrue ;
                      if (kBoolTrue == test_14) {
                        test_14 = GALGAS_bool (kIsNotEqual, enumerator_7335.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).objectCompare (enumerator_7370.current_mExtractedValueTypeName (HERE).getter_string (HERE))).boolEnum () ;
                        if (kBoolTrue == test_14) {
                          TC_Array <C_FixItDescription> fixItArray15 ;
                          inCompiler->emitSemanticError (enumerator_7370.current_mExtractedValueTypeName (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 197)), GALGAS_string ("the required type is '@").add_operation (enumerator_7335.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = var_firstConstant_6103.operator_and (GALGAS_bool (kIsNotEqual, enumerator_7370.current_mExtractedValueName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      GALGAS_string var_cppName_7741 = GALGAS_string ("extractedValue_").add_operation (enumerator_7370.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
                      var_extractedAssociatedValuesForGeneration_6074.addAssign_operation (enumerator_7335.current_mType (HERE), var_cppName_7741, var_associatedValueIndex_7292  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = enumerator_7370.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          {
                          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_7370.current_mExtractedValueName (HERE), enumerator_7335.current_mType (HERE), var_cppName_7741, var_cppName_7741, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_17) {
                        {
                        ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_7370.current_mExtractedValueName (HERE), enumerator_7335.current_mType (HERE), var_cppName_7741, var_cppName_7741, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_7292.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
                  enumerator_7335.gotoNextObject () ;
                  enumerator_7370.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_6144.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 213)), GALGAS_string ("'").add_operation (enumerator_6144.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 214)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
      }
      var_firstConstant_6103 = GALGAS_bool (false) ;
      enumerator_6144.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8769 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 222)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 223)), enumerator_5988.current_mInstructions (HERE), enumerator_5988.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList_8769, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
    }
    var_switchBranchesForGeneration_5961.addAssign_operation (enumerator_5988.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_6074, enumerator_5988.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)), var_instructionList_8769  COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)) ;
    enumerator_5988.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)) ;
  }
  GALGAS_stringset var_forgottenConstants_9051 = var_enumConstantMap_5729.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 233)).substract_operation (var_constantsNamedInSwitchInstruction_5828, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_9051.getter_count (SOURCE_FILE ("instruction-switch.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_s_9169 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_9207 (var_forgottenConstants_9051, kENUMERATION_UP) ;
      while (enumerator_9207.hasCurrentObject ()) {
        var_s_9169.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_9207.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)) ;
        enumerator_9207.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOf_5F_switch_5F_instruction, GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9169, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 240)), fixItArray20  COMMA_SOURCE_FILE ("instruction-switch.galgas", 239)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_5124.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 244)), var_switchExpression_5124, var_switchBranchesForGeneration_5961  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                   extensionMethod_switchInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_switchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@switchInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_switchVar_11224 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_11224, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_11224, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mProperty_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 294)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
  cEnumerator_switchBranchesForGeneration enumerator_11468 (object->mProperty_mBranches, kENUMERATION_UP) ;
  while (enumerator_11468.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11505 (enumerator_11468.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_11505.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mProperty_mSwitchExpression.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (enumerator_11505.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)) ;
      enumerator_11505.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_11468.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 302)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_type_11834 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mProperty_mEnumType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (enumerator_11468.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
        GALGAS_string var_varPtr_11991 = GALGAS_string ("extractPtr_").add_operation (enumerator_11468.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 305)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11834, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_varPtr_11991, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_type_11834, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_switchVar_11224, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_12206 (enumerator_11468.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_12206.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_12206.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (enumerator_12206.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (var_varPtr_11991, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (enumerator_12206.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)) ;
          enumerator_12206.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_11468.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 320)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 321)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
    }
    enumerator_11468.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                            extensionMethod_switchInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineExtensionMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  cEnumerator_actualParameterListAST enumerator_1826 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_1826.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1826.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 43)) ;
    enumerator_1826.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                          extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_2529 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 58)) ;
  GALGAS_formalParameterSignature var_routineSignature_2698 ;
  GALGAS_bool var_hasCompilerArgument_2726 ;
  var_type_2529.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)).method_searchKey (object->mProperty_mMethodName, var_routineSignature_2698, var_hasCompilerArgument_2726, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3205 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mMethodName, GALGAS_string ("'").add_operation (object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)), var_routineSignature_2698, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3205, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (object->mProperty_mTypeName, object->mProperty_mMethodName, var_actualParameterListForGeneration_3205, var_hasCompilerArgument_2726  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                   extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GALGAS_stringlist var_parameterCppNameList_4358 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4409 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 106)) ;
  GALGAS_stringlist var_inputVariableList_4449 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  cEnumerator_actualParameterListForGeneration enumerator_4498 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_4498.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4761 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4498.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4409, var_inputVariableList_4449, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4761, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 109)) ;
    var_parameterCppNameList_4358.addAssign_operation (var_parameterCppName_4761  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)) ;
    enumerator_4498.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 120)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (object->mProperty_mMethodName.getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 121)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
  cEnumerator_stringlist enumerator_5047 (var_parameterCppNameList_4358, kENUMERATION_UP) ;
  while (enumerator_5047.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5047.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    if (enumerator_5047.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 124)) ;
    }
    enumerator_5047.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
      }
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4358.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = object->mProperty_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4358.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (object->mProperty_mMethodName.getter_location (SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 137)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_typeMethodCallInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_typeMethodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@localVariableDeclarationAST enterInstructionInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_2317 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mTypeName, joker_2317 COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 43)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@localVariableDeclarationAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                    GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_3056 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 58)) ;
  GALGAS_string var_targetVariableCppName_3176 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsUndefinedConstant.boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (object->mProperty_mVariableName, var_targetType_3056, var_targetVariableCppName_3176, var_targetVariableCppName_3176, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (object->mProperty_mVariableName, var_targetType_3056, var_targetVariableCppName_3176, var_targetVariableCppName_3176, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_3056, var_targetVariableCppName_3176  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localVariableDeclarationForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                       GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationForGeneration * object = (const cPtr_localVariableDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mVariableType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mProperty_mVariableType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (object->mProperty_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration.mSlotID,
                                            extensionMethod_localVariableDeclarationForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableDeclarationForGeneration_generateInstruction (defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 41)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2586 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mSourceExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 59)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2586, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 56)) ;
  GALGAS_string var_targetVariableCppName_2645 = GALGAS_string ("var_").add_operation (object->mProperty_mVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (object->mProperty_mVariableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mVariableName, var_expression_2586.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 68)), var_targetVariableCppName_2645, var_targetVariableCppName_2645, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 66)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_2586.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 74)), GALGAS_bool (false), var_targetVariableCppName_2645, var_expression_2586  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_warningInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLocationExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mMessageExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 45)) ;
  extensionMethod_enterFixItListInSemanticContext (object->mProperty_mFixitListAST, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                          extensionMethod_warningInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_warningInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_warningInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_2865 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_2892 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_2924 ;
  {
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mLocationExpression, object->mProperty_mMessageExpression, object->mProperty_mFixitListAST, object->mProperty_mInstructionLocation, GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_2865, var_messageExpression_2892, var_fixitListForGeneration_2924, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 60)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_locationExpression_2865, var_messageExpression_2892, var_fixitListForGeneration_2924  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                   extensionMethod_warningInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_warningInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@warningInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_warningInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionForGeneration * object = (const cPtr_warningInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName_4105 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_4105, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  GALGAS_string var_messageCppVarName_4459 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4459, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 107)) ;
  GALGAS_string var_fixItArrayCppName_4707 ;
  extensionMethod_generateFixIt (object->mProperty_mFixitListForGeneration, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_4707, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 115)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (var_receiverCppVarName_4105, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (var_messageCppVarName_4459, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (var_fixItArrayCppName_4707, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                            extensionMethod_warningInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineExtensionMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 184)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 185)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mDoBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 186)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_mElseBranchInstructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 187)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 195)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_do_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 196)) ;
  extensionMethod_enterInstructionListInSemanticContext (object->mProperty_m_5F_else_5F_Instructions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 197)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_8030 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 214)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_8030, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 211)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_8053 = var_receiverExpression_8030.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 219)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_bool var_found_8187 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_8245 (var_receiverType_8053.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 223)), kENUMERATION_UP) ;
      bool bool_1 = var_found_8187.operator_not (SOURCE_FILE ("instruction-with.galgas", 223)).isValidAndTrue () ;
      if (enumerator_8245.hasCurrentObject () && bool_1) {
        while (enumerator_8245.hasCurrentObject () && bool_1) {
          var_found_8187 = GALGAS_bool (kIsEqual, enumerator_8245.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE))) ;
          enumerator_8245.gotoNextObject () ;
          if (enumerator_8245.hasCurrentObject ()) {
            bool_1 = var_found_8187.operator_not (SOURCE_FILE ("instruction-with.galgas", 223)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_found_8187.operator_not (SOURCE_FILE ("instruction-with.galgas", 226)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (object->mProperty_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 227)), GALGAS_string ("there is no '").add_operation (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 227)).add_operation (var_receiverType_8053.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 228)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("instruction-with.galgas", 227)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_8839 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 235)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_8839, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 232)) ;
  GALGAS_string var_objectArrayCppName_8895 = GALGAS_string ("objectArray_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 241)).getter_string (SOURCE_FILE ("instruction-with.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 241)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_receiverType_8053.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 243)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 243)).operator_not (SOURCE_FILE ("instruction-with.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_receiverType_8053.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 244)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 244)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 244)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 247)) ;
  }
  GALGAS_localConstantList var_localConstantList_9336 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 249)) ;
  cEnumerator_typedPropertyList enumerator_9413 (var_receiverType_8053.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 250)), kENUMERATION_UP) ;
  while (enumerator_9413.hasCurrentObject ()) {
    var_localConstantList_9336.addAssign_operation (enumerator_9413.current_mPropertyTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (enumerator_9413.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 253)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 253)), GALGAS_bool (true), var_objectArrayCppName_8895.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 255)).add_operation (enumerator_9413.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 255))  COMMA_SOURCE_FILE ("instruction-with.galgas", 251)) ;
    enumerator_9413.gotoNextObject () ;
  }
  var_localConstantList_9336.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 259)), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 260)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 260)), GALGAS_bool (true), var_objectArrayCppName_8895.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 262))  COMMA_SOURCE_FILE ("instruction-with.galgas", 258)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_10280 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_9336, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 268)), object->mProperty_mDoBranchInstructions, object->mProperty_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_10280, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 263)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_10584 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 279)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 280)), object->mProperty_mElseBranchInstructions, object->mProperty_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_10584, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 275)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 286)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_receiverExpression_8030, var_objectArrayCppName_8895, var_keyExpression_8839, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE), var_do_5F_instructionList_10280, var_else_5F_instructionList_10584  COMMA_SOURCE_FILE ("instruction-with.galgas", 288))  COMMA_SOURCE_FILE ("instruction-with.galgas", 288)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_keyExpression_11657 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mKeyExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-with.galgas", 311)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_11657, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, var_keyExpression_11657.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 318)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 318)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (object->mProperty_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_11657.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 319)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 319)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 319)), fixItArray2  COMMA_SOURCE_FILE ("instruction-with.galgas", 319)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsNotEqual, var_keyExpression_11657.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 321)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 321)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mEndOfKeyExpression, GALGAS_string ("the key type is '@").add_operation (var_keyExpression_11657.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 322)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)).add_operation (GALGAS_string ("', it should be '@lstring'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 322)), fixItArray4  COMMA_SOURCE_FILE ("instruction-with.galgas", 322)) ;
      }
    }
  }
  GALGAS_string var_objectArrayCppName_12192 = GALGAS_string ("objectArray_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 325)).getter_string (SOURCE_FILE ("instruction-with.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 325)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_12397 ;
  GALGAS_string var_receiverVariableCppName_12438 ;
  {
  GALGAS_string joker_12444 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mReceiverName, var_targetType_12397, var_receiverVariableCppName_12438, joker_12444, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 327)) ;
  }
  cEnumerator_lstringlist enumerator_12472 (object->mProperty_mFieldList, kENUMERATION_UP) ;
  while (enumerator_12472.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12495 = var_targetType_12397.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 334)) ;
    GALGAS_bool var_isPublic_12572 ;
    var_propertyMap_12495.method_searchKey (enumerator_12472.current_mValue (HERE), var_isPublic_12572, var_targetType_12397, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 335)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_isPublic_12572.operator_not (SOURCE_FILE ("instruction-with.galgas", 336)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_12472.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 337)), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray6  COMMA_SOURCE_FILE ("instruction-with.galgas", 337)) ;
      }
    }
    enumerator_12472.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_targetType_12397.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 341)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 341)).operator_not (SOURCE_FILE ("instruction-with.galgas", 341)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfReceiverExpression, GALGAS_string ("the '@").add_operation (var_targetType_12397.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 342)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 342)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 342)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsNotEqual, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_bool var_found_13032 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_13088 (var_targetType_12397.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 347)), kENUMERATION_UP) ;
      bool bool_10 = var_found_13032.operator_not (SOURCE_FILE ("instruction-with.galgas", 347)).isValidAndTrue () ;
      if (enumerator_13088.hasCurrentObject () && bool_10) {
        while (enumerator_13088.hasCurrentObject () && bool_10) {
          var_found_13032 = GALGAS_bool (kIsEqual, enumerator_13088.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE))) ;
          enumerator_13088.gotoNextObject () ;
          if (enumerator_13088.hasCurrentObject ()) {
            bool_10 = var_found_13032.operator_not (SOURCE_FILE ("instruction-with.galgas", 347)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_found_13032.operator_not (SOURCE_FILE ("instruction-with.galgas", 350)).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (object->mProperty_mSearchMethodNameForErrorSignaling.getter_location (SOURCE_FILE ("instruction-with.galgas", 351)), GALGAS_string ("there is no '").add_operation (object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (SOURCE_FILE ("instruction-with.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 351)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 351)).add_operation (var_targetType_12397.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 351)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 351)), fixItArray12  COMMA_SOURCE_FILE ("instruction-with.galgas", 351)) ;
        }
      }
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 355)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_13559 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 357)) ;
  cEnumerator_typedPropertyList enumerator_13616 (var_targetType_12397.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 358)), kENUMERATION_UP) ;
  while (enumerator_13616.hasCurrentObject ()) {
    var_localInitializedVariableList_13559.addAssign_operation (enumerator_13616.current_mPropertyTypeProxy (HERE), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (enumerator_13616.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 361)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 361)), var_objectArrayCppName_12192.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 362)).add_operation (enumerator_13616.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 362))  COMMA_SOURCE_FILE ("instruction-with.galgas", 359)) ;
    enumerator_13616.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_13 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 368)) ;
  temp_13.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 365)), GALGAS_lstring::constructor_new (object->mProperty_mPrefix.getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 366)), object->mProperty_mEndOfReceiverExpression  COMMA_SOURCE_FILE ("instruction-with.galgas", 366)), GALGAS_bool (true), var_objectArrayCppName_12192.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 368))  COMMA_SOURCE_FILE ("instruction-with.galgas", 368)) ;
  GALGAS_localConstantList var_localConstantList_13877 = temp_13 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_14474 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_13877, var_localInitializedVariableList_13559, object->mProperty_m_5F_do_5F_Instructions, object->mProperty_mEndOf_5F_do_5F_instructions, ioArgument_ioVariableMap, var_do_5F_instructionList_14474, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 370)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_14556 ;
  {
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 387)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 388)), object->mProperty_m_5F_else_5F_Instructions, object->mProperty_mEndOf_5F_else_5F_instructions, ioArgument_ioVariableMap, var_else_5F_instructionList_14556, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 383)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_else_5F_instructions, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 394)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_receiverVariableCppName_12438, var_targetType_12397, object->mProperty_mFieldList, var_objectArrayCppName_12192, var_keyExpression_11657, object->mProperty_mSearchMethodNameForErrorSignaling.getter_string (HERE), var_do_5F_instructionList_14474, var_else_5F_instructionList_14556  COMMA_SOURCE_FILE ("instruction-with.galgas", 396))  COMMA_SOURCE_FILE ("instruction-with.galgas", 396)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readWriteAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_receiverVarCppName_17202 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_17202, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 447)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_17222 = object->mProperty_mReceiverExpression.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 448)) ;
  GALGAS_string var_keyVarCppName_17433 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_17433, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (var_receiverType_17222.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 452)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 453)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 453)).add_operation (var_receiverType_17222.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 453)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 453)).add_operation (var_receiverVarCppName_17202, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 452)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_17433, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 456)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 456)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_17433, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 458)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 458)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459)).add_operation (var_receiverType_17222.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 460)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 460)).add_operation (object->mProperty_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 460)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 460)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 461)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 458)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 462)) COMMA_SOURCE_FILE ("instruction-with.galgas", 462)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 464)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 464)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 464)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 465)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 465)).add_operation (var_receiverType_17222.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 465)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 464)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 466)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 474)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 475)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 476)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 485)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readOnlyWithInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_readOnlyWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readOnlyWithInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_string var_receiverCppName_19409 = object->mProperty_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_19469 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_19469.hasCurrentObject ()) {
    var_receiverCppName_19409.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_19469.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 499)).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 499)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 499)) ;
    enumerator_19469.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_19755 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_19755, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 502)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 510)) COMMA_SOURCE_FILE ("instruction-with.galgas", 510)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mProperty_mReceiverVariableCppName COMMA_SOURCE_FILE ("instruction-with.galgas", 511)) ;
  }
  extensionMethod_addHeaderFileName (object->mProperty_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 512)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 513)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 513)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)).add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 514)).add_operation (var_receiverCppName_19409, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 515)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 513)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 517)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 517)).add_operation (var_keyVarCppName_19755, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 517)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 517)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 519)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 519)).add_operation (var_keyVarCppName_19755, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 519)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 519)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)).add_operation (object->mProperty_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 520)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 523)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 523)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 523)).add_operation (object->mProperty_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)).add_operation (object->mProperty_mReceiverType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 522)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 525)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, object->mProperty_mElseBranchInstructions.getter_length (SOURCE_FILE ("instruction-with.galgas", 533)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 534)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 535)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 544)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration.mSlotID,
                                            extensionMethod_readWriteWithInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_readWriteWithInstructionForGeneration_generateInstruction (defineExtensionMethod_readWriteWithInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@nonterminalCallInstruction transformInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                             GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex_2885 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_2965 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mProperty_mNonterminalName, var_nonTerminalSymbolIndex_2885, joker_2965, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 64)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mNonterminalName, var_nonTerminalSymbolIndex_2885  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 65)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                             extensionMethod_nonterminalCallInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineExtensionMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                 const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                                 const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                                 const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                 const GALGAS_string /* constinArgument_inComponentName */,
                                                                                 const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_nonterminalLabelMap var_labelMap_4045 ;
  constinArgument_inNonterminalMap.method_searchKey (object->mProperty_mNonterminalName, var_labelMap_4045, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 90)) ;
  GALGAS_formalParameterSignature var_signature_4084 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 92)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_signature_4084 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 93)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_4189 ; // Joker input parameter
    GALGAS_location joker_4203 ; // Joker input parameter
    var_labelMap_4045.method_searchKey (object->mProperty_mLabelName, joker_4189, var_signature_4084, joker_4203, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 95)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4600 ;
  {
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, object->mProperty_mNonterminalName, GALGAS_string ("'<").add_operation (object->mProperty_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)), var_signature_4084, object->mProperty_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4600, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 98)) ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 111)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mNonterminalName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 119)), object->mProperty_mLabelName.getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 120)), var_actualParameterListForGeneration_4600, object->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                                 extensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (defineExtensionMethod_nonterminalCallInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inPosfix,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 149)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 150))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                              extensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                          const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_6868_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mProperty_mNonterminalName.objectCompare (cast_6868_si.getter_mNonterminalName (SOURCE_FILE ("instruction-non-terminal.galgas", 163)))) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 164)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (cast_6868_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 165)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mProperty_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 166)), fixItArray1  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 165)) ;
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7166_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_7166_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-non-terminal.galgas", 169)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mProperty_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 170)), fixItArray2  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 169)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 173)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 176)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 177)) ;
    }
  }
//---
  return result_outOk ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                          extensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_nonterminalInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_nonterminalInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  GALGAS_stringlist var_parameterCppNameList_8108 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 194)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8159 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 195)) ;
  GALGAS_stringlist var_inputVariableList_8199 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 196)) ;
  cEnumerator_actualParameterListForGeneration enumerator_8248 (object->mProperty_mActualParameterList, kENUMERATION_UP) ;
  while (enumerator_8248.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8511 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_8248.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8159, var_inputVariableList_8199, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8511, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 198)) ;
    var_parameterCppNameList_8108.addAssign_operation (var_parameterCppName_8511  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 207)) ;
    enumerator_8248.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName_8618 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mProperty_mInstructionLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 210)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_8618, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (object->mProperty_mNonterminalName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (object->mProperty_mLabelName.getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 214)) ;
  cEnumerator_stringlist enumerator_8974 (var_parameterCppNameList_8108, kENUMERATION_UP) ;
  while (enumerator_8974.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8974.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)) ;
    enumerator_8974.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_8618.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 221)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 222)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_8618, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
  cEnumerator_stringlist enumerator_9508 (var_jokerParametersToReleaseList_8159, kENUMERATION_UP) ;
  while (enumerator_9508.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9508.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)) ;
    enumerator_9508.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                            extensionMethod_nonterminalInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_generateInstruction (defineExtensionMethod_nonterminalInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@repeatInstruction transformInstruction'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_repeatInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex_2702 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 65)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_2788 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 67)) ;
  {
  routine_transformInstructionList (object->mProperty_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_2788, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 68)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_3101 = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList_2788  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 75)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3203 (object->mProperty_mRepeatBranchList, kENUMERATION_UP) ;
  while (enumerator_3203.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_3236 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 78)) ;
    {
    routine_transformInstructionList (enumerator_3203.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_3236, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 79)) ;
    }
    var_repeatBranchList_3101.addAssign_operation (var_syntaxInstructionList_3236  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 86)) ;
    enumerator_3203.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, var_repeatBranchList_3101, var_addedNonTerminalIndex_2702  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 89)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_repeatInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                             extensionMethod_repeatInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_repeatInstruction_transformInstruction (defineExtensionMethod_repeatInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_repeatInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                        const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                        const GALGAS_string constinArgument_inLexiqueName,
                                                                        const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                        const GALGAS_string constinArgument_inComponentName,
                                                                        const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_choiceIndex_4559 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 115)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_4762 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mRepeatedInstructionList, object->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_4762, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 120)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5268 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 137)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5303 (object->mProperty_mRepeatBranchList, kENUMERATION_UP) ;
  while (enumerator_5303.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_5706 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5303.current_mSyntaxInstructionList (HERE), enumerator_5303.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5706, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 139)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5268.addAssign_operation (var_instructionList_5706, enumerator_5303.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 155)) ;
    enumerator_5303.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 158)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_4559, var_repeated_5F_instructionList_4762, object->mProperty_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration_5268  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_repeatInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                                 extensionMethod_repeatInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_repeatInstruction_analyzeSyntaxInstruction (defineExtensionMethod_repeatInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_repeatInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  const GALGAS_string constinArgument_inPosfix,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7194 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mProperty_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 190)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7318 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 191)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7422 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7422.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7318.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7422.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 194)), enumerator_7422.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 193)) ;
    enumerator_7422.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mSyntaxComponentName, object->mProperty_mChoiceIndex, var_repeated_5F_instructionList_7194, object->mProperty_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration_7318  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 198)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_repeatInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                              extensionMethod_repeatInstructionForGeneration_appendSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_repeatInstructionForGeneration_appendSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                     const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_8351_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mProperty_m_5F_repeated_5F_instructionList, cast_8351_si.getter_m_5F_repeated_5F_instructionList (SOURCE_FILE ("instruction-repeat.galgas", 218)), cast_8351_si.getter_mEndOfRepeatedInstructions (SOURCE_FILE ("instruction-repeat.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 218)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)).objectCompare (cast_8351_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 219)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 219)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 219)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (cast_8351_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 220)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-repeat.galgas", 222)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 221)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 222)).add_operation (cast_8351_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_length (SOURCE_FILE ("instruction-repeat.galgas", 224)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 223)), fixItArray1  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 220)) ;
          result_outOk = GALGAS_bool (false) ;
        }
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9032 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9094 (cast_8351_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-repeat.galgas", 227)), kENUMERATION_UP) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_9032.hasCurrentObject () && enumerator_9094.hasCurrentObject () && bool_2) {
        while (enumerator_9032.hasCurrentObject () && enumerator_9094.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_9032.current_mInstructionList (HERE), enumerator_9094.current_mInstructionList (HERE), enumerator_9094.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 228)) ;
          enumerator_9032.gotoNextObject () ;
          enumerator_9094.gotoNextObject () ;
          if (enumerator_9032.hasCurrentObject () && enumerator_9094.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9278_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_9278_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-repeat.galgas", 231)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 231)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 235)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 238)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 239)) ;
    }
  }
//---
  return result_outOk ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                                          extensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_repeatInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@repeatInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_repeatInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_string var_repeatFlagCppName_10171 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 255)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 256)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_10171, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 257)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_10171, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 258)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 259)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mProperty_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (object->mProperty_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10851 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  GALGAS_uint index_10801 ((uint32_t) 0) ;
  while (enumerator_10851.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_10801.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 270)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10851.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 271)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 279)) ;
    enumerator_10851.gotoNextObject () ;
    index_10801.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_10171, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 283)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 284)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 285)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 286)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_repeatInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                            extensionMethod_repeatInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_generateInstruction (defineExtensionMethod_repeatInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@selectInstruction transformInstruction'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                    GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                    GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex_2501 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 61)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_2580 = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 63)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_2644 (object->mProperty_mSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_2644.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_2677 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 65)) ;
    {
    routine_transformInstructionList (enumerator_2644.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_2677, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 66)) ;
    }
    var_selectBranchList_2580.addAssign_operation (var_syntaxInstructionList_2677  COMMA_SOURCE_FILE ("instruction-select.galgas", 73)) ;
    enumerator_2644.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, var_selectBranchList_2580, var_addedNonTerminalIndex_2501  COMMA_SOURCE_FILE ("instruction-select.galgas", 76))  COMMA_SOURCE_FILE ("instruction-select.galgas", 76)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                             extensionMethod_selectInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectInstruction_transformInstruction (defineExtensionMethod_selectInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@selectInstruction analyzeSyntaxInstruction'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                        const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                        const GALGAS_string constinArgument_inLexiqueName,
                                                                        const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                        const GALGAS_string constinArgument_inComponentName,
                                                                        const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_choiceIndex_4001 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 101)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 103)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_4178 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 105)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4256 (object->mProperty_mSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_4256.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_4317 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_4256.current_mSyntaxInstructionList (HERE), enumerator_4256.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_4317, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 108)) ;
    }
    var_listOfSemanticInstructionListForGeneration_4178.addAssign_operation (var_instructionList_4317, enumerator_4256.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 124)) ;
    enumerator_4256.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 127)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex_4001, var_listOfSemanticInstructionListForGeneration_4178  COMMA_SOURCE_FILE ("instruction-select.galgas", 128))  COMMA_SOURCE_FILE ("instruction-select.galgas", 128)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                                 extensionMethod_selectInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectInstruction_analyzeSyntaxInstruction (defineExtensionMethod_selectInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  const GALGAS_string constinArgument_inPosfix,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6046 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 153)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6150 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  while (enumerator_6150.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_6046.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_6150.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 156)), enumerator_6150.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 155)) ;
    enumerator_6150.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mSyntaxComponentName, object->mProperty_mChoiceIndex, var_listOfSemanticInstructionListForGeneration_6046  COMMA_SOURCE_FILE ("instruction-select.galgas", 159))  COMMA_SOURCE_FILE ("instruction-select.galgas", 159)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                              extensionMethod_selectInstructionForGeneration_appendSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_selectInstructionForGeneration_appendSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                     const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_7012_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 178)).objectCompare (cast_7012_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 178)).getter_length (SOURCE_FILE ("instruction-select.galgas", 178)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 178)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (cast_7012_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 179)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mProperty_mListOfSemanticInstructionListForGeneration.getter_length (SOURCE_FILE ("instruction-select.galgas", 181)).getter_string (SOURCE_FILE ("instruction-select.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 180)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 181)).add_operation (cast_7012_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 183)).getter_length (SOURCE_FILE ("instruction-select.galgas", 183)).getter_string (SOURCE_FILE ("instruction-select.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 182)), fixItArray1  COMMA_SOURCE_FILE ("instruction-select.galgas", 179)) ;
          result_outOk = GALGAS_bool (false) ;
        }
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7579 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7641 (cast_7012_si.getter_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("instruction-select.galgas", 186)), kENUMERATION_UP) ;
      bool bool_2 = result_outOk.isValidAndTrue () ;
      if (enumerator_7579.hasCurrentObject () && enumerator_7641.hasCurrentObject () && bool_2) {
        while (enumerator_7579.hasCurrentObject () && enumerator_7641.hasCurrentObject () && bool_2) {
          result_outOk = function_compareSyntaxSignature (enumerator_7579.current_mInstructionList (HERE), enumerator_7641.current_mInstructionList (HERE), enumerator_7641.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 187)) ;
          enumerator_7579.gotoNextObject () ;
          enumerator_7641.gotoNextObject () ;
          if (enumerator_7579.hasCurrentObject () && enumerator_7641.hasCurrentObject ()) {
            bool_2 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_7825_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (cast_7825_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-select.galgas", 190)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray3  COMMA_SOURCE_FILE ("instruction-select.galgas", 190)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 194)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = result_outOk.operator_not (SOURCE_FILE ("instruction-select.galgas", 197)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray6  COMMA_SOURCE_FILE ("instruction-select.galgas", 198)) ;
    }
  }
//---
  return result_outOk ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                                          extensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_selectInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@selectInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 214)) COMMA_SOURCE_FILE ("instruction-select.galgas", 214)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (object->mProperty_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (object->mProperty_mChoiceIndex.getter_string (SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 215)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9034 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  GALGAS_uint index_8984 ((uint32_t) 0) ;
  while (enumerator_9034.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_8984.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).getter_string (SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 217)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9034.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 218)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 226)) ;
    enumerator_9034.gotoNextObject () ;
    index_8984.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 228)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 229)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 230)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                            extensionMethod_selectInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_generateInstruction (defineExtensionMethod_selectInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@terminalCheckInstruction transformInstruction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_terminalCheckInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                           const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                           GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                           GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_uint var_terminalSymbolIndex_3879 ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_3886 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 82))) ;
  if (NULL != objectArray_3886) {
      macroValidSharedObject (objectArray_3886, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_3879 = objectArray_3886->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_3879 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 85)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (object->mProperty_mTerminalName, var_terminalSymbolIndex_3879, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 86)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTerminalName, var_terminalSymbolIndex_3879  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 88))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 88)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_terminalCheckInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                             extensionMethod_terminalCheckInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineExtensionMethod_terminalCheckInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@terminalCheckInstruction analyzeSyntaxInstruction'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                               const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                               GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                               const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                               const GALGAS_string constinArgument_inLexiqueName,
                                                                               const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                               const GALGAS_string /* constinArgument_inComponentName */,
                                                                               const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_lexicalSentValueList var_sentAttributeList_5225 ;
  constinArgument_inTerminalMap.method_searchKey (object->mProperty_mTerminalName, var_sentAttributeList_5225, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 112)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 114)).objectCompare (var_sentAttributeList_5225.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 114)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_5225.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 117)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mProperty_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 120)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mTerminalName.getter_location (SOURCE_FILE ("instruction-terminal.galgas", 115)), GALGAS_string ("naming the '$").add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (var_sentAttributeList_5225.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 116)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 116)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 117)).add_operation (object->mProperty_mActualInputParameterList.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 119)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 118)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 119)), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 115)) ;
    }
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_5739 = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 123)) ;
  cEnumerator_actualInputParameterListAST enumerator_5811 (object->mProperty_mActualInputParameterList, kENUMERATION_UP) ;
  cEnumerator_lexicalSentValueList enumerator_5836 (var_sentAttributeList_5225, kENUMERATION_UP) ;
  while (enumerator_5811.hasCurrentObject () && enumerator_5836.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_5811.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_5836.current_mLexicalType (HERE), enumerator_5836.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_5739, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 125)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, enumerator_5836.current_mLexicalFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_5811.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5836.current_mLexicalFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_5811.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 133)), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_5836.current_mLexicalFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 133)) ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (enumerator_5836.current_mLexicalFormalSelector (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 134)), GALGAS_string ("the formal selector is declared here"), fixItArray10  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 134)) ;
      }
    }
    enumerator_5811.gotoNextObject () ;
    enumerator_5836.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_6373 (object->mProperty_mIndexingKeyList, kENUMERATION_UP) ;
  while (enumerator_6373.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_6373.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 139)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 139)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 139)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        appendFixItActions (fixItArray12, kFixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_6373.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("instruction-terminal.galgas", 140)), GALGAS_string ("the '").add_operation (enumerator_6373.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 140)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 140)), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 140)) ;
      }
    }
    enumerator_6373.gotoNextObject () ;
  }
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 144)) ;
  callExtensionMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 149)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList_5739, object->mProperty_mIndexingKeyList, object->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 155))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 155)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                                 extensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_terminalCheckInstruction_analyzeSyntaxInstruction (defineExtensionMethod_terminalCheckInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                         const GALGAS_string /* constinArgument_inPosfix */,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, object->mProperty_mTerminalName, object->mProperty_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 191)), object->mProperty_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 193)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 194))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                              extensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                            const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_9310_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 208)).objectCompare (cast_9310_si.getter_mTerminalName (SOURCE_FILE ("instruction-terminal.galgas", 208)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 208)))) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 209)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (cast_9310_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 210)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 211)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 211)), fixItArray1  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 210)) ;
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9609_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (cast_9609_si.getter_mInstructionLocation (SOURCE_FILE ("instruction-terminal.galgas", 214)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mProperty_mTerminalName.getter_string (SOURCE_FILE ("instruction-terminal.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 215)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 215)), fixItArray2  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 214)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 218)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = result_outOk.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 221)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("reference syntax instruction is here"), fixItArray5  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 222)) ;
    }
  }
//---
  return result_outOk ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                                          extensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_terminalCheckInstructionForGeneration_compareInstructionSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_terminalCheckInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  cEnumerator_terminalCheckAssignementList enumerator_10587 (object->mProperty_mTerminalCheckAssignementList, kENUMERATION_UP) ;
  while (enumerator_10587.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_10587.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_10587.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 240)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 240)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10587.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (enumerator_10587.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 243)) ;
    enumerator_10587.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_10971 (object->mProperty_mIndexingKeyList, kENUMERATION_UP) ;
  while (enumerator_10971.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 249)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (C_Lexique_").add_operation (object->mProperty_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 250)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 250)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10971.current_mValue_30_ (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 251)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_10971.current_mValue_31_ (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-terminal.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)) ;
    enumerator_10971.gotoNextObject () ;
  }
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 255)) ;
  callExtensionMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 261)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 268)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 268)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string ("->acceptTerminal (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (object->mProperty_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (object->mProperty_mTerminalName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (extensionGetter_commaSourceFile (object->mProperty_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 270)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_terminalCheckInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                            extensionMethod_terminalCheckInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_generateInstruction (defineExtensionMethod_terminalCheckInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@parseLoopInstruction transformInstruction'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  routine_transformInstructionList (object->mProperty_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 66)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseLoopInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                             extensionMethod_parseLoopInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseLoopInstruction_transformInstruction (defineExtensionMethod_parseLoopInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseLoopInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                           const GALGAS_string constinArgument_inLexiqueName,
                                                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                           const GALGAS_string constinArgument_inComponentName,
                                                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_3792 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mVariantExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 97)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression_3792, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 94)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_3792.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 102)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3792.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 104)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 104)).add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 105)), fixItArray1  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 103)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_4387 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mWhileExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 112)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression_4387, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 109)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_4387.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 117)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression_3792.getter_mResultType (SOURCE_FILE ("instruction-parse-loop.galgas", 119)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 119)).add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 120)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 118)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 124)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_5060 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mDoInstructionList, object->mProperty_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_5060, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 127)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 144)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_variant_5F_expression_3792, var_while_5F_expression_4387, var_instructionList_5060  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseLoopInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                                 extensionMethod_parseLoopInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseLoopInstruction_analyzeSyntaxInstruction (defineExtensionMethod_parseLoopInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     const GALGAS_string constinArgument_inPosfix,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mProperty_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 171)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                              extensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseLoopInstructionForGeneration_appendSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@parseLoopInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseLoopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 185)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 185)) ;
  }
  GALGAS_string var_variantVarCppName_7376 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_7376, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 188)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_7376, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 191)) ;
  }
  GALGAS_string var_variantVar_7681 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7681, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (var_variantVarCppName_7376, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 193)) ;
  GALGAS_string var_loopVar_7886 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7886, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_7886, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 198)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7886.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 199)) ;
  GALGAS_string var_whileVarCppName_8178 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_8178, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 201)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_8178, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 202)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 203)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7886.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 204)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_7681.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 205)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 206)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 207)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 215)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 215)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 216)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 218)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 219)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 220)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 223)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mProperty_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 226)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 224)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseLoopInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                            extensionMethod_parseLoopInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_generateInstruction (defineExtensionMethod_parseLoopInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@parseRewindInstruction transformInstruction'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseRewindInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                         GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                         GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                         GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_syntaxInstructionList var_syntaxInstructionList_2524 ;
  GALGAS_location joker_2526 ; // Joker input parameter
  object->mProperty_mParseRewindBranchList.method_first (var_syntaxInstructionList_2524, joker_2526, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 61)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList_2524, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 63)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseRewindInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                             extensionMethod_parseRewindInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseRewindInstruction_transformInstruction (defineExtensionMethod_parseRewindInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@parseRewindInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseRewindInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                             const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                             const GALGAS_string constinArgument_inLexiqueName,
                                                                             const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                             const GALGAS_string constinArgument_inComponentName,
                                                                             const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_3640 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 91)) ;
  GALGAS_uint var_referenceSelectMethodCount_3727 = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_3784 (object->mProperty_mParseRewindBranchList, kENUMERATION_UP) ;
  while (enumerator_3784.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_3727 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_3864 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 95)) ;
    cEnumerator_syntaxInstructionList enumerator_3943 (enumerator_3784.current_mSyntaxInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_3943.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_3943.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_3864, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 97)) ;
      enumerator_3943.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_3640.addAssign_operation (var_instructionList_3864, enumerator_3784.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 112)) ;
    enumerator_3784.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_4535 = var_listOfSemanticInstructionListForGeneration_3640 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_4636 ;
  {
  GALGAS_location joker_4688 ; // Joker input parameter
  var_tempListOfBranches_4535.setter_popFirst (var_instructionList_4636, joker_4688, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 117)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_4753 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_4636, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 118)) ;
  GALGAS_bool var_ok_4827 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4865 (var_tempListOfBranches_4535, kENUMERATION_UP) ;
  bool bool_0 = var_ok_4827.isValidAndTrue () ;
  if (enumerator_4865.hasCurrentObject () && bool_0) {
    while (enumerator_4865.hasCurrentObject () && bool_0) {
      var_ok_4827 = function_compareSyntaxSignature (var_referenceSignature_4753, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_4865.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 123)), enumerator_4865.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 121)) ;
      enumerator_4865.gotoNextObject () ;
      if (enumerator_4865.hasCurrentObject ()) {
        bool_0 = var_ok_4827.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_listOfSemanticInstructionListForGeneration_3640  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 128)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseRewindInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                                 extensionMethod_parseRewindInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseRewindInstruction_analyzeSyntaxInstruction (defineExtensionMethod_parseRewindInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@parseRewindInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       const GALGAS_string constinArgument_inPosfix,
                                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_6180 ;
  GALGAS_location joker_6182 ; // Joker input parameter
  object->mProperty_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList_6180, joker_6182, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 150)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_6180, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 151)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                              extensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseRewindInstructionForGeneration_appendSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@parseRewindInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseRewindInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 165)) COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 165)) ;
  }
  GALGAS_string var_parsingContextVar_6907 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_6907, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 167)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7171 (object->mProperty_mListOfSemanticInstructionListForGeneration, kENUMERATION_UP) ;
  while (enumerator_7171.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_7171.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 170)) ;
    }
    if (enumerator_7171.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (var_parsingContextVar_6907, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 179)) ;
    }
    enumerator_7171.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseRewindInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                            extensionMethod_parseRewindInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_generateInstruction (defineExtensionMethod_parseRewindInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@parseWhenInstruction transformInstruction'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  routine_transformInstructionList (object->mProperty_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 99)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseWhenInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                             extensionMethod_parseWhenInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseWhenInstruction_transformInstruction (defineExtensionMethod_parseWhenInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@parseWhenInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseWhenInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                           const GALGAS_string constinArgument_inLexiqueName,
                                                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                           const GALGAS_string constinArgument_inComponentName,
                                                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_4994 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mWhenExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-parse-when.galgas", 130)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression_4994, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 127)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 136)) ;
  }
  GALGAS_uint var_localSelectMethodCount_5315 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_5411 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mWhenInstructionList, object->mProperty_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_5315, var_when_5F_instructionListForGeneration_5411, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 140)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_5899 ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mProperty_mElseInstructionList, object->mProperty_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_5899, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 158)) ;
  }
  {
  ioArgument_ioVariableMap.setter_closeOverride (object->mProperty_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 175)) ;
  }
  GALGAS_bool var_ok_6410 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_5411, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 178)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_5899, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 179)), object->mProperty_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 177)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_6410.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_when_5F_expression_4994, var_when_5F_instructionListForGeneration_5411, var_else_5F_instructionListForGeneration_5899  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 184))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 184)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseWhenInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                                 extensionMethod_parseWhenInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseWhenInstruction_analyzeSyntaxInstruction (defineExtensionMethod_parseWhenInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@parseWhenInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     const GALGAS_string constinArgument_inPosfix,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mProperty_mInstructionList, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                              extensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_parseWhenInstructionForGeneration_appendSyntaxSignature, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@parseWhenInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_parseWhenInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  GALGAS_string var_sourceVar_8496 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_8496, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 224)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_8496, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 225)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 226)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 234)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mProperty_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 235)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 243)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_parseWhenInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                            extensionMethod_parseWhenInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_generateInstruction (defineExtensionMethod_parseWhenInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@syntaxSendInstruction transformInstruction'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syntaxSendInstruction_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                        GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syntaxSendInstruction_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                             extensionMethod_syntaxSendInstruction_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syntaxSendInstruction_transformInstruction (defineExtensionMethod_syntaxSendInstruction_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@syntaxSendInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                            const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                            const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                            const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                            const GALGAS_string /* constinArgument_inComponentName */,
                                                                            const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxSendInstruction * object = (const cPtr_syntaxSendInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxSendInstruction) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 59)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 60)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_3096 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("instruction-syntax-send.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3096, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 63)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_expression_3096.getter_mResultType (SOURCE_FILE ("instruction-syntax-send.galgas", 72)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression"), fixItArray3  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 73)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mProperty_mInstructionLocation, var_expression_3096  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 76))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 76)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                                 extensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syntaxSendInstruction_analyzeSyntaxInstruction (defineExtensionMethod_syntaxSendInstruction_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@syntaxSendInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_syntaxSendInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxSendInstructionForGeneration * object = (const cPtr_syntaxSendInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxSendInstructionForGeneration) ;
  GALGAS_string var_sourceVar_4507 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mProperty_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_4507, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 101)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 103)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_4507, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (var_sourceVar_4507, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 104)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_syntaxSendInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration.mSlotID,
                                            extensionMethod_syntaxSendInstructionForGeneration_generateInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_syntaxSendInstructionForGeneration_generateInstruction (defineExtensionMethod_syntaxSendInstructionForGeneration_generateInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Function 'syntaxSignatureOfInstructionList'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const GALGAS_string & constinArgument_inPosfix,
                                                                                       const GALGAS_semanticInstructionListForGeneration & constinArgument_inInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result_result ; // Returned variable
  result_result = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 33)) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2849 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2849.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2849.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 35)) ;
    enumerator_2849.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_syntaxSignatureOfInstructionList [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_syntaxSignatureOfInstructionList (C_Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_semanticInstructionListForGeneration operand1 = GALGAS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                           inCompiler
                                                                                                                           COMMA_THERE) ;
  return function_syntaxSignatureOfInstructionList (operand0,
                                                    operand1,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_syntaxSignatureOfInstructionList ("syntaxSignatureOfInstructionList",
                                                                                  functionWithGenericHeader_syntaxSignatureOfInstructionList,
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
                                                                                  2,
                                                                                  functionArgs_syntaxSignatureOfInstructionList) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Function 'compareSyntaxSignature'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool function_compareSyntaxSignature (const GALGAS_semanticInstructionListForGeneration & constinArgument_inReferenceSignature,
                                             const GALGAS_semanticInstructionListForGeneration & constinArgument_inTestedSignature,
                                             const GALGAS_location & constinArgument_inErrorLocation,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  result_outOk = GALGAS_bool (true) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_4089 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_4120 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_4089.hasCurrentObject () && enumerator_4120.hasCurrentObject () && bool_0) {
    while (enumerator_4089.hasCurrentObject () && enumerator_4120.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_4089.current_mInstruction (HERE).ptr (), enumerator_4120.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62)) ;
      enumerator_4089.gotoNextObject () ;
      enumerator_4120.gotoNextObject () ;
      if (enumerator_4089.hasCurrentObject () && enumerator_4120.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_outOk.operator_and (GALGAS_bool (kIsStrictInf, constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 64)).objectCompare (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 64)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 64)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_semanticInstructionForGeneration var_instruction_4355 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 65)) ;
      if (var_instruction_4355.isValid ()) {
        if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_4355.ptr ())) {
          GALGAS_syntaxInstructionForGeneration cast_4496_si ((cPtr_syntaxInstructionForGeneration *) var_instruction_4355.ptr ()) ;
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (cast_4496_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 68)), GALGAS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray2  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 68)) ;
        }else{
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 71)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = result_outOk.operator_and (GALGAS_bool (kIsStrictSup, constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 73)).objectCompare (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 73)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray5  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 74)) ;
        GALGAS_semanticInstructionForGeneration var_instruction_4992 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("syntaxSignature.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 76)) ;
        if (var_instruction_4992.isValid ()) {
          if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_4992.ptr ())) {
            GALGAS_syntaxInstructionForGeneration cast_5133_si ((cPtr_syntaxInstructionForGeneration *) var_instruction_4992.ptr ()) ;
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (cast_5133_si.getter_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 79)), GALGAS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 79)) ;
          }else{
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray7  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 82)) ;
          }
        }
      }
    }
  }
//---
  return result_outOk ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_compareSyntaxSignature (C_Compiler * inCompiler,
                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_semanticInstructionListForGeneration operand0 = GALGAS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                           inCompiler
                                                                                                                           COMMA_THERE) ;
  const GALGAS_semanticInstructionListForGeneration operand1 = GALGAS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                           inCompiler
                                                                                                                           COMMA_THERE) ;
  const GALGAS_location operand2 = GALGAS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                   inCompiler
                                                                   COMMA_THERE) ;
  return function_compareSyntaxSignature (operand0,
                                          operand1,
                                          operand2,
                                          inCompiler
                                          COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_compareSyntaxSignature ("compareSyntaxSignature",
                                                                        functionWithGenericHeader_compareSyntaxSignature,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        3,
                                                                        functionArgs_compareSyntaxSignature) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'groupSyntaxComponentsGalgas3'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_groupSyntaxComponentsGalgas_33_ (const GALGAS_galgas_33_SyntaxComponentListAST constinArgument_inAllSyntaxComponents,
                                              const GALGAS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                              GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_componentNameSet_2069 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("syntaxCompilation.galgas", 23)) ;
  cEnumerator_galgas_33_SyntaxComponentListAST enumerator_2115 (constinArgument_inAllSyntaxComponents, kENUMERATION_UP) ;
  while (enumerator_2115.hasCurrentObject ()) {
    var_componentNameSet_2069.addAssign_operation (enumerator_2115.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 25)) ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_2216 = enumerator_2115.current (HERE).getter_mNonterminalDeclarationList (HERE) ;
    GALGAS_syntaxRuleListAST var_ruleList_2273 = enumerator_2115.current (HERE).getter_mRuleList (HERE) ;
    cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2385 (constinArgument_inSyntaxExtensions.getter_listForKey (enumerator_2115.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 28)), kENUMERATION_UP) ;
    while (enumerator_2385.hasCurrentObject ()) {
      var_nonterminalDeclarationList_2216.plusAssign_operation(enumerator_2385.current_mNonterminalDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 29)) ;
      var_ruleList_2273.plusAssign_operation(enumerator_2385.current_mRuleList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 30)) ;
      enumerator_2385.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.addAssign_operation (GALGAS_galgas_33_SyntaxComponentAST::constructor_new (GALGAS_bool (false), enumerator_2115.current (HERE).getter_mSyntaxComponentName (HERE), enumerator_2115.current (HERE).getter_mImportedLexiqueFilePath (HERE), var_nonterminalDeclarationList_2216, var_ruleList_2273, enumerator_2115.current (HERE).getter_mHasTranslateFeature (HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 32))  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 32)) ;
    enumerator_2115.gotoNextObject () ;
  }
  cEnumerator_syntaxExtensions enumerator_2844 (constinArgument_inSyntaxExtensions, kENUMERATION_UP) ;
  while (enumerator_2844.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_componentNameSet_2069.getter_hasKey (enumerator_2844.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 42)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas", 42)).boolEnum () ;
      if (kBoolTrue == test_0) {
        cEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2919 (enumerator_2844.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_2919.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2919.current_mSyntaxComponentName (HERE).getter_location (SOURCE_FILE ("syntaxCompilation.galgas", 44)), GALGAS_string ("there is no '").add_operation (enumerator_2919.current_mSyntaxComponentName (HERE).getter_string (SOURCE_FILE ("syntaxCompilation.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)).add_operation (GALGAS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas", 44)) ;
          enumerator_2919.gotoNextObject () ;
        }
      }
    }
    enumerator_2844.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Function 'transformLabelMap'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis function_transformLabelMap (const GALGAS_nonTerminalLabelListAST & constinArgument_inLabels,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result_outNonterminalSymbolLabelMapForGrammarAnalysis ; // Returned variable
  result_outNonterminalSymbolLabelMapForGrammarAnalysis = GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("grammarCompilation.galgas", 21)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_2052 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_2052.hasCurrentObject ()) {
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_2109 = GALGAS_signatureForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 23)) ;
    cEnumerator_formalParameterListAST enumerator_2148 (enumerator_2052.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2148.hasCurrentObject ()) {
      var_formalParametersList_2109.addAssign_operation (enumerator_2148.current_mFormalArgumentPassingMode (HERE), enumerator_2148.current_mFormalArgumentTypeName (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 25)) ;
      enumerator_2148.gotoNextObject () ;
    }
    {
    result_outNonterminalSymbolLabelMapForGrammarAnalysis.setter_insertKey (enumerator_2052.current_mLabelName (HERE), var_formalParametersList_2109, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 27)) ;
    }
    enumerator_2052.gotoNextObject () ;
  }
//---
  return result_outNonterminalSymbolLabelMapForGrammarAnalysis ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_transformLabelMap [2] = {
  & kTypeDescriptor_GALGAS_nonTerminalLabelListAST,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_transformLabelMap (C_Compiler * inCompiler,
                                                                  const cObjectArray & inEffectiveParameterArray,
                                                                  const GALGAS_location & /* inErrorLocation */
                                                                  COMMA_LOCATION_ARGS) {
  const GALGAS_nonTerminalLabelListAST operand0 = GALGAS_nonTerminalLabelListAST::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  return function_transformLabelMap (operand0,
                                     inCompiler
                                     COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_transformLabelMap ("transformLabelMap",
                                                                   functionWithGenericHeader_transformLabelMap,
                                                                   & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis,
                                                                   1,
                                                                   functionArgs_transformLabelMap) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'checkLabelMap'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkLabelMap (const GALGAS_location constinArgument_inNonTerminalLocation,
                            const GALGAS_nonTerminalLabelListAST constinArgument_inLabels,
                            const GALGAS_location constinArgument_inOriginalNonTerminalLocation,
                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_labelStringSet_2763 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("grammarCompilation.galgas", 42)) ;
  cEnumerator_nonTerminalLabelListAST enumerator_2789 (constinArgument_inLabels, kENUMERATION_UP) ;
  while (enumerator_2789.hasCurrentObject ()) {
    var_labelStringSet_2763.addAssign_operation (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 44))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 44)) ;
    GALGAS_signatureForGrammarAnalysis var_formalParametersList_2889 ;
    constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.method_searchKey (enumerator_2789.current_mLabelName (HERE), var_formalParametersList_2889, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 46)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_2789.current_mFormalArgumentList (HERE).getter_length (SOURCE_FILE ("grammarCompilation.galgas", 47)).objectCompare (var_formalParametersList_2889.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 47)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string temp_1 ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_2789.current_mFormalArgumentList (HERE).getter_length (SOURCE_FILE ("grammarCompilation.galgas", 50)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          temp_1 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_2) {
          temp_1 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_formalParametersList_2889.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 54)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_2789.current_mLabelName (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 48)), enumerator_2789.current_mFormalArgumentList (HERE).getter_length (SOURCE_FILE ("grammarCompilation.galgas", 48)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 48)).add_operation (GALGAS_string (" formal parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 48)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 49)).add_operation (GALGAS_string (" declared here, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 50)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)).getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 51)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 52)).add_operation (var_formalParametersList_2889.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 53)).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)).add_operation (GALGAS_string (" parameter"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 53)), fixItArray5  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 48)) ;
      }
    }
    if (kBoolFalse == test_0) {
      cEnumerator_formalParameterListAST enumerator_3566 (enumerator_2789.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      cEnumerator_signatureForGrammarAnalysis enumerator_3594 (var_formalParametersList_2889, kENUMERATION_UP) ;
      while (enumerator_3566.hasCurrentObject () && enumerator_3594.hasCurrentObject ()) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsNotEqual, enumerator_3594.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (enumerator_3566.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 58)), GALGAS_string (" this formal parameter is declared with ").add_operation (extensionGetter_formalArgumentString (enumerator_3594.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 59)).add_operation (GALGAS_string (" passing mode, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 60)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)).getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 61)).add_operation (GALGAS_string (" is declared with "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 62)).add_operation (extensionGetter_formalArgumentString (enumerator_3566.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 63)).add_operation (GALGAS_string (" passing mode"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 63)), fixItArray7  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 58)) ;
          }
        }
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 65)).objectCompare (enumerator_3566.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 65)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 66)), GALGAS_string (" this formal parameter is declared of '@").add_operation (enumerator_3594.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 67)).add_operation (GALGAS_string ("' type, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 68)).add_operation (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis.getter_locationForKey (enumerator_2789.current_mLabelName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 69)).add_operation (GALGAS_string (" is declared with '@"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 70)).add_operation (enumerator_3566.current_mFormalArgumentTypeName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 71)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 71)), fixItArray9  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 66)) ;
          }
        }
        enumerator_3566.gotoNextObject () ;
        enumerator_3594.gotoNextObject () ;
      }
    }
    enumerator_2789.gotoNextObject () ;
  }
  cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_4726 (constinArgument_inNonterminalSymbolLabelMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4726.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_labelStringSet_2763.getter_hasKey (enumerator_4726.current_lkey (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 78)) COMMA_SOURCE_FILE ("grammarCompilation.galgas", 78)).operator_not (SOURCE_FILE ("grammarCompilation.galgas", 78)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalLocation, GALGAS_string ("this non terminal does not declare the '").add_operation (enumerator_4726.current_lkey (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)).add_operation (GALGAS_string ("' label, but declaration at "), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)).add_operation (constinArgument_inOriginalNonTerminalLocation.getter_locationString (inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 80)).add_operation (GALGAS_string (" does"), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 81)), fixItArray11  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 79)) ;
      }
    }
    enumerator_4726.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'handleNonTerminalDeclarations'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_handleNonTerminalDeclarations (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                            const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_nonterminalDeclarationListAST enumerator_5353 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_5353.hasCurrentObject ()) {
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_5365 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_5353.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 93))) ;
    if (NULL != objectArray_5365) {
        macroValidSharedObject (objectArray_5365, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap (enumerator_5353.current_mNonterminalName (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 95)), enumerator_5353.current_mLabels (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_5353.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 97)), objectArray_5365->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 94)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_5353.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 103)), function_transformLabelMap (enumerator_5353.current_mLabels (HERE), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 101)) ;
      }
    }
    enumerator_5353.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Routine 'handleNonTerminalDeclarationsFromRuleList'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_handleNonTerminalDeclarationsFromRuleList (GALGAS_nonTerminalSymbolMapForGrammarAnalysis & ioArgument_ioNonTerminalMapForGrammarAnalysis,
                                                        const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxRuleListAST enumerator_6162 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_6162.hasCurrentObject ()) {
    GALGAS_nonTerminalLabelListAST var_nonTerminalLabelListAST_6197 = GALGAS_nonTerminalLabelListAST::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 116)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_6251 (enumerator_6162.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_6251.hasCurrentObject ()) {
      var_nonTerminalLabelListAST_6197.addAssign_operation (enumerator_6251.current_mLabelName (HERE), enumerator_6251.current_mFormalArguments (HERE), enumerator_6251.current_mEndOfArgumentLocation (HERE)  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 118)) ;
      enumerator_6251.gotoNextObject () ;
    }
    const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * objectArray_6383 = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) ioArgument_ioNonTerminalMapForGrammarAnalysis.readAccessForWithInstruction (enumerator_6162.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 123))) ;
    if (NULL != objectArray_6383) {
        macroValidSharedObject (objectArray_6383, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
      {
      routine_checkLabelMap (enumerator_6162.current_mNonterminalName (HERE).getter_location (SOURCE_FILE ("grammarCompilation.galgas", 125)), var_nonTerminalLabelListAST_6197, ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_locationForKey (enumerator_6162.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("grammarCompilation.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 127)), objectArray_6383->mProperty_mNonterminalSymbolParametersMap, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 124)) ;
      }
    }else{
      {
      ioArgument_ioNonTerminalMapForGrammarAnalysis.setter_insertKey (enumerator_6162.current_mNonterminalName (HERE), ioArgument_ioNonTerminalMapForGrammarAnalysis.getter_count (SOURCE_FILE ("grammarCompilation.galgas", 133)), function_transformLabelMap (var_nonTerminalLabelListAST_6197, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 131)) ;
      }
    }
    enumerator_6162.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@semanticInstructionAST transformInstruction'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_semanticInstructionAST_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                         GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                         const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                         GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                         GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_semanticInstructionAST_transformInstruction (void) {
  enterExtensionMethod_transformInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                             extensionMethod_semanticInstructionAST_transformInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_semanticInstructionAST_transformInstruction (defineExtensionMethod_semanticInstructionAST_transformInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'transformInstructionList'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_transformInstructionList (const GALGAS_syntaxInstructionList constinArgument_inInstructionList,
                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                       GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                       GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_syntaxInstructionList enumerator_8683 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_8683.hasCurrentObject ()) {
    callExtensionMethod_transformInstruction ((const cPtr_syntaxInstructionAST *) enumerator_8683.current_mInstruction (HERE).ptr (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 168)) ;
    enumerator_8683.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Routine 'buildRuleList'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildRuleList (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                            const GALGAS_lstring constinArgument_inSyntaxComponentName,
                            const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                            GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                            GALGAS_syntaxComponentListForGrammarAnalysis & ioArgument_ioSyntaxComponentListForGrammarAnalysis,
                            GALGAS_uint & ioArgument_ioAddedNonTerminalCount,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis var_productionRulesList_9446 = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 186)) ;
  cEnumerator_syntaxRuleListAST enumerator_9511 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_9511.hasCurrentObject ()) {
    GALGAS_uint var_nonTerminalIndex_9541 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_nonterminalSymbolParametersMap_9621 ;
    constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (enumerator_9511.current_mNonterminalName (HERE), var_nonTerminalIndex_9541, var_nonterminalSymbolParametersMap_9621, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 190)) ;
    GALGAS_syntaxInstructionList var_parsedSyntaxInstructionList_9845 ;
    GALGAS_lstring joker_9865 ; // Joker input parameter
    GALGAS_formalParameterListAST joker_9868 ; // Joker input parameter
    GALGAS_location joker_9871 ; // Joker input parameter
    GALGAS_location joker_9903 ; // Joker input parameter
    enumerator_9511.current_mLabelList (HERE).method_first (joker_9865, joker_9868, joker_9871, var_parsedSyntaxInstructionList_9845, joker_9903, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 192)) ;
    GALGAS_syntaxInstructionListForGrammarAnalysis var_instructionList_9963 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 194)) ;
    {
    routine_transformInstructionList (var_parsedSyntaxInstructionList_9845, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalMapForGrammarAnalysis, ioArgument_ioAddedNonTerminalCount, var_instructionList_9963, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 195)) ;
    }
    var_productionRulesList_9446.addAssign_operation (enumerator_9511.current_mNonterminalName (HERE), var_nonTerminalIndex_9541, var_instructionList_9963, var_productionRulesList_9446.getter_length (SOURCE_FILE ("grammarCompilation.galgas", 207))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 203)) ;
    enumerator_9511.gotoNextObject () ;
  }
  ioArgument_ioSyntaxComponentListForGrammarAnalysis.addAssign_operation (var_productionRulesList_9446, constinArgument_inSyntaxComponentName  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 209)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'grammarGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_grammarGenerationTemplate_0,
  0,
  gWrapperAllDirectories_grammarGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Filewrapper template 'grammarGenerationTemplate grammarZone3HeaderGalgas3'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_NON_5F_TERMINAL_5F_MAP,
                                                                                             const GALGAS_nonTerminalToAddList & in_ADDED_5F_NON_5F_TERMINAL_5F_LIST,
                                                                                             const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                             const GALGAS_string & in_START_5F_SYMBOL_5F_NAME,
                                                                                             const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE,
                                                                                             const GALGAS_string & in_GRAMMAR_5F_NAME,
                                                                                             const GALGAS_lstringlist & in_SYNTAX_5F_COMPONENTS
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//  GRAMMAR " ;
  result << in_GRAMMAR_5F_NAME.stringValue () ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class cGrammar_" ;
  result << in_GRAMMAR_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 5)).stringValue () ;
  result << " : " ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_366_ (0) ;
  if (in_SYNTAX_5F_COMPONENTS.isValid ()) {
    cEnumerator_lstringlist enumerator_366 (in_SYNTAX_5F_COMPONENTS, kENUMERATION_UP) ;
    while (enumerator_366.hasCurrentObject ()) {
      result << "public cParser_" ;
      result << enumerator_366.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 7)).stringValue () ;
      if (enumerator_366.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_366_.increment () ;
      enumerator_366.gotoNextObject () ;
    }
  }
  result << " {\n" ;
  GALGAS_uint index_484_ (0) ;
  if (in_NON_5F_TERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_484 (in_NON_5F_TERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_484.hasCurrentObject ()) {
      result << "//------------------------------------- '" ;
      result << enumerator_484.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 13)).stringValue () ;
      result << "' non terminal\n"
        "//--- 'parse' label\n"
        "  public : virtual void nt_" ;
      result << enumerator_484.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 16)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_0 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 18)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
      }
      result << "C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * inCompiler) ;\n"
        "\n" ;
      const enumGalgasBool test_1 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "//--- indexing\n"
          "  public : virtual void nt_" ;
        result << enumerator_484.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 24)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << " * inCompiler) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_1) {
      }
      GALGAS_uint index_1115_ (0) ;
      if (enumerator_484.current_mNonterminalSymbolParametersMap (HERE).isValid ()) {
        cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_1115 (enumerator_484.current_mNonterminalSymbolParametersMap (HERE), kENUMERATION_UP) ;
        while (enumerator_1115.hasCurrentObject ()) {
          result << "//----------- '" ;
          result << enumerator_1115.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 27)).stringValue () ;
          result << "' label\n"
            "  public : virtual void nt_" ;
          result << enumerator_484.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)).stringValue () ;
          result << "_" ;
          result << enumerator_1115.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 29)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1366_IDX (0) ;
          if (enumerator_1115.current_mFormalParametersList (HERE).isValid ()) {
            cEnumerator_signatureForGrammarAnalysis enumerator_1366 (enumerator_1115.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
            while (enumerator_1366.hasCurrentObject ()) {
              const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1366.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 31)))).boolEnum () ;
              if (kBoolTrue == test_2) {
                result << "const GALGAS_" ;
                result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue () ;
                result << " inArgument" ;
                result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 32)).stringValue () ;
              }else if (kBoolFalse == test_2) {
                const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_1366.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 33)))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  result << "GALGAS_" ;
                  result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 34)).stringValue () ;
                }else if (kBoolFalse == test_3) {
                  const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_1366.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 35)))).boolEnum () ;
                  if (kBoolTrue == test_4) {
                    result << "GALGAS_" ;
                    result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 36)).stringValue () ;
                  }else if (kBoolFalse == test_4) {
                    result << "GALGAS_" ;
                    result << enumerator_1366.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 38)).stringValue () ;
                    result << " inArgument" ;
                    result << index_1366_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 38)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1366_IDX.increment () ;
              enumerator_1366.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_5 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 43)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_5) {
          }
          result << "C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << " * inCompiler) ;\n"
            "\n" ;
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_484.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 47)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "//--- Start symbol\n"
              "  public : static void _performSourceFileParsing_" ;
            result << enumerator_1115.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 49)).stringValue () ;
            result << " (" ;
            columnMarker = result.currentColumn () ;
            result << "C_Compiler * inCompiler,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_7 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            if (kBoolTrue == test_7) {
              result << "C_String & " ;
              result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 52)).stringValue () ;
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }else if (kBoolFalse == test_7) {
            }
            result << "GALGAS_lstring inFileName" ;
            GALGAS_uint index_2814_IDX (0) ;
            if (enumerator_1115.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_2814 (enumerator_1115.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_2814.hasCurrentObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2814.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 57)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  result << "const GALGAS_" ;
                  result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue () ;
                  result << " inArgument" ;
                  result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 58)).stringValue () ;
                }else if (kBoolFalse == test_8) {
                  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_2814.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 59)))).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    result << "GALGAS_" ;
                    result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue () ;
                    result << " & ioArgument" ;
                    result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 60)).stringValue () ;
                  }else if (kBoolFalse == test_9) {
                    const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_2814.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 61)))).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      result << "GALGAS_" ;
                      result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue () ;
                      result << " & outArgument" ;
                      result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 62)).stringValue () ;
                    }else if (kBoolFalse == test_10) {
                      result << "GALGAS_" ;
                      result << enumerator_2814.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 64)).stringValue () ;
                      result << " inArgument" ;
                      result << index_2814_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 64)).stringValue () ;
                    }
                  }
                }
                index_2814_IDX.increment () ;
                enumerator_2814.gotoNextObject () ;
              }
            }
            result << "\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n"
              "  public : static void _performSourceStringParsing_" ;
            result << enumerator_1115.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 68)).stringValue () ;
            result << " (" ;
            columnMarker = result.currentColumn () ;
            result << "C_Compiler * inCompiler,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            const enumGalgasBool test_11 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
            if (kBoolTrue == test_11) {
              result << "C_String & " ;
              result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 71)).stringValue () ;
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }else if (kBoolFalse == test_11) {
            }
            result << "GALGAS_string inSourceString,\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "GALGAS_string inNameString" ;
            GALGAS_uint index_4102_IDX (0) ;
            if (enumerator_1115.current_mFormalParametersList (HERE).isValid ()) {
              cEnumerator_signatureForGrammarAnalysis enumerator_4102 (enumerator_1115.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
              while (enumerator_4102.hasCurrentObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_4102.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 77)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  result << "const GALGAS_" ;
                  result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue () ;
                  result << " inArgument" ;
                  result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 78)).stringValue () ;
                }else if (kBoolFalse == test_12) {
                  const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_4102.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 79)))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    result << "GALGAS_" ;
                    result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue () ;
                    result << " & ioArgument" ;
                    result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 80)).stringValue () ;
                  }else if (kBoolFalse == test_13) {
                    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_4102.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 81)))).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      result << "GALGAS_" ;
                      result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue () ;
                      result << " & outArgument" ;
                      result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 82)).stringValue () ;
                    }else if (kBoolFalse == test_14) {
                      result << "GALGAS_" ;
                      result << enumerator_4102.current_mGalgasTypeNameForGrammarAnalysis (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 84)).stringValue () ;
                      result << " inArgument" ;
                      result << index_4102_IDX.getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 84)).stringValue () ;
                    }
                  }
                }
                index_4102_IDX.increment () ;
                enumerator_4102.gotoNextObject () ;
              }
            }
            result << "\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n" ;
          }else if (kBoolFalse == test_6) {
          }
          index_1115_.increment () ;
          enumerator_1115.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, in_START_5F_SYMBOL_5F_NAME.objectCompare (enumerator_484.current_lkey (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 91)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        result << "//--- Indexing\n"
          "  public : static void performIndexing (" ;
        columnMarker = result.currentColumn () ;
        result << "C_Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const C_String & inSourceFilePath) ;\n"
          "\n"
          "//--- Only lexical analysis\n"
          "  public : static void performOnlyLexicalAnalysis (" ;
        columnMarker = result.currentColumn () ;
        result << "C_Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const C_String & inSourceFilePath) ;\n"
          "\n"
          "//--- Only syntax analysis\n"
          "  public : static void performOnlySyntaxAnalysis (" ;
        columnMarker = result.currentColumn () ;
        result << "C_Compiler * inCompiler,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const C_String & inSourceFilePath) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_15) {
      }
      index_484_.increment () ;
      enumerator_484.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5621_ (0) ;
  if (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_nonTerminalToAddList enumerator_5621 (in_ADDED_5F_NON_5F_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5621.hasCurrentObject ()) {
      result << "  public : virtual int32_t select_" ;
      result << enumerator_5621.current_mSyntaxComponentName (HERE).getter_identifierRepresentation (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 105)).stringValue () ;
      result << "_" ;
      result << enumerator_5621.current_mNonTerminalToAddCount (HERE).getter_string (SOURCE_FILE ("grammar-zone3-galgas3.h.galgasTemplate", 105)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) ;\n" ;
      if (enumerator_5621.hasNextObject ()) {
        result << "\n" ;
      }
      index_5621_.increment () ;
      enumerator_5621.gotoNextObject () ;
    }
  }
  result << "} ;\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Filewrapper 'grammarRulesInTexDocumentTemplate'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarRulesInTexDocumentTemplate (
  "",
  0,
  gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0,
  0,
  gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Filewrapper template 'grammarRulesInTexDocumentTemplate document'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (C_Compiler * /* inCompiler */,
                                                                              const GALGAS_string & in_DOCUMENT_5F_NAME,
                                                                              const GALGAS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "%!TEX encoding = UTF-8 Unicode\n"
    "\n"
    "\\documentclass[landscape]{book}\n"
    "\\usepackage[a3paper]{geometry}\n"
    "\n"
    "\\usepackage{verbatim}\n"
    "\n"
    "\\usepackage{hyperref}\n"
    "\n"
    "\\usepackage{tikz}\n"
    "\n"
    "\\usetikzlibrary{\n"
    "  arrows,\n"
    "  shapes.misc,% wg. rounded rectangle\n"
    "  shapes.arrows,%\n"
    "  matrix,%\n"
    "  scopes,%\n"
    "  shadows%\n"
    "}\n"
    "\n"
    "\\tikzset{\n"
    "  nonterminal/.style={\n"
    "    % The shape:\n"
    "    rectangle,\n"
    "    % The size:\n"
    "    minimum size=6mm,\n"
    "    % The border:\n"
    "    very thick,\n"
    "    draw=red!50!black!50,         % 50% red and 50% black,\n"
    "                                  % and that mixed with 50% white\n"
    "    % The filling:\n"
    "    top color=white,              % a shading that is white at the top...\n"
    "    bottom color=red!50!black!20, % and something else at the bottom\n"
    "    % Font\n"
    "    font=\\itshape\\small\n"
    "  },\n"
    "  terminal/.style={\n"
    "    % The shape:\n"
    "    rounded rectangle,\n"
    "    minimum size=6mm,\n"
    "    % The rest\n"
    "    very thick,draw=black!50,\n"
    "    top color=white,bottom color=black!20,\n"
    "    font=\\ttfamily\\small\n"
    "  },\n"
    "  firstPoint/.style={circle,>=stealth',thick,draw=black!50},\n"
    "  point/.style={coordinate,>=stealth',thick,draw=black!50},\n"
    "  tip/.style={->,shorten >=0.007pt},\n"
    "  lastPoint/.style={rectangle,>=stealth',thick,draw=black!50},\n"
    "  every join/.style={rounded corners}\n"
    "}\n"
    "\n"
    "\\newcommand\\nonTerminalSection[2]{\\section{Nonterminal \\texttt{#1}}\\label{nt:#2}}\n"
    "\\newcommand\\ruleSubsection[3]{\\subsection{Component \\texttt{#1}, in file \\texttt{#2}, line #3}}\n"
    "\\newcommand\\ruleMatrixColumnSeparation{3mm}\n"
    "\\newcommand\\ruleMatrixRowSeparation{3mm}\n"
    "\\newcommand\\nonTerminalSymbol[2]{\\hyperref[nt:#2]{#1}}\n"
    "\\newcommand\\startSymbol[2]{The start symbol is \\hyperref[nt:#2]{#1}.}\n"
    "\n"
    "\\newcommand\\nonTerminalSummaryStart{This is the alphabetical list of non terminal : }\n"
    "\\newcommand\\nonTerminalSummary[2]{\\hyperref[nt:#2]{#1}}\n"
    "\\newcommand\\nonTerminalSummarySeparator{, }\n"
    "\\newcommand\\nonTerminalSummaryEnd{.\\\\}\n"
    "\n"
    "\\begin{document}\n"
    "\n"
    "\\title{\\Huge{Grammar \\texttt{" ;
  result << in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME.stringValue () ;
  result << "}}}\n"
    "\\date \\today \n"
    "\n"
    "\\maketitle\n"
    "\n"
    "\\input{" ;
  result << in_DOCUMENT_5F_NAME.stringValue () ;
  result << ".tex}\n"
    "\n"
    "\\end{document}\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               Function 'escapeForTex'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string function_escapeForTex (const GALGAS_string & constinArgument_inString,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  cEnumerator_range enumerator_2654 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), constinArgument_inString.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 32)).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 32))), kENUMERATION_UP) ;
  while (enumerator_2654.hasCurrentObject ()) {
    GALGAS_char var_c_2667 = constinArgument_inString.getter_characterAtIndex (enumerator_2654.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 33)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (95)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result_result.plusAssign_operation(GALGAS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 35)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (123)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result_result.plusAssign_operation(GALGAS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 37)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (125)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result_result.plusAssign_operation(GALGAS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 39)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (38)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 41)) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (35)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                result_result.plusAssign_operation(GALGAS_string ("\\#"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 43)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (36)))).boolEnum () ;
                if (kBoolTrue == test_5) {
                  result_result.plusAssign_operation(GALGAS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 45)) ;
                }
              }
              if (kBoolFalse == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    result_result.plusAssign_operation(GALGAS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 47)) ;
                  }
                }
                if (kBoolFalse == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (37)))).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      result_result.plusAssign_operation(GALGAS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 49)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_8 = kBoolTrue ;
                    if (kBoolTrue == test_8) {
                      test_8 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (126)))).boolEnum () ;
                      if (kBoolTrue == test_8) {
                        result_result.plusAssign_operation(GALGAS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 51)) ;
                      }
                    }
                    if (kBoolFalse == test_8) {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = GALGAS_bool (kIsEqual, var_c_2667.objectCompare (GALGAS_char (TO_UNICODE (94)))).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          result_result.plusAssign_operation(GALGAS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 53)) ;
                        }
                      }
                      if (kBoolFalse == test_9) {
                        result_result.plusAssign_operation(var_c_2667.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 55)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_2654.gotoNextObject () ;
  }
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_escapeForTex [2] = {
  & kTypeDescriptor_GALGAS_string,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_escapeForTex (C_Compiler * inCompiler,
                                                             const cObjectArray & inEffectiveParameterArray,
                                                             const GALGAS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_escapeForTex (operand0,
                                inCompiler
                                COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_escapeForTex ("escapeForTex",
                                                              functionWithGenericHeader_escapeForTex,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              1,
                                                              functionArgs_escapeForTex) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'emitProductionRulesInTexFile'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_emitProductionRulesInTexFile (const GALGAS_string constinArgument_inProductDirectory,
                                           const GALGAS_string constinArgument_inGrammarComponentName,
                                           const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                           const GALGAS_syntaxComponentListForGrammarAnalysis constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                           const GALGAS_lstring constinArgument_inStartSymbol,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_texDocumentFilePath_3780 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 70)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 70)).add_operation (GALGAS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 70)) ;
  var_texDocumentFilePath_3780.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 71)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 71)) ;
  GALGAS_string var_document_3946 = GALGAS_string (filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (inCompiler, constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 74)) COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 72))) ;
  GALGAS_bool joker_4148 ; // Joker input parameter
  var_document_3946.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_3780, joker_4148, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 76)) ;
  GALGAS_string var_texFilePath_4168 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (GALGAS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)) ;
  GALGAS_string var_s_4244 = GALGAS_string::makeEmptyString () ;
  GALGAS_uint var_startSymbolIndex_4334 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4336 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_4334, joker_4336, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 79)) ;
  var_s_4244.plusAssign_operation(GALGAS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)).add_operation (var_startSymbolIndex_4334.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)).add_operation (GALGAS_string ("}\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 80)) ;
  var_s_4244.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4524 (constinArgument_inNonTerminalMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4524.hasCurrentObject ()) {
    var_s_4244.plusAssign_operation(GALGAS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_4524.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)).add_operation (enumerator_4524.current (HERE).getter_mNonTerminalIndex (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)) ;
    if (enumerator_4524.hasNextObject ()) {
      var_s_4244.plusAssign_operation(GALGAS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)) ;
    }
    enumerator_4524.gotoNextObject () ;
  }
  var_s_4244.plusAssign_operation(GALGAS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4786 (constinArgument_inNonTerminalMapForGrammarAnalysis, kENUMERATION_UP) ;
  while (enumerator_4786.hasCurrentObject ()) {
    var_s_4244.plusAssign_operation(GALGAS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_4786.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)).add_operation (enumerator_4786.current (HERE).getter_mNonTerminalIndex (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)).add_operation (GALGAS_string ("}\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)) ;
    cEnumerator_syntaxComponentListForGrammarAnalysis enumerator_4973 (constinArgument_inSyntaxComponentListForGrammarAnalysis, kENUMERATION_UP) ;
    while (enumerator_4973.hasCurrentObject ()) {
      cEnumerator_productionRuleListForGrammarAnalysis enumerator_5041 (enumerator_4973.current (HERE).getter_mProductionRulesList (HERE), kENUMERATION_UP) ;
      while (enumerator_5041.hasCurrentObject ()) {
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (kIsEqual, enumerator_5041.current (HERE).getter_mLeftNonterminalSymbol (HERE).getter_string (HERE).objectCompare (enumerator_4786.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 91)))).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extensionGetter_displayVertically (enumerator_5041.current (HERE).getter_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 92)).boolEnum () ;
              if (kBoolTrue == test_1) {
                extensionMethod_displayRuleVertically (enumerator_5041.current (HERE), enumerator_4973.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE), var_s_4244, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 93)) ;
              }
            }
            if (kBoolFalse == test_1) {
              extensionMethod_displayRule (enumerator_5041.current (HERE), enumerator_4973.current (HERE).getter_mSyntaxComponentName (HERE).getter_string (HERE), var_s_4244, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)) ;
            }
          }
        }
        enumerator_5041.gotoNextObject () ;
      }
      enumerator_4973.gotoNextObject () ;
    }
    enumerator_4786.gotoNextObject () ;
  }
  GALGAS_bool joker_5503 ; // Joker input parameter
  var_s_4244.method_writeToFileWhenDifferentContents (var_texFilePath_4168, joker_5503, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 101)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                                GALGAS_rowList & ioArgument_ioRowList,
                                                                                                const GALGAS_uint constinArgument_inRow,
                                                                                                GALGAS_uint & ioArgument_ioColumn,
                                                                                                GALGAS_string & ioArgument_ioCurrentNode,
                                                                                                GALGAS_string & ioArgument_ioArrowShape,
                                                                                                GALGAS_string & ioArgument_ioArrows,
                                                                                                GALGAS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                                const GALGAS_bool /* constinArgument_inDebug */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalInstructionForGrammarAnalysis * object = (const cPtr_terminalInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_terminalInstructionForGrammarAnalysis) ;
  GALGAS_string var_nodeName_12573 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (object->mProperty_mTerminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 320)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 320)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12573, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 319)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (var_nodeName_12573, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 325)) ;
  ioArgument_ioCurrentNode = var_nodeName_12573 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 328)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_terminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@nonTerminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                                   GALGAS_rowList & ioArgument_ioRowList,
                                                                                                   const GALGAS_uint constinArgument_inRow,
                                                                                                   GALGAS_uint & ioArgument_ioColumn,
                                                                                                   GALGAS_string & ioArgument_ioCurrentNode,
                                                                                                   GALGAS_string & ioArgument_ioArrowShape,
                                                                                                   GALGAS_string & ioArgument_ioArrows,
                                                                                                   GALGAS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                                   const GALGAS_bool /* constinArgument_inDebug */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonTerminalInstructionForGrammarAnalysis * object = (const cPtr_nonTerminalInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
  GALGAS_string var_nodeDefinition_13214 = GALGAS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (object->mProperty_mNonterminalSymbolName.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 343)).add_operation (GALGAS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 343)).add_operation (object->mProperty_mNonterminalSymbolIndex.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 344)).add_operation (GALGAS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 344)) ;
  GALGAS_string var_nodeName_13462 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, var_nodeDefinition_13214, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_13462, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 345)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (var_nodeName_13462, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 351)) ;
  ioArgument_ioCurrentNode = var_nodeName_13462 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_nonTerminalInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@selectInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                              GALGAS_rowList & ioArgument_ioRowList,
                                                                                              const GALGAS_uint constinArgument_inRow,
                                                                                              GALGAS_uint & ioArgument_ioColumn,
                                                                                              GALGAS_string & ioArgument_ioCurrentNode,
                                                                                              GALGAS_string & ioArgument_ioArrowShape,
                                                                                              GALGAS_string & ioArgument_ioArrows,
                                                                                              GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                              const GALGAS_bool constinArgument_inDebug,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGrammarAnalysis * object = (const cPtr_selectInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGrammarAnalysis) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_markerStartNodeName_14278 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SS").add_operation (object->mProperty_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 372)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 372)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 372)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_14278, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 371)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (var_markerStartNodeName_14278, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 377)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_14278 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 380)) ;
    }
  }
  GALGAS_string var_startNodeName_14613 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_14613, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 383)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 384)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_14666 = object->mProperty_mSelectBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_14767 ;
  {
  var_branches_14666.setter_popFirst (var_brancheZero_14767, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 387)) ;
  }
  GALGAS_uint var_branchZeroColumn_14791 = ioArgument_ioColumn ;
  GALGAS_uint var_maxUsedRowIndex_14824 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_14767, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_14791, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_14824, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 390)) ;
  GALGAS_uint var_endColumn_15079 = var_branchZeroColumn_14791 ;
  GALGAS_stringlist var_endingNodes_15154 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 402)) ;
  cEnumerator_branchListForGrammarAnalysis enumerator_15184 (var_branches_14666, kENUMERATION_UP) ;
  while (enumerator_15184.hasCurrentObject ()) {
    var_maxUsedRowIndex_14824.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 404)) ;
    GALGAS_uint var_branchColumn_15231 = ioArgument_ioColumn ;
    GALGAS_string var_currentNode_15262 = var_startNodeName_14613 ;
    GALGAS_string var_arrowStyle_15297 = GALGAS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_15184.current (HERE).getter_mSyntaxInstructionList (HERE), ioArgument_ioRowList, var_maxUsedRowIndex_14824, var_branchColumn_15231, var_currentNode_15262, var_arrowStyle_15297, ioArgument_ioArrows, var_maxUsedRowIndex_14824, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 408)) ;
    var_endingNodes_15154.addAssign_operation (var_currentNode_15262  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsStrictInf, var_endColumn_15079.objectCompare (var_branchColumn_15231)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_endColumn_15079 = var_branchColumn_15231 ;
      }
    }
    enumerator_15184.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_15079 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_14824)).boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_14824 ;
    }
  }
  GALGAS_string var_endNodeName_15933 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_15933, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 428)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)) ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (var_endNodeName_15933, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 431)) ;
  ioArgument_ioCurrentNode = var_endNodeName_15933 ;
  cEnumerator_stringlist enumerator_16146 (var_endingNodes_15154, kENUMERATION_UP) ;
  while (enumerator_16146.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_16146.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)).add_operation (var_endNodeName_15933, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 435)) ;
    enumerator_16146.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_markerEndNodeName_16443 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {SE").add_operation (object->mProperty_mSelectBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 440)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 440)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 440)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_16443, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 439)) ;
      }
      ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 445)) ;
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (var_markerEndNodeName_16443, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 446)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_16443 ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_selectInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@repeatInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                                                              GALGAS_rowList & ioArgument_ioRowList,
                                                                                              const GALGAS_uint constinArgument_inRow,
                                                                                              GALGAS_uint & ioArgument_ioColumn,
                                                                                              GALGAS_string & ioArgument_ioCurrentNode,
                                                                                              GALGAS_string & ioArgument_ioArrowShape,
                                                                                              GALGAS_string & ioArgument_ioArrows,
                                                                                              GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                              const GALGAS_bool constinArgument_inDebug,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGrammarAnalysis * object = (const cPtr_repeatInstructionForGrammarAnalysis *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGrammarAnalysis) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_markerStartNodeName_17269 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RS").add_operation (object->mProperty_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 466)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_17269, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 465)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (var_markerStartNodeName_17269, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 471)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_17269 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 474)) ;
    }
  }
  GALGAS_string var_returnNodeName_17606 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_17606, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 477)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 478)) ;
  GALGAS_branchListForGrammarAnalysis var_branches_17659 = object->mProperty_mRepeatBranchList ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_brancheZero_17760 ;
  {
  var_branches_17659.setter_popFirst (var_brancheZero_17760, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 481)) ;
  }
  GALGAS_uint var_maxUsedRowIndex_17783 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_17760, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_17783, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 483)) ;
  GALGAS_uint var_endColumn_18030 = ioArgument_ioColumn ;
  GALGAS_string var_startNodeName_18174 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_18174, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 495)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 496)) ;
  GALGAS_bool var_oneEmptyBranch_18275 = GALGAS_bool (kIsEqual, var_branches_17659.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 498)).objectCompare (GALGAS_uint ((uint32_t) 1U))) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_oneEmptyBranch_18275.boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_syntaxInstructionListForGrammarAnalysis var_firstBranch_18362 ;
      var_branches_17659.method_first (var_firstBranch_18362, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 500)) ;
      var_oneEmptyBranch_18275 = GALGAS_bool (kIsEqual, var_firstBranch_18362.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 501)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    }
  }
  GALGAS_stringlist var_endingNodes_18462 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 504)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_oneEmptyBranch_18275.boolEnum () ;
    if (kBoolTrue == test_2) {
      var_endingNodes_18462.addAssign_operation (var_startNodeName_18174  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 506)) ;
    }
  }
  if (kBoolFalse == test_2) {
    GALGAS_uint var_nextBranchUsedRowIndex_18564 = constinArgument_inRow ;
    cEnumerator_branchListForGrammarAnalysis enumerator_18599 (var_branches_17659, kENUMERATION_UP) ;
    while (enumerator_18599.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_18564.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 510)) ;
      GALGAS_uint var_branchColumn_18657 = ioArgument_ioColumn ;
      GALGAS_string var_currentNode_18690 = var_startNodeName_18174 ;
      GALGAS_string var_arrowStyle_18727 = GALGAS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_18599.current (HERE).getter_mSyntaxInstructionList (HERE), ioArgument_ioRowList, var_nextBranchUsedRowIndex_18564, var_branchColumn_18657, var_currentNode_18690, var_arrowStyle_18727, ioArgument_ioArrows, var_nextBranchUsedRowIndex_18564, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 514)) ;
      var_endingNodes_18462.addAssign_operation (var_currentNode_18690  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 524)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsStrictInf, var_endColumn_18030.objectCompare (var_branchColumn_18657)).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_endColumn_18030 = var_branchColumn_18657 ;
        }
      }
      enumerator_18599.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_18030 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_18564 ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictInf, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_17783)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_17783 ;
    }
  }
  ioArgument_ioMaxUsedRowIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 536)) ;
  GALGAS_string var_returnUpperNodeName_19568 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_19568, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 538)) ;
  }
  ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 539)) ;
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_19568, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)).add_operation (var_returnNodeName_17606, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 540)) ;
  cEnumerator_stringlist enumerator_19725 (var_endingNodes_18462, kENUMERATION_UP) ;
  while (enumerator_19725.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (enumerator_19725.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)).add_operation (GALGAS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)).add_operation (var_returnUpperNodeName_19568, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 543)) ;
    enumerator_19725.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inDebug.boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_markerEndNodeName_20030 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[nonterminal] {RE").add_operation (object->mProperty_mRepeatBranchList.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 548)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 548)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 548)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_20030, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 547)) ;
      }
      ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 553)) ;
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (var_markerEndNodeName_20030, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 554)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_20030 ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  enterExtensionMethod_tikzNodeForSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis.mSlotID,
                                                     extensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (defineExtensionMethod_repeatInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension getter '@terminalInstructionForGrammarAnalysis isLinear'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_terminalInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_terminalInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_terminalInstructionForGrammarAnalysis_isLinear) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_terminalInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_terminalInstructionForGrammarAnalysis_isLinear, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension getter '@nonTerminalInstructionForGrammarAnalysis isLinear'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_nonTerminalInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_nonTerminalInstructionForGrammarAnalysis_isLinear, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@selectInstructionForGrammarAnalysis isLinear'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_selectInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_selectInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_selectInstructionForGrammarAnalysis_isLinear) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_selectInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_selectInstructionForGrammarAnalysis_isLinear, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension getter '@repeatInstructionForGrammarAnalysis isLinear'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_bool extensionGetter_repeatInstructionForGrammarAnalysis_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_repeatInstructionForGrammarAnalysis_isLinear (void) {
  enterExtensionGetter_isLinear (kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis.mSlotID,
                                 extensionGetter_repeatInstructionForGrammarAnalysis_isLinear) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_repeatInstructionForGrammarAnalysis_isLinear (defineExtensionGetter_repeatInstructionForGrammarAnalysis_isLinear, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Filewrapper 'programFileGenerationTemplate'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_programFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_programFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_programFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_programFileGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Filewrapper template 'programFileGenerationTemplate programFileImplementation'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & /* in_COMPONENT_5F_NAME */,
                                                                                           const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                           const GALGAS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                           const GALGAS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                           const GALGAS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"project_header.h\"\n"
    "#include \"command_line_interface/F_mainForLIBPM.h\"\n"
    "#include \"command_line_interface/F_Analyze_CLI_Options.h\"\n"
    "#include \"utilities/F_DisplayException.h\"\n"
    "#include \"galgas2/C_galgas_CLI_Options.h\"\n"
    "#include \"galgas2/F_verbose_output.h\"\n"
    "#include \"galgas2/cLexiqueIntrospection.h\"\n"
    "#include \"command_line_interface/C_builtin_CLI_Options.h\"\n" ;
  GALGAS_uint index_397_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_397 (in_IMPORTED_5F_COMPONENT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_397.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_397.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_397_.increment () ;
      enumerator_397.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                      print_tool_help_message                                                                        *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "static void print_tool_help_message (void) {\n"
    "  co << \"Compiled with GALGAS revision NUMERO_REVISION_GALGAS\\n\" ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "static const char * kSourceFileExtensions [] = {\n" ;
  GALGAS_uint index_1361_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1361 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1361.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1361.current_mSourceFileExtension (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 27)).stringValue () ;
      result << ",\n" ;
      index_1361_.increment () ;
      enumerator_1361.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;    \n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "static const char * kSourceFileHelpMessages [] = {\n" ;
  GALGAS_uint index_1642_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_1642 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1642.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1642.current_mSourceFileHelp (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n" ;
      index_1642_.increment () ;
      enumerator_1642.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;    \n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "const char * projectVersionString (void) {\n"
    "  return " ;
  result << in_PROJECT_5F_VERSION_5F_STRING.getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 45)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n" ;
  result << in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING.stringValue () ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                      M A I N    F O R    L I B P M                                                                  *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "int mainForLIBPM (int inArgc, const char * inArgv []) {\n"
    "//--- Analyze Command Line Options\n"
    "  TC_UniqueArray <C_String> sourceFilesArray ;\n"
    "  F_Analyze_CLI_Options (inArgc, inArgv,\n"
    "                         sourceFilesArray,\n"
    "                         kSourceFileExtensions,\n"
    "                         kSourceFileHelpMessages,\n"
    "                         print_tool_help_message) ;\n"
    "//---\n"
    "  int returnCode = 0 ; // No error\n"
    "//--- Set Execution mode\n"
    "  C_String executionModeOptionErrorMessage ;\n"
    "  setExecutionMode (executionModeOptionErrorMessage) ;\n"
    "  if (executionModeOptionErrorMessage.length () > 0) {\n"
    "    co << executionModeOptionErrorMessage ;\n"
    "    returnCode = 1 ;\n"
    "  }else{\n"
    "  //--- Common lexique object\n"
    "    C_Compiler * commonCompiler = NULL ;\n"
    "    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;\n"
    "    try{\n"
    "      routine_before (commonCompiler COMMA_HERE) ;\n"
    "      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;\n"
    "      const bool verboseOptionOn = verboseOutput () ;\n"
    "      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {\n"
    "        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n"
    "        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;\n"
    "        const GALGAS_location location = commonCompiler->here () ;\n"
    "        const GALGAS_lstring sourceFilePath (sfp, location) ;\n"
    "        int r = 0 ;\n"
    "        " ;
  GALGAS_uint index_4035_IDX (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    cEnumerator_programRuleList enumerator_4035 (in_PROGRAM_5F_RULE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4035.hasCurrentObject ()) {
      result << "if (fileExtension == " ;
      result << enumerator_4035.current_mSourceFileExtension (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 88)).stringValue () ;
      result << ") {\n" ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_4035.current_mReferenceGrammar (HERE).getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 89)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "          switch (executionMode ()) {\n"
          "          case kExecutionModeNormal :\n"
          "            routine_" ;
        result << GALGAS_string ("programRule_").add_operation (index_4035_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 92)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 92)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 92)).stringValue () ;
        result << " (sourceFilePath, commonCompiler COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeLexicalAnalysisOnly :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=lexical-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeSyntaxAnalysisOnly :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=syntax-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeIndexing :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=indexing\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeLatex :\n"
          "            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=latex\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n"
          "            break ;\n"
          "          }\n" ;
      }else if (kBoolFalse == test_0) {
        result << "          switch (executionMode ()) {\n"
          "          case kExecutionModeNormal :\n"
          "            routine_" ;
        result << GALGAS_string ("programRule_").add_operation (index_4035_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 110)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 110)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 110)).stringValue () ;
        result << " (sourceFilePath, commonCompiler COMMA_HERE) ;\n"
          "            break ;\n"
          "          case kExecutionModeLexicalAnalysisOnly :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 113)).stringValue () ;
        result << "::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          case kExecutionModeSyntaxAnalysisOnly :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 116)).stringValue () ;
        result << "::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          case kExecutionModeIndexing :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 119)).stringValue () ;
        result << "::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          case kExecutionModeLatex :\n"
          "            cGrammar_" ;
        result << enumerator_4035.current_mReferenceGrammar (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 122)).stringValue () ;
        result << "::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n"
          "            break ;\n"
          "          }\n" ;
      }
      if (enumerator_4035.hasNextObject ()) {
        result << "        }else " ;
      }
      index_4035_IDX.increment () ;
      enumerator_4035.gotoNextObject () ;
    }
  }
  result << "        }else{\n"
    "          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;\n"
    "          r = 1 ;\n"
    "        }\n"
    "        if (r != 0) {\n"
    "          returnCode = r ;\n"
    "        }\n"
    "      }\n"
    "    //--- Error or warnings \?\n"
    "      if (totalErrorCount () > 0) {\n"
    "        returnCode = 1 ; // Error code\n"
    "      }else if (totalWarningCount () > 0) {\n"
    "        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {\n"
    "          returnCode = 1 ; // Error code\n"
    "          if (verboseOptionOn) {\n"
    "            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n"
    "          }\n"
    "        }\n"
    "      }\n"
    "    //--- Epilogue\n"
    "      routine_after (commonCompiler COMMA_HERE) ;\n"
    "    //--- Emit JSON issue file \?\n"
    "      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != \"\") {\n"
    "        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;\n"
    "      }\n"
    "    //--- Display error and warnings count\n"
    "      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {\n"
    "        C_String message ;\n"
    "        if (totalWarningCount () == 0) {\n"
    "          message << \"No warning\" ;\n"
    "        }else if (totalWarningCount () == 1) {\n"
    "          message << \"1 warning\" ;\n"
    "        }else{\n"
    "          message << cStringWithSigned (totalWarningCount ()) << \" warnings\" ;\n"
    "        }\n"
    "        message << \", \" ;\n"
    "        if (totalErrorCount () == 0) {\n"
    "          message << \"no error\" ;\n"
    "        }else if (totalErrorCount () == 1) {\n"
    "          message << \"1 error\" ;\n"
    "        }else{\n"
    "          message << cStringWithSigned (totalErrorCount ()) << \" errors\" ;\n"
    "        }\n"
    "        message << \".\\n\" ;\n"
    "        ggs_printMessage (message COMMA_HERE) ;\n"
    "      }\n"
    "    }catch (const ::std:: exception & e) {\n"
    "      F_default_display_exception (e) ;\n"
    "      returnCode = 1 ; // Error code\n"
    "    }catch (...) {\n"
    "      printf (\"**** Unknow exception ****\\n\") ;\n"
    "      throw ;\n"
    "    }\n"
    "    macroDetachSharedObject (commonCompiler) ;\n"
    "  }\n"
    "  return returnCode ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'compileBeforeClauseGalgas3'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_compileBeforeClauseGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                            const GALGAS_prologueEpilogueList constinArgument_inPrologueList,
                                            GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_3789 = function_beforeNameForUsefulEntitiesGraph (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 51)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_3789, var_usefulnessName_3789, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 52)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_3789  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 53)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_4021 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 55)) ;
  cEnumerator_prologueEpilogueList enumerator_4098 (constinArgument_inPrologueList, kENUMERATION_UP) ;
  while (enumerator_4098.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_4620 ;
    {
    GALGAS_formalParameterListForGeneration joker_4628 ; // Joker input parameter
    routine_analyzeRoutineBody (var_usefulnessName_3789, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 61)), GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 62)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 63)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 64)), GALGAS_string::makeEmptyString (), enumerator_4098.current_mInstructionList (HERE), enumerator_4098.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_4620, joker_4628, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 57)) ;
    }
    var_semanticInstructionListForGeneration_4021.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::constructor_new (var_blockSemanticInstructionListForGeneration_4620  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 71))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 71)) ;
    enumerator_4098.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-before"), GALGAS_string ("before"), GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 80)), GALGAS_bool (true), var_semanticInstructionListForGeneration_4021  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 76))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 75)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'compileProgramRulesGalgas3'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_compileProgramRulesGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                            const GALGAS_programRuleList constinArgument_inProgramRules,
                                            GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_ruleIndex_5984 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_programRuleList enumerator_6015 (constinArgument_inProgramRules, kENUMERATION_UP) ;
  while (enumerator_6015.hasCurrentObject ()) {
    GALGAS_lstring var_usefulnessName_6041 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_6015.current_mSourceFileExtension (HERE), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 101)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6041, var_usefulnessName_6041, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 102)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_6041  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 103)) ;
    GALGAS_formalParameterListAST temp_0 = GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 109)) ;
    temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas", 105)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas", 106)), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 107))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 107)), enumerator_6015.current_mSourceFileVariableName (HERE), enumerator_6015.current_mSourceFileVariableNameIsUnused (HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 109)) ;
    GALGAS_formalParameterListAST var_argumentList_6265 = temp_0 ;
    GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6550 ;
    GALGAS_formalParameterListForGeneration var_routineSignature_6605 ;
    {
    routine_analyzeRoutineBody (var_usefulnessName_6041, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_argumentList_6265, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 118)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 119)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 120)), GALGAS_string::makeEmptyString (), enumerator_6015.current_mInstructionList (HERE), enumerator_6015.current_mEndOfInstructionList (HERE), var_semanticInstructionListForGeneration_6550, var_routineSignature_6605, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 113)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-programrule"), GALGAS_string ("programRule_").add_operation (var_ruleIndex_5984.getter_string (SOURCE_FILE ("programComponentCompilation.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 131)), var_routineSignature_6605, GALGAS_bool (true), var_semanticInstructionListForGeneration_6550  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 128))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 127)) ;
    var_ruleIndex_5984.increment_operation (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 135)) ;
    enumerator_6015.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'compileAfterClauseGalgas3'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_compileAfterClauseGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_prologueEpilogueList constinArgument_inEpilogueList,
                                           GALGAS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_usefulnessName_8288 = function_afterNameForUsefulEntitiesGraph (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 152)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_8288, var_usefulnessName_8288, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 153)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_usefulnessName_8288  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 154)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8552 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 156)) ;
  cEnumerator_prologueEpilogueList enumerator_8584 (constinArgument_inEpilogueList, kENUMERATION_UP) ;
  while (enumerator_8584.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_9106 ;
    {
    GALGAS_formalParameterListForGeneration joker_9114 ; // Joker input parameter
    routine_analyzeRoutineBody (var_usefulnessName_8288, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_formalParameterListAST::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 162)), GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 163)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 164)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 165)), GALGAS_string::makeEmptyString (), enumerator_8584.current_mInstructionList (HERE), enumerator_8584.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_9106, joker_9114, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 158)) ;
    }
    var_semanticInstructionListForGeneration_8552.addAssign_operation (GALGAS_semanticBlockInstructionForGeneration::constructor_new (var_blockSemanticInstructionListForGeneration_9106  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 172))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 172)) ;
    enumerator_8584.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssign_operation (GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("proc-after"), GALGAS_string ("after"), GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 179)), GALGAS_bool (true), var_semanticInstructionListForGeneration_8552  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 175))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 175)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'compileProgramComponentGalgas3'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_compileProgramComponentGalgas_33_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                const GALGAS_prologueEpilogueList constinArgument_inPrologueList,
                                                const GALGAS_programRuleList constinArgument_inProgramRules,
                                                const GALGAS_prologueEpilogueList constinArgument_inEpilogueList,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_string constinArgument_inProjectVersionString,
                                                GALGAS_programComponentForGeneration & outArgument_outProgramComponentForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProgramComponentForGeneration.drop () ; // Release 'out' argument
  GALGAS_analysisContext var_analysisContext_10588 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, function_buildPredefinedTypes (constinArgument_inSemanticContext, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 204)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("programComponentCompilation.galgas", 205)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("programComponentCompilation.galgas", 207))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 202)) ;
  GALGAS_programListForGeneration var_decoratedDeclarationListForGeneration_10860 = GALGAS_programListForGeneration::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 210)) ;
  {
  routine_compileBeforeClauseGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10588, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_10860, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 211)) ;
  }
  {
  routine_compileAfterClauseGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10588, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_10860, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 219)) ;
  }
  {
  routine_compileProgramRulesGalgas_33_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_10588, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_10860, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 227)) ;
  }
  GALGAS_stringset var_inclusionSet_11528 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("programComponentCompilation.galgas", 235)) ;
  GALGAS_string var_beforeAfterRulesString_11562 = GALGAS_string::makeEmptyString () ;
  cEnumerator_programListForGeneration enumerator_11617 (var_decoratedDeclarationListForGeneration_10860, kENUMERATION_UP) ;
  while (enumerator_11617.hasCurrentObject ()) {
    var_beforeAfterRulesString_11562.plusAssign_operation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_11617.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 238)) ;
    GALGAS_string var_code_11805 ;
    callExtensionMethod_appendSpecificImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_11617.current_mDeclaration (HERE).ptr (), constinArgument_inSemanticContext.getter_mTypeMap (HERE), var_inclusionSet_11528, var_code_11805, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 239)) ;
    var_beforeAfterRulesString_11562.plusAssign_operation(var_code_11805, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 240)) ;
    enumerator_11617.gotoNextObject () ;
  }
  cEnumerator_programRuleList enumerator_11874 (constinArgument_inProgramRules, kENUMERATION_UP) ;
  while (enumerator_11874.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, enumerator_11874.current_mReferenceGrammar (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_inclusionSet_11528.addAssign_operation (GALGAS_string ("grammar-").add_operation (enumerator_11874.current_mReferenceGrammar (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 244))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 244)) ;
      }
    }
    enumerator_11874.gotoNextObject () ;
  }
  GALGAS_string var_cppContents_12031 = GALGAS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GALGAS_string ("program"), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("programComponentCompilation.galgas", 249)), var_beforeAfterRulesString_11562, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 247))) ;
  outArgument_outProgramComponentForGeneration = GALGAS_programComponentForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("program"), var_inclusionSet_11528, var_cppContents_12031  COMMA_SOURCE_FILE ("programComponentCompilation.galgas", 255)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'parseAndAnalyzeProject'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_parseAndAnalyzeProject (const GALGAS_lstring constinArgument_inProjectSourceFile,
                                     const GALGAS_string constinArgument_inSourceToAnalyze,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas_prgm.galgas", 122)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** Parsing project files\n")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 123)) ;
    }
  }
  GALGAS_galgas_33_ProjectComponentAST var_projectComponentAST_7270 ;
  var_projectComponentAST_7270.drop () ;
  cGrammar_galgas_33_ProjectGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inProjectSourceFile, var_projectComponentAST_7270  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 125)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_string (gOption_galgas_5F_builtin_5F_options_mode.getter_value ()).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_compileProject (constinArgument_inProjectSourceFile, constinArgument_inSourceToAnalyze, var_projectComponentAST_7270, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 127)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 129)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_string var_cppCompilationTarget_7476 = GALGAS_string (gOption_galgas_5F_cli_5F_options_cppCompile.getter_value ()) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, var_cppCompilationTarget_7476.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas_prgm.galgas", 132)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  inCompiler->printMessage (GALGAS_string ("*** Perform C++ compilation\n")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 133)) ;
                }
              }
              GALGAS_string var_buildFile_7691 = constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 135)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 135)).add_operation (var_cppCompilationTarget_7476, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 135)).add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 135)) ;
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_buildFile_7691.getter_fileExists (SOURCE_FILE ("galgas_prgm.galgas", 136)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  GALGAS_sint var_resultCode_7856 = GALGAS_string ("python ").add_operation (var_buildFile_7691, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 137)).getter_system (SOURCE_FILE ("galgas_prgm.galgas", 137)) ;
                  enumGalgasBool test_6 = kBoolTrue ;
                  if (kBoolTrue == test_6) {
                    test_6 = GALGAS_bool (kIsNotEqual, var_resultCode_7856.objectCompare (GALGAS_sint ((int32_t) 0L))).boolEnum () ;
                    if (kBoolTrue == test_6) {
                      TC_Array <C_FixItDescription> fixItArray7 ;
                      inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas_prgm.galgas", 139)).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 139)), GALGAS_string ("Running '").add_operation (var_buildFile_7691, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)).add_operation (GALGAS_string ("' returns "), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)).add_operation (var_resultCode_7856.getter_string (SOURCE_FILE ("galgas_prgm.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)), fixItArray7  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 139)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_5) {
                TC_Array <C_FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgas_prgm.galgas", 142)).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 142)), GALGAS_string ("Cannot perform C++ compilation of '").add_operation (var_cppCompilationTarget_7476, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 142)).add_operation (GALGAS_string ("' : the '"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 142)).add_operation (var_buildFile_7691, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 143)).add_operation (GALGAS_string ("' file does not exist"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 143)), fixItArray8  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 142)) ;
              }
            }
          }
        }
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'compileProject'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_compileProject (const GALGAS_lstring constinArgument_inProjectSourceFile,
                             const GALGAS_string constinArgument_inSourceToAnalyze,
                             const GALGAS_galgas_33_ProjectComponentAST constinArgument_inProjectComponentAST,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgas_33_DeclarationAST var_declarationAST_8549 = GALGAS_galgas_33_DeclarationAST::constructor_default (SOURCE_FILE ("galgas_prgm.galgas", 157)) ;
  cEnumerator_lstringlist enumerator_8613 (constinArgument_inProjectComponentAST.getter_mProjectSourceList (HERE), kENUMERATION_UP) ;
  while (enumerator_8613.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_8613.current_mValue (HERE).getter_string (HERE).getter_pathExtension (SOURCE_FILE ("galgas_prgm.galgas", 159)).objectCompare (GALGAS_string ("galgas"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteSourcePath_8692 = enumerator_8613.current_mValue (HERE).getter_string (HERE).getter_absolutePathFromPath (constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 160)) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 160)) ;
        cGrammar_galgas_33_Grammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteSourcePath_8692, enumerator_8613.current_mValue (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 161)), var_declarationAST_8549  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 161)) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_8613.current_mValue (HERE).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 163)), GALGAS_string ("only \".galgas\" extension is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 163)) ;
    }
    enumerator_8613.gotoNextObject () ;
  }
  GALGAS_stringlist var_handCodedLinkAppFileList_9069 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 167)) ;
  GALGAS_stringlist var_handCodedSourceAppFileList_9115 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 168)) ;
  GALGAS_stringlist var_handCodedSourceToolFileList_9162 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 169)) ;
  GALGAS_stringlist var_frameworkToolFileList_9203 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 170)) ;
  GALGAS_stringset var_handCodedSourceDirectorySet_9249 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 171)) ;
  cEnumerator_galgas_33_QualifiedFeatureList enumerator_9310 (constinArgument_inProjectComponentAST.getter_mQualifiedFeatureList (HERE), kENUMERATION_UP) ;
  while (enumerator_9310.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, GALGAS_string ("tool-source").objectCompare (enumerator_9310.current_mFeatureName (HERE).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 173)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_handCodedSourceToolFileList_9162.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 174)) ;
        GALGAS_string var_directory_9434 = enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 175)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, var_directory_9434.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 177)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, var_directory_9434.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 178)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_9434, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 179))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 179)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_handCodedSourceDirectorySet_9249.addAssign_operation (var_directory_9434  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 181)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("tool-framework"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_frameworkToolFileList_9203.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 184))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 184)) ;
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("app-source"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            var_handCodedSourceAppFileList_9115.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 186)) ;
            GALGAS_string var_directory_9997 = enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 187)) ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = GALGAS_bool (kIsEqual, var_directory_9997.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 189)) ;
              }
            }
            if (kBoolFalse == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsNotEqual, var_directory_9997.getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 190)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_handCodedSourceDirectorySet_9249.addAssign_operation (GALGAS_string ("../").add_operation (var_directory_9997, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 191))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 191)) ;
                }
              }
              if (kBoolFalse == test_8) {
                var_handCodedSourceDirectorySet_9249.addAssign_operation (var_directory_9997  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 193)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("app-link"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_handCodedLinkAppFileList_9069.addAssign_operation (enumerator_9310.current_mFeatureValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 196)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("libpmAtPath"))).boolEnum () ;
              if (kBoolTrue == test_10) {
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("applicationBundleBase"))).boolEnum () ;
                if (kBoolTrue == test_11) {
                }
              }
              if (kBoolFalse == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (kIsEqual, enumerator_9310.current_mFeatureName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("macCodeSign"))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                  }
                }
                if (kBoolFalse == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_9310.current_mFeatureName (HERE).getter_location (SOURCE_FILE ("galgas_prgm.galgas", 201)), GALGAS_string ("unknown feature"), fixItArray13  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 201)) ;
                }
              }
            }
          }
        }
      }
    }
    enumerator_9310.gotoNextObject () ;
  }
  {
  routine_groupSyntaxComponentsGalgas_33_ (var_declarationAST_8549.getter_mSyntaxComponentList (HERE), var_declarationAST_8549.getter_mSyntaxExtensions (HERE), var_declarationAST_8549.mProperty_mDeclarationList, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 217)) ;
  }
  GALGAS_usefulEntitiesGraph var_usefulEntitiesGraph_11927 = GALGAS_usefulEntitiesGraph::constructor_emptyGraph (SOURCE_FILE ("galgas_prgm.galgas", 223)) ;
  GALGAS_lstringlist var_usefulnessRootEntities_11979 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 224)) ;
  GALGAS_string var_buildDirectory_12005 = constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 225)).add_operation (GALGAS_string ("/build"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 225)) ;
  GALGAS_string var_productDirectory_12097 = var_buildDirectory_12005.add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 226)) ;
  GALGAS_stringlist var_appProductFileList_12159 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 227)) ;
  GALGAS_semanticContext var_semanticContext_12199 = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("galgas_prgm.galgas", 228)) ;
  GALGAS_semanticDeclarationListForGeneration var_semanticDeclarationSortedListForGeneration_12293 ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 230)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      {
      routine_compileSemanticDeclarationsGalgas_33_ (var_usefulnessRootEntities_11979, var_usefulEntitiesGraph_11927, var_productDirectory_12097, constinArgument_inProjectComponentAST.getter_mEndOfSourceFile (HERE), var_declarationAST_8549.getter_mDeclarationList (HERE), var_semanticContext_12199, var_semanticDeclarationSortedListForGeneration_12293, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 231)) ;
      }
    }
  }
  if (kBoolFalse == test_14) {
    var_semanticDeclarationSortedListForGeneration_12293 = GALGAS_semanticDeclarationListForGeneration::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 241)) ;
  }
  GALGAS_optionComponentMapForGeneration var_optionComponentMapForGeneration_12804 ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 245)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      routine_compileAllGuiComponentFromASTGalgas_33_ (var_declarationAST_8549.getter_mGUIComponentList (HERE), var_semanticContext_12199, var_optionComponentMapForGeneration_12804, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 246)) ;
      }
    }
  }
  if (kBoolFalse == test_15) {
    var_optionComponentMapForGeneration_12804 = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("galgas_prgm.galgas", 252)) ;
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 255)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_string var_projectVersionString_13167 = constinArgument_inProjectComponentAST.getter_mMajorVersion (HERE).getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 256)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 256)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 256)).add_operation (constinArgument_inProjectComponentAST.getter_mMinorVersion (HERE).getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 257)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 257)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 257)).add_operation (constinArgument_inProjectComponentAST.getter_mRevisionVersion (HERE).getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 258)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 258)) ;
      GALGAS_programComponentForGeneration var_programComponentForGeneration_13689 ;
      {
      routine_compileProgramComponentGalgas_33_ (var_usefulnessRootEntities_11979, var_usefulEntitiesGraph_11927, var_declarationAST_8549.getter_mPrologueDeclarationList (HERE), var_declarationAST_8549.getter_mSourceRuleList (HERE), var_declarationAST_8549.getter_mEpilogueDeclarationList (HERE), var_semanticContext_12199, var_projectVersionString_13167, var_programComponentForGeneration_13689, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 259)) ;
      }
      var_semanticDeclarationSortedListForGeneration_12293.addAssign_operation (GALGAS_string ("zprogram"), var_programComponentForGeneration_13689  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 269)) ;
    }
  }
  {
  routine_checkUsefulEntities (var_usefulEntitiesGraph_11927, var_usefulnessRootEntities_11979, var_productDirectory_12097, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 275)) ;
  }
  GALGAS_string var_typeDumpFilePath_14056 = constinArgument_inProjectSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 277)).add_operation (GALGAS_string ("/build/helpers/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 277)).add_operation (constinArgument_inProjectSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 278)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 278)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLTypeListFile.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_stringset var_firstLetterSet_14293 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 280)) ;
      cEnumerator_unifiedTypeMap enumerator_14337 (var_semanticContext_12199.getter_mTypeMap (HERE), kENUMERATION_UP) ;
      while (enumerator_14337.hasCurrentObject ()) {
        var_firstLetterSet_14293.addAssign_operation (enumerator_14337.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 282)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 282))  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 282)) ;
        enumerator_14337.gotoNextObject () ;
      }
      GALGAS_string var_tableOfTypeString_14445 = GALGAS_string::makeEmptyString () ;
      GALGAS_char var_currentFirstLetter_14479 = GALGAS_char (TO_UNICODE (32)) ;
      cEnumerator_unifiedTypeMap enumerator_14530 (var_semanticContext_12199.getter_mTypeMap (HERE), kENUMERATION_UP) ;
      while (enumerator_14530.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsNotEqual, var_currentFirstLetter_14479.objectCompare (enumerator_14530.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 287)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            var_currentFirstLetter_14479 = enumerator_14530.current_lkey (HERE).getter_string (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 288)) ;
            var_tableOfTypeString_14445.plusAssign_operation(GALGAS_string ("<br><a name=\"").add_operation (var_currentFirstLetter_14479.getter_uint (SOURCE_FILE ("galgas_prgm.galgas", 289)).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)).add_operation (GALGAS_string ("\"><b>"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)).add_operation (var_currentFirstLetter_14479.getter_string (SOURCE_FILE ("galgas_prgm.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)).add_operation (GALGAS_string ("</b></a><br>"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 289)) ;
          }
        }
        var_tableOfTypeString_14445.plusAssign_operation(function_linkForType (enumerator_14530.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 291)).add_operation (GALGAS_string ("<br>"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 291)) ;
        enumerator_14530.gotoNextObject () ;
      }
      GALGAS_string var_typeDumpString_14908 = GALGAS_string (filewrapperTemplate_typeDumpGenerationTemplate_typeDump (inCompiler, constinArgument_inProjectSourceFile.getter_string (HERE).getter_lastPathComponent (SOURCE_FILE ("galgas_prgm.galgas", 294)), var_semanticContext_12199.getter_mTypeMap (HERE), var_firstLetterSet_14293, var_tableOfTypeString_14445 COMMA_SOURCE_FILE ("galgas_prgm.galgas", 293))) ;
      GALGAS_bool joker_15164 ; // Joker input parameter
      var_typeDumpString_14908.method_writeToFileWhenDifferentContents (var_typeDumpFilePath_14056, joker_15164, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 299)) ;
    }
  }
  if (kBoolFalse == test_17) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_typeDumpFilePath_14056, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 301)) ;
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 304)))).operator_and (GALGAS_bool (kIsEqual, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 304)).boolEnum () ;
    if (kBoolTrue == test_19) {
      {
      routine_performGalgas_33_ProjectGlobalCheckings (var_semanticContext_12199, var_declarationAST_8549.getter_mDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 305)) ;
      }
    }
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 311)))).operator_and (GALGAS_bool (kIsEqual, constinArgument_inSourceToAnalyze.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_20) {
      {
      routine_projectGeneration (var_semanticContext_12199.getter_mTypeMap (HERE), var_buildDirectory_12005, var_optionComponentMapForGeneration_12804, var_appProductFileList_12159, var_semanticDeclarationSortedListForGeneration_12293, var_declarationAST_8549.getter_mSourceRuleList (HERE), constinArgument_inProjectComponentAST, constinArgument_inProjectSourceFile.getter_string (HERE), var_handCodedSourceDirectorySet_9249, var_handCodedSourceToolFileList_9162, var_frameworkToolFileList_9203, var_handCodedSourceAppFileList_9115, var_handCodedLinkAppFileList_9069, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 312)) ;
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             Routine 'projectGeneration'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_projectGeneration (const GALGAS_unifiedTypeMap constinArgument_inTypeMap,
                                const GALGAS_string constinArgument_inBuildDirectory,
                                const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                const GALGAS_stringlist constinArgument_inAppProductFileList,
                                const GALGAS_semanticDeclarationListForGeneration constinArgument_inSemanticDeclarationSortedListForGeneration,
                                const GALGAS_programRuleList constinArgument_inSourceRuleList,
                                const GALGAS_galgas_33_ProjectComponentAST constinArgument_inProjectComponentAST,
                                const GALGAS_string constinArgument_inProjectSourceFile,
                                const GALGAS_stringset constinArgument_inHandCodedSourceDirectorySet,
                                const GALGAS_stringlist constinArgument_inHandCodedSourceToolFileList,
                                const GALGAS_stringlist constinArgument_inFrameworkToolFileList,
                                const GALGAS_stringlist constinArgument_inHandCodedSourceAppFileList,
                                const GALGAS_stringlist constinArgument_inHandCodedLinkAppFileList,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_appProductFileList_17358 = constinArgument_inAppProductFileList ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("galgas_prgm.galgas", 353)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** Generating files\n")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 354)) ;
    }
  }
  GALGAS_stringset var_allProductFileSet_17544 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 356)) ;
  GALGAS_string var_userHeadersDir_17650 = constinArgument_inBuildDirectory.add_operation (GALGAS_string ("/user-headers"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 358)) ;
  var_userHeadersDir_17650.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 359)) ;
  GALGAS_bool var_quietOutputByDefault_17807 = GALGAS_stringset::constructor_setWithLStringList (constinArgument_inProjectComponentAST.getter_mGenerationFeatureList (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 361)).getter_hasKey (GALGAS_string ("quietOutputByDefault") COMMA_SOURCE_FILE ("galgas_prgm.galgas", 361)) ;
  GALGAS_string var_productDirectory_18003 = constinArgument_inBuildDirectory.add_operation (GALGAS_string ("/output"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 363)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 367)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_generateAllGuiComponentsGalgas_33_ (constinArgument_inOptionComponentMapForGeneration, var_productDirectory_18003, var_quietOutputByDefault_17807, var_appProductFileList_17358, var_allProductFileSet_17544, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 368)) ;
      }
    }
  }
  GALGAS_stringlist var_toolCppFileList_18515 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 378)) ;
  GALGAS_stringlist var_toolHeaderFileList_18553 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("galgas_prgm.galgas", 379)) ;
  {
  routine_generatePredefinedTypeFiles (var_productDirectory_18003, constinArgument_inSemanticDeclarationSortedListForGeneration, var_toolHeaderFileList_18553, var_toolCppFileList_18515, var_allProductFileSet_17544, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 380)) ;
  }
  {
  routine_generateSemanticDeclarationsGalgas_33_ (constinArgument_inTypeMap, var_productDirectory_18003, constinArgument_inSemanticDeclarationSortedListForGeneration, var_appProductFileList_17358, var_toolCppFileList_18515, var_toolHeaderFileList_18553, var_allProductFileSet_17544, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 387)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 398)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_stringset var_handledExtensionSet_19118 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 399)) ;
      cEnumerator_programRuleList enumerator_19154 (constinArgument_inSourceRuleList, kENUMERATION_UP) ;
      while (enumerator_19154.hasCurrentObject ()) {
        var_handledExtensionSet_19118.addAssign_operation (enumerator_19154.current_mSourceFileExtension (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 401)) ;
        enumerator_19154.gotoNextObject () ;
      }
      GALGAS_stringset var_ignoredFeatureSet_19291 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 404)) ;
      var_ignoredFeatureSet_19291.addAssign_operation (GALGAS_string ("tool-framework")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 405)) ;
      var_ignoredFeatureSet_19291.addAssign_operation (GALGAS_string ("tool-source")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 406)) ;
      var_ignoredFeatureSet_19291.addAssign_operation (GALGAS_string ("app-source")  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 407)) ;
      GALGAS_projectQualifiedFeatureMap var_projectQualifiedFeatureMap_19477 = GALGAS_projectQualifiedFeatureMap::constructor_emptyMap (SOURCE_FILE ("galgas_prgm.galgas", 408)) ;
      cEnumerator_galgas_33_QualifiedFeatureList enumerator_19540 (constinArgument_inProjectComponentAST.getter_mQualifiedFeatureList (HERE), kENUMERATION_UP) ;
      while (enumerator_19540.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_ignoredFeatureSet_19291.getter_hasKey (enumerator_19540.current_mFeatureName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 410)).operator_not (SOURCE_FILE ("galgas_prgm.galgas", 410)).boolEnum () ;
          if (kBoolTrue == test_3) {
            {
            var_projectQualifiedFeatureMap_19477.setter_insertKey (enumerator_19540.current_mFeatureName (HERE), enumerator_19540.current_mFeatureValue (HERE), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 411)) ;
            }
          }
        }
        enumerator_19540.gotoNextObject () ;
      }
      {
      routine_updateGalgas_33_Targets (constinArgument_inProjectSourceFile, constinArgument_inProjectComponentAST.getter_mTargetName (HERE).getter_string (HERE), constinArgument_inProjectComponentAST.getter_mEndOfSourceFile (HERE), constinArgument_inProjectComponentAST.getter_mMajorVersion (HERE).getter_uint (HERE).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 421)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 421)).add_operation (constinArgument_inProjectComponentAST.getter_mMinorVersion (HERE).getter_uint (HERE).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 421)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 421)).add_operation (constinArgument_inProjectComponentAST.getter_mRevisionVersion (HERE).getter_uint (HERE).getter_string (SOURCE_FILE ("galgas_prgm.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 421)), var_projectQualifiedFeatureMap_19477, constinArgument_inProjectComponentAST.getter_mGenerationFeatureList (HERE), var_quietOutputByDefault_17807, var_toolCppFileList_18515, var_toolHeaderFileList_18553, var_appProductFileList_17358, constinArgument_inHandCodedSourceToolFileList, constinArgument_inFrameworkToolFileList, constinArgument_inHandCodedSourceDirectorySet, var_handledExtensionSet_19118, var_allProductFileSet_17544, constinArgument_inHandCodedSourceAppFileList, constinArgument_inHandCodedLinkAppFileList, inCompiler  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 417)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsEqual, GALGAS_uint ((uint32_t) 0U).objectCompare (GALGAS_uint::constructor_errorCount (SOURCE_FILE ("galgas_prgm.galgas", 438)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_stringset var_allActualFileSet_20590 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("galgas_prgm.galgas", 439)) ;
      cEnumerator_stringlist enumerator_20648 (var_productDirectory_18003.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("galgas_prgm.galgas", 440)), kENUMERATION_UP) ;
      while (enumerator_20648.hasCurrentObject ()) {
        var_allActualFileSet_20590.addAssign_operation (enumerator_20648.current_mValue (HERE)  COMMA_SOURCE_FILE ("galgas_prgm.galgas", 441)) ;
        enumerator_20648.gotoNextObject () ;
      }
      GALGAS_stringset var_uselessFileSet_20716 = var_allActualFileSet_20590.substract_operation (var_allProductFileSet_17544, inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 443)) ;
      cEnumerator_stringset enumerator_20784 (var_uselessFileSet_20716, kENUMERATION_UP) ;
      while (enumerator_20784.hasCurrentObject ()) {
        {
        GALGAS_string::class_method_deleteFile (var_productDirectory_18003.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 445)).add_operation (enumerator_20784.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("galgas_prgm.galgas", 445)) ;
        }
        enumerator_20784.gotoNextObject () ;
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Routine 'checkextensionSetterDefinitionForClass'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkextensionSetterDefinitionForClass (const GALGAS_string constinArgument_inClassNameForErrorSignaling,
                                                     const GALGAS_string constinArgument_inClassName,
                                                     const GALGAS_lstring constinArgument_inAbstractExtensionSetterName,
                                                     const GALGAS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                     const GALGAS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList var_descendantClasses_7807 = constinArgument_inDescendantClassListMap.getter_listForKey (constinArgument_inClassName COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 96)) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_7890 (var_descendantClasses_7807, kENUMERATION_UP) ;
  while (enumerator_7890.hasCurrentObject ()) {
    GALGAS_lstring var_descendantClassName_7930 = enumerator_7890.current_mType (HERE).getter_lkey (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 98)) ;
    GALGAS_lstringlist var_overridingMethods_7980 = constinArgument_inOverridingExtensionMethodListMap.getter_listForKey (var_descendantClassName_7930.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 99)) COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 99)) ;
    GALGAS_bool var_found_8076 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8116 (var_overridingMethods_7980, kENUMERATION_UP) ;
    bool bool_0 = var_found_8076.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 101)).isValidAndTrue () ;
    if (enumerator_8116.hasCurrentObject () && bool_0) {
      while (enumerator_8116.hasCurrentObject () && bool_0) {
        var_found_8076 = GALGAS_bool (kIsEqual, constinArgument_inAbstractExtensionSetterName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 102)).objectCompare (enumerator_8116.current_mValue (HERE).getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 102)))) ;
        enumerator_8116.gotoNextObject () ;
        if (enumerator_8116.hasCurrentObject ()) {
          bool_0 = var_found_8076.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 101)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_found_8076.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_7890.current_mType (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 105)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 105)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_7930.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 108)), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 106)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.getter_location (SOURCE_FILE ("projectGlobalCheckings.galgas", 115)), GALGAS_string ("an abstract extension method '").add_operation (constinArgument_inAbstractExtensionSetterName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 115)).add_operation (GALGAS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 115)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 115)).add_operation (GALGAS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 116)).add_operation (var_descendantClassName_7930.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 117)).add_operation (GALGAS_string ("' does not implement this method"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 117)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 115)) ;
        }
      }
    }
    enumerator_7890.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Routine 'checkExtensionMethodDefinitionForClass'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkExtensionMethodDefinitionForClass (const GALGAS_string constinArgument_inClassNameForErrorSignaling,
                                                     const GALGAS_string constinArgument_inClassName,
                                                     const GALGAS_lstring constinArgument_inAbstractExtensionMethodName,
                                                     const GALGAS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                     const GALGAS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList var_descendantClasses_9402 = constinArgument_inDescendantClassListMap.getter_listForKey (constinArgument_inClassName COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 133)) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_9485 (var_descendantClasses_9402, kENUMERATION_UP) ;
  while (enumerator_9485.hasCurrentObject ()) {
    GALGAS_lstring var_descendantClassName_9525 = enumerator_9485.current_mType (HERE).getter_lkey (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 135)) ;
    GALGAS_lstringlist var_overridingMethods_9575 = constinArgument_inOverridingExtensionMethodListMap.getter_listForKey (var_descendantClassName_9525.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 136)) COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 136)) ;
    GALGAS_bool var_found_9671 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_9711 (var_overridingMethods_9575, kENUMERATION_UP) ;
    bool bool_0 = var_found_9671.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 138)).isValidAndTrue () ;
    if (enumerator_9711.hasCurrentObject () && bool_0) {
      while (enumerator_9711.hasCurrentObject () && bool_0) {
        var_found_9671 = GALGAS_bool (kIsEqual, constinArgument_inAbstractExtensionMethodName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 139)).objectCompare (enumerator_9711.current_mValue (HERE).getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 139)))) ;
        enumerator_9711.gotoNextObject () ;
        if (enumerator_9711.hasCurrentObject ()) {
          bool_0 = var_found_9671.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 138)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_found_9671.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 141)).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_9485.current_mType (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 142)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 142)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_9525.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 145)), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 143)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.getter_location (SOURCE_FILE ("projectGlobalCheckings.galgas", 152)), GALGAS_string ("an abstract extension method '").add_operation (constinArgument_inAbstractExtensionMethodName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 152)).add_operation (GALGAS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 152)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 152)).add_operation (GALGAS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 153)).add_operation (var_descendantClassName_9525.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 154)).add_operation (GALGAS_string ("' does not implement this method"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 154)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 152)) ;
        }
      }
    }
    enumerator_9485.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Routine 'checkExtensionGetterDefinitionForClass'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkExtensionGetterDefinitionForClass (const GALGAS_string constinArgument_inClassNameForErrorSignaling,
                                                     const GALGAS_string constinArgument_inClassName,
                                                     const GALGAS_lstring constinArgument_inAbstractExtensionGetterName,
                                                     const GALGAS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                     const GALGAS_genericExtensionMethodListMap constinArgument_inOverridingExtensionGetterListMap,
                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapProxyList var_descendantClasses_10997 = constinArgument_inDescendantClassListMap.getter_listForKey (constinArgument_inClassName COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 170)) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_11080 (var_descendantClasses_10997, kENUMERATION_UP) ;
  while (enumerator_11080.hasCurrentObject ()) {
    GALGAS_lstring var_descendantClassName_11116 = enumerator_11080.current_mType (HERE).getter_lkey (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 172)) ;
    GALGAS_lstringlist var_overridingReaders_11166 = constinArgument_inOverridingExtensionGetterListMap.getter_listForKey (var_descendantClassName_11116.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 173)) COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 173)) ;
    GALGAS_bool var_found_11262 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11302 (var_overridingReaders_11166, kENUMERATION_UP) ;
    bool bool_0 = var_found_11262.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 175)).isValidAndTrue () ;
    if (enumerator_11302.hasCurrentObject () && bool_0) {
      while (enumerator_11302.hasCurrentObject () && bool_0) {
        var_found_11262 = GALGAS_bool (kIsEqual, constinArgument_inAbstractExtensionGetterName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 176)).objectCompare (enumerator_11302.current_mValue (HERE).getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 176)))) ;
        enumerator_11302.gotoNextObject () ;
        if (enumerator_11302.hasCurrentObject ()) {
          bool_0 = var_found_11262.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 175)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_found_11262.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 178)).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_11080.current_mType (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 179)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 179)).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_11116.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 182)), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 180)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.getter_location (SOURCE_FILE ("projectGlobalCheckings.galgas", 189)), GALGAS_string ("an abstract extension getter '").add_operation (constinArgument_inAbstractExtensionGetterName.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 189)).add_operation (GALGAS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 189)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 189)).add_operation (GALGAS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 190)).add_operation (var_descendantClassName_11116.getter_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 191)).add_operation (GALGAS_string ("' does not implement this getter"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 191)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 189)) ;
        }
      }
    }
    enumerator_11080.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Routine 'performGalgas3ProjectGlobalCheckings'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_performGalgas_33_ProjectGlobalCheckings (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      const GALGAS_semanticDeclarationListAST constinArgument_inSemanticDeclarationList,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("projectGlobalCheckings.galgas", 203)).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->printMessage (GALGAS_string ("*** Perform global checkings\n")  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 204)) ;
    }
  }
  GALGAS_descendantClassListMap var_descendantClassListMap_12597 = GALGAS_descendantClassListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 208)) ;
  cEnumerator_unifiedTypeMap enumerator_12641 (constinArgument_inSemanticContext.getter_mTypeMap (HERE), kENUMERATION_UP) ;
  while (enumerator_12641.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_12641.current_mSuperType (HERE).getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas", 210)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas", 210)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_descendantClassListMap_12597.addAssign_operation (enumerator_12641.current_mSuperType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 212)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_12641.current_lkey (HERE), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 213))  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 211)) ;
      }
    }
    enumerator_12641.gotoNextObject () ;
  }
  GALGAS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_12936 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 217)) ;
  GALGAS_genericExtensionMethodListMap var_extensionMethodListMap_12997 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 218)) ;
  GALGAS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_13068 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 219)) ;
  GALGAS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_13147 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 220)) ;
  GALGAS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_13216 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 221)) ;
  GALGAS_genericExtensionMethodListMap var_extensionReaderListMap_13277 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 222)) ;
  GALGAS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_13348 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 223)) ;
  GALGAS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_13427 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 224)) ;
  GALGAS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_13496 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 225)) ;
  GALGAS_genericExtensionMethodListMap var_extensionSetterListMap_13557 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 226)) ;
  GALGAS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_13628 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 227)) ;
  GALGAS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_13707 = GALGAS_genericExtensionMethodListMap::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 228)) ;
  cEnumerator_semanticDeclarationListAST enumerator_13750 (constinArgument_inSemanticDeclarationList, kENUMERATION_UP) ;
  while (enumerator_13750.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((const cPtr_semanticDeclarationAST *) enumerator_13750.current_mSemanticDeclaration (HERE).ptr (), var_abstractExtensionSetterListMap_13496, var_extensionSetterListMap_13557, var_overridingExtensionSetterListMap_13628, var_overridingAbstractExtensionSetterListMap_13707, var_abstractExtensionMethodListMap_12936, var_extensionMethodListMap_12997, var_overridingExtensionMethodListMap_13068, var_overridingAbstractExtensionMethodListMap_13147, var_abstractExtensionGetterListMap_13216, var_extensionReaderListMap_13277, var_overridingExtensionGetterListMap_13348, var_overridingAbstractExtensionGetterListMap_13427, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 230)) ;
    enumerator_13750.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas", 246)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      cEnumerator_genericExtensionMethodListMap enumerator_14469 (var_abstractExtensionSetterListMap_13496, kENUMERATION_UP) ;
      while (enumerator_14469.hasCurrentObject ()) {
        GALGAS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14535 = GALGAS_extensionSetterMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 249)) ;
        cEnumerator_lstringlist enumerator_14562 (enumerator_14469.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_14562.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14535.setter_insertKey (enumerator_14562.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 251)) ;
          }
          enumerator_14562.gotoNextObject () ;
        }
        enumerator_14469.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_14741 (var_extensionSetterListMap_13557, kENUMERATION_UP) ;
      while (enumerator_14741.hasCurrentObject ()) {
        GALGAS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14807 = GALGAS_extensionSetterMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 256)) ;
        cEnumerator_lstringlist enumerator_14834 (enumerator_14741.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_14834.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14807.setter_insertKey (enumerator_14834.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 258)) ;
          }
          enumerator_14834.gotoNextObject () ;
        }
        enumerator_14741.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_15029 (var_overridingExtensionSetterListMap_13628, kENUMERATION_UP) ;
      while (enumerator_15029.hasCurrentObject ()) {
        GALGAS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_15095 = GALGAS_extensionSetterMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 263)) ;
        cEnumerator_lstringlist enumerator_15122 (enumerator_15029.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_15122.hasCurrentObject ()) {
          {
          var_extensionSetterMap_15095.setter_insertKey (enumerator_15122.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 265)) ;
          }
          enumerator_15122.gotoNextObject () ;
        }
        enumerator_15029.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_15334 (var_overridingAbstractExtensionMethodListMap_13147, kENUMERATION_UP) ;
      while (enumerator_15334.hasCurrentObject ()) {
        GALGAS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_15400 = GALGAS_extensionSetterMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 270)) ;
        cEnumerator_lstringlist enumerator_15427 (enumerator_15334.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_15427.hasCurrentObject ()) {
          {
          var_extensionSetterMap_15400.setter_insertKey (enumerator_15427.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 272)) ;
          }
          enumerator_15427.gotoNextObject () ;
        }
        enumerator_15334.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_15665 (var_abstractExtensionSetterListMap_13496, kENUMERATION_UP) ;
      while (enumerator_15665.hasCurrentObject ()) {
        cEnumerator_lstringlist enumerator_15690 (enumerator_15665.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_15690.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass (enumerator_15665.current_key (HERE), enumerator_15665.current_key (HERE), enumerator_15690.current_mValue (HERE), var_descendantClassListMap_12597, var_overridingExtensionSetterListMap_13628, constinArgument_inSemanticContext.getter_mTypeMap (HERE), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 278)) ;
          }
          enumerator_15690.gotoNextObject () ;
        }
        enumerator_15665.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_16121 (var_overridingAbstractExtensionSetterListMap_13707, kENUMERATION_UP) ;
      while (enumerator_16121.hasCurrentObject ()) {
        cEnumerator_lstringlist enumerator_16146 (enumerator_16121.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_16146.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass (enumerator_16121.current_key (HERE), enumerator_16121.current_key (HERE), enumerator_16146.current_mValue (HERE), var_descendantClassListMap_12597, var_overridingExtensionSetterListMap_13628, constinArgument_inSemanticContext.getter_mTypeMap (HERE), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 291)) ;
          }
          enumerator_16146.gotoNextObject () ;
        }
        enumerator_16121.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_16509 (var_abstractExtensionMethodListMap_12936, kENUMERATION_UP) ;
      while (enumerator_16509.hasCurrentObject ()) {
        GALGAS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16575 = GALGAS_extensionMethodMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 303)) ;
        cEnumerator_lstringlist enumerator_16602 (enumerator_16509.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_16602.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16575.setter_insertKey (enumerator_16602.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 305)) ;
          }
          enumerator_16602.gotoNextObject () ;
        }
        enumerator_16509.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_16781 (var_extensionMethodListMap_12997, kENUMERATION_UP) ;
      while (enumerator_16781.hasCurrentObject ()) {
        GALGAS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16847 = GALGAS_extensionMethodMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 310)) ;
        cEnumerator_lstringlist enumerator_16874 (enumerator_16781.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_16874.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16847.setter_insertKey (enumerator_16874.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 312)) ;
          }
          enumerator_16874.gotoNextObject () ;
        }
        enumerator_16781.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_17069 (var_overridingExtensionMethodListMap_13068, kENUMERATION_UP) ;
      while (enumerator_17069.hasCurrentObject ()) {
        GALGAS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17135 = GALGAS_extensionMethodMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 317)) ;
        cEnumerator_lstringlist enumerator_17162 (enumerator_17069.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_17162.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17135.setter_insertKey (enumerator_17162.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 319)) ;
          }
          enumerator_17162.gotoNextObject () ;
        }
        enumerator_17069.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_17374 (var_overridingAbstractExtensionMethodListMap_13147, kENUMERATION_UP) ;
      while (enumerator_17374.hasCurrentObject ()) {
        GALGAS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17440 = GALGAS_extensionMethodMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 324)) ;
        cEnumerator_lstringlist enumerator_17467 (enumerator_17374.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_17467.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17440.setter_insertKey (enumerator_17467.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 326)) ;
          }
          enumerator_17467.gotoNextObject () ;
        }
        enumerator_17374.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_17705 (var_abstractExtensionMethodListMap_12936, kENUMERATION_UP) ;
      while (enumerator_17705.hasCurrentObject ()) {
        cEnumerator_lstringlist enumerator_17730 (enumerator_17705.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_17730.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass (enumerator_17705.current_key (HERE), enumerator_17705.current_key (HERE), enumerator_17730.current_mValue (HERE), var_descendantClassListMap_12597, var_overridingExtensionMethodListMap_13068, constinArgument_inSemanticContext.getter_mTypeMap (HERE), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 332)) ;
          }
          enumerator_17730.gotoNextObject () ;
        }
        enumerator_17705.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_18150 (var_overridingAbstractExtensionMethodListMap_13147, kENUMERATION_UP) ;
      while (enumerator_18150.hasCurrentObject ()) {
        cEnumerator_lstringlist enumerator_18175 (enumerator_18150.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_18175.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass (enumerator_18150.current_key (HERE), enumerator_18150.current_key (HERE), enumerator_18175.current_mValue (HERE), var_descendantClassListMap_12597, var_overridingExtensionMethodListMap_13068, constinArgument_inSemanticContext.getter_mTypeMap (HERE), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 345)) ;
          }
          enumerator_18175.gotoNextObject () ;
        }
        enumerator_18150.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_18689 (var_abstractExtensionGetterListMap_13216, kENUMERATION_UP) ;
      while (enumerator_18689.hasCurrentObject ()) {
        GALGAS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18755 = GALGAS_extensionGetterMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 359)) ;
        cEnumerator_lstringlist enumerator_18782 (enumerator_18689.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_18782.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18755.setter_insertKey (enumerator_18782.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 361)) ;
          }
          enumerator_18782.gotoNextObject () ;
        }
        enumerator_18689.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_18961 (var_extensionReaderListMap_13277, kENUMERATION_UP) ;
      while (enumerator_18961.hasCurrentObject ()) {
        GALGAS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19027 = GALGAS_extensionGetterMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 366)) ;
        cEnumerator_lstringlist enumerator_19054 (enumerator_18961.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_19054.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19027.setter_insertKey (enumerator_19054.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 368)) ;
          }
          enumerator_19054.gotoNextObject () ;
        }
        enumerator_18961.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_19249 (var_overridingExtensionGetterListMap_13348, kENUMERATION_UP) ;
      while (enumerator_19249.hasCurrentObject ()) {
        GALGAS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19315 = GALGAS_extensionGetterMapForGlobalCheckings::constructor_emptyMap (SOURCE_FILE ("projectGlobalCheckings.galgas", 373)) ;
        cEnumerator_lstringlist enumerator_19342 (enumerator_19249.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_19342.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19315.setter_insertKey (enumerator_19342.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 375)) ;
          }
          enumerator_19342.gotoNextObject () ;
        }
        enumerator_19249.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_19552 (var_abstractExtensionGetterListMap_13216, kENUMERATION_UP) ;
      while (enumerator_19552.hasCurrentObject ()) {
        cEnumerator_lstringlist enumerator_19577 (enumerator_19552.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_19577.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass (enumerator_19552.current_key (HERE), enumerator_19552.current_key (HERE), enumerator_19577.current_mValue (HERE), var_descendantClassListMap_12597, var_overridingExtensionGetterListMap_13348, constinArgument_inSemanticContext.getter_mTypeMap (HERE), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 381)) ;
          }
          enumerator_19577.gotoNextObject () ;
        }
        enumerator_19552.gotoNextObject () ;
      }
      cEnumerator_genericExtensionMethodListMap enumerator_19969 (var_overridingAbstractExtensionGetterListMap_13427, kENUMERATION_UP) ;
      while (enumerator_19969.hasCurrentObject ()) {
        cEnumerator_lstringlist enumerator_19994 (enumerator_19969.current_mList (HERE), kENUMERATION_UP) ;
        while (enumerator_19994.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass (enumerator_19969.current_key (HERE), enumerator_19969.current_key (HERE), enumerator_19994.current_mValue (HERE), var_descendantClassListMap_12597, var_overridingExtensionGetterListMap_13348, constinArgument_inSemanticContext.getter_mTypeMap (HERE), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 394)) ;
          }
          enumerator_19994.gotoNextObject () ;
        }
        enumerator_19969.gotoNextObject () ;
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Filewrapper 'typeDumpGenerationTemplate'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//--- All files of 'makefile-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'makefile-macosx'

const cDirectoryWrapper gWrapperDirectory_1_typeDumpGenerationTemplate (
  "makefile-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_1,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_1
) ;

//--- All files of 'makefile-unix' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-unix' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'makefile-unix'

const cDirectoryWrapper gWrapperDirectory_3_typeDumpGenerationTemplate (
  "makefile-unix",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_3,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_3
) ;

//--- All files of 'makefile-win32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-win32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'makefile-win32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_2_typeDumpGenerationTemplate (
  "makefile-win32-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_2,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_2
) ;

//--- All files of 'makefile-x86linux32-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_7 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-x86linux32-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_7 [1] = {
  NULL
} ;

//--- Directory 'makefile-x86linux32-on-macosx'

const cDirectoryWrapper gWrapperDirectory_7_typeDumpGenerationTemplate (
  "makefile-x86linux32-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_7,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_7
) ;

//--- All files of 'makefile-x86linux64-on-macosx' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_6 [1] = {
  NULL
} ;

//--- All sub-directories of 'makefile-x86linux64-on-macosx' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_6 [1] = {
  NULL
} ;

//--- Directory 'makefile-x86linux64-on-macosx'

const cDirectoryWrapper gWrapperDirectory_6_typeDumpGenerationTemplate (
  "makefile-x86linux64-on-macosx",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_6,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_6
) ;

//--- All files of 'English.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'English.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'English.lproj'

const cDirectoryWrapper gWrapperDirectory_5_typeDumpGenerationTemplate (
  "English.lproj",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_5,
  0,
  gWrapperAllDirectories_typeDumpGenerationTemplate_5
) ;

//--- All files of 'project_xcode' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'project_xcode' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_4 [2] = {
  & gWrapperDirectory_5_typeDumpGenerationTemplate,
  NULL
} ;

//--- Directory 'project_xcode'

const cDirectoryWrapper gWrapperDirectory_4_typeDumpGenerationTemplate (
  "project_xcode",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_4,
  1,
  gWrapperAllDirectories_typeDumpGenerationTemplate_4
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeDumpGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeDumpGenerationTemplate_0 [7] = {
  & gWrapperDirectory_1_typeDumpGenerationTemplate,
  & gWrapperDirectory_3_typeDumpGenerationTemplate,
  & gWrapperDirectory_2_typeDumpGenerationTemplate,
  & gWrapperDirectory_7_typeDumpGenerationTemplate,
  & gWrapperDirectory_6_typeDumpGenerationTemplate,
  & gWrapperDirectory_4_typeDumpGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeDumpGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeDumpGenerationTemplate_0,
  6,
  gWrapperAllDirectories_typeDumpGenerationTemplate_0
) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Filewrapper template 'typeDumpGenerationTemplate typeDump'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_typeDumpGenerationTemplate_typeDump (C_Compiler * inCompiler,
                                                                       const GALGAS_string & in_PROJECT_5F_NAME,
                                                                       const GALGAS_unifiedTypeMap & in_UNIFIED_5F_TYPE_5F_MAP,
                                                                       const GALGAS_stringset & in_FIRST_5F_LETTER_5F_SET,
                                                                       const GALGAS_string & in_TABLE_5F_OF_5F_TYPES_5F_STRING
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01//EN\" \"http://www.w3.org/TR/html4/strict.dtd\">\n"
    "<html>\n"
    "<head>\n"
    "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=UTF-8\">\n"
    "<title>Types of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</title>\n"
    "<style type=\"text/css\">body {\n"
    "  font-family: Georgia, sans-serif ;\n"
    "  font-size: small ;\n"
    "}\n"
    "\n"
    "h1 {\n"
    "  text-align: center ;\n"
    "}\n"
    "\n"
    ".selecteur {\n"
    "  color:green ;\n"
    "}\n"
    "\n"
    "a.header_link {\n"
    "  background-color: #FFFFCC ;\n"
    "}\n"
    "\n"
    "a:visited, a:link, a:active{\n"
    "  color: blue ;\n"
    "  text-decoration: underline ;\n"
    "}\n"
    "\n"
    "a:hover {\n"
    "  color:green ;\n"
    "  background-color: #FFFF00 ;\n"
    "  text-decoration: none ;\n"
    "}\n"
    "\n"
    "table.result {\n"
    "  border: 1px solid #666666 ;\n"
    "  border-collapse: collapse ;\n"
    "}\n"
    "\n"
    "td.result_title {\n"
    "  font-weight: bold ;\n"
    "  text-align: center ;\n"
    "  background-color: yellow ;\n"
    "  border-top: 2px solid #666666 ;\n"
    "}\n"
    "\n"
    "tr.result_line {\n"
    "  background-color: #EEEEEE ;\n"
    "  border-top: 1px solid #999999 ;\n"
    "}\n"
    "\n"
    "</style>\n"
    "</head>\n"
    "<body>\n"
    "<div>\n"
    "<h1>Types of " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</h1>\n"
    "<p>This document lists all " ;
  result << in_UNIFIED_5F_TYPE_5F_MAP.getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 56)).stringValue () ;
  result << " defined types, sorted by name.</p>\n"
    "<p>" ;
  GALGAS_uint index_1067_ (0) ;
  if (in_FIRST_5F_LETTER_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1067 (in_FIRST_5F_LETTER_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1067.hasCurrentObject ()) {
      result << "<a class=\"header_link\" href=\"#" ;
      result << enumerator_1067.current_key (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).getter_uint (SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).getter_string (SOURCE_FILE ("typeDump.html.galgasTemplate", 59)).stringValue () ;
      result << "\">" ;
      result << enumerator_1067.current_key (HERE).stringValue () ;
      result << "</a>" ;
      if (enumerator_1067.hasNextObject ()) {
        result << " - " ;
      }
      index_1067_.increment () ;
      enumerator_1067.gotoNextObject () ;
    }
  }
  result << "</p>\n"
    "<p>" ;
  result << in_TABLE_5F_OF_5F_TYPES_5F_STRING.stringValue () ;
  result << "\n"
    "</p>\n"
    "<table class=\"result\">\n" ;
  GALGAS_uint index_1275_ (0) ;
  if (in_UNIFIED_5F_TYPE_5F_MAP.isValid ()) {
    cEnumerator_unifiedTypeMap enumerator_1275 (in_UNIFIED_5F_TYPE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1275.hasCurrentObject ()) {
      result << "\n"
        "<tr><td colspan=\"2\" class=\"result_title\"><a name=\"" ;
      result << enumerator_1275.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "\">@" ;
      result << enumerator_1275.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "</a></td></tr>\n"
        "\n"
        "<tr class=\"result_line\">\n"
        "  <td>Kind</td>\n"
        "  <td>\n"
        "    " ;
      const enumGalgasBool test_0 = enumerator_1275.current_mIsConcrete (HERE).operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 73)).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "abstract " ;
      }else if (kBoolFalse == test_0) {
      }
      switch (enumerator_1275.current_mTypeKindEnum (HERE).enumValue ()) {
      case GALGAS_typeKindEnum::kNotBuilt :
        break ;
      case GALGAS_typeKindEnum::kEnum_classType :
        {
          result << "class" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_enumType :
        {
          result << "enum" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_listType :
        {
          result << "list" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_sortedListType :
        {
          result << "sorted list" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_mapType :
        {
          result << "map" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_uniqueMapType :
        {
          result << "unique map" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_mapProxyType :
        {
          result << "map proxy" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_listMapType :
        {
          result << "list map" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_boolsetType :
        {
          result << "boolset" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_structType :
        {
          result << "struct" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_graphType :
        {
          result << "graph" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_arrayType :
        {
          result << "array" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_externType :
        {
          result << "extern" ;
        }
        break ;
      case GALGAS_typeKindEnum::kEnum_predefinedType :
        {
          result << "predefined type" ;
        }
        break ;
      }
      result << "\n"
        "</td></tr>\n" ;
      const enumGalgasBool test_1 = enumerator_1275.current_mSuperType (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 91)).operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 91)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "<tr class=\"result_line\"><td>Superclass</td><td>" ;
        result << function_linkForType (enumerator_1275.current_mSuperType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 92)).stringValue () ;
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "\n"
        "<tr class=\"result_line\"><td>Operators</td>\n"
        "  <td>\n"
        "    " ;
      const enumGalgasBool test_2 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixAddOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 96)).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "addition: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).stringValue () ;
        result << " + " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 97)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_2) {
      }
      const enumGalgasBool test_3 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixSubOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 99)).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "substraction: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).stringValue () ;
        result << " - " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 100)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_3) {
      }
      const enumGalgasBool test_4 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixMulOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 102)).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "multiplication: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).stringValue () ;
        result << " * " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 103)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_4) {
      }
      const enumGalgasBool test_5 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixDivOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 105)).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "division: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue () ;
        result << " / " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 106)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_5) {
      }
      const enumGalgasBool test_6 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixModOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 108)).boolEnum () ;
      if (kBoolTrue == test_6) {
        result << "modulo: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue () ;
        result << " <b>mod</b> " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 109)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_6) {
      }
      const enumGalgasBool test_7 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixShiftOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 111)).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "left shift: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).stringValue () ;
        result << " &lt;&lt; " ;
        result << function_linkForType (GALGAS_string ("uint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 112)).stringValue () ;
        result << "<br><br>left shift: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue () ;
        result << " &lt;&lt; " ;
        result << function_linkForType (GALGAS_string ("bigint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 113)).stringValue () ;
        result << "<br><br>right shift: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue () ;
        result << " &gt;&gt; " ;
        result << function_linkForType (GALGAS_string ("uint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 114)).stringValue () ;
        result << "<br><br>right shift: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).stringValue () ;
        result << " &gt;&gt; " ;
        result << function_linkForType (GALGAS_string ("bigint"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 115)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_7) {
      }
      const enumGalgasBool test_8 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_prefixPlusOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 117)).boolEnum () ;
      if (kBoolTrue == test_8) {
        result << "prefix +: + " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 118)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 118)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_8) {
      }
      const enumGalgasBool test_9 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_prefixMinusOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 120)).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "prefix -: - " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 121)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 121)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_9) {
      }
      const enumGalgasBool test_10 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_prefixTildeOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 123)).boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "bit wise negation: ~ " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 124)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 124)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_10) {
      }
      const enumGalgasBool test_11 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixAndOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 126)).boolEnum () ;
      if (kBoolTrue == test_11) {
        result << "boolean and: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).stringValue () ;
        result << " &amp; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 127)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_11) {
      }
      const enumGalgasBool test_12 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixOrOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 129)).boolEnum () ;
      if (kBoolTrue == test_12) {
        result << "inclusive or: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).stringValue () ;
        result << " | " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 130)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_12) {
      }
      const enumGalgasBool test_13 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_infixXorOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 132)).boolEnum () ;
      if (kBoolTrue == test_13) {
        result << "exclusive or: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue () ;
        result << " ^ " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 133)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_13) {
      }
      const enumGalgasBool test_14 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_prefixNotOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 135)).boolEnum () ;
      if (kBoolTrue == test_14) {
        result << "boolean negation: <b>not</b> " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 136)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_14) {
      }
      result << "equality test: " ;
      result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue () ;
      result << " == " ;
      result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue () ;
      result << " &rarr; " ;
      result << function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 138)).stringValue () ;
      result << "<br><br>inequality test: " ;
      result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue () ;
      result << " != " ;
      result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue () ;
      result << " &rarr; " ;
      result << function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 139)).stringValue () ;
      result << "<br><br>" ;
      const enumGalgasBool test_15 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_isComparable (SOURCE_FILE ("typeDump.html.galgasTemplate", 140)).boolEnum () ;
      if (kBoolTrue == test_15) {
        result << "lower than test: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue () ;
        result << " &lt; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 141)).stringValue () ;
        result << "<br><br>lower or equal test: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue () ;
        result << " &lt;= " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 142)).stringValue () ;
        result << "<br><br>greater than test: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 143)).stringValue () ;
        result << " &gt; " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 143)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 143)).stringValue () ;
        result << "<br><br>greater or equal test: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).stringValue () ;
        result << " &gt;= " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).stringValue () ;
        result << " &rarr; " ;
        result << function_linkForType (GALGAS_string ("bool"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 144)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_15) {
      }
      const enumGalgasBool test_16 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 146)).boolEnum () ;
      if (kBoolTrue == test_16) {
        result << "+= instruction: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 147)).stringValue () ;
        result << " += " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 147)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_16) {
      }
      const enumGalgasBool test_17 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 149)).boolEnum () ;
      if (kBoolTrue == test_17) {
        result << "-= instruction: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 150)).stringValue () ;
        result << " -= " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 150)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_17) {
      }
      const enumGalgasBool test_18 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 152)).boolEnum () ;
      if (kBoolTrue == test_18) {
        result << "*= instruction: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 153)).stringValue () ;
        result << " *= " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 153)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_18) {
      }
      const enumGalgasBool test_19 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_divEqualOperatorWithExpression (SOURCE_FILE ("typeDump.html.galgasTemplate", 155)).boolEnum () ;
      if (kBoolTrue == test_19) {
        result << "/= instruction: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 156)).stringValue () ;
        result << " /= " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 156)).stringValue () ;
        result << "<br><br>" ;
      }else if (kBoolFalse == test_19) {
      }
      const enumGalgasBool test_20 = enumerator_1275.current_mHandledOperatorFlags (HERE).getter_incDecOperator (SOURCE_FILE ("typeDump.html.galgasTemplate", 158)).boolEnum () ;
      if (kBoolTrue == test_20) {
        result << "incrementation instruction: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 159)).stringValue () ;
        result << " ++<br><br>decrementation instruction: " ;
        result << function_linkForType (enumerator_1275.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 160)).stringValue () ;
        result << " --<br><br>" ;
      }else if (kBoolFalse == test_20) {
      }
      result << "\n"
        "</td></tr>\n" ;
      const enumGalgasBool test_21 = GALGAS_bool (kIsStrictSup, enumerator_1275.current_mAddAssignOperatorArguments (HERE).getter_length (SOURCE_FILE ("typeDump.html.galgasTemplate", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_21) {
        result << "<tr class=\"result_line\"><td>+= !... !...</td><td>" ;
        GALGAS_uint index_7259_ (0) ;
        if (enumerator_1275.current_mAddAssignOperatorArguments (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_7259 (enumerator_1275.current_mAddAssignOperatorArguments (HERE), kENUMERATION_UP) ;
          while (enumerator_7259.hasCurrentObject ()) {
            result << "<span class=\"selecteur\">\?" ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsNotEqual, enumerator_7259.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_22) {
              result << enumerator_7259.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 168)).stringValue () ;
            }else if (kBoolFalse == test_22) {
            }
            result << "</span>" ;
            result << function_linkForType (enumerator_7259.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 169)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 169)).stringValue () ;
            result << " " ;
            result << enumerator_7259.current_mFormalArgumentName (HERE).stringValue () ;
            result << "<br>" ;
            index_7259_.increment () ;
            enumerator_7259.gotoNextObject () ;
          }
        }
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_21) {
      }
      const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, enumerator_1275.current_mEnumerationDescriptor (HERE).getter_length (SOURCE_FILE ("typeDump.html.galgasTemplate", 173)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_23) {
        result << "<tr class=\"result_line\"><td><b>for</b> constants</td><td>" ;
        GALGAS_uint index_7626_ (0) ;
        if (enumerator_1275.current_mEnumerationDescriptor (HERE).isValid ()) {
          cEnumerator_enumerationDescriptorList enumerator_7626 (enumerator_1275.current_mEnumerationDescriptor (HERE), kENUMERATION_UP) ;
          while (enumerator_7626.hasCurrentObject ()) {
            result << function_linkForType (enumerator_7626.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 176)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 176)).stringValue () ;
            result << " " ;
            result << enumerator_7626.current_mEnumerationName (HERE).stringValue () ;
            result << "<br>" ;
            index_7626_.increment () ;
            enumerator_7626.gotoNextObject () ;
          }
        }
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_23) {
      }
      const enumGalgasBool test_24 = enumerator_1275.current_mTypeForEnumeratedElement (HERE).getter_isNull (SOURCE_FILE ("typeDump.html.galgasTemplate", 180)).operator_not (SOURCE_FILE ("typeDump.html.galgasTemplate", 180)).boolEnum () ;
      if (kBoolTrue == test_24) {
        result << "<tr class=\"result_line\"><td><b>for</b> enumeration type</td><td>" ;
        result << function_linkForType (enumerator_1275.current_mTypeForEnumeratedElement (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 181)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 181)).stringValue () ;
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_24) {
      }
      const enumGalgasBool test_25 = GALGAS_bool (kIsStrictSup, enumerator_1275.current_mConstructorMap (HERE).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 184)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_25) {
        result << "<tr class=\"result_line\"><td>Constructors</td><td>" ;
        GALGAS_uint index_8057_ (0) ;
        if (enumerator_1275.current_mConstructorMap (HERE).isValid ()) {
          cEnumerator_constructorMap enumerator_8057 (enumerator_1275.current_mConstructorMap (HERE), kENUMERATION_UP) ;
          while (enumerator_8057.hasCurrentObject ()) {
            result << "<b>constructor</b> " ;
            result << enumerator_8057.current_lkey (HERE).getter_string (HERE).stringValue () ;
            GALGAS_uint index_8130_ (0) ;
            if (enumerator_8057.current_mArgumentTypeList (HERE).isValid ()) {
              cEnumerator_functionSignature enumerator_8130 (enumerator_8057.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
              while (enumerator_8130.hasCurrentObject ()) {
                result << "<br>&nbsp;&nbsp;&nbsp;&nbsp; <span class=\"selecteur\">\?" ;
                const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, enumerator_8130.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_26) {
                  result << enumerator_8130.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 190)).stringValue () ;
                }else if (kBoolFalse == test_26) {
                }
                result << function_linkForType (enumerator_8130.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 191)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 191)).stringValue () ;
                result << "</span> " ;
                result << enumerator_8130.current_mFormalArgumentName (HERE).stringValue () ;
                index_8130_.increment () ;
                enumerator_8130.gotoNextObject () ;
              }
            }
            result << " &rarr; " ;
            result << function_linkForType (enumerator_8057.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 193)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 193)).stringValue () ;
            result << "<br><br>" ;
            index_8057_.increment () ;
            enumerator_8057.gotoNextObject () ;
          }
        }
      }else if (kBoolFalse == test_25) {
      }
      const enumGalgasBool test_27 = GALGAS_bool (kIsStrictSup, enumerator_1275.current_mGetterMap (HERE).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 197)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_27) {
        result << "<tr class=\"result_line\"><td>Getters</td><td>" ;
        GALGAS_uint index_8563_ (0) ;
        if (enumerator_1275.current_mGetterMap (HERE).isValid ()) {
          cEnumerator_getterMap enumerator_8563 (enumerator_1275.current_mGetterMap (HERE), kENUMERATION_UP) ;
          while (enumerator_8563.hasCurrentObject ()) {
            switch (enumerator_8563.current_mKind (HERE).enumValue ()) {
            case GALGAS_methodKind::kNotBuilt :
              break ;
            case GALGAS_methodKind::kEnum_definedAsMember :
              {
              }
              break ;
            case GALGAS_methodKind::kEnum_definedAsExtension :
              {
                result << "(extension) " ;
              }
              break ;
            }
            switch (enumerator_8563.current_mQualifier (HERE).enumValue ()) {
            case GALGAS_methodQualifier::kNotBuilt :
              break ;
            case GALGAS_methodQualifier::kEnum_isAbstract :
              {
                result << "<b>abstract</b> " ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasic :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasicFinal :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isInherited :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isOverriding :
              {
                result << "<b>override</b> " ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isOverridingAbstract :
              {
                result << "<b>abstract override</b> " ;
              }
              break ;
            }
            result << "<b>getter</b> " ;
            result << enumerator_8563.current_lkey (HERE).getter_string (HERE).stringValue () ;
            GALGAS_uint index_8968_ (0) ;
            if (enumerator_8563.current_mArgumentTypeList (HERE).isValid ()) {
              cEnumerator_functionSignature enumerator_8968 (enumerator_8563.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
              while (enumerator_8968.hasCurrentObject ()) {
                result << "<br>&nbsp;&nbsp;&nbsp;&nbsp; \?<span class=\"selecteur\">" ;
                const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, enumerator_8968.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_28) {
                  result << enumerator_8968.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 215)).stringValue () ;
                }else if (kBoolFalse == test_28) {
                }
                result << "</span>" ;
                result << function_linkForType (enumerator_8968.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 216)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 216)).stringValue () ;
                result << " " ;
                result << enumerator_8968.current_mFormalArgumentName (HERE).stringValue () ;
                index_8968_.increment () ;
                enumerator_8968.gotoNextObject () ;
              }
            }
            result << " &rarr; " ;
            result << function_linkForType (enumerator_8563.current_mReturnedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 218)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 218)).stringValue () ;
            result << "<br><br>" ;
            index_8563_.increment () ;
            enumerator_8563.gotoNextObject () ;
          }
        }
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_27) {
      }
      const enumGalgasBool test_29 = GALGAS_bool (kIsStrictSup, enumerator_1275.current_mInstanceMethodMap (HERE).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 223)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_29) {
        result << "<tr class=\"result_line\"><td>Methods</td><td>" ;
        GALGAS_uint index_9431_ (0) ;
        if (enumerator_1275.current_mInstanceMethodMap (HERE).isValid ()) {
          cEnumerator_instanceMethodMap enumerator_9431 (enumerator_1275.current_mInstanceMethodMap (HERE), kENUMERATION_UP) ;
          while (enumerator_9431.hasCurrentObject ()) {
            switch (enumerator_9431.current_mKind (HERE).enumValue ()) {
            case GALGAS_methodKind::kNotBuilt :
              break ;
            case GALGAS_methodKind::kEnum_definedAsMember :
              {
              }
              break ;
            case GALGAS_methodKind::kEnum_definedAsExtension :
              {
                result << "(extension) " ;
              }
              break ;
            }
            switch (enumerator_9431.current_mQualifier (HERE).enumValue ()) {
            case GALGAS_methodQualifier::kNotBuilt :
              break ;
            case GALGAS_methodQualifier::kEnum_isAbstract :
              {
                result << "<b>abstract</b> " ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasic :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasicFinal :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isInherited :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isOverriding :
              {
                result << "<b>override</b> " ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isOverridingAbstract :
              {
                result << "<b>abstract override</b> " ;
              }
              break ;
            }
            result << "<b>method</b> " ;
            result << enumerator_9431.current_lkey (HERE).getter_string (HERE).stringValue () ;
            GALGAS_uint index_9833_ (0) ;
            if (enumerator_9431.current_mParameterList (HERE).isValid ()) {
              cEnumerator_formalParameterSignature enumerator_9833 (enumerator_9431.current_mParameterList (HERE), kENUMERATION_UP) ;
              while (enumerator_9833.hasCurrentObject ()) {
                result << "<br>&nbsp;&nbsp;&nbsp;&nbsp;" ;
                switch (enumerator_9833.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
                case GALGAS_formalArgumentPassingModeAST::kNotBuilt :
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
                  {
                    result << " <span class=\"selecteur\">\?" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
                  {
                    result << " <span class=\"selecteur\">\?" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
                  {
                    result << " <span class=\"selecteur\">\?!" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
                  {
                    result << " <span class=\"selecteur\">!" ;
                  }
                  break ;
                }
                const enumGalgasBool test_30 = GALGAS_bool (kIsNotEqual, enumerator_9833.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_30) {
                  result << enumerator_9833.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 247)).stringValue () ;
                }else if (kBoolFalse == test_30) {
                }
                result << "</span>" ;
                result << function_linkForType (enumerator_9833.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 248)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 248)).stringValue () ;
                result << " " ;
                result << enumerator_9833.current_mFormalArgumentName (HERE).stringValue () ;
                index_9833_.increment () ;
                enumerator_9833.gotoNextObject () ;
              }
            }
            result << "<br><br>" ;
            index_9431_.increment () ;
            enumerator_9431.gotoNextObject () ;
          }
        }
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_29) {
      }
      const enumGalgasBool test_31 = GALGAS_bool (kIsStrictSup, enumerator_1275.current_mSetterMap (HERE).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 255)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_31) {
        result << "<tr class=\"result_line\"><td>Setters</td><td>" ;
        GALGAS_uint index_10503_ (0) ;
        if (enumerator_1275.current_mSetterMap (HERE).isValid ()) {
          cEnumerator_setterMap enumerator_10503 (enumerator_1275.current_mSetterMap (HERE), kENUMERATION_UP) ;
          while (enumerator_10503.hasCurrentObject ()) {
            switch (enumerator_10503.current_mKind (HERE).enumValue ()) {
            case GALGAS_methodKind::kNotBuilt :
              break ;
            case GALGAS_methodKind::kEnum_definedAsMember :
              {
              }
              break ;
            case GALGAS_methodKind::kEnum_definedAsExtension :
              {
                result << "(extension) " ;
              }
              break ;
            }
            switch (enumerator_10503.current_mQualifier (HERE).enumValue ()) {
            case GALGAS_methodQualifier::kNotBuilt :
              break ;
            case GALGAS_methodQualifier::kEnum_isAbstract :
              {
                result << "<b>abstract</b> " ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasic :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isBasicFinal :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isInherited :
              {
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isOverriding :
              {
                result << "<b>override</b> " ;
              }
              break ;
            case GALGAS_methodQualifier::kEnum_isOverridingAbstract :
              {
                result << "<b>abstract override</b> " ;
              }
              break ;
            }
            result << "<b>setter</b> " ;
            result << enumerator_10503.current_lkey (HERE).getter_string (HERE).stringValue () ;
            GALGAS_uint index_10905_ (0) ;
            if (enumerator_10503.current_mParameterList (HERE).isValid ()) {
              cEnumerator_formalParameterSignature enumerator_10905 (enumerator_10503.current_mParameterList (HERE), kENUMERATION_UP) ;
              while (enumerator_10905.hasCurrentObject ()) {
                result << "<br>&nbsp;&nbsp;&nbsp;&nbsp;" ;
                switch (enumerator_10905.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
                case GALGAS_formalArgumentPassingModeAST::kNotBuilt :
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
                  {
                    result << " <span class=\"selecteur\">\?" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
                  {
                    result << " <span class=\"selecteur\">\?" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
                  {
                    result << " <span class=\"selecteur\">\?!" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
                  {
                    result << " <span class=\"selecteur\">!" ;
                  }
                  break ;
                }
                const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, enumerator_10905.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_32) {
                  result << enumerator_10905.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 279)).stringValue () ;
                }else if (kBoolFalse == test_32) {
                }
                result << "</span>" ;
                result << function_linkForType (enumerator_10905.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 280)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 280)).stringValue () ;
                result << " " ;
                result << enumerator_10905.current_mFormalArgumentName (HERE).stringValue () ;
                index_10905_.increment () ;
                enumerator_10905.gotoNextObject () ;
              }
            }
            result << "<br><br>" ;
            index_10503_.increment () ;
            enumerator_10503.gotoNextObject () ;
          }
        }
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_31) {
      }
      const enumGalgasBool test_33 = GALGAS_bool (kIsStrictSup, enumerator_1275.current_mClassMethodMap (HERE).getter_count (SOURCE_FILE ("typeDump.html.galgasTemplate", 287)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_33) {
        result << "<tr class=\"result_line\"><td>Type procs</td><td>" ;
        GALGAS_uint index_11588_ (0) ;
        if (enumerator_1275.current_mClassMethodMap (HERE).isValid ()) {
          cEnumerator_classMethodMap enumerator_11588 (enumerator_1275.current_mClassMethodMap (HERE), kENUMERATION_UP) ;
          while (enumerator_11588.hasCurrentObject ()) {
            result << "<b>proc</b> @" ;
            result << enumerator_1275.current_lkey (HERE).getter_string (HERE).stringValue () ;
            result << " " ;
            result << enumerator_11588.current_lkey (HERE).getter_string (HERE).stringValue () ;
            GALGAS_uint index_11672_ (0) ;
            if (enumerator_11588.current_mParameterList (HERE).isValid ()) {
              cEnumerator_formalParameterSignature enumerator_11672 (enumerator_11588.current_mParameterList (HERE), kENUMERATION_UP) ;
              while (enumerator_11672.hasCurrentObject ()) {
                result << "<br>&nbsp;&nbsp;&nbsp;&nbsp;" ;
                switch (enumerator_11672.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
                case GALGAS_formalArgumentPassingModeAST::kNotBuilt :
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn :
                  {
                    result << " <span class=\"selecteur\">\?" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn :
                  {
                    result << " <span class=\"selecteur\">\?" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut :
                  {
                    result << " <span class=\"selecteur\">\?!" ;
                  }
                  break ;
                case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut :
                  {
                    result << " <span class=\"selecteur\">!" ;
                  }
                  break ;
                }
                const enumGalgasBool test_34 = GALGAS_bool (kIsNotEqual, enumerator_11672.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_34) {
                  result << enumerator_11672.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 299)).stringValue () ;
                }else if (kBoolFalse == test_34) {
                }
                result << "</span>" ;
                result << function_linkForType (enumerator_11672.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 300)), inCompiler COMMA_SOURCE_FILE ("typeDump.html.galgasTemplate", 300)).stringValue () ;
                result << " " ;
                result << enumerator_11672.current_mFormalArgumentName (HERE).stringValue () ;
                index_11672_.increment () ;
                enumerator_11672.gotoNextObject () ;
              }
            }
            result << "<br><br>" ;
            index_11588_.increment () ;
            enumerator_11588.gotoNextObject () ;
          }
        }
        result << "</td></tr>" ;
      }else if (kBoolFalse == test_33) {
      }
      index_1275_.increment () ;
      enumerator_1275.gotoNextObject () ;
    }
  }
  result << "\n"
    "</table>\n"
    "</div>\n"
    "</body>\n"
    "</html>\n" ;
  return GALGAS_string (result) ;
}

