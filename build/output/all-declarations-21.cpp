#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-21.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                         extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_lstring var_usefulnessName_146980 = function_lexiqueNameForUsefulEntitiesGraph (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3495)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_146980 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3496)) ;
  }
  GALGAS_terminalMap joker_147276_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_147276_2 ; // Joker input parameter
  GALGAS_lstring joker_147276_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueComponentName, joker_147276_3, joker_147276_2, joker_147276_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mLexiqueGetterName.mAttribute_string.objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLexiqueGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3504)), GALGAS_string ("unknown getter"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3504)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3508)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3508)), object->mAttribute_mLexiqueComponentName.mAttribute_location, object->mAttribute_mLexiqueComponentName.mAttribute_string, object->mAttribute_mLexiqueGetterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3507)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                  extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@expressionCollectionValue enterInSemanticContext'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3523)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                               extensionMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@expressionListCollectionValue enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  extensionMethod_enterInSemanticContext (object->mAttribute_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3529)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                               extensionMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@expressionCollectionValue analyze'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression_149767 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_149767, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3552)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_149767.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3561)), object->mAttribute_mExpressionLocation, var_expression_149767, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3561)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mAttribute_mExpressionLocation, var_expression_149767  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3563))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3563)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                extensionMethod_expressionCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineExtensionMethod_expressionCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@expressionListCollectionValue analyze'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList_150591 = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3575)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_150712 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_150591.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3577)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3577)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)).add_operation (var_formalParameterTypeList_150591.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3579)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3579)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3580)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3579)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3579)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3580)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)) ;
    var_semanticExpressionListForGeneration_150712.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_150712 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3582)) ;
    cEnumerator_actualOutputExpressionList enumerator_151167 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    cEnumerator_functionSignature enumerator_151198 (var_formalParameterTypeList_150591, kEnumeration_up) ;
    while (enumerator_151167.hasCurrentObject () && enumerator_151198.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_151453 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_151167.current (HERE).mAttribute_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_151198.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_151453, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_151198.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_151167.current (HERE).mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_151198.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_151167.current (HERE).mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3593)), GALGAS_string ("the selector should be '!").add_operation (enumerator_151198.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3594)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3594)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3594)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3594)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3593)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_151198.current_mFormalArgumentType (HERE), var_exp_151453.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3596)), object->mAttribute_mEndOfExpressionLocation, var_exp_151453, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3596)) ;
      }
      var_semanticExpressionListForGeneration_150712.addAssign_operation (var_exp_151453  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3597)) ;
      enumerator_151167.gotoNextObject () ;
      enumerator_151198.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mAttribute_mEndOfExpressionLocation, var_semanticExpressionListForGeneration_150712  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3599))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3599)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                extensionMethod_expressionListCollectionValue_analyze) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineExtensionMethod_expressionListCollectionValue_analyze, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  cEnumerator_collectionValueElementList enumerator_153559 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_153559.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_153559.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3639)) ;
    enumerator_153559.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                         extensionMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@collectionValueAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_154103 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_targetType_154103 = constinArgument_inType ;
  }else if (kBoolFalse == test_0) {
    var_targetType_154103 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3658)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType_154103.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3661)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3662)), GALGAS_string ("Cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3662)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_targetType_154103.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3663)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3663)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3664)), GALGAS_string ("the @").add_operation (object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3664)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3664)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3664)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3664)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      GALGAS_lstring var_usefulnessName_154538 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_targetType_154103.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3666)), object->mAttribute_mEndOfCollectionValue  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3666)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3666)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_154538 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3667)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mElementList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3668)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_154103, object->mAttribute_mTypeName.mAttribute_location  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3669)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_154968 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3674)) ;
        cEnumerator_collectionValueElementList enumerator_155002 (object->mAttribute_mElementList, kEnumeration_up) ;
        while (enumerator_155002.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_155002.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_targetType_154103, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_154968, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3676)) ;
          enumerator_155002.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_154103, object->mAttribute_mEndOfCollectionValue, var_collectionValueElementListForGeneration_154968  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3685)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                  extensionMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineExtensionMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'analyzeSemanticInstructionList'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSemanticInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                             const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                             const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                             const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                             const GALGAS_location constinArgument_inEndOfBranchLocation,
                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                             GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 59)) ;
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 61)) ;
  }
  cEnumerator_localConstantList enumerator_3961 (constinArgument_inLocalConstantList, kEnumeration_up) ;
  while (enumerator_3961.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3961.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_3961.current_mName (HERE), enumerator_3961.current_mType (HERE), enumerator_3961.current_mCppName (HERE), enumerator_3961.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 65)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_3961.current_mName (HERE), enumerator_3961.current_mType (HERE), enumerator_3961.current_mCppName (HERE), enumerator_3961.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 67)) ;
      }
    }
    enumerator_3961.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4250 (constinArgument_inLocalInitializedVariableList, kEnumeration_up) ;
  while (enumerator_4250.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (enumerator_4250.current_mName (HERE), enumerator_4250.current_mType (HERE), enumerator_4250.current_mCppName (HERE), enumerator_4250.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 72)) ;
    }
    enumerator_4250.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_4405 (constinArgument_inSemanticInstructionListAST, kEnumeration_up) ;
  while (enumerator_4405.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_4405.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 76)) ;
    enumerator_4405.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 85)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 128)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 128)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 131)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 131)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 132)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 133)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)), GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 137)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 137)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 137)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression_7401 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7401, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 139)) ;
    {
    routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inFormalArgumentType, var_expression_7401.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 148)), object->mAttribute_mEndOfExpressionLocation, var_expression_7401, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 148)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression_7401  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 150))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 150)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                   extensionMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterAST * object = (const cPtr_outputInputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 169)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 172)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 172)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 174)) ;
    }
  }
  GALGAS_string var_variableCppName_9116 ;
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType_9234 ;
  {
  GALGAS_string joker_9253 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mAttribute_mOutputInputActualParameterName, var_parameterType_9234, var_variableCppName_9116, joker_9253, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 178)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList_9270 = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType_9234  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 179)) ;
  cEnumerator_lstringlist enumerator_9362 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_9362.hasCurrentObject ()) {
    GALGAS_attributeMap var_attributeMap_9386 = var_parameterType_9234.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181)) ;
    var_attributeMap_9386.method_searchKey (enumerator_9362.current_mValue (HERE), var_parameterType_9234, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 182)) ;
    var_typeList_9270.addAssign_operation (var_parameterType_9234  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 190)) ;
    enumerator_9362.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_9234)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_9234.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 196)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 196)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 199)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 199)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mAttribute_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType_9234, var_variableCppName_9116, object->mAttribute_mStructAttributeList, var_typeList_9270  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 205))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 205)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                   extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputSingleJokerParameterAST * object = (const cPtr_outputInputSingleJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputSingleJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 225)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 228)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 228)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_11823 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 232)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_defaultConstructorName_11823.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)), GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)) ;
  }
  GALGAS_string var_cppVarName_12096 = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_12096, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mActualSelector.mAttribute_location  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 242))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 238))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 238)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_12096, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 247))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 243))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 243)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputJokerParameterAST * object = (const cPtr_outputInputJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)) ;
  }
  GALGAS_string var_defaultConstructorName_13762 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_defaultConstructorName_13762.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)) ;
  }
  GALGAS_string var_cppVarName_14038 = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_14038, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mAttribute_mQualifierLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 274))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 274)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_14038, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 283))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 279))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 279)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                                const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                                GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                                GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualExistingVariableParameterAST * object = (const cPtr_inputActualExistingVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualExistingVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 299)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 301)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 301)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 302)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 302)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType_15970 ;
  GALGAS_string var_targetVariableCppName_16001 ;
  {
  GALGAS_string joker_16007 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mInputActualParameterName, var_parameterType_15970, var_targetVariableCppName_16001, joker_16007, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 306)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_15970)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_15970.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 319)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 319)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 320)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 320)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 323))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 323)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_15970, var_targetVariableCppName_16001  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewVariableParameterAST * object = (const cPtr_inputActualNewVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 345)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 346)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 348)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 348)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 346)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 350)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 350)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 350)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 350)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 350)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_18136 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 355)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_18136)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_18136.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)) ;
    }
  }
  GALGAS_string var_targetVariableCppName_18597 = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)).add_operation (object->mAttribute_mInputActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_18597, var_targetVariableCppName_18597, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 367)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_18597  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374)) ;
  const enumGalgasBool test_9 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 378)).boolEnum () ;
  if (kBoolTrue == test_9) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 379)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 379)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 382)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_18597  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 384))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 384)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 404)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 407)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 407)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mInputOptionalActualTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_20908 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 413)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_20908)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 418)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_20908.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 420)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 420)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 418)) ;
    }
  }
  GALGAS_string var_targetVariableCppName_21369 = GALGAS_string ("var_").add_operation (object->mAttribute_mInputActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 424)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 424)).add_operation (object->mAttribute_mInputActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 424)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 424)) ;
  const enumGalgasBool test_9 = object->mAttribute_mMarkedAsUnused.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_21369, var_targetVariableCppName_21369, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 426)) ;
    }
  }else if (kBoolFalse == test_9) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_21369, var_targetVariableCppName_21369, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 433)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_21369  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 441))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 441)) ;
  const enumGalgasBool test_10 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mAttribute_mInputActualParameterName.mAttribute_string COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)).boolEnum () ;
  if (kBoolTrue == test_10) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (object->mAttribute_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 447)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mAttribute_mInputActualParameterName.mAttribute_string  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 450)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_21369  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 452)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputSingleJokerActualParameterAST * object = (const cPtr_inputSingleJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputSingleJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 472)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 472)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (object->mAttribute_mActualSelector.mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 476)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_cppVarName_23823 = GALGAS_string ("joker_").add_operation (object->mAttribute_mActualSelector.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_23823  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 480))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 480)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 499)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 502)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_cppVarName_25160 = GALGAS_string ("joker_").add_operation (object->mAttribute_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)).add_operation (object->mAttribute_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_25160  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 545)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                        extensionMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                        extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeRoutineArguments'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineArguments (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_string constinArgument_inInvokedEntityName,
                                      const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                      const GALGAS_actualParameterListAST constinArgument_inActualParameterList,
                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                      GALGAS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 577)).objectCompare (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 577)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)), GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)).add_operation (constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)).add_operation (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 581)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 580)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 581)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)) ;
    outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 584)) ;
    GALGAS_stringset var_exclusiveVariableSet_28992 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 585)) ;
    cEnumerator_formalParameterSignature enumerator_29040 (constinArgument_inRoutineSignature, kEnumeration_up) ;
    cEnumerator_actualParameterListAST enumerator_29069 (constinArgument_inActualParameterList, kEnumeration_up) ;
    while (enumerator_29040.hasCurrentObject () && enumerator_29069.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((const cPtr_actualParameterAST *) enumerator_29069.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_29040.current_mFormalSelector (HERE), enumerator_29040.current_mFormalArgumentType (HERE), enumerator_29040.current_mFormalArgumentPassingMode (HERE), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_28992, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 587)) ;
      enumerator_29040.gotoNextObject () ;
      enumerator_29069.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'checkExpressionIsBoolean'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkExpressionIsBoolean (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                       const GALGAS_location constinArgument_inErrorLocation,
                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType_29830 = constinArgument_inExpression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 610)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_29892 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expressionType_29830.objectCompare (var_boolType_29892)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outExpression = constinArgument_inExpression ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_expressionType_29830.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_expressionType_29830.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)).getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType_30314 ;
        var_expressionType_29830.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)), var_attributeType_30314, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType_30314.objectCompare (var_boolType_29892)).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_boolType_29892, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_29830.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 633)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 633)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 632)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_29830.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 638)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 638)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 637)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_31097 = (const cMapElement_getterMap *) var_expressionType_29830.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 642)).readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (NULL != objectArray_31097) {
          macroValidSharedObject (objectArray_31097, cMapElement_getterMap) ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, objectArray_31097->mAttribute_mReturnedType.objectCompare (var_boolType_29892)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 644)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, objectArray_31097->mAttribute_mArgumentTypeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 645)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 646)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, objectArray_31097->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, objectArray_31097->mAttribute_mErrorMessage, fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 648)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_10) {
              outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_boolType_29892, constinArgument_inErrorLocation, objectArray_31097->mAttribute_mKind, constinArgument_inExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 655)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 657)), objectArray_31097->mAttribute_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 650)) ;
            }
          }
        }
      }else{
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_expressionType_29830.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 661)).getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 661)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_29830.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 663)), fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_12) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          appendFixItActions (fixItArray14, kFixItReplace, var_expressionType_29830.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 669)).getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 669))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_29830.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 667)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 703)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 715)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 716)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 716)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_34608 ;
  GALGAS_string var_cppName_34629 ;
  {
  GALGAS_string joker_34631 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type_34608, var_cppName_34629, joker_34631, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 718)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_34652 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_34652.objectCompare (var_type_34608)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)).add_operation (var_type_34608.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)).add_operation (var_expectedType_34652.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 723)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_34629.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 725)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                         const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                         GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)) ;
  }
  GALGAS_string var_cppName_35675 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_35799 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 740)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type_35799, var_cppName_35675, var_cppName_35675, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_36019 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_36019.objectCompare (var_type_35799)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)).add_operation (var_type_35799.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)).add_operation (var_expectedType_36019.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 746)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_35675, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 748)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 748)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 748)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 748))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 748)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                           const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                           GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 759)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 760)) ;
  }
  GALGAS_string var_cppName_37047 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_37171 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 763)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_type_37171, var_cppName_37047, var_cppName_37047, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 764)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_37384 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_37384.objectCompare (var_type_37171)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)).add_operation (var_type_37171.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)).add_operation (var_expectedType_37384.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 769)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_37047, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkMethodSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMethodSignatures (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 28)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 29)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_2762 (constinArgument_inReferenceSignature, kEnumeration_up) ;
    cEnumerator_formalParameterListForGeneration enumerator_2787 (constinArgument_inTestedSignature, kEnumeration_up) ;
    while (enumerator_2762.hasCurrentObject () && enumerator_2787.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2787.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 33)), GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2787.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_2762.current_mFormalSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_2787.current_mFormalSelector (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 39)), GALGAS_string ("the selector should be '").add_operation (extensionGetter_string (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (enumerator_2762.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)) ;
      }
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).objectCompare (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 42)), GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)) ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 45)) ;
      }
      enumerator_2762.gotoNextObject () ;
      enumerator_2787.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkGetterSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkGetterSignatures (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReturnType,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInheritedReturnType,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)).objectCompare (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)).add_operation (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 68)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 70)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 70)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 71)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 72)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 72)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)) ;
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 73)) ;
  }else if (kBoolFalse == test_3) {
    cEnumerator_functionSignature enumerator_5481 (constinArgument_inReferenceSignature, kEnumeration_up) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5506 (constinArgument_inTestedSignature, kEnumeration_up) ;
    while (enumerator_5481.hasCurrentObject () && enumerator_5506.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_5481.current_mFormalSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5481.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_5506.current_mFormalSelector (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 77)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_5481.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)) ;
      }
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)).objectCompare (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_5506.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 82)), GALGAS_string ("the '").add_operation (enumerator_5506.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)) ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 85)) ;
      }
      enumerator_5481.gotoNextObject () ;
      enumerator_5506.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'buildLocalVariableMapAndSignature'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLocalVariableMapAndSignature (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 123)) ;
  cEnumerator_formalParameterListAST enumerator_8165 (constinArgument_inRoutineSignatureAST, kEnumeration_up) ;
  while (enumerator_8165.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_8181 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_8165.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 125)) ;
    GALGAS_string var_formalArgumentCppName_8304 ;
    switch (enumerator_8165.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_8304 = GALGAS_string ("inArgument_").add_operation (enumerator_8165.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 129)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 129)) ;
        const enumGalgasBool test_0 = enumerator_8165.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioVariableMap.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_8165.current_mFormalArgumentName (HERE), var_type_8181, var_formalArgumentCppName_8304, var_formalArgumentCppName_8304, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 131)) ;
          }
        }else if (kBoolFalse == test_0) {
          {
          ioArgument_ioVariableMap.setter_insertInputFormalArgument (enumerator_8165.current_mFormalArgumentName (HERE), var_type_8181, var_formalArgumentCppName_8304, var_formalArgumentCppName_8304, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 133)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_8304 = GALGAS_string ("outArgument_").add_operation (enumerator_8165.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 136)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)) ;
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_8165.current_mFormalArgumentName (HERE), var_type_8181, var_formalArgumentCppName_8304, var_formalArgumentCppName_8304, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 137)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_8304 = GALGAS_string ("ioArgument_").add_operation (enumerator_8165.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 139)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 139)) ;
        const enumGalgasBool test_1 = enumerator_8165.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioVariableMap.setter_insertInputOutputFormalArgumentDeclaredAsUnused (enumerator_8165.current_mFormalArgumentName (HERE), var_type_8181, var_formalArgumentCppName_8304, var_formalArgumentCppName_8304, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 141)) ;
          }
        }else if (kBoolFalse == test_1) {
          {
          ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_8165.current_mFormalArgumentName (HERE), var_type_8181, var_formalArgumentCppName_8304, var_formalArgumentCppName_8304, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_8304 = GALGAS_string ("constinArgument_").add_operation (enumerator_8165.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 146)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)) ;
        const enumGalgasBool test_2 = enumerator_8165.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_8165.current_mFormalArgumentName (HERE), var_type_8181, var_formalArgumentCppName_8304, var_formalArgumentCppName_8304, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_8165.current_mFormalArgumentName (HERE), var_type_8181, var_formalArgumentCppName_8304, var_formalArgumentCppName_8304, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 150)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_8165.current_mFormalSelector (HERE), enumerator_8165.current_mFormalArgumentPassingMode (HERE), var_type_8181, enumerator_8165.current_mFormalArgumentName (HERE), var_formalArgumentCppName_8304  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 153)) ;
    enumerator_8165.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineBody'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                 const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                 const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                 const GALGAS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                 const GALGAS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                 const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                 const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                 const GALGAS_location constinArgument_inEndOfMethodLocation,
                                 GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                 GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap_10865 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 173)) ;
  cEnumerator_localConstantList enumerator_10951 (constinArgument_inLocalConstantList, kEnumeration_up) ;
  while (enumerator_10951.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_10951.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_variableMap_10865.setter_insertUsedLocalConstant (enumerator_10951.current_mName (HERE), enumerator_10951.current_mType (HERE), enumerator_10951.current_mCppName (HERE), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 177)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      var_variableMap_10865.setter_insertLocalConstant (enumerator_10951.current_mName (HERE), enumerator_10951.current_mType (HERE), enumerator_10951.current_mCppName (HERE), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 179)) ;
      }
    }
    enumerator_10951.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_11306 (constinArgument_inNonMutableTypedAttributeList, kEnumeration_up) ;
  while (enumerator_11306.hasCurrentObject ()) {
    {
    var_variableMap_10865.setter_insertNonMutableAttribute (enumerator_11306.current_mAttributeName (HERE), enumerator_11306.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 187)).add_operation (enumerator_11306.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 187)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 187)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 184)) ;
    }
    enumerator_11306.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_11643 (constinArgument_inMutableTypedAttributeList, kEnumeration_up) ;
  while (enumerator_11643.hasCurrentObject ()) {
    {
    var_variableMap_10865.setter_insertMutableAttribute (enumerator_11643.current_mAttributeName (HERE), enumerator_11643.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 196)).add_operation (enumerator_11643.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 196)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 196)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 193)) ;
    }
    enumerator_11643.gotoNextObject () ;
  }
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inRoutineSignatureAST, var_variableMap_10865, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 201)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 208)) ;
  cEnumerator_semanticInstructionListAST enumerator_12231 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_12231.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_12231.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10865, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 210)) ;
    enumerator_12231.gotoNextObject () ;
  }
  var_variableMap_10865.method_checkAutomatonStates (constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 219)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_13067 = function_functionNameForUsefulEntitiesGraph (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 233)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13067, var_nameForUsefulness_13067, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 234)) ;
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_13225 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 236)) ;
  cEnumerator_formalInputParameterListAST enumerator_13300 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_13300.hasCurrentObject ()) {
    var_formalArgumentList_13225.addAssign_operation (enumerator_13300.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_13300.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 240)), enumerator_13300.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 241)), enumerator_13300.current_mFormalArgumentName (HERE), enumerator_13300.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 238)) ;
    enumerator_13300.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 246)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 250)), var_formalArgumentList_13225, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 252))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 247))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 245)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_14440 = function_procedureNameForUsefulEntitiesGraph (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 267)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14440, var_nameForUsefulness_14440, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 268)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_14598 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 270)) ;
  cEnumerator_formalParameterListAST enumerator_14668 (object->mAttribute_mFormalArgumentList, kEnumeration_up) ;
  while (enumerator_14668.hasCurrentObject ()) {
    var_formalArgumentList_14598.addAssign_operation (enumerator_14668.current_mFormalSelector (HERE), enumerator_14668.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_14668.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 275)), enumerator_14668.current_mFormalArgumentName (HERE), enumerator_14668.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 277))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 272)) ;
    enumerator_14668.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 280)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 283)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 284)), var_formalArgumentList_14598  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 281))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@procDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_procDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_15717 = function_procedureNameForUsefulEntitiesGraph (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 300)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15717, var_nameForUsefulness_15717, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 301)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_15892 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 303)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_15986 ;
  GALGAS_analysisContext var_analysisContext_16008 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 308)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 310))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 305)) ;
  {
  routine_analyzeRoutineBody (var_nameForUsefulness_15717, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_16008, object->mAttribute_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 316)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 317)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 318)), GALGAS_string::makeEmptyString (), object->mAttribute_mRoutineInstructionList, object->mAttribute_mEndOfRoutineInstructionList, var_instructionList_15986, var_formalArgumentList_15892, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 311)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 327)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 330)), object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 331)), var_formalArgumentList_15892, GALGAS_bool (false), var_instructionList_15986  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 328))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 326)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_procDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                         extensionMethod_procDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_procDeclarationAST_semanticAnalysis (defineExtensionMethod_procDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeFunctionBody'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                  const GALGAS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                  const GALGAS_typedPropertyList constinArgument_inTypedAttributeList,
                                  const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                  const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                  const GALGAS_lstring constinArgument_inReturnVariableName,
                                  const GALGAS_lstring constinArgument_inResultTypeName,
                                  const GALGAS_location constinArgument_inEndOfFunctionLocation,
                                  GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                  GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                  GALGAS_string & outArgument_outResultVariableCppName,
                                  GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap_17662 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 356)) ;
  cEnumerator_typedPropertyList enumerator_17751 (constinArgument_inTypedAttributeList, kEnumeration_up) ;
  while (enumerator_17751.hasCurrentObject ()) {
    {
    var_variableMap_17662.setter_insertNonMutableAttribute (enumerator_17751.current_mAttributeName (HERE), enumerator_17751.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)).add_operation (enumerator_17751.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 362)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 362)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 359)) ;
    }
    enumerator_17751.gotoNextObject () ;
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 367)) ;
  cEnumerator_formalInputParameterListAST enumerator_18149 (constinArgument_inFunctionSignature, kEnumeration_up) ;
  while (enumerator_18149.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_18174 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_18149.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 369)) ;
    const enumGalgasBool test_0 = enumerator_18149.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_cppName_18330 = GALGAS_string ("constinArgument_").add_operation (enumerator_18149.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 371)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 371)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18149.current_mFormalSelector (HERE), var_parameterType_18174, var_cppName_18330, enumerator_18149.current_mFormalArgumentName (HERE), enumerator_18149.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 372)) ;
      const enumGalgasBool test_1 = enumerator_18149.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_variableMap_17662.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_18149.current_mFormalArgumentName (HERE), var_parameterType_18174, var_cppName_18330, var_cppName_18330, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 379)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        var_variableMap_17662.setter_insertConstantInputFormalArgument (enumerator_18149.current_mFormalArgumentName (HERE), var_parameterType_18174, var_cppName_18330, var_cppName_18330, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 381)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_cppName_18879 = GALGAS_string ("inArgument_").add_operation (enumerator_18149.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 384)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 384)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18149.current_mFormalSelector (HERE), var_parameterType_18174, var_cppName_18879, enumerator_18149.current_mFormalArgumentName (HERE), enumerator_18149.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 385)) ;
      const enumGalgasBool test_2 = enumerator_18149.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_variableMap_17662.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_18149.current_mFormalArgumentName (HERE), var_parameterType_18174, var_cppName_18879, var_cppName_18879, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 392)) ;
        }
      }else if (kBoolFalse == test_2) {
        {
        var_variableMap_17662.setter_insertInputFormalArgument (enumerator_18149.current_mFormalArgumentName (HERE), var_parameterType_18174, var_cppName_18879, var_cppName_18879, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 394)) ;
        }
      }
    }
    enumerator_18149.gotoNextObject () ;
  }
  outArgument_outReturnedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, constinArgument_inResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 399)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 400)) ;
  {
  var_variableMap_17662.setter_insertOutputFormalArgument (constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 401)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 403)) ;
  cEnumerator_semanticInstructionListAST enumerator_19908 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_19908.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_19908.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_17662, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 405)) ;
    enumerator_19908.gotoNextObject () ;
  }
  var_variableMap_17662.method_checkAutomatonStates (constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 414)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@functionDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_20726 = function_functionNameForUsefulEntitiesGraph (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 428)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20726, var_nameForUsefulness_20726, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 429)) ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mIsUsefull.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_20726  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 431)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_21038 ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_21104 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_21139 ;
  GALGAS_string var_resultVariableCppName_21171 ;
  GALGAS_analysisContext var_analysisContext_21193 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 441)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 443))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 438)) ;
  {
  routine_analyzeFunctionBody (var_nameForUsefulness_20726, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_21193, object->mAttribute_mFormalArgumentList, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 449)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, var_formalInputParameterList_21104, var_returnType_21139, var_resultVariableCppName_21171, var_semanticInstructionListForGeneration_21038, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 444)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 462)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 465)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 466)), var_formalInputParameterList_21104, var_returnType_21139, var_resultVariableCppName_21171, var_semanticInstructionListForGeneration_21038  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 463))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 461)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                         extensionMethod_functionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineExtensionMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_22630 = function_functionNameForUsefulEntitiesGraph (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 485)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22630, var_nameForUsefulness_22630, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 486)) ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mIsUsefull.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_22630  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 488)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_22942 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_22977 ;
  GALGAS_string var_resultVariableCppName_23009 ;
  GALGAS_analysisContext var_analysisContext_23031 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 497)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 499))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 494)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_23476 ; // Joker input parameter
  routine_analyzeFunctionBody (var_nameForUsefulness_22630, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_23031, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 504)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 505)), GALGAS_string::makeEmptyString (), object->mAttribute_mFunctionInstructionList, object->mAttribute_mResultVariableName, object->mAttribute_mResultTypeName, object->mAttribute_mEndOfFunctionInstructionList, joker_23476, var_returnType_22977, var_resultVariableCppName_23009, var_semanticInstructionListForGeneration_22942, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 500)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 518)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 521)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 522)), var_returnType_22977, var_resultVariableCppName_23009, var_semanticInstructionListForGeneration_22942  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 519))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 517)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_lstring var_filewrapperNameForUsefulness_24939 = function_filewrapperNameForUsefulEntitiesGraph (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 544)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_24939, var_filewrapperNameForUsefulness_24939, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 545)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_25248 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_25298 ;
  GALGAS_lstring joker_25200 ; // Joker input parameter
  GALGAS_lstringlist joker_25207 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_25304_2 ; // Joker input parameter
  GALGAS_bool joker_25304_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mFilewrapperMap.method_searchKey (object->mAttribute_mFilewrapperName, joker_25200, joker_25207, var_wrapperFileMap_25248, var_wrapperDirectoryMap_25298, joker_25304_2, joker_25304_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 547)) ;
  GALGAS_string var_absoluteSourcePath_25364 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mFilewrapperPath.mAttribute_string.getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 557)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath_25364 = object->mAttribute_mFilewrapperPath.mAttribute_string ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath_25364 = object->mAttribute_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 560)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 560)).add_operation (object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 560)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath_25364.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 562)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 562)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mAttribute_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 563)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_25364, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_25871 = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 566)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_25915 (object->mAttribute_mFilewrapperTemplateList, kEnumeration_up) ;
    while (enumerator_25915.hasCurrentObject ()) {
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_25965 = function_filewrapperTemplateNameForUsefulEntitiesGraph (object->mAttribute_mFilewrapperName, enumerator_25915.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 568)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_25965, var_filewrapperTemplateNameForUsefulness_25965, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_25965, var_filewrapperNameForUsefulness_24939 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 573)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_25915.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 574)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 574)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_25915.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 575)), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_25364, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 576)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 576)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 575)) ;
      }
      GALGAS_string var_absoluteTemplatePath_26579 = var_absoluteSourcePath_25364.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 578)).add_operation (enumerator_25915.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 578)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_26830 ;
      var_resultingInstructionList_26830.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath_26579, enumerator_25915.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 580))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 580)), var_resultingInstructionList_26830  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 580)) ;
      GALGAS_templateVariableMap var_templateVariableMap_26914 = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_27005 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 584)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_27068 (enumerator_25915.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
      while (enumerator_27068.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_27088 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_27068.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 586)) ;
        GALGAS_string var_cppVarName_27206 = GALGAS_string ("in_").add_operation (enumerator_27068.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 587)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
        {
        var_templateVariableMap_26914.setter_insertKey (enumerator_27068.current_mFormalArgumentName (HERE), var_type_27088, var_cppVarName_27206, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 588)) ;
        }
        var_filewrapperTemplateFormalInputParameters_27005.addAssign_operation (enumerator_27068.current_mFormalTemplateSelector (HERE), var_type_27088, var_cppVarName_27206, enumerator_27068.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 589)) ;
        enumerator_27068.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_27558 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 592)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_27634 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_26914  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 593)) ;
      {
      routine_templateInstructionListAnalysis (var_filewrapperNameForUsefulness_24939, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_27634, var_resultingInstructionList_26830, var_templateInstructionListForGeneration_27558, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 597)) ;
      }
      var_filewrapperTemplateListForGeneration_25871.addAssign_operation (enumerator_25915.current_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 606)), var_filewrapperTemplateFormalInputParameters_27005, var_templateInstructionListForGeneration_27558  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 605)) ;
      enumerator_25915.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 612)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 615)), object->mAttribute_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 616)), object->mAttribute_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 617)), var_wrapperFileMap_25248, var_wrapperDirectoryMap_25298, var_filewrapperTemplateListForGeneration_25871  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 613))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 611)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_lstring var_nameForUsefulness_29201 = function_syntaxNameForUsefulEntitiesGraph (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 636)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_29201, var_nameForUsefulness_29201, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 637)) ;
  }
  GALGAS_terminalMap var_terminalMap_29517 ;
  GALGAS_indexingListAST var_indexingListAST_29559 ;
  GALGAS_lstring var_indexingDirectory_29595 ;
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mLexiqueName, var_terminalMap_29517, var_indexingListAST_29559, var_indexingDirectory_29595, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 639)) ;
  GALGAS_stringset var_indexNameSet_29680 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 646)) ;
  cEnumerator_indexingListAST enumerator_29723 (var_indexingListAST_29559, kEnumeration_up) ;
  while (enumerator_29723.hasCurrentObject ()) {
    var_indexNameSet_29680.addAssign_operation (enumerator_29723.current_mIndexName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 648)) ;
    enumerator_29723.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_29795 = var_indexingDirectory_29595.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 650)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 650)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 652)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName_29959 = object->mAttribute_mLexiqueName.mAttribute_string ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_30392 ;
    {
    routine_semanticAnalysisOfSyntaxComponent (var_nameForUsefulness_29201, ioArgument_ioUsefulEntitiesGraph, object->mAttribute_mNonterminalDeclarationList, object->mAttribute_mRuleList, object->mAttribute_mSyntaxComponentName.mAttribute_string, var_lexiqueName_29959, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap_29517, var_indexNameSet_29680, var_hasIndexing_29795, object->mAttribute_mHasTranslateFeature, var_syntaxDeclarationForGeneration_30392, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 654)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_30392  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 669)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string constinArgument_inProductDirectory,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 686)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687)) ;
  }
  GALGAS_lstring var_grammarNameForUsefulness_31171 = function_grammarNameForUsefulEntitiesGraph (object->mAttribute_mGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 690)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_31171, var_grammarNameForUsefulness_31171, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 691)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_31474 = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 693)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_31554 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 694)) ;
  GALGAS_lstring var_lexiqueComponentName_31590 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 695)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_31714 = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 696)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_31764 = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 697)) ;
  GALGAS_uint var_addedNonTerminalCount_31799 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_31852 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_31852.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_31887 = function_syntaxNameForUsefulEntitiesGraph (enumerator_31852.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 700)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31171, var_syntaxNameForUsefulness_31887 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 701)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_32073 = var_addedNonTerminalCount_31799 ;
    GALGAS_lstring var_lexiqueName_32228 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_32297 ;
    GALGAS_syntaxRuleListAST var_ruleList_32336 ;
    GALGAS_bool var_hasTranslateFeature_32373 ;
    constinArgument_inSemanticContext.mAttribute_mSyntaxComponentMapForSemanticAnalysis.method_searchKey (enumerator_31852.current_mValue (HERE), var_lexiqueName_32228, var_nonterminalDeclarationList_32297, var_ruleList_32336, var_hasTranslateFeature_32373, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 703)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_32412 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_32228, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31171, var_lexiqueNameForUsefulness_32412 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)) ;
    }
    const enumGalgasBool test_1 = object->mAttribute_mHasTranslateFeature.operator_and (var_hasTranslateFeature_32373.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 713)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 713)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_31852.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 714)), GALGAS_string ("as '").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature_32373.operator_and (object->mAttribute_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 715)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 715)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mAttribute_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 716)), GALGAS_string ("as '").add_operation (enumerator_31852.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 716)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 716)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 716)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName_31590.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName_31590 = var_lexiqueName_32228 ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName_32228.mAttribute_string.objectCompare (var_lexiqueComponentName_31590.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_31852.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 722)), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_32228.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)).add_operation (var_lexiqueComponentName_31590.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 723)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 724)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis_31554, var_nonterminalDeclarationList_32297, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 727)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis_31554, var_ruleList_32336, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 732)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis_31554, enumerator_31852.current_mValue (HERE), var_ruleList_32336, var_actuallyUsedTerminalSymbolMap_31474, var_syntaxComponentListForGrammarAnalysis_31714, var_addedNonTerminalCount_31799, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 737)) ;
    }
    GALGAS_uint var_i_34010 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount_31799.isValid ()) {
      uint32_t variant_34023 = var_addedNonTerminalCount_31799.uintValue () ;
      bool loop_34023 = true ;
      while (loop_34023) {
        loop_34023 = GALGAS_bool (kIsStrictInf, var_i_34010.objectCompare (var_addedNonTerminalCount_31799.substract_operation (var_addedNonTerminalCountRef_32073, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 746)))).isValid () ;
        if (loop_34023) {
          loop_34023 = GALGAS_bool (kIsStrictInf, var_i_34010.objectCompare (var_addedNonTerminalCount_31799.substract_operation (var_addedNonTerminalCountRef_32073, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 746)))).boolValue () ;
        }
        if (loop_34023 && (0 == variant_34023)) {
          loop_34023 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 746)) ;
        }
        if (loop_34023) {
          variant_34023 -- ;
          var_nonTerminalToAddList_31764.addAssign_operation (enumerator_31852.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 747)), var_i_34010  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 747)) ;
          var_i_34010.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 748)) ;
        }
      }
    }
    enumerator_31852.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet_34319 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 752)) ;
  GALGAS_lstring var_inIndexingDirectory_34539 ;
  GALGAS_terminalMap joker_34427 ; // Joker input parameter
  GALGAS_indexingListAST joker_34463 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mLexiqueComponentMapForSemanticAnalysis.method_searchKey (var_lexiqueComponentName_31590, joker_34427, joker_34463, var_inIndexingDirectory_34539, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 753)) ;
  GALGAS_bool var_hasIndexing_34567 = var_inIndexingDirectory_34539.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 759)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 759)) ;
  const enumGalgasBool test_8 = var_hasIndexing_34567.operator_and (object->mAttribute_mHasIndexing.mAttribute_bool.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 760)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 760)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mAttribute_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 761)), GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName_31590.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 761)) ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_10 = var_hasIndexing_34567.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 762)).operator_and (object->mAttribute_mHasIndexing.mAttribute_bool COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 762)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (object->mAttribute_mHasIndexing.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 763)), GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName_31590.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)) ;
    }
  }
  GALGAS_uint var_startSymbolIndex_35149 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_35221 ;
  var_nonTerminalMapForGrammarAnalysis_31554.method_searchKey (object->mAttribute_mStartSymbolName, var_startSymbolIndex_35149, var_startSymbolAltMap_35221, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 767)) ;
  {
  routine_checkLabelMap (object->mAttribute_mStartSymbolName.mAttribute_location, object->mAttribute_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis_31554.getter_locationForKey (object->mAttribute_mStartSymbolName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 776)), var_startSymbolAltMap_35221, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 773)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_35601 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 780)) ;
  cEnumerator_lstringlist enumerator_35641 (object->mAttribute_mUnusedNonterminalList, kEnumeration_up) ;
  while (enumerator_35641.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_35728 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_35730 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_31554.method_searchKey (enumerator_35641.current_mValue (HERE), var_nonterminalIndex_35728, joker_35730, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 782)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_35601.setter_insertKey (enumerator_35641.current_mValue (HERE), var_nonterminalIndex_35728, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 783)) ;
    }
    enumerator_35641.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_36010 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 786)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36060 (var_nonTerminalMapForGrammarAnalysis_31554, kEnumeration_up) ;
  while (enumerator_36060.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_36010.addAssign_operation (enumerator_36060.current_lkey (HERE), enumerator_36060.current_mNonTerminalIndex (HERE), enumerator_36060.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 788)) ;
    enumerator_36060.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    {
    routine_emitProductionRulesInTexFile (constinArgument_inProductDirectory, object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 794)), var_nonTerminalMapForGrammarAnalysis_31554, var_syntaxComponentListForGrammarAnalysis_31714, object->mAttribute_mStartSymbolName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 792)) ;
    }
  }
  GALGAS_stringset var_implementationFileHeader_36867 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 803)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36926 (var_nonTerminalMapForGrammarAnalysis_31554, kEnumeration_up) ;
  while (enumerator_36926.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_36987 (enumerator_36926.current (HERE).mAttribute_mNonterminalSymbolParametersMap, kEnumeration_up) ;
    while (enumerator_36987.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_37028 (enumerator_36987.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_37028.hasCurrentObject ()) {
        switch (enumerator_37028.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t_37153 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_37028.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 809)) ;
            extensionMethod_addHeaderFileName (var_t_37153, var_implementationFileHeader_36867, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 810)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_37028.gotoNextObject () ;
      }
      enumerator_36987.gotoNextObject () ;
    }
    enumerator_36926.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_13) {
    var_implementationFileHeader_36867 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
  }
  GALGAS_string var_HTMLFilePath_37586 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 820)).add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 820)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 820)) ;
  GALGAS_string var_grammarCppFile_38124 ;
  GALGAS_string var_grammarHTMLHelperContents_38167 ;
  {
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = object->mAttribute_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 833)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 822)), object->mAttribute_mGrammarComponentName, object->mAttribute_mGrammarClass, var_startSymbolIndex_35149, var_lexiqueComponentName_31590.mAttribute_string, var_actuallyUsedTerminalSymbolMap_31474, var_syntaxComponentListForGrammarAnalysis_31714, var_unusedNonTerminalSymbolsForGrammar_35601, var_HTMLFilePath_37586, var_nonTerminalSymbolSortedListForGrammarAnalysis_36010, var_hasIndexing_34567, temp_14, var_grammarCppFile_38124, var_grammarHTMLHelperContents_38167, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 821)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_HTMLFilePath_37586.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 839)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 839)) ;
    GALGAS_bool joker_38480 ; // Joker input parameter
    var_grammarHTMLHelperContents_38167.method_writeToFileWhenDifferentContents (var_HTMLFilePath_37586, joker_38480, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 840)) ;
  }else if (kBoolFalse == test_16) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_37586, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 842)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 849)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 849)), object->mAttribute_mGrammarComponentName.mAttribute_string, var_lexiqueComponentName_31590.mAttribute_string, var_nonTerminalMapForGrammarAnalysis_31554, var_nonTerminalToAddList_31764, var_hasIndexing_34567, object->mAttribute_mSyntaxComponents, object->mAttribute_mStartSymbolName.mAttribute_string, object->mAttribute_mHasTranslateFeature, var_grammarCppFile_38124  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 847))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 845)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@lexiqueComponentAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lstring var_nameForUsefulness_39534 = function_lexiqueNameForUsefulEntitiesGraph (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 873)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_39534, var_nameForUsefulness_39534, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 874)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_39779 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 876)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_39910 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_39910, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 879)) ;
  }
  cEnumerator_externRoutineListAST enumerator_40050 (object->mAttribute_mExternRoutineList, kEnumeration_up) ;
  while (enumerator_40050.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_40094 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 882)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_40180 (enumerator_40050.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_40180.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_40232 ;
      var_lexicalTypeMap_39779.method_searchKey (enumerator_40180.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_40232, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 885)) ;
      var_lexicalRoutineFormalArgumentList_40094.addAssign_operation (enumerator_40180.current_mPassingMode (HERE), var_lexicalFormalArgumentType_40232, enumerator_40180.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 886))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 886)) ;
      enumerator_40180.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap_39910.setter_insertKey (enumerator_40050.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList_40094, enumerator_40050.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 888)) ;
    }
    enumerator_40050.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_40655 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_40655, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 892)) ;
  }
  cEnumerator_externFunctionListAST enumerator_40799 (object->mAttribute_mExternFunctionList, kEnumeration_up) ;
  while (enumerator_40799.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList_40844 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 895)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_40932 (enumerator_40799.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_40932.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_40984 ;
      var_lexicalTypeMap_39779.method_searchKey (enumerator_40932.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_40984, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)) ;
      var_lexicalFunctionFormalArgumentList_40844.addAssign_operation (var_lexicalFormalArgumentType_40984, enumerator_40932.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 899))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 899)) ;
      enumerator_40932.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType_41212 ;
    var_lexicalTypeMap_39779.method_searchKey (enumerator_40799.current_mReturnedTypeName (HERE), var_returnedArgumentType_41212, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)) ;
    {
    var_lexicalFunctionMap_40655.setter_insertKey (enumerator_40799.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList_40844, var_returnedArgumentType_41212, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)) ;
    }
    enumerator_40799.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 918)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToLower")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 907)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 908)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 909)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 910)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 911)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 912)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 913)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 914)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 915)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 916)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 917)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 918)) ;
  GALGAS_stringset var_externUnicodeTestFunctions_41518 = temp_0 ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_41888 = GALGAS_lexiqueAnalysisContext::constructor_new (object->mAttribute_mLexiqueComponentName.mAttribute_string, var_lexicalRoutineMap_39910, var_lexicalFunctionMap_40655, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 925)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 926)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 927)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 928)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 929)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 930)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 931)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 932)), var_externUnicodeTestFunctions_41518  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 921)) ;
  GALGAS_uint var_styleIndex_42374 = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_42408 (object->mAttribute_mLexicalStyleList, kEnumeration_up) ;
  while (enumerator_42408.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_41888.mAttribute_mStyleMap.setter_insertKey (enumerator_42408.current_mName (HERE), enumerator_42408.current_mComment (HERE), var_styleIndex_42374, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 938)) ;
    }
    var_styleIndex_42374.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 939)) ;
    enumerator_42408.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_39779, object->mAttribute_mLexicalAttributeList, var_lexiqueAnalysisContext_41888.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 942)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_42808 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_42808.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_42840 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_42808.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 950)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 950)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_42947 ; // Joker input parameter
      var_lexiqueAnalysisContext_41888.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 951)).method_searchKey (enumerator_42808.current_mStyle (HERE), joker_42947, var_terminalStyleIndex_42840, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 951)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_43002 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 953)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_43061 (enumerator_42808.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_43061.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_43108 ;
      var_lexiqueAnalysisContext_41888.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_43061.current_mAttributeName (HERE), var_attributeLexicalType_43108, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 956)) ;
      var_argumentTypeList_43002.addAssign_operation (enumerator_43061.current_mFormalSelector (HERE), enumerator_43061.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_43108  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 957)) ;
      enumerator_43061.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_41888.mAttribute_mTerminalMap.setter_insertKey (enumerator_42808.current_mName (HERE), var_argumentTypeList_43002, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark_43413 = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection_43447 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_43480 (enumerator_42808.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_43480.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_43480.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 963)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_atomicSelection_43447.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_atomicSelection_43447 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_43480.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 967)), GALGAS_string ("the 'nonAtomicSelection' feature is already set"), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 967)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_43480.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 969)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_43480.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 970)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here"), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 970)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = var_isEndOfTemplateMark_43413.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_43480.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 972)), GALGAS_string ("the 'templateEndMark' feature is already set"), fixItArray8  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 972)) ;
          }else if (kBoolFalse == test_7) {
            var_isEndOfTemplateMark_43413 = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_43480.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_41888.mAttribute_mTerminalList.addAssign_operation (enumerator_42808.current_mName (HERE), var_argumentTypeList_43002, enumerator_42808.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 980)), var_isEndOfTemplateMark_43413, var_atomicSelection_43447, var_terminalStyleIndex_42840  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)) ;
    enumerator_42808.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_44265 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_44265.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_44297 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_44265.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 987)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 987)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_lstring joker_44404 ; // Joker input parameter
      var_lexiqueAnalysisContext_41888.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 988)).method_searchKey (enumerator_44265.current_mStyle (HERE), joker_44404, var_terminalStyleIndex_44297, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 988)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_44459 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 990)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_44518 (enumerator_44265.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_44518.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_44565 ;
      var_lexiqueAnalysisContext_41888.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_44518.current_mAttributeName (HERE), var_attributeLexicalType_44565, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 993)) ;
      var_argumentTypeList_44459.addAssign_operation (enumerator_44518.current_mFormalSelector (HERE), enumerator_44518.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType_44565  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 994)) ;
      enumerator_44518.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_44789 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 996)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_44854 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 997)) ;
    cEnumerator_lexicalListEntryListAST enumerator_44915 (enumerator_44265.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_44915.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_44951 = enumerator_44265.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 999)).getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_44915.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 999)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 999)) ;
      GALGAS_bool var_isEndOfTemplateMark_45082 = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection_45118 = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_45154 (enumerator_44915.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_45154.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_45154.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1003)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_atomicSelection_45118.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_atomicSelection_45118 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_45154.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1007)), GALGAS_string ("the 'nonAtomicSelection' feature is already set"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1007)) ;
          }
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_45154.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1009)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_45154.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1010)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here"), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1010)) ;
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_15 = var_isEndOfTemplateMark_45082.boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_45154.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1012)), GALGAS_string ("the 'templateEndMark' feature is already set"), fixItArray16  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1012)) ;
            }else if (kBoolFalse == test_15) {
              var_isEndOfTemplateMark_45082 = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_45154.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext_41888.mAttribute_mTerminalList.addAssign_operation (enumerator_44915.current_mTerminalSpelling (HERE), var_argumentTypeList_44459, var_syntaxErrorMessage_44951, var_isEndOfTemplateMark_45082, var_atomicSelection_45118, var_terminalStyleIndex_44297  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1017)) ;
      {
      var_lexiqueAnalysisContext_41888.mAttribute_mTerminalMap.setter_insertKey (enumerator_44915.current_mTerminalSpelling (HERE), var_argumentTypeList_44459, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1024)) ;
      }
      {
      var_lexicalTokenListMap_44789.setter_insertKey (enumerator_44915.current_mEntrySpelling (HERE), enumerator_44915.current_mTerminalSpelling (HERE), enumerator_44915.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1025)) ;
      }
      var_tokenSortedlist_44854.addAssign_operation (enumerator_44915.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1026)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1026)), enumerator_44915.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1026)), enumerator_44915.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1026))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1026)) ;
      var_lexiqueAnalysisContext_41888.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_44915.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1027))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1027)) ;
      enumerator_44915.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_41888.mAttribute_mLexicalTokenListMap.setter_insertKey (enumerator_44265.current_mName (HERE), var_lexicalTokenListMap_44789, var_tokenSortedlist_44854, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1029)) ;
    }
    enumerator_44265.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_46543 (object->mAttribute_mLexicalMessageDeclarationList, kEnumeration_up) ;
  while (enumerator_46543.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_41888.mAttribute_mLexicalMessageMap.setter_insertKey (enumerator_46543.current_mMessageName (HERE), enumerator_46543.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1033)) ;
    }
    enumerator_46543.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_46730 (object->mAttribute_mLexicalRuleList, kEnumeration_up) ;
  while (enumerator_46730.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_46730.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_41888, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1037)) ;
    enumerator_46730.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_46922 (var_lexiqueAnalysisContext_41888.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1040)), kEnumeration_up) ;
  while (enumerator_46922.hasCurrentObject ()) {
    const enumGalgasBool test_17 = enumerator_46922.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1041)).boolEnum () ;
    if (kBoolTrue == test_17) {
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticWarning (enumerator_46922.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1042)), GALGAS_string ("unused message"), fixItArray18  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1042)) ;
    }
    enumerator_46922.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_47102 (object->mAttribute_mTemplateDelimitorList, kEnumeration_up) ;
  while (enumerator_47102.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_41888.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_47102.current_mStartString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1047))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1047)) ;
    var_lexiqueAnalysisContext_41888.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_47102.current_mEndString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1048))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1048)) ;
    GALGAS_bool var_preservesStartDelimiter_47290 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_47323 (enumerator_47102.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_47323.hasCurrentObject ()) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_47323.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1051)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_47323.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1052)), GALGAS_string ("only the 'preserved' feature is allowed here"), fixItArray20  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1052)) ;
      }else if (kBoolFalse == test_19) {
        const enumGalgasBool test_21 = var_preservesStartDelimiter_47290.boolEnum () ;
        if (kBoolTrue == test_21) {
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (enumerator_47323.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1054)), GALGAS_string ("the 'preserved' feature is already set"), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1054)) ;
        }else if (kBoolFalse == test_21) {
          var_preservesStartDelimiter_47290 = GALGAS_bool (true) ;
        }
      }
      enumerator_47323.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_41888.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_47102.current_mStartString (HERE), enumerator_47102.current_mEndString (HERE), var_preservesStartDelimiter_47290  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059)) ;
    enumerator_47102.gotoNextObject () ;
  }
  const enumGalgasBool test_23 = object->mAttribute_mIndexingDirectory.mAttribute_location.getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1062)).boolEnum () ;
  if (kBoolTrue == test_23) {
    cEnumerator_indexingListAST enumerator_47854 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
    while (enumerator_47854.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (enumerator_47854.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1064)), GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration"), fixItArray24  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1064)) ;
      enumerator_47854.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet_47987 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1067)) ;
  cEnumerator_indexingListAST enumerator_48031 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
  while (enumerator_48031.hasCurrentObject ()) {
    const enumGalgasBool test_25 = var_indexNameSet_47987.getter_hasKey (enumerator_48031.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1069)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1069)).boolEnum () ;
    if (kBoolTrue == test_25) {
      TC_Array <C_FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (enumerator_48031.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1070)), GALGAS_string ("the '").add_operation (enumerator_48031.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1070)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)), fixItArray26  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1070)) ;
    }
    var_indexNameSet_47987.addAssign_operation (enumerator_48031.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1072))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1072)) ;
    enumerator_48031.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_48322 (object->mAttribute_mTemplateReplacementList, kEnumeration_up) ;
  while (enumerator_48322.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_41888.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_48322.current_mMatchString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1076))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1076)) ;
    var_lexiqueAnalysisContext_41888.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_48322.current_mReplacementString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1077))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1077)) ;
    enumerator_48322.gotoNextObject () ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1081)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    GALGAS_string var_lexiqueClassName_48659 = object->mAttribute_mLexiqueComponentName.mAttribute_string ;
    GALGAS_string var_headerContents_48727 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName_48659.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1085)), var_lexiqueAnalysisContext_41888, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1084))) ;
    var_headerContents_48727.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName_48659.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1090)), object->mAttribute_mLexicalListDeclarationList, var_lexiqueAnalysisContext_41888, object->mAttribute_mIndexingListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1089))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1089)) ;
    GALGAS_string var_cppContents_49158 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName_48659.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1097)), var_lexiqueAnalysisContext_41888.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1098)), var_lexiqueAnalysisContext_41888.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1099)), var_lexiqueAnalysisContext_41888.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1100)), var_lexiqueAnalysisContext_41888.getter_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 1101)), var_lexiqueAnalysisContext_41888.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1102)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext_41888, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mTemplateDelimitorList, var_lexiqueClassName_48659, object->mAttribute_mTemplateReplacementList, object->mAttribute_mLexicalStyleList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1096))) ;
    GALGAS_string var_cocoaHeader_49786 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName_48659, var_lexiqueAnalysisContext_41888 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1112))) ;
    var_cocoaHeader_49786.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName_48659, var_lexiqueAnalysisContext_41888 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1116)) ;
    GALGAS_string var_cocoaImplementation_50103 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_48659, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1122)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1122)), var_lexiqueClassName_48659, var_lexiqueAnalysisContext_41888.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1124)), var_lexiqueAnalysisContext_41888.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1125)), var_lexiqueAnalysisContext_41888.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1126)), var_lexiqueAnalysisContext_41888.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1127)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext_41888, object->mAttribute_mTemplateReplacementList, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mIndexingListAST, object->mAttribute_mLexicalStyleList, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1121))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_48659, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1141)), var_lexiqueClassName_48659, var_headerContents_48727, var_cppContents_49158, var_cocoaHeader_49786, var_cocoaImplementation_50103  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1139))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1137)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         extensionMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineExtensionMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'buildPredefinedTypes'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lbool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lchar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("luint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lsint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("luint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lsint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("ldouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lbigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1178))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1178)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1178)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("stringset"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1179))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1179)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1179)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1180))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1180)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1180))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)) ;
//---
  return result_outPredefinedTypes ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_buildPredefinedTypes (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'syntaxFileGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_syntaxFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_syntaxFileGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  GALGAS_uint index_27_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_27 (in_INCLUSION_5F_SET, kEnumeration_up) ;
    while (enumerator_27.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_27.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue () ;
  result << " {\n"
    "//--- Virtual destructor\n"
    "  public : virtual ~ cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue () ;
  result << " (void) {}\n"
    "\n"
    "//--- Non terminal declarations\n" ;
  GALGAS_uint index_814_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_814 (in_NONTERMINAL_5F_MAP, kEnumeration_up) ;
    while (enumerator_814.hasCurrentObject ()) {
      GALGAS_uint index_848_ (0) ;
      if (enumerator_814.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_848 (enumerator_814.current_mLabelMap (HERE), kEnumeration_up) ;
        while (enumerator_848.hasCurrentObject ()) {
          result << "  protected : virtual void nt_" ;
          result << enumerator_814.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << "_" ;
          result << enumerator_848.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1006_IDX (0) ;
          if (enumerator_848.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_1006 (enumerator_848.current_mSignature (HERE), kEnumeration_up) ;
            while (enumerator_1006.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              if (kBoolTrue == test_0) {
                result << "const class GALGAS_" ;
                result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
                result << " constinArgument" ;
                result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
              }else if (kBoolFalse == test_0) {
                const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                if (kBoolTrue == test_1) {
                  result << "class GALGAS_" ;
                  result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                }else if (kBoolFalse == test_1) {
                  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  if (kBoolTrue == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                  }else if (kBoolFalse == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                    result << " inArgument" ;
                    result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1006_IDX.increment () ;
              enumerator_1006.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_3) {
            result << "class C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_3) {
          }
          result << "class C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) = 0 ;\n"
            "\n" ;
          index_848_.increment () ;
          enumerator_848.gotoNextObject () ;
        }
      }
      result << "  protected : virtual void nt_" ;
      result << enumerator_814.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "class C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 35)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_4) {
      }
      result << "class C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) = 0 ;\n"
        "\n" ;
      const enumGalgasBool test_5 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  protected : virtual void nt_" ;
        result << enumerator_814.current_lkey (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue () ;
        result << "_indexing (class C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) = 0 ;\n"
          "\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_814_.increment () ;
      enumerator_814.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Rule declarations\n" ;
  GALGAS_uint index_2427_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2427 (in_RULE_5F_DECLARATION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2427.hasCurrentObject ()) {
      GALGAS_uint index_2467_ (0) ;
      if (enumerator_2427.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2467 (enumerator_2427.current_mLabelImplementationList (HERE), kEnumeration_up) ;
        while (enumerator_2467.hasCurrentObject ()) {
          result << "  protected : void rule_" ;
          result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_i" ;
          result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2467.current_mLabelName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2696_IDX (0) ;
          if (enumerator_2467.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2696 (enumerator_2467.current_mSignature (HERE), kEnumeration_up) ;
            while (enumerator_2696.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result << "const GALGAS_" ;
                result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
                result << " constinArgument" ;
                result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result << "GALGAS_" ;
                  result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                    result << " inArgument" ;
                    result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_2696_IDX.increment () ;
              enumerator_2696.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_9) {
            result << "C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_9) {
          }
          result << "C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) ;\n"
            "\n" ;
          index_2467_.increment () ;
          enumerator_2467.gotoNextObject () ;
        }
      }
      result << "  protected : void rule_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_" ;
      result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_i" ;
      result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 66)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_10) {
      }
      result << "C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) ;\n"
        "\n" ;
      const enumGalgasBool test_11 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_11) {
        result << "  protected : void rule_" ;
        result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_" ;
        result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_i" ;
        result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_11) {
      }
      index_2427_.increment () ;
      enumerator_2427.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Select methods\n" ;
  GALGAS_uint index_4191_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_4191 (in_SELECT_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_4191.hasCurrentObject ()) {
      result << "  protected : virtual int32_t select_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << "_" ;
      result << enumerator_4191.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " *) = 0 ;\n"
        "\n" ;
      index_4191_.increment () ;
      enumerator_4191.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'enterNonterminalNonTerminalInMapAndCheck'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterNonterminalNonTerminalInMapAndCheck (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                       const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                       GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_58102 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1268))) ;
  if (NULL != objectArray_58102) {
      macroValidSharedObject (objectArray_58102, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_58208 = objectArray_58102->mAttribute_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1269)) ;
    GALGAS_stringset var_reDeclarationLabelSet_58270 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1270)) ;
    GALGAS_stringset var_missingLabelSet_58338 = var_firstDeclarationLabelSet_58208.substract_operation (var_reDeclarationLabelSet_58270, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1271)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_missingLabelSet_58338.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1272)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_58445 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_58482 (var_missingLabelSet_58338, kEnumeration_up) ;
      while (enumerator_58482.hasCurrentObject ()) {
        var_s_58445.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (enumerator_58482.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)) ;
        enumerator_58482.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inNonTerminalName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1277)), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)).add_operation (var_s_58445, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1277)) ;
    }
    GALGAS_stringset var_newLabelSet_58695 = var_reDeclarationLabelSet_58270.substract_operation (var_firstDeclarationLabelSet_58208, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1280)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_newLabelSet_58695.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1281)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s_58798 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_58831 (var_newLabelSet_58695, kEnumeration_up) ;
      while (enumerator_58831.hasCurrentObject ()) {
        var_s_58798.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (enumerator_58831.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)) ;
        enumerator_58831.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inNonTerminalName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1286)), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1287)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1287)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1287)).add_operation (var_s_58798, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1287)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1286)) ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_missingLabelSet_58338.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1289)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_newLabelSet_58695.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1289)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1289)).boolEnum () ;
    if (kBoolTrue == test_4) {
      cEnumerator_nonterminalLabelMap enumerator_59106 (objectArray_58102->mAttribute_mLabelMap, kEnumeration_up) ;
      cEnumerator_nonterminalLabelMap enumerator_59140 (constinArgument_inNonterminalLabelMap, kEnumeration_up) ;
      while (enumerator_59106.hasCurrentObject () && enumerator_59140.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_newSignature_59190 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1291)) ;
        cEnumerator_formalParameterSignature enumerator_59228 (enumerator_59140.current_mSignature (HERE), kEnumeration_up) ;
        while (enumerator_59228.hasCurrentObject ()) {
          var_newSignature_59190.addAssign_operation (enumerator_59228.current_mFormalSelector (HERE), enumerator_59228.current_mFormalArgumentType (HERE), enumerator_59228.current_mFormalArgumentPassingMode (HERE), enumerator_59228.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1293)) ;
          enumerator_59228.gotoNextObject () ;
        }
        {
        routine_checkMethodSignatures (enumerator_59106.current (HERE).mAttribute_mSignatureForGeneration, enumerator_59106.current (HERE).mAttribute_mEndOfArgumentLocation, var_newSignature_59190, enumerator_59140.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1295)) ;
        }
        enumerator_59106.gotoNextObject () ;
        enumerator_59140.gotoNextObject () ;
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1304)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildNonterminalDeclarationsMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildNonterminalDeclarationsMap (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1314)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_60117 (constinArgument_inNonterminalDeclarationList, kEnumeration_up) ;
  while (enumerator_60117.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_60148 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1317)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_60203 (enumerator_60117.current_mLabels (HERE), kEnumeration_up) ;
    while (enumerator_60203.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_60239 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1319)) ;
      GALGAS_formalParameterSignature var_signature_60297 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1320)) ;
      cEnumerator_formalParameterListAST enumerator_60363 (enumerator_60203.current_mFormalArgumentList (HERE), kEnumeration_up) ;
      while (enumerator_60363.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_t_60380 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_60363.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1322)) ;
        var_signatureForGeneration_60239.addAssign_operation (enumerator_60363.current_mFormalSelector (HERE), enumerator_60363.current_mFormalArgumentPassingMode (HERE), var_t_60380, enumerator_60363.current_mFormalArgumentName (HERE), enumerator_60363.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1323))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1323)) ;
        var_signature_60297.addAssign_operation (enumerator_60363.current_mFormalSelector (HERE), var_t_60380, enumerator_60363.current_mFormalArgumentPassingMode (HERE), enumerator_60363.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1324)) ;
        enumerator_60363.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_60148.setter_insertKey (enumerator_60203.current_mLabelName (HERE), var_signatureForGeneration_60239, var_signature_60297, enumerator_60203.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1326)) ;
      }
      enumerator_60203.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_60117.current_mNonterminalName (HERE), var_nonterminalLabelMap_60148, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1328)) ;
    }
    enumerator_60117.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
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
  const cPtr_semanticInstructionAST * object = (const cPtr_semanticInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_semanticInstructionAST) ;
  const GALGAS_semanticInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1368)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                 extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                   const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                   GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                   GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                              extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@inputParameterVariable analyzeInputParameter'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                          const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                          GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_64352 ;
  GALGAS_string var_cppName_64373 ;
  {
  GALGAS_string joker_64375 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type_64352, var_cppName_64373, joker_64375, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1404)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_64414 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_64414 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expectedType_64414.objectCompare (var_type_64352)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1417)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).add_operation (var_type_64352.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1418)).add_operation (var_expectedType_64414.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1419)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1417)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_64373, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                              extensionMethod_inputParameterVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineExtensionMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_66014 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_66014 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_66871 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1449)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_66014.objectCompare (var_type_66871)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1451)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1452)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1452)).add_operation (var_type_66871.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1452)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1452)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1452)).add_operation (var_expectedType_66014.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1453)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1453)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1453)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1451)) ;
    }
  }
  GALGAS_string var_cppName_67260 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1457)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1457)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType_66014, var_cppName_67260, var_cppName_67260, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1458)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_66014.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1460)), var_cppName_67260, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1459)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                              extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_68050 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_68050 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_68907 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1487)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_68050.objectCompare (var_type_68907)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1489)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1490)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (var_type_68907.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1490)).add_operation (var_expectedType_68050.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1491)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1489)) ;
    }
  }
  GALGAS_string var_cppName_69296 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1495)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType_68050, var_cppName_69296, var_cppName_69296, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1496)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_68050.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)), var_cppName_69296, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1498)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                              extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1525)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1526)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1536)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1537)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1537)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_71330 ;
  {
  GALGAS_string joker_71332 ; // Joker input parameter
  GALGAS_string joker_71335 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type_71330, joker_71332, joker_71335, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1539)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_71356 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_71356.objectCompare (var_type_71330)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1542)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1543)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)).add_operation (var_type_71330.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)).add_operation (var_expectedType_71356.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1544)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1544)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1544)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1542)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1554)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1555)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1555)) ;
  }
  GALGAS_string var_cppName_72173 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1557)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1557)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1557)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1557)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_72297 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1558)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type_72297, var_cppName_72173, var_cppName_72173, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1559)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_72516 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_72516.objectCompare (var_type_72297)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1562)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1563)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).add_operation (var_type_72297.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).add_operation (var_expectedType_72516.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1562)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1574)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1575)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1575)) ;
  }
  GALGAS_string var_cppName_73326 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1577)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1577)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1577)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1577)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1577)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1577)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_73450 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mAttribute_mActualParameterName, var_type_73450, var_cppName_73326, var_cppName_73326, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1579)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_73662 = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_73662.objectCompare (var_type_73450)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mAttribute_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1582)), GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1583)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)).add_operation (var_type_73450.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1583)).add_operation (var_expectedType_73662.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1584)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1584)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1584)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1582)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1604)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1605)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1605)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  GALGAS_string var_cppName_75760 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1625)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1625)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1625)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_75760.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1626)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                         const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  GALGAS_string var_cppName_76365 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1636)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1636)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1636)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_76365, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1637)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1637)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1637)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1637)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1637)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  GALGAS_string var_cppName_76975 = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1647)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)).add_operation (object->mAttribute_mActualParameterName.mAttribute_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1647)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1647)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_76975, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1648)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1648)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1648)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1648)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1648)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeSyntaxInstructionList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSyntaxInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                           const GALGAS_string constinArgument_inLexiqueName,
                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                           const GALGAS_string constinArgument_inComponentName,
                                           const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                           const GALGAS_location constinArgument_inEndOfBranchLocation,
                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                           GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1668)) ;
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1670)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_78103 (constinArgument_inSyntaxInstructionListAST, kEnumeration_up) ;
  while (enumerator_78103.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_78103.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1673)) ;
    enumerator_78103.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1689)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'semanticAnalysisOfRuleLabel'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfRuleLabel (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                          const GALGAS_formalParameterListAST constinArgument_inFormalArguments,
                                          const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                          const GALGAS_terminalMap constinArgument_inTerminalMap,
                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                          const GALGAS_string constinArgument_inLexiqueName,
                                          const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                          const GALGAS_string constinArgument_inComponentName,
                                          const GALGAS_location constinArgument_inEndOfInstructionList,
                                          const GALGAS_stringset constinArgument_inIndexNameSet,
                                          GALGAS_uint & ioArgument_ioSelectMethodCount,
                                          GALGAS_formalParameterListForGeneration & outArgument_outSignatureForGeneration,
                                          GALGAS_formalParameterSignature & outArgument_outSignature,
                                          GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap_79902 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1715)) ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inFormalArguments, var_variableMap_79902, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1716)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1723)) ;
  cEnumerator_formalParameterListForGeneration enumerator_80177 (outArgument_outSignatureForGeneration, kEnumeration_up) ;
  while (enumerator_80177.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_80177.current_mFormalSelector (HERE), enumerator_80177.current_mFormalArgumentType (HERE), enumerator_80177.current_mFormalArgumentPassingMode (HERE), enumerator_80177.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1725)) ;
    enumerator_80177.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1728)) ;
  GALGAS_stringlist var_localVariableCppNameList_80458 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1729)) ;
  cEnumerator_syntaxInstructionList enumerator_80510 (constinArgument_inSyntaxInstructionList, kEnumeration_up) ;
  while (enumerator_80510.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_80510.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_79902, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1731)) ;
    enumerator_80510.gotoNextObject () ;
  }
  var_variableMap_79902.method_checkAutomatonStates (constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1747)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfSyntaxComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfSyntaxComponent (const GALGAS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                const GALGAS_string constinArgument_inSyntaxComponentName,
                                                const GALGAS_string constinArgument_inLexiqueName,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                const GALGAS_stringset constinArgument_inIndexNameSet,
                                                const GALGAS_bool constinArgument_inHasIndexing,
                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                GALGAS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GALGAS_nonterminalMap var_nonterminalMap_82319 ;
  {
  routine_buildNonterminalDeclarationsMap (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, var_nonterminalMap_82319, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1772)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_82400 (constinArgument_inRuleList, kEnumeration_up) ;
  while (enumerator_82400.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_82448 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1779)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_82478 (enumerator_82400.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_82478.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_82544 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1781)) ;
      GALGAS_formalParameterSignature var_signature_82591 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1782)) ;
      cEnumerator_formalParameterListAST enumerator_82629 (enumerator_82478.current_mFormalArguments (HERE), kEnumeration_up) ;
      while (enumerator_82629.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_82649 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_82629.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1784)) ;
        var_signatureForGeneration_82544.addAssign_operation (enumerator_82629.current_mFormalSelector (HERE), enumerator_82629.current_mFormalArgumentPassingMode (HERE), var_type_82649, enumerator_82629.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_82629.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1790)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1790))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1785)) ;
        var_signature_82591.addAssign_operation (enumerator_82629.current_mFormalSelector (HERE), var_type_82649, enumerator_82629.current_mFormalArgumentPassingMode (HERE), enumerator_82629.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1791)) ;
        enumerator_82629.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_82448.setter_insertKey (enumerator_82478.current_mLabelName (HERE), var_signatureForGeneration_82544, var_signature_82591, enumerator_82478.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1793)) ;
      }
      enumerator_82478.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_82400.current_mNonterminalName (HERE), var_nonterminalLabelMap_82448, var_nonterminalMap_82319, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1795)) ;
    }
    enumerator_82400.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext_83315 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1801)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 1803))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1798)) ;
  GALGAS_uint var_selectMethodCount_83503 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList_83550 = GALGAS_ruleDeclarationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1807)) ;
  GALGAS_uint var_newRuleIndex_83576 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_syntaxRuleListAST enumerator_83603 (constinArgument_inRuleList, kEnumeration_up) ;
  while (enumerator_83603.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList_84061 = GALGAS_ruleLabelImplementationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1817)) ;
    GALGAS_uint var_localSelectMethodCount_84099 = var_selectMethodCount_83503 ;
    GALGAS_nonterminalLabelMap joker_84169 ; // Joker input parameter
    var_nonterminalMap_82319.method_searchKey (enumerator_83603.current_mNonterminalName (HERE), joker_84169, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1819)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_84196 (enumerator_83603.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_84196.hasCurrentObject ()) {
      var_localSelectMethodCount_84099 = var_selectMethodCount_83503 ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_84311 ;
      GALGAS_formalParameterSignature var_signature_84353 ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration_84426 ;
      {
      routine_semanticAnalysisOfRuleLabel (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_84196.current_mFormalArguments (HERE), enumerator_84196.current_mSyntaxInstructionList (HERE), var_analysisContext_83315, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1833)), var_nonterminalMap_82319, constinArgument_inSyntaxComponentName, enumerator_84196.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_84099, var_signatureForGeneration_84311, var_signature_84353, var_instructionListForGeneration_84426, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1825)) ;
      }
      var_ruleLabelImplementationList_84061.addAssign_operation (enumerator_84196.current_mLabelName (HERE), var_signatureForGeneration_84311, var_signature_84353, enumerator_84196.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_84426  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1843)) ;
      enumerator_84196.gotoNextObject () ;
    }
    var_selectMethodCount_83503 = var_localSelectMethodCount_84099 ;
    GALGAS_nonterminalLabelMap joker_85245 ; // Joker input parameter
    var_nonterminalMap_82319.method_searchKey (enumerator_83603.current_mNonterminalName (HERE), joker_85245, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1851)) ;
    var_ruleDeclarationList_83550.addAssign_operation (enumerator_83603.current_mNonterminalName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1853)), var_newRuleIndex_83576, var_ruleLabelImplementationList_84061  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1852)) ;
    var_newRuleIndex_83576.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1856)) ;
    enumerator_83603.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::constructor_new (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_82319, var_ruleDeclarationList_83550, var_selectMethodCount_83503, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1859)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@trueExpressionForGeneration isTrueExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_trueExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (true) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_trueExpressionForGeneration_isTrueExpression (void) {
  enterExtensionGetter_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                         extensionGetter_trueExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_trueExpressionForGeneration_isTrueExpression (defineExtensionGetter_trueExpressionForGeneration_isTrueExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@selfCopyInExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selfCopyInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionForGeneration * object = (const cPtr_selfCopyInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 44)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 45)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration.mSlotID,
                                           extensionMethod_selfCopyInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionForGeneration_generateExpression (defineExtensionMethod_selfCopyInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@trueExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_trueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                           extensionMethod_trueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionForGeneration_generateExpression (defineExtensionMethod_trueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@falseExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_falseExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_falseExpressionForGeneration.mSlotID,
                                           extensionMethod_falseExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionForGeneration_generateExpression (defineExtensionMethod_falseExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (object->mAttribute_mCharacter.getter_uint (SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)).getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalCharExpressionForGeneration.mSlotID,
                                           extensionMethod_literalCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionForGeneration_generateExpression (defineExtensionMethod_literalCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (object->mAttribute_mString.getter_utf_38_Representation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalStringExpressionForGeneration.mSlotID,
                                           extensionMethod_literalStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionForGeneration_generateExpression (defineExtensionMethod_literalStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration.mSlotID,
                                           extensionMethod_literalDoubleExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionForGeneration_generateExpression (defineExtensionMethod_literalDoubleExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalUIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint ((uint32_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 116)).add_operation (GALGAS_string ("U)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 116)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalUIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ ((uint64_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 127)).add_operation (GALGAS_string ("ULL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 127)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@literalSIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint ((int32_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)).add_operation (GALGAS_string ("L)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 138)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalSIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 150)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 151)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 151)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)) ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration.mSlotID,
                                           extensionMethod_literalBigIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionForGeneration_generateExpression (defineExtensionMethod_literalBigIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ ((int64_t) ").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)).add_operation (GALGAS_string ("LL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration.mSlotID,
                                           extensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (defineExtensionMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@defaultConstructorExpressionForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 176)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)).add_operation (object->mAttribute_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 180)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 179)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 180)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 181)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 181)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                           extensionMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineExtensionMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@constructorExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)) ;
  GALGAS_stringlist var_parameterList_9790 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_9831 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_9831.hasCurrentObject ()) {
    GALGAS_string var_parameter_10015 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9831.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_10015, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 196)) ;
    var_parameterList_9790.addAssign_operation (var_parameter_10015  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 203)) ;
    enumerator_9831.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mConstructorType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 205)).add_operation (object->mAttribute_mConstructorName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)) ;
  cEnumerator_stringlist enumerator_10275 (var_parameterList_9790, kEnumeration_up) ;
  while (enumerator_10275.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_10275.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 209)) ;
    if (enumerator_10275.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 210)) ;
    }
    enumerator_10275.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_10371 = GALGAS_bool (kIsStrictSup, var_parameterList_9790.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma_10371.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 215)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 217)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 217)) ;
    }
    outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)) ;
    var_needsComma_10371 = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma_10371.boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 224)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                           extensionMethod_constructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineExtensionMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionValueExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 240)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 243)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 244)).add_operation (GALGAS_string (".getter_value ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 244)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                           extensionMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineExtensionMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@optionCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 256))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 256)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 258)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 259)).add_operation (GALGAS_string (".getter_char ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 259)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineExtensionMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 270)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 271))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 271)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 273)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 273)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 274)).add_operation (GALGAS_string (".getter_string ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 274)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                           extensionMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineExtensionMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@optionCommentExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 285)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 286))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 286)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (object->mAttribute_mOptionComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 288)).add_operation (object->mAttribute_mOptionEntryName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)).add_operation (GALGAS_string (".getter_comment ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 289)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                           extensionMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineExtensionMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@orExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionForGeneration * object = (const cPtr_orExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 300)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 300)) ;
  GALGAS_string var_leftTemporaryOperand_14114 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_14114, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 303)) ;
  GALGAS_string var_rightTemporaryOperand_14317 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_14317, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_14114.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 308)).add_operation (var_rightTemporaryOperand_14317, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 308)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 309)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orExpressionForGeneration.mSlotID,
                                           extensionMethod_orExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionForGeneration_generateExpression (defineExtensionMethod_orExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@orShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionForGeneration * object = (const cPtr_orShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 320)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 320)) ;
  GALGAS_string var_leftTemporaryOperand_15264 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_15264, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 322)) ;
  GALGAS_string var_testVar_15307 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_15307, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)).add_operation (var_leftTemporaryOperand_15264, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 331)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_15307, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 332)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 332)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 334)) ;
  }
  GALGAS_string var_rightTemporaryOperand_15784 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_15784, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 335)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_15307.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)).add_operation (var_rightTemporaryOperand_15784, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 342)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 343)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 344)) ;
  outArgument_outCppExpression = var_testVar_15307 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                           extensionMethod_orShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineExtensionMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@xorExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_xorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionForGeneration * object = (const cPtr_xorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)) ;
  GALGAS_string var_leftTemporaryOperand_16569 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_16569, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)) ;
  GALGAS_string var_rightTemporaryOperand_16769 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_16769, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 367)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_16569.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)).add_operation (var_rightTemporaryOperand_16769, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 375)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_xorExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_xorExpressionForGeneration.mSlotID,
                                           extensionMethod_xorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionForGeneration_generateExpression (defineExtensionMethod_xorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@closedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_closedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionForGeneration * object = (const cPtr_closedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 387)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 387)) ;
  GALGAS_string var_leftTemporaryOperand_17562 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17562, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 389)) ;
  GALGAS_string var_rightTemporaryOperand_17762 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17762, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 397)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_17562, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 406)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 406)).add_operation (var_rightTemporaryOperand_17762, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 406)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (var_leftTemporaryOperand_17562, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 407)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@openedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_openedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionForGeneration * object = (const cPtr_openedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 419)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 419)) ;
  GALGAS_string var_leftTemporaryOperand_18719 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18719, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 421)) ;
  GALGAS_string var_rightTemporaryOperand_18919 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18919, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 429)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 437)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 437)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_18719, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 439)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 439)).add_operation (var_rightTemporaryOperand_18919, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 439)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (var_leftTemporaryOperand_18719, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 440)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 441)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@andExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionForGeneration * object = (const cPtr_andExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 452)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 452)) ;
  GALGAS_string var_leftTemporaryOperand_19852 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19852, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 454)) ;
  GALGAS_string var_rightTemporaryOperand_20060 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20060, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 462)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_19852.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 470)).add_operation (var_rightTemporaryOperand_20060, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 470)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 471)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 471)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andExpressionForGeneration.mSlotID,
                                           extensionMethod_andExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionForGeneration_generateExpression (defineExtensionMethod_andExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@andShortExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionForGeneration * object = (const cPtr_andShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 482)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 482)) ;
  GALGAS_string var_leftTemporaryOperand_20857 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20857, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 484)) ;
  GALGAS_string var_testVar_20900 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 492)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 492)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_20900, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)).add_operation (var_leftTemporaryOperand_20857, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 493)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_20900, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 496)) ;
  }
  GALGAS_string var_rightTemporaryOperand_21377 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_21377, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_20900.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)).add_operation (var_rightTemporaryOperand_21377, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 504)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 505)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 506)) ;
  outArgument_outCppExpression = var_testVar_20900 ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                           extensionMethod_andShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineExtensionMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@equalExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_equalExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionForGeneration * object = (const cPtr_equalExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)) ;
  GALGAS_string var_leftTemporaryOperand_22020 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)) ;
  GALGAS_string var_rightTemporaryOperand_22223 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22223, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsEqual, ").add_operation (var_leftTemporaryOperand_22020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)).add_operation (var_rightTemporaryOperand_22223, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 526)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_equalExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_equalExpressionForGeneration.mSlotID,
                                           extensionMethod_equalExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionForGeneration_generateExpression (defineExtensionMethod_equalExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@notEqualExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_notEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionForGeneration * object = (const cPtr_notEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 537)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 537)) ;
  GALGAS_string var_leftTemporaryOperand_23000 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_23000, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 540)) ;
  GALGAS_string var_rightTemporaryOperand_23203 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_23203, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsNotEqual, ").add_operation (var_leftTemporaryOperand_23000, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)).add_operation (var_rightTemporaryOperand_23203, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_notEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionForGeneration_generateExpression (defineExtensionMethod_notEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@lowerOrEqualExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_lowerOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionForGeneration * object = (const cPtr_lowerOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 556)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 556)) ;
  GALGAS_string var_leftTemporaryOperand_23987 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_23987, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 559)) ;
  GALGAS_string var_rightTemporaryOperand_24190 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_24190, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsInfOrEqual, ").add_operation (var_leftTemporaryOperand_23987, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)).add_operation (var_rightTemporaryOperand_24190, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lowerOrEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_lowerOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionForGeneration_generateExpression (defineExtensionMethod_lowerOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@greaterOrEqualExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_greaterOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionForGeneration * object = (const cPtr_greaterOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 575)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 575)) ;
  GALGAS_string var_leftTemporaryOperand_24978 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_24978, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 578)) ;
  GALGAS_string var_rightTemporaryOperand_25181 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_25181, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 581)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsSupOrEqual, ").add_operation (var_leftTemporaryOperand_24978, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)).add_operation (var_rightTemporaryOperand_25181, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_greaterOrEqualExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration.mSlotID,
                                           extensionMethod_greaterOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionForGeneration_generateExpression (defineExtensionMethod_greaterOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@strictGreaterExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictGreaterExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionForGeneration * object = (const cPtr_strictGreaterExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 594)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 594)) ;
  GALGAS_string var_leftTemporaryOperand_25968 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_25968, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 597)) ;
  GALGAS_string var_rightTemporaryOperand_26171 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_26171, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 600)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictSup, ").add_operation (var_leftTemporaryOperand_25968, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)).add_operation (var_rightTemporaryOperand_26171, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictGreaterExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration.mSlotID,
                                           extensionMethod_strictGreaterExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionForGeneration_generateExpression (defineExtensionMethod_strictGreaterExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@strictLowerExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_strictLowerExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionForGeneration * object = (const cPtr_strictLowerExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 613)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 613)) ;
  GALGAS_string var_leftTemporaryOperand_26955 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_26955, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 616)) ;
  GALGAS_string var_rightTemporaryOperand_27158 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_27158, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 619)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictInf, ").add_operation (var_leftTemporaryOperand_26955, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (var_rightTemporaryOperand_27158, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_strictLowerExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration.mSlotID,
                                           extensionMethod_strictLowerExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionForGeneration_generateExpression (defineExtensionMethod_strictLowerExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@rightShiftExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_rightShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionForGeneration * object = (const cPtr_rightShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 632)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 632)) ;
  GALGAS_string var_leftTemporaryOperand_27941 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_27941, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 635)) ;
  GALGAS_string var_rightTemporaryOperand_28144 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_28144, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 638)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_27941.add_operation (GALGAS_string (".right_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)).add_operation (var_rightTemporaryOperand_28144, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 641)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_rightShiftExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration.mSlotID,
                                           extensionMethod_rightShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionForGeneration_generateExpression (defineExtensionMethod_rightShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@leftShiftExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_leftShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionForGeneration * object = (const cPtr_leftShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 652)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 652)) ;
  GALGAS_string var_leftTemporaryOperand_28950 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_28950, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)) ;
  GALGAS_string var_rightTemporaryOperand_29153 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_29153, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_28950.add_operation (GALGAS_string (".left_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 660)).add_operation (var_rightTemporaryOperand_29153, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 660)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_leftShiftExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration.mSlotID,
                                           extensionMethod_leftShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionForGeneration_generateExpression (defineExtensionMethod_leftShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@addExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionForGeneration * object = (const cPtr_addExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 673)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 673)) ;
  GALGAS_string var_leftTemporaryOperand_30105 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_30105, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 675)) ;
  GALGAS_string var_rightTemporaryOperand_30313 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_30313, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 683)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_30105.add_operation (GALGAS_string (".add_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 691)).add_operation (var_rightTemporaryOperand_30313, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 691)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 692)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 693)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 693)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionForGeneration.mSlotID,
                                           extensionMethod_addExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionForGeneration_generateExpression (defineExtensionMethod_addExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@addExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_addExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowForGeneration * object = (const cPtr_addExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)) ;
  GALGAS_string var_leftTemporaryOperand_31208 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_31208, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)) ;
  GALGAS_string var_rightTemporaryOperand_31416 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_31416, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 715)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_31208.add_operation (GALGAS_string (".add_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)).add_operation (var_rightTemporaryOperand_31416, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_addExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_addExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_addExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@subExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionForGeneration * object = (const cPtr_subExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 734)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 734)) ;
  GALGAS_string var_leftTemporaryOperand_32016 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_32016, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 737)) ;
  GALGAS_string var_rightTemporaryOperand_32219 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_32219, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 740)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_32016.add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 742)).add_operation (var_rightTemporaryOperand_32219, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 742)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 743)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 744)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 744)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionForGeneration.mSlotID,
                                           extensionMethod_subExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionForGeneration_generateExpression (defineExtensionMethod_subExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@subExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_subExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowForGeneration * object = (const cPtr_subExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 755)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 755)) ;
  GALGAS_string var_leftTemporaryOperand_33117 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_33117, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)) ;
  GALGAS_string var_rightTemporaryOperand_33320 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_33320, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 761)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_33117.add_operation (GALGAS_string (".substract_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 763)).add_operation (var_rightTemporaryOperand_33320, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 763)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 763)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_subExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_subExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_subExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@multiplicationExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionForGeneration * object = (const cPtr_multiplicationExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 774)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 774)) ;
  GALGAS_string var_leftTemporaryOperand_34087 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_34087, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 777)) ;
  GALGAS_string var_rightTemporaryOperand_34290 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_34290, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 780)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_34087.add_operation (GALGAS_string (".multiply_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 782)).add_operation (var_rightTemporaryOperand_34290, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 782)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 783)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 784)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 784)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration.mSlotID,
                                           extensionMethod_multiplicationExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionForGeneration_generateExpression (defineExtensionMethod_multiplicationExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@multiplicationExpressionNoOverflowForGeneration generateExpression'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowForGeneration * object = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 795)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 795)) ;
  GALGAS_string var_leftTemporaryOperand_35198 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_35198, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 798)) ;
  GALGAS_string var_rightTemporaryOperand_35401 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_35401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 801)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_35198.add_operation (GALGAS_string (".multiply_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)).add_operation (var_rightTemporaryOperand_35401, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@divisionExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionForGeneration * object = (const cPtr_divisionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 814)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 814)) ;
  GALGAS_string var_leftTemporaryOperand_36161 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_36161, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 817)) ;
  GALGAS_string var_rightTemporaryOperand_36364 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_36364, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 820)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_36161.add_operation (GALGAS_string (".divide_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)).add_operation (var_rightTemporaryOperand_36364, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 823)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 824)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 824)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionForGeneration.mSlotID,
                                           extensionMethod_divisionExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionForGeneration_generateExpression (defineExtensionMethod_divisionExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@divisionExpressionNoOverflowForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowForGeneration * object = (const cPtr_divisionExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 835)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 835)) ;
  GALGAS_string var_leftTemporaryOperand_37264 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_37264, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)) ;
  GALGAS_string var_rightTemporaryOperand_37467 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_37467, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 841)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_37264.add_operation (GALGAS_string (".divide_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 843)).add_operation (var_rightTemporaryOperand_37467, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 843)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 843)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_divisionExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@moduloExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_moduloExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionForGeneration * object = (const cPtr_moduloExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mLeftExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 854)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 854)) ;
  GALGAS_string var_leftTemporaryOperand_38223 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_38223, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 857)) ;
  GALGAS_string var_rightTemporaryOperand_38426 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_38426, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 860)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand_38223.add_operation (GALGAS_string (".modulo_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 862)).add_operation (var_rightTemporaryOperand_38426, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 862)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 864)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 864)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_moduloExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_moduloExpressionForGeneration.mSlotID,
                                           extensionMethod_moduloExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionForGeneration_generateExpression (defineExtensionMethod_moduloExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@unaryMinusExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)) ;
  GALGAS_string var_operand_39301 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_39301, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)) ;
  outArgument_outCppExpression = var_operand_39301.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 880)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 880)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 882)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 882)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration.mSlotID,
                                           extensionMethod_unaryMinusExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionForGeneration_generateExpression (defineExtensionMethod_unaryMinusExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@unaryMinusExpressionNoOverflowForGeneration generateExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionNoOverflowForGeneration * object = (const cPtr_unaryMinusExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 893)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 893)) ;
  GALGAS_string var_operand_40275 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_40275, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 895)) ;
  outArgument_outCppExpression = var_operand_40275.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 903)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration.mSlotID,
                                           extensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (defineExtensionMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@notExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 914)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 914)) ;
  GALGAS_string var_operand_40818 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_40818, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)) ;
  outArgument_outCppExpression = var_operand_40818.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_notExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_notExpressionForGeneration.mSlotID,
                                           extensionMethod_notExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionForGeneration_generateExpression (defineExtensionMethod_notExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@structFieldAccessExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_structFieldAccessExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionForGeneration * object = (const cPtr_structFieldAccessExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 930)) ;
  GALGAS_string var_operand_41624 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_41624, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 932)) ;
  outArgument_outCppExpression = var_operand_41624.add_operation (GALGAS_string (".mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 934)).add_operation (object->mAttribute_mStructFieldName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 934)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_structFieldAccessExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration.mSlotID,
                                           extensionMethod_structFieldAccessExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionForGeneration_generateExpression (defineExtensionMethod_structFieldAccessExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@tildeExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 945)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 945)) ;
  GALGAS_string var_operand_42182 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_42182, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 948)) ;
  outArgument_outCppExpression = var_operand_42182.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                           extensionMethod_tildeExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineExtensionMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@ifExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_ifExpression_42809 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_42809, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 963)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 965)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 965)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 965)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mThenExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)) ;
  GALGAS_string var_testVar_43211 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar_43211, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).add_operation (var_ifExpression_42809, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_43211, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)) ;
  GALGAS_string var_thenExpression_43493 ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 972)) ;
  }
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_43493, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 973)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (var_thenExpression_43493, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 975)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar_43211, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 978)) ;
  }
  GALGAS_string var_elseExpression_43947 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_43947, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 980)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).add_operation (var_elseExpression_43947, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 982)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 983)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_ifExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_ifExpressionForGeneration.mSlotID,
                                           extensionMethod_ifExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionForGeneration_generateExpression (defineExtensionMethod_ifExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mLiteralType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 995)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (object->mAttribute_mLiteralType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 996)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration.mSlotID,
                                           extensionMethod_literalTypeInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionForGeneration_generateExpression (defineExtensionMethod_literalTypeInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1008)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1008)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1008)) ;
  GALGAS_string var_receiverExpression_45470 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_45470, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1010)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)).add_operation (var_receiverExpression_45470, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1020)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1021)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1020)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1021)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1022)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1022)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration.mSlotID,
                                           extensionMethod_extractObjectInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractObjectInExpressionForGeneration_generateExpression (defineExtensionMethod_extractObjectInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_string var_typeNameRepresentation_46138 = object->mAttribute_mCastType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1033)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1033)) ;
  GALGAS_string var_receiverExpression_46393 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1035)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mCastType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1043)) ;
  switch (object->mAttribute_mTypeComparisonKind.enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1046)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1046)).add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1047)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1048)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1050)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1051)).add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1052)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1052)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1054)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1054)).add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1055)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1056)).add_operation (var_typeNameRepresentation_46138, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1056)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1057)).add_operation (var_receiverExpression_46393, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1058)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1058)) ;
    }
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_testDynamicClassInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration.mSlotID,
                                           extensionMethod_testDynamicClassInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionForGeneration_generateExpression (defineExtensionMethod_testDynamicClassInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@castInExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mCastType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1071)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1072)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1072)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1073)) ;
  GALGAS_string var_receiverExpression_47865 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_47865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1075)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1083)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1083)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1083)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1084)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1084)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1084)).add_operation (var_receiverExpression_47865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1085)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1085)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1083)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1086)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1089)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1090)).add_operation (var_receiverExpression_47865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1091)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1091)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1091)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)).add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)).add_operation (var_receiverExpression_47865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1093)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1093)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1088)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1095)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1097)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1097)).add_operation (object->mAttribute_mTypeName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1097)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1098)).add_operation (var_receiverExpression_47865, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1099)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1099)).add_operation (extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1099)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1101)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1102)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1102)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1104)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_castInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_castInExpressionForGeneration.mSlotID,
                                           extensionMethod_castInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionForGeneration_generateExpression (defineExtensionMethod_castInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@varInExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1116)) ;
  outArgument_outCppExpression = object->mAttribute_mCppVarName ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1118)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_varInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_varInExpressionForGeneration.mSlotID,
                                           extensionMethod_varInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionForGeneration_generateExpression (defineExtensionMethod_varInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@getterCallExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1133)) ;
  GALGAS_string var_receiverCppName_50120 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_50120, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1135)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_50182 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1137)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_50212 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_50212.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_50243 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_50212.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_50243, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1140)) ;
    var_getterArgumentCppNameList_50182.addAssign_operation (var_argumentCppName_50243  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1141)) ;
    enumerator_50212.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      extensionMethod_addHeaderFileName (extensionGetter_baseType (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1146)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1146)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1146)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_baseType_50633 = object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1147)) ;
      GALGAS_bool var_searching_50689 = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1149)).isValid ()) {
        uint32_t variant_50705 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1149)).uintValue () ;
        bool loop_50705 = true ;
        while (loop_50705) {
          loop_50705 = var_searching_50689.isValid () ;
          if (loop_50705) {
            loop_50705 = var_searching_50689.boolValue () ;
          }
          if (loop_50705 && (0 == variant_50705)) {
            loop_50705 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1149)) ;
          }
          if (loop_50705) {
            variant_50705 -- ;
            const enumGalgasBool test_0 = var_baseType_50633.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1150)).getter_isNull (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1150)).operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1150)).boolEnum () ;
            if (kBoolTrue == test_0) {
              const enumGalgasBool test_1 = var_baseType_50633.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1151)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1151)).getter_hasKey (object->mAttribute_mGetterName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1151)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_50633 = var_baseType_50633.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1152)) ;
              }else if (kBoolFalse == test_1) {
                var_searching_50689 = GALGAS_bool (false) ;
              }
            }else if (kBoolFalse == test_0) {
              var_searching_50689 = GALGAS_bool (false) ;
            }
          }
        }
      }
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType_50633.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)).add_operation (object->mAttribute_mGetterName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_50120 COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1161)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1162)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1162)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1162)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (object->mAttribute_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1163)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1163)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1163)).add_operation (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)).add_operation (var_receiverCppName_50120, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1164)) ;
      }else if (kBoolFalse == test_2) {
        extensionMethod_addHeaderFileName (object->mAttribute_mReceiverExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1166)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1166)) ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (object->mAttribute_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1167)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1167)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1167)).add_operation (var_receiverCppName_50120, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1167)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1167)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_50120 ;
      cEnumerator_stringlist enumerator_51754 (object->mAttribute_mFieldList, kEnumeration_up) ;
      while (enumerator_51754.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_51754.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)) ;
        enumerator_51754.gotoNextObject () ;
      }
      extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1174)) ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (object->mAttribute_mGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1175)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1175)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1175)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1175)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_52023 (var_getterArgumentCppNameList_50182, kEnumeration_up) ;
  while (enumerator_52023.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_52023.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1178)) ;
    if (enumerator_52023.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)) ;
    }
    enumerator_52023.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_getterArgumentCppNameList_50182.getter_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1184)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1184)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1184)) ;
    }
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1187)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1187)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1188)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1188)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1188)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1188)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1190)) ;
    }
  }
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1192)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1192)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1192)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_getterCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_getterCallExpressionForGeneration.mSlotID,
                                           extensionMethod_getterCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_getterCallExpressionForGeneration_generateExpression (defineExtensionMethod_getterCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@functionCallExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1204)) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1206))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1206)) ;
  GALGAS_stringlist var_parameterList_53110 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1208)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_53151 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_53151.hasCurrentObject ()) {
    GALGAS_string var_parameter_53176 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_53151.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_53176, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)) ;
    var_parameterList_53110.addAssign_operation (var_parameter_53176  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1212)) ;
    enumerator_53151.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1214)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1214)) ;
  cEnumerator_stringlist enumerator_53464 (var_parameterList_53110, kEnumeration_up) ;
  while (enumerator_53464.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_53464.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1216)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1216)) ;
    enumerator_53464.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1218)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1218)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1219)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1219)) ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1220)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1220)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_functionCallExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_functionCallExpressionForGeneration.mSlotID,
                                           extensionMethod_functionCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionForGeneration_generateExpression (defineExtensionMethod_functionCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (object->mAttribute_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1234)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1234)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1234)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1246))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1246)) ;
  GALGAS_stringlist var_parameterList_54813 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1247)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_54868 (object->mAttribute_mActualOutputParameterList, kEnumeration_up) ;
  while (enumerator_54868.hasCurrentObject ()) {
    GALGAS_string var_parameter_54893 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_54868.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_54893, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1250)) ;
    var_parameterList_54813.addAssign_operation (var_parameter_54893  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1257)) ;
    enumerator_54868.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (object->mAttribute_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)).add_operation (object->mAttribute_mFilewrapperTemplateName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1259)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1260)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1260)) ;
  cEnumerator_stringlist enumerator_55344 (var_parameterList_54813, kEnumeration_up) ;
  while (enumerator_55344.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_55344.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1262)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1262)) ;
    enumerator_55344.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1264)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1264)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1265)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1265)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1265)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperTemplateInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1277))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1277)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsTextFile.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_0 ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (object->mAttribute_mFilewrapperFileIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)).add_operation (object->mAttribute_mFilewrapperName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration.mSlotID,
                                           extensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (defineExtensionMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1293))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1293)) ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1294)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1294)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1294)).add_operation (object->mAttribute_mLexiqueGetterName.getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1295)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1294)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1295)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1296)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1296)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration.mSlotID,
                                           extensionMethod_lexiqueIntrospectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionForGeneration_generateExpression (defineExtensionMethod_lexiqueIntrospectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@expressionCollectionValueForGeneration generateCollectionElementCode'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inTargetType */,
                                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                  const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValueForGeneration * object = (const cPtr_expressionCollectionValueForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValueForGeneration) ;
  GALGAS_string var_sourceVar_58109 ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_58109, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1320)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1327)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".plusAssign_operation (").add_operation (var_sourceVar_58109, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1328)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1328)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1329)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1329)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1329)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1330)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1330)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1330)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1330)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1331)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1331)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration.mSlotID,
                                                      extensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionCollectionValueForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@expressionListCollectionForGeneration generateCollectionElementCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                 const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionForGeneration * object = (const cPtr_expressionListCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionForGeneration) ;
  GALGAS_stringlist var_parameterList_58848 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1344)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_58893 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_58893.hasCurrentObject ()) {
    GALGAS_string var_parameter_59076 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_58893.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_59076, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1346)) ;
    var_parameterList_58848.addAssign_operation (var_parameter_59076  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1353)) ;
    enumerator_58893.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(constinArgument_inCppTargetVar, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1356)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1358)) ;
  cEnumerator_stringlist enumerator_59279 (var_parameterList_58848, kEnumeration_up) ;
  while (enumerator_59279.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_59279.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1360)) ;
    if (enumerator_59279.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1361)) ;
    }
    enumerator_59279.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1363)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1363)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1363)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1364)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1364)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1364)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1365)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1365)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1367)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1367)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1367)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1367)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode (void) {
  enterExtensionMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionListCollectionForGeneration.mSlotID,
                                                      extensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionForGeneration_generateCollectionElementCode (defineExtensionMethod_expressionListCollectionForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@expressionCollectionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  extensionMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1379)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)).add_operation (object->mAttribute_mResultType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)).add_operation (object->mAttribute_mResultType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)).getter_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)).add_operation (extensionGetter_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1384)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)) ;
  cEnumerator_collectionValueElementListForGeneration enumerator_60587 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_60587.hasCurrentObject ()) {
    callExtensionMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_60587.current_mElement (HERE).ptr (), object->mAttribute_mResultType, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1387)) ;
    enumerator_60587.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_expressionCollectionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_expressionCollectionForGeneration.mSlotID,
                                           extensionMethod_expressionCollectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionForGeneration_generateExpression (defineExtensionMethod_expressionCollectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@outputActualParameterForGeneration generateActualParameter'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_string & ioArgument_ioImplementation,
                                                                                        GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                        GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        GALGAS_string & outArgument_outCppName,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterForGeneration * object = (const cPtr_outputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 26)) ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_outputInputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                             GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                             GALGAS_string & outArgument_outCppName,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterForGeneration * object = (const cPtr_outputInputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterForGeneration) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_2989 (object->mAttribute_mTypeList, kEnumeration_up) ;
  while (enumerator_2989.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2989.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 41)) ;
    enumerator_2989.gotoNextObject () ;
  }
  outArgument_outCppName = object->mAttribute_mOutputInputVariableCppName ;
  cEnumerator_lstringlist enumerator_3117 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_3117.hasCurrentObject ()) {
    outArgument_outCppName.plusAssign_operation(GALGAS_string (".mAttribute_").add_operation (enumerator_3117.current_mValue (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)) ;
    enumerator_3117.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (object->mAttribute_mOutputInputVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 47)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration.mSlotID,
                                                extensionMethod_outputInputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_outputInputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@inputActualParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                       GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                       GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                       GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppName,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualParameterForGeneration * object = (const cPtr_inputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualParameterForGeneration) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 61)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 62)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputActualParameterForGeneration.mSlotID,
                                                extensionMethod_inputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualParameterForGeneration_generateActualParameter (defineExtensionMethod_inputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_inputJokerParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_string & ioArgument_ioImplementation,
                                                                                      GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                                      GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GALGAS_string & outArgument_outCppName,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerParameterForGeneration * object = (const cPtr_inputJokerParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerParameterForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 75)) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mFormalArgumentType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)) ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)) ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter (void) {
  enterExtensionMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputJokerParameterForGeneration.mSlotID,
                                                extensionMethod_inputJokerParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerParameterForGeneration_generateActualParameter (defineExtensionMethod_inputJokerParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_semanticBlockInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticBlockInstructionForGeneration * object = (const cPtr_semanticBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticBlockInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 90)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 91)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration.mSlotID,
                                            extensionMethod_semanticBlockInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticBlockInstructionForGeneration_generateInstruction (defineExtensionMethod_semanticBlockInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@grammarForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  cEnumerator_lstringlist enumerator_2208 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_2208.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_2208.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24)) ;
    enumerator_2208.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, object->mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 27)), object->mAttribute_mNonTerminalMapForGrammarAnalysis, object->mAttribute_mNonTerminalToAddList, object->mAttribute_mHasIndexing, object->mAttribute_mStartSymbolName, object->mAttribute_mHasTranslateFeature, object->mAttribute_mGrammarName, object->mAttribute_mSyntaxComponents COMMA_SOURCE_FILE ("semanticGeneration.galgas", 26))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                              extensionMethod_grammarForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendDeclaration_31_ (defineExtensionMethod_grammarForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@grammarForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_grammarForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2951 (object->mAttribute_mNonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_2951.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_3012 (enumerator_2951.current (HERE).mAttribute_mNonterminalSymbolParametersMap, kEnumeration_up) ;
    while (enumerator_3012.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_3053 (enumerator_3012.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_3053.hasCurrentObject ()) {
        switch (enumerator_3053.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t_3178 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inUnifiedTypeMap, enumerator_3053.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 50)) ;
            extensionMethod_addHeaderFileName (var_t_3178, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 51)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_3053.gotoNextObject () ;
      }
      enumerator_3012.gotoNextObject () ;
    }
    enumerator_2951.gotoNextObject () ;
  }
  outArgument_outImplementation = object->mAttribute_mCppFileContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_grammarForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                     extensionMethod_grammarForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificImplementation (defineExtensionMethod_grammarForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension getter '@grammarForGeneration implementationCppFileName'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_grammarForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  result_outName = GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 63)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                  extensionGetter_grammarForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_implementationCppFileName (defineExtensionGetter_grammarForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension getter '@grammarForGeneration hasCppHeaderFile'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_grammarForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                         extensionGetter_grammarForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_hasCppHeaderFile (defineExtensionGetter_grammarForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension getter '@grammarForGeneration headerKind'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_grammarForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 75)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                   extensionGetter_grammarForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_headerKind (defineExtensionGetter_grammarForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension getter '@grammarForGeneration isPredefined'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_grammarForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_grammarForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                     extensionGetter_grammarForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_grammarForGeneration_isPredefined (defineExtensionGetter_grammarForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension getter '@syntaxDeclarationForGeneration implementationCppFileName'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  result_outName = GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 89)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                  extensionGetter_syntaxDeclarationForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_implementationCppFileName (defineExtensionGetter_syntaxDeclarationForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                         extensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_hasCppHeaderFile (defineExtensionGetter_syntaxDeclarationForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@syntaxDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_syntaxDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 101)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                   extensionGetter_syntaxDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_headerKind (defineExtensionGetter_syntaxDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool extensionGetter_syntaxDeclarationForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                     extensionGetter_syntaxDeclarationForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_syntaxDeclarationForGeneration_isPredefined (defineExtensionGetter_syntaxDeclarationForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115)) ;
  GALGAS_uintlist var_selectMethodList_5806 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 116)) ;
  GALGAS_uint var_idx_5832 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).isValid ()) {
    uint32_t variant_5843 = object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).uintValue () ;
    bool loop_5843 = true ;
    while (loop_5843) {
      loop_5843 = GALGAS_bool (kIsStrictInf, var_idx_5832.objectCompare (object->mAttribute_mSelectMethodCount)).isValid () ;
      if (loop_5843) {
        loop_5843 = GALGAS_bool (kIsStrictInf, var_idx_5832.objectCompare (object->mAttribute_mSelectMethodCount)).boolValue () ;
      }
      if (loop_5843 && (0 == variant_5843)) {
        loop_5843 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 118)) ;
      }
      if (loop_5843) {
        variant_5843 -- ;
        var_selectMethodList_5806.addAssign_operation (var_idx_5832  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 120)) ;
        var_idx_5832.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 121)) ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 125)), object->mAttribute_mNonterminalDeclarationMap, object->mAttribute_mRuleDeclarationList, var_selectMethodList_5806, object->mAttribute_mHasIndexing, object->mAttribute_mHasTranslateFeature COMMA_SOURCE_FILE ("semanticGeneration.galgas", 123))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                              extensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_syntaxDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outImplementation,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 140))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 140)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 142)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 141))) ;
  GALGAS_string var_lexiqueCppName_6728 = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 145)) ;
  cEnumerator_ruleDeclarationList enumerator_6818 (object->mAttribute_mRuleDeclarationList, kEnumeration_up) ;
  while (enumerator_6818.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_6902 (enumerator_6818.current_mLabelImplementationList (HERE), kEnumeration_up) ;
    while (enumerator_6902.hasCurrentObject ()) {
      GALGAS_string var_ruleName_6932 = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 149)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 149)).add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (enumerator_6818.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (enumerator_6818.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (enumerator_6902.current_mLabelName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)) ;
      GALGAS_string var_code_7726 ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName_6932, ioArgument_ioInclusionSet, enumerator_6902.current_mSignatureForGeneration (HERE), enumerator_6902.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName_6728, GALGAS_bool (false), GALGAS_bool (false), object->mAttribute_mHasTranslateFeature, var_code_7726, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_7726, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 167)) ;
      enumerator_6902.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_parseInstructionList_7878 ;
    GALGAS_lstring joker_7842 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_7845 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_7848 ; // Joker input parameter
    GALGAS_location joker_7851 ; // Joker input parameter
    enumerator_6818.current_mLabelImplementationList (HERE).method_first (joker_7842, joker_7845, joker_7848, joker_7851, var_parseInstructionList_7878, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 170)) ;
    GALGAS_string var_parseRuleName_7909 = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)).add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (enumerator_6818.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (enumerator_6818.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)) ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)) ;
    GALGAS_string var_parseCode_8688 ;
    {
    routine_generateProcedure (GALGAS_bool (false), var_parseRuleName_7909, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 180)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_parseInstructionList_7878, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 181)), GALGAS_bool (false), var_lexiqueCppName_6728, GALGAS_bool (false), GALGAS_bool (true), object->mAttribute_mHasTranslateFeature, var_parseCode_8688, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)) ;
    }
    outArgument_outImplementation.plusAssign_operation(var_parseCode_8688, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 189)) ;
    const enumGalgasBool test_0 = object->mAttribute_mHasIndexing.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_semanticInstructionListForGeneration var_instructionList_8844 ;
      GALGAS_lstring joker_8884 ; // Joker input parameter
      GALGAS_formalParameterListForGeneration joker_8887 ; // Joker input parameter
      GALGAS_formalParameterSignature joker_8890 ; // Joker input parameter
      GALGAS_location joker_8893 ; // Joker input parameter
      enumerator_6818.current_mLabelImplementationList (HERE).method_first (joker_8884, joker_8887, joker_8890, joker_8893, var_instructionList_8844, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 193)) ;
      GALGAS_string var_ruleName_8939 = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (object->mAttribute_mSyntaxComponentName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (enumerator_6818.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 196)).add_operation (enumerator_6818.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 198)) ;
      GALGAS_string var_code_9793 ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName_8939, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 203)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList_8844, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 204)), GALGAS_bool (false), var_lexiqueCppName_6728, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code_9793, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_9793, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 212)) ;
    }
    enumerator_6818.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                     extensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_syntaxDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateProcedure'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateProcedure (const GALGAS_bool constinArgument_inGenerateStatic,
                                const GALGAS_string constinArgument_inProcedureName,
                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                GALGAS_formalParameterListForGeneration inArgument_inFormalArgumentList,
                                const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                const GALGAS_bool constinArgument_inProcedureIsConst,
                                const GALGAS_string constinArgument_inCompilerTypeName,
                                const GALGAS_bool constinArgument_inGenerateLocationArgs,
                                const GALGAS_bool constinArgument_inGenerateResetTemplateString,
                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                GALGAS_string & outArgument_outGeneratedCode,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_10992 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 237)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_unusedVariableCppNameSet_10992.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 239))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 239)) ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 241)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_unusedVariableCppNameSet_10992.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 242))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 242)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_11275 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_11275.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_11275.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 245)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_unusedVariableCppNameSet_10992.addAssign_operation (enumerator_11275.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 246)) ;
    }
    enumerator_11275.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_11483 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody_11505 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_11505.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 252)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_11576 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_11576.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_11576.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_11483, var_unusedVariableCppNameSet_10992, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_11505, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 254)) ;
    enumerator_11576.gotoNextObject () ;
  }
  {
  var_routineBody_11505.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 262)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_11879 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_11879.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11879.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 265)) ;
    enumerator_11879.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_3 = constinArgument_inGenerateStatic.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 270)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void ").add_operation (constinArgument_inProcedureName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)) ;
  GALGAS_uint var_colRef_12135 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 273)) ;
  cEnumerator_formalParameterListForGeneration enumerator_12208 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_12208.hasCurrentObject ()) {
    switch (enumerator_12208.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_12208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_12208.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)) ;
      }
      break ;
    }
    const enumGalgasBool test_4 = var_unusedVariableCppNameSet_10992.getter_hasKey (enumerator_12208.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_12208.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)) ;
    }else if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_12208.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12135, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)) ;
    }
    enumerator_12208.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_5) {
    const enumGalgasBool test_6 = var_unusedVariableCppNameSet_10992.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)).boolEnum () ;
    if (kBoolTrue == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)).add_operation (GALGAS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)) ;
    }else if (kBoolFalse == test_6) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)) ;
    }
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12135, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)) ;
  const enumGalgasBool test_7 = var_unusedVariableCppNameSet_10992.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)).boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)) ;
  }else if (kBoolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
  if (kBoolTrue == test_8) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_12135, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)) ;
  const enumGalgasBool test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
  if (kBoolTrue == test_9) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 317)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) ;
  cEnumerator_formalParameterListForGeneration enumerator_14083 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_14083.hasCurrentObject ()) {
    switch (enumerator_14083.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_14083.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)).add_operation (GALGAS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
      }
      break ;
    }
    enumerator_14083.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_11505, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)) ;
  const enumGalgasBool test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
  if (kBoolTrue == test_10) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 335)) ;
}


