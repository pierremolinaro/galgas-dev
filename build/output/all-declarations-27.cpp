#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

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
  GALGAS_semanticExpressionForGeneration var_expression_2420 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-property-access.galgas", 55)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2420, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 52)) ;
  GALGAS_unifiedTypeMap_2D_entry var_expressionType_2504 = var_expression_2420.getter_mResultType (HERE) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_expressionType_2504.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 62)).getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 62)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 62)).operator_and (var_expressionType_2504.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 62)).getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 62)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 62)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 62)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structPropertyAccessExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mPropertyName (HERE).getter_location (HERE), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray3  COMMA_SOURCE_FILE ("expression-property-access.galgas", 63)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_2765 = var_expressionType_2504.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 65)) ;
  GALGAS_bool var_isPublic_2856 ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2869 ;
  const GALGAS_structPropertyAccessExpressionAST temp_4 = object ;
  GALGAS_bool joker_2858 ; // Joker input parameter
  var_propertyMap_2765.method_searchKey (temp_4.getter_mPropertyName (HERE), var_isPublic_2856, joker_2858, var_type_2869, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 66)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isPublic_2856.boolEnum () ;
    if (kBoolTrue == test_5) {
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      GALGAS_unifiedTypeMap_2D_entry var_selfType_2968 ;
      GALGAS_bool var_unused_0_2972 ;
      GALGAS_bool var_unused_1_2972 ;
      const bool optionalResult2948 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_2968, var_unused_0_2972, var_unused_1_2972) ;
      if (!optionalResult2948) {
        test_6 = kBoolFalse ;
      }
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_expressionType_2504.objectCompare (var_selfType_2968)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_structPropertyAccessExpressionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.getter_mPropertyName (HERE).getter_location (HERE), GALGAS_string ("inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("expression-property-access.galgas", 70)) ;
        }
      }
    }
  }
  const GALGAS_structPropertyAccessExpressionAST temp_9 = object ;
  const GALGAS_structPropertyAccessExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_2869, temp_9.getter_mOperatorLocation (HERE), var_expression_2420, temp_10.getter_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("expression-property-access.galgas", 73)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 98)) ;
  GALGAS_string var_operand_4323 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4323, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 100)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4323.add_operation (GALGAS_string (".getter_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 102)).add_operation (temp_2.getter_mStructFieldName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 102)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 102)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2121 ;
  const GALGAS_notExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-not.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2121, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2405 = var_expression_2121.getter_mResultType (HERE) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_2121.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = object ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_2.getter_mOperatorLocation (HERE)  COMMA_SOURCE_FILE ("expression-not.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_2121.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = object ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), temp_4.getter_mOperatorLocation (HERE)  COMMA_SOURCE_FILE ("expression-not.galgas", 63)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_type_2405.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 64)).getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 64)).operator_not (SOURCE_FILE ("expression-not.galgas", 64)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2405.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 65)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = object ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_2405, temp_8.getter_mOperatorLocation (HERE), var_expression_2121  COMMA_SOURCE_FILE ("expression-not.galgas", 70)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 94)) ;
  GALGAS_string var_operand_4013 ;
  const GALGAS_notExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4013, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 97)) ;
  const GALGAS_notExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4013.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)).add_operation (extensionGetter_sourceFile (temp_2.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 99)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2328 ;
  const GALGAS_tildeExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-tilde.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2328, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2398 = var_expression_2328.getter_mResultType (HERE) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_2436 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_2328.ptr ())) ;
    if (NULL == var_exp_2436.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_2436.getter_mResultType (HERE), var_exp_2436.getter_mLocation (HERE), var_exp_2436.getter_mValue (HERE).operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 64))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 61)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_type_2398.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 66)).getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 66)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 66)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = object ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2398.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 68)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 68)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 67)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = object ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_2398, temp_5.getter_mOperatorLocation (HERE), var_expression_2328  COMMA_SOURCE_FILE ("expression-tilde.galgas", 72)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 96)) ;
  GALGAS_string var_operand_3851 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_3851, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 99)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_3851.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)).add_operation (extensionGetter_sourceFile (temp_2.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 101)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                           extensionMethod_tildeExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineExtensionMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bangExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bangExpressionAST * object = (const cPtr_bangExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bangExpressionAST) ;
  const GALGAS_bangExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bangExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_bangExpressionAST.mSlotID,
                                                         extensionMethod_bangExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bangExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_bangExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bangExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bangExpressionAST * object = (const cPtr_bangExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_bangExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2324 ;
  const GALGAS_bangExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-bang.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2324, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2394 = var_expression_2324.getter_mResultType (HERE) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMap_2D_entry var_classIndex_2786 ;
    const bool optionalResult2755 = var_type_2394.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 67)).optional_weakReferenceType (var_classIndex_2786) ;
    if (!optionalResult2755) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = object ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::constructor_new (var_classIndex_2786, temp_2.getter_mOperatorLocation (HERE), var_expression_2324, var_type_2394.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 72))  COMMA_SOURCE_FILE ("expression-bang.galgas", 68)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = object ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2394.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 76)).add_operation (GALGAS_string ("' and does not support the '\xC2""\xB0""' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 76)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 75)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bangExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_bangExpressionAST.mSlotID,
                                                  extensionMethod_bangExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bangExpressionAST_analyzeSemanticExpression (defineExtensionMethod_bangExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bangExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_bangExpressionForGeneration * object = (const cPtr_bangExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_bangExpressionForGeneration) ;
  const GALGAS_bangExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 98)) ;
  GALGAS_string var_operand_4120 ;
  const GALGAS_bangExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4120, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 100)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 108)) COMMA_SOURCE_FILE ("expression-bang.galgas", 108)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4120.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 109)).add_operation (temp_2.getter_mReceiverTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 109)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 110)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bangExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_bangExpressionForGeneration.mSlotID,
                                           extensionMethod_bangExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bangExpressionForGeneration_generateExpression (defineExtensionMethod_bangExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryWrappingMinusExpressionAST * object = (const cPtr_unaryWrappingMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryWrappingMinusExpressionAST) ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 36)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST.mSlotID,
                                                         extensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryWrappingMinusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryWrappingMinusExpressionAST * object = (const cPtr_unaryWrappingMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryWrappingMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2180 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2180, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2464 = var_expression_2180.getter_mResultType (HERE) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_2464.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 60)).getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 60)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 60)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mOperatorLocation (HERE), GALGAS_string ("operand type is '@").add_operation (var_type_2464.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 62)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 62)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 61)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = object ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (var_type_2464, temp_4.getter_mOperatorLocation (HERE), var_expression_2180  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 66)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST.mSlotID,
                                                  extensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryWrappingMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryWrappingMinusExpressionForGeneration * object = (const cPtr_unaryWrappingMinusExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryWrappingMinusExpressionForGeneration) ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 89)) ;
  GALGAS_string var_operand_3910 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_3910, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 91)) ;
  outArgument_outCppExpression = var_operand_3910.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration.mSlotID,
                                           extensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_unaryWrappingMinusExpressionForGeneration_generateExpression (defineExtensionMethod_unaryWrappingMinusExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  const GALGAS_orExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 98)) ;
  const GALGAS_orExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 99)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                         extensionMethod_orExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_4880 ;
  const GALGAS_orExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_4880, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 112)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_5173 ;
  const GALGAS_orExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_4880.getter_mResultType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_5173, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 121)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_5245 = var_leftExpression_4880.getter_mResultType (HERE) ;
  {
  const GALGAS_orExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_5245, var_rightExpression_5173.getter_mResultType (HERE), var_leftType_5245.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 134)).getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 134)), GALGAS_string ("|"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_5173, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 131)) ;
  }
  const GALGAS_orExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_5245, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_4880, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 143)), var_rightExpression_5173  COMMA_SOURCE_FILE ("expression-or.galgas", 139)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                  extensionMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  const GALGAS_orShortExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 153)) ;
  const GALGAS_orShortExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 154)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                         extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_orShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_6750 ;
  const GALGAS_orShortExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6750, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 167)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7043 ;
  const GALGAS_orShortExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6750.getter_mResultType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_7043, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 176)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_7117 = var_leftExpression_6750.getter_mResultType (HERE) ;
  {
  const GALGAS_orShortExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_7117, var_rightExpression_7043.getter_mResultType (HERE), var_leftType_7117.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 189)).getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 189)), GALGAS_string ("|"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_7043, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 186)) ;
  }
  const GALGAS_orShortExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_7117, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_6750, var_rightExpression_7043  COMMA_SOURCE_FILE ("expression-or.galgas", 195)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                  extensionMethod_orShortExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_xorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  const GALGAS_xorExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 207)) ;
  const GALGAS_xorExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 208)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                         extensionMethod_xorExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_xorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_8611 ;
  const GALGAS_xorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_8611, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 221)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8904 ;
  const GALGAS_xorExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8611.getter_mResultType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_8904, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 230)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_8978 = var_leftExpression_8611.getter_mResultType (HERE) ;
  {
  const GALGAS_xorExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_8978, var_rightExpression_8904.getter_mResultType (HERE), var_leftType_8978.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 243)).getter_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 243)), GALGAS_string ("^"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_8904, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 240)) ;
  }
  const GALGAS_xorExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_8978, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_8611, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 253)), var_rightExpression_8904  COMMA_SOURCE_FILE ("expression-or.galgas", 249)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                  extensionMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  const GALGAS_closedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 263)) ;
  const GALGAS_closedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 264)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                         extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_10554 ;
  const GALGAS_closedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_10554, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 278)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10865 ;
  const GALGAS_closedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_10865, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 287)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_10939 = var_leftExpression_10554.getter_mResultType (HERE) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_10939.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 297)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_10554.getter_mLocation (HERE), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 298)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_rightType_11140 = var_rightExpression_10865.getter_mResultType (HERE) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_rightType_11140.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 301)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_10865.getter_mLocation (HERE), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 302)) ;
    }
  }
  const GALGAS_closedSliceExpressionAST temp_6 = object ;
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_10554.getter_mLocation (HERE)  COMMA_SOURCE_FILE ("expression-or.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 306)), temp_6.getter_mOperatorLocation (HERE), var_leftExpression_10554, var_rightExpression_10865  COMMA_SOURCE_FILE ("expression-or.galgas", 305)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                  extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_closedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  const GALGAS_openedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 318)) ;
  const GALGAS_openedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 319)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                         extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_entry /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_12731 ;
  const GALGAS_openedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12731, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 333)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_13042 ;
  const GALGAS_openedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_13042, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 342)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_13116 = var_leftExpression_12731.getter_mResultType (HERE) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_13116.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 352)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12731.getter_mLocation (HERE), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 353)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_rightType_13317 = var_rightExpression_13042.getter_mResultType (HERE) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_rightType_13317.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 356)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_13042.getter_mLocation (HERE), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 357)) ;
    }
  }
  const GALGAS_openedSliceExpressionAST temp_6 = object ;
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_12731.getter_mLocation (HERE)  COMMA_SOURCE_FILE ("expression-or.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 361)), temp_6.getter_mOperatorLocation (HERE), var_leftExpression_12731, var_rightExpression_13042  COMMA_SOURCE_FILE ("expression-or.galgas", 360)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                  extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_openedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_orShortExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mLeftExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 399)) ;
  GALGAS_string var_leftTemporaryOperand_15515 ;
  const GALGAS_orShortExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mLeftExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_15515, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 401)) ;
  GALGAS_string var_testVar_15558 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 409)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 409)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_15558, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 410)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 410)).add_operation (var_leftTemporaryOperand_15515, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 410)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 410)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_15558, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 411)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 411)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 413)) ;
  }
  GALGAS_string var_rightTemporaryOperand_16040 ;
  const GALGAS_orShortExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mRightExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_16040, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 414)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_15558.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 421)).add_operation (var_rightTemporaryOperand_16040, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 421)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 421)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 422)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 423)) ;
  outArgument_outCppExpression = var_testVar_15558 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                           extensionMethod_orShortExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineExtensionMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_closedSliceExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mLeftExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 435)) ;
  GALGAS_string var_leftTemporaryOperand_16839 ;
  const GALGAS_closedSliceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mLeftExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_16839, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 437)) ;
  GALGAS_string var_rightTemporaryOperand_17044 ;
  const GALGAS_closedSliceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mRightExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17044, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 445)) ;
  const GALGAS_closedSliceExpressionForGeneration temp_3 = object ;
  const GALGAS_closedSliceExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_16839, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 454)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 454)).add_operation (var_rightTemporaryOperand_17044, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 454)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (var_leftTemporaryOperand_16839, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (extensionGetter_commaSourceFile (temp_4.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_openedSliceExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mLeftExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)) ;
  GALGAS_string var_leftTemporaryOperand_18017 ;
  const GALGAS_openedSliceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mLeftExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18017, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 469)) ;
  GALGAS_string var_rightTemporaryOperand_18222 ;
  const GALGAS_openedSliceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mRightExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18222, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 477)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 485)) COMMA_SOURCE_FILE ("expression-or.galgas", 485)) ;
  }
  const GALGAS_openedSliceExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_18017, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 487)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 487)).add_operation (var_rightTemporaryOperand_18222, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 487)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)).add_operation (var_leftTemporaryOperand_18017, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mLocation (HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 488)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 489)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                           extensionMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineExtensionMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  const GALGAS_andExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 56)) ;
  const GALGAS_andExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 57)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                         extensionMethod_andExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_3215 ;
  const GALGAS_andExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_3215, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 70)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_3507 ;
  const GALGAS_andExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_3215.getter_mResultType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_3507, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 79)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_3581 = var_leftExpression_3215.getter_mResultType (HERE) ;
  {
  const GALGAS_andExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_3581, var_rightExpression_3507.getter_mResultType (HERE), var_leftType_3581.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 92)).getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 92)), GALGAS_string ("&"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_3507, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 89)) ;
  }
  const GALGAS_andExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_3581, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_3215, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 102)), var_rightExpression_3507  COMMA_SOURCE_FILE ("expression-and.galgas", 98)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                  extensionMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  const GALGAS_andShortExpressionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 112)) ;
  const GALGAS_andShortExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 113)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                         extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_andShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_5114 ;
  const GALGAS_andShortExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_5114, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 126)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_5406 ;
  const GALGAS_andShortExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5114.getter_mResultType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_5406, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 135)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_5480 = var_leftExpression_5114.getter_mResultType (HERE) ;
  {
  const GALGAS_andShortExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_5480, var_rightExpression_5406.getter_mResultType (HERE), var_leftType_5480.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 148)).getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 148)), GALGAS_string ("&"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_5406, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 145)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_5480, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_5114, var_rightExpression_5406  COMMA_SOURCE_FILE ("expression-and.galgas", 154)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                  extensionMethod_andShortExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_andShortExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mLeftExpression (HERE).getter_mResultType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 178)) ;
  GALGAS_string var_leftTemporaryOperand_6971 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mLeftExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_6971, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 180)) ;
  GALGAS_string var_testVar_7014 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 188)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 188)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_7014, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 189)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 189)).add_operation (var_leftTemporaryOperand_6971, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 189)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 189)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_7014, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 190)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 190)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 192)) ;
  }
  GALGAS_string var_rightTemporaryOperand_7496 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mRightExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_7496, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 193)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_7014.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 200)).add_operation (var_rightTemporaryOperand_7496, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 200)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 200)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 201)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 202)) ;
  outArgument_outCppExpression = var_testVar_7014 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterExtensionMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                           extensionMethod_andShortExpressionForGeneration_generateExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineExtensionMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inTargetType,
                                   const GALGAS_unifiedTypeMap_2D_entry constinArgument_inSourceType,
                                   const GALGAS_location constinArgument_inErrorLocation,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_2358 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_2388 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2358)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).isValid ()) {
    uint32_t variant_2424 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).uintValue () ;
    bool loop_2424 = true ;
    while (loop_2424) {
      loop_2424 = var_ok_2388.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).operator_and (var_sourceType_2358.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).isValid () ;
      if (loop_2424) {
        loop_2424 = var_ok_2388.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).operator_and (var_sourceType_2358.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)).boolValue () ;
      }
      if (loop_2424 && (0 == variant_2424)) {
        loop_2424 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 45)) ;
      }
      if (loop_2424) {
        variant_2424 -- ;
        var_sourceType_2358 = var_sourceType_2358.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) ;
        var_ok_2388 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2358)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_2388.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 49)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_2674 ;
      const bool optionalResult2643 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 49)).optional_weakReferenceType (var_targetType_2674) ;
      if (!optionalResult2643) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_2358 = constinArgument_inSourceType ;
        var_ok_2388 = GALGAS_bool (kIsEqual, var_targetType_2674.objectCompare (var_sourceType_2358)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).isValid ()) {
          uint32_t variant_2753 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).uintValue () ;
          bool loop_2753 = true ;
          while (loop_2753) {
            loop_2753 = var_ok_2388.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).operator_and (var_sourceType_2358.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).isValid () ;
            if (loop_2753) {
              loop_2753 = var_ok_2388.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).operator_and (var_sourceType_2358.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)).boolValue () ;
            }
            if (loop_2753 && (0 == variant_2753)) {
              loop_2753 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 52)) ;
            }
            if (loop_2753) {
              variant_2753 -- ;
              var_sourceType_2358 = var_sourceType_2358.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) ;
              var_ok_2388 = GALGAS_bool (kIsEqual, var_targetType_2674.objectCompare (var_sourceType_2358)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_2388.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 57)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 58)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inTargetType,
                                                        const GALGAS_unifiedTypeMap_2D_entry constinArgument_inSourceType,
                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_3475 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_3505 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).isValid ()) {
    uint32_t variant_3543 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).uintValue () ;
    bool loop_3543 = true ;
    while (loop_3543) {
      loop_3543 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).operator_and (var_sourceType_3475.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).isValid () ;
      if (loop_3543) {
        loop_3543 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).operator_and (var_sourceType_3475.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)).boolValue () ;
      }
      if (loop_3543 && (0 == variant_3543)) {
        loop_3543 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 73)) ;
      }
      if (loop_3543) {
        variant_3543 -- ;
        var_sourceType_3475 = var_sourceType_3475.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)) ;
        var_ok_3505 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_3475)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 77)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_3793 ;
      const bool optionalResult3762 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 77)).optional_weakReferenceType (var_targetType_3793) ;
      if (!optionalResult3762) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_3475 = constinArgument_inSourceType ;
        var_ok_3505 = GALGAS_bool (kIsEqual, var_targetType_3793.objectCompare (var_sourceType_3475)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).isValid ()) {
          uint32_t variant_3872 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).uintValue () ;
          bool loop_3872 = true ;
          while (loop_3872) {
            loop_3872 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).operator_and (var_sourceType_3475.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).isValid () ;
            if (loop_3872) {
              loop_3872 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).operator_and (var_sourceType_3475.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)).boolValue () ;
            }
            if (loop_3872 && (0 == variant_3872)) {
              loop_3872 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 80)) ;
            }
            if (loop_3872) {
              variant_3872 -- ;
              var_sourceType_3475 = var_sourceType_3475.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)) ;
              var_ok_3505 = GALGAS_bool (kIsEqual, var_targetType_3793.objectCompare (var_sourceType_3475)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_isPublic_4193 ;
      GALGAS_bool var_unused_0_4196 ;
      GALGAS_unifiedTypeMap_2D_entry var_propertyType_4214 ;
      const bool optionalResult4159 = constinArgument_inSourceType.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)).optional_searchKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 86)), var_isPublic_4193, var_unused_0_4196, var_propertyType_4214) ;
      if (!optionalResult4159) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_isPublic_4193.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)) ;
          }
        }
        GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_4370 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4214, constinArgument_inErrorLocation, ioArgument_ioExpression, constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)) ;
        ioArgument_ioExpression = var_conversionExpression_4370 ;
        var_ok_3505 = GALGAS_bool (kIsEqual, var_propertyType_4214.objectCompare (constinArgument_inTargetType)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_bool test_5 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)).getter_hasKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)) ;
      }
      test_4 = test_5.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_methodKind var_kind_4761 ;
        GALGAS_functionSignature var_argumentTypeList_4808 ;
        GALGAS_bool var_hasCompilerArgument_4848 ;
        GALGAS_unifiedTypeMap_2D_entry var_returnedType_4872 ;
        GALGAS_location joker_4816 ; // Joker input parameter
        GALGAS_methodQualifier joker_4880_2 ; // Joker input parameter
        GALGAS_string joker_4880_1 ; // Joker input parameter
        constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)).method_searchKey (constinArgument_inTargetType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 100)), var_kind_4761, var_argumentTypeList_4808, joker_4816, var_hasCompilerArgument_4848, var_returnedType_4872, joker_4880_2, joker_4880_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) ;
        var_ok_3505 = GALGAS_bool (kIsEqual, var_argumentTypeList_4808.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 108)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_4872.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 108)) ;
        GALGAS_getterCallExpressionForGeneration var_conversionExpression_5024 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_4761, ioArgument_ioExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)), constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 116)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)), var_hasCompilerArgument_4848  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)) ;
        ioArgument_ioExpression = var_conversionExpression_5024 ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_ok_3505.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 122)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 123)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator (const GALGAS_unifiedTypeMap_2D_entry constinArgument_inLeftType,
                                  const GALGAS_unifiedTypeMap_2D_entry constinArgument_inRightType,
                                  const GALGAS_bool constinArgument_inOperandIsHandled,
                                  const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                  const GALGAS_location constinArgument_inErrorLocation,
                                  GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_rightType_6267 = constinArgument_inRightType ;
    GALGAS_bool var_ok_6298 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_6267)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).isValid ()) {
      uint32_t variant_6333 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).uintValue () ;
      bool loop_6333 = true ;
      while (loop_6333) {
        loop_6333 = var_ok_6298.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).operator_and (var_rightType_6267.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).isValid () ;
        if (loop_6333) {
          loop_6333 = var_ok_6298.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).operator_and (var_rightType_6267.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).boolValue () ;
        }
        if (loop_6333 && (0 == variant_6333)) {
          loop_6333 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)) ;
        }
        if (loop_6333) {
          variant_6333 -- ;
          var_rightType_6267 = var_rightType_6267.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) ;
          var_ok_6298 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_6267)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = var_ok_6298.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)).getter_hasKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)) ;
      }
      test_2 = test_3.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool var_hasCompilerArgument_6644 ;
        GALGAS_unifiedTypeMap_2D_entry var_returnedType_6689 ;
        GALGAS_methodKind var_kind_6716 ;
        GALGAS_functionSignature var_argumentTypeList_6848 ;
        GALGAS_location joker_6858 ; // Joker input parameter
        GALGAS_methodQualifier joker_6920_2 ; // Joker input parameter
        GALGAS_string joker_6920_1 ; // Joker input parameter
        constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).method_searchKey (constinArgument_inLeftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)), var_kind_6716, var_argumentTypeList_6848, joker_6858, var_hasCompilerArgument_6644, var_returnedType_6689, joker_6920_2, joker_6920_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)) ;
        var_ok_6298 = GALGAS_bool (kIsEqual, var_argumentTypeList_6848.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_6689.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)) ;
        GALGAS_getterCallExpressionForGeneration var_conversionExpression_7070 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind_6716, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 172)), constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 173)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 174)), var_hasCompilerArgument_6644  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)) ;
        ioArgument_ioRightExpression = var_conversionExpression_7070 ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_ok_6298.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 179)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 181)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 180)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  const GALGAS_assignmentInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 82)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                          extensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_assignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPropertyAssignmentInstructionAST * object = (const cPtr_selfPropertyAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPropertyAssignmentInstructionAST) ;
  const GALGAS_selfPropertyAssignmentInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 90)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST.mSlotID,
                                                          extensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPropertyAssignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionAST * object = (const cPtr_assignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_3982 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_assignmentInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mOptionalProperty (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_assignmentInstructionAST temp_2 = object ;
      GALGAS_string joker_4121 ; // Joker input parameter
      GALGAS_string joker_4130 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_neutralAccess (temp_2.getter_mTargetVariableName (HERE), var_targetType_3982, joker_4121, joker_4130, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_assignmentInstructionAST temp_3 = object ;
    GALGAS_string joker_4237 ; // Joker input parameter
    GALGAS_string joker_4246 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (temp_3.getter_mTargetVariableName (HERE), var_targetType_3982, joker_4237, joker_4246, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
    }
    GALGAS_propertyMap var_propertyMap_4273 = var_targetType_3982.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 120)) ;
    GALGAS_bool var_isPublic_4366 ;
    GALGAS_bool var_isConstant_4382 ;
    const GALGAS_assignmentInstructionAST temp_4 = object ;
    var_propertyMap_4273.method_searchKey (temp_4.getter_mOptionalProperty (HERE), var_isPublic_4366, var_isConstant_4382, var_targetType_3982, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 121)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_isPublic_4366.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 122)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_assignmentInstructionAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mOptionalProperty (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 123)) ;
      }
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_isConstant_4382.boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_assignmentInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.getter_mOptionalProperty (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 126)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_4907 ;
  const GALGAS_assignmentInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_11.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_3982, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4907, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 130)) ;
  {
  const GALGAS_assignmentInstructionAST temp_12 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_3982, var_expression_4907.getter_mResultType (HERE), temp_12.getter_mInstructionLocation (HERE), var_expression_4907, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 139)) ;
  }
  GALGAS_string var_targetVariableCppName_5155 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_5205 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_assignmentInstructionAST temp_14 = object ;
    test_13 = GALGAS_bool (kIsEqual, temp_14.getter_mOptionalProperty (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_assignmentInstructionAST temp_15 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_5333 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_searchForWriteAccess (temp_15.getter_mTargetVariableName (HERE), joker_5333, var_targetVariableCppName_5155, var_nameForCheckingFormalParameterUsing_5205, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 149)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    {
    const GALGAS_assignmentInstructionAST temp_16 = object ;
    GALGAS_unifiedTypeMap_2D_entry joker_5505 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.getter_mTargetVariableName (HERE), joker_5505, var_targetVariableCppName_5155, var_nameForCheckingFormalParameterUsing_5205, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 156)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_17 = object ;
  const GALGAS_assignmentInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_3982, var_targetVariableCppName_5155, var_nameForCheckingFormalParameterUsing_5205, temp_17.getter_mOptionalProperty (HERE).getter_string (HERE), var_expression_4907, temp_18.getter_mTargetVariableName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 164))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 164)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_assignmentInstructionAST.mSlotID,
                                                   extensionMethod_assignmentInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_assignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPropertyAssignmentInstructionAST * object = (const cPtr_selfPropertyAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPropertyAssignmentInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_6383 ;
    GALGAS_bool var_unused_0_6395 ;
    GALGAS_bool var_mutableProperties_6437 ;
    const bool optionalResult6363 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_6383, var_unused_0_6395, var_mutableProperties_6437) ;
    if (!optionalResult6363) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_mutableProperties_6437.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 184)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 185)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_6591 = var_selfType_6383.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 187)) ;
      GALGAS_bool var_isConstant_6693 ;
      GALGAS_unifiedTypeMap_2D_entry var_targetType_6709 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = object ;
      GALGAS_bool joker_6676 ; // Joker input parameter
      var_propertyMap_6591.method_searchKey (temp_4.getter_mTargetSelfPropertyName (HERE), joker_6676, var_isConstant_6693, var_targetType_6709, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 188)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_6693.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mTargetSelfPropertyName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 190)) ;
        }
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_8 = object ;
      GALGAS_string var_targetVariableCppName_6855 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 192)).add_operation (temp_8.getter_mTargetSelfPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 193)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = object ;
        test_9 = GALGAS_bool (kIsNotEqual, temp_10.getter_mOptionalProperty (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_propertyMap var_propertyMap_7102 = var_targetType_6709.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 196)) ;
          GALGAS_bool var_isPublic_7197 ;
          GALGAS_bool var_isConstant_7213 ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_11 = object ;
          var_propertyMap_7102.method_searchKey (temp_11.getter_mOptionalProperty (HERE), var_isPublic_7197, var_isConstant_7213, var_targetType_6709, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 197)) ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = var_isPublic_7197.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 198)).boolEnum () ;
            if (kBoolTrue == test_12) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_13 = object ;
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_13.getter_mOptionalProperty (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 199)) ;
            }
          }
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = var_isConstant_7213.boolEnum () ;
            if (kBoolTrue == test_15) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = object ;
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (temp_16.getter_mOptionalProperty (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray17  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 202)) ;
            }
          }
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_7768 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_18 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_18.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6709, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7768, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 206)) ;
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_19 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6709, var_expression_7768.getter_mResultType (HERE), temp_19.getter_mInstructionLocation (HERE), var_expression_7768, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 215)) ;
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_20 = object ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_21 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_6709, var_targetVariableCppName_6855, constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), temp_20.getter_mOptionalProperty (HERE).getter_string (HERE), var_expression_7768, temp_21.getter_mTargetSelfPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 217))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 217)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_22 = object ;
    TC_Array <C_FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 226)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST.mSlotID,
                                                   extensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPropertyAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_assignmentInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionForGeneration * object = (const cPtr_assignmentInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionForGeneration) ;
  GALGAS_string var_sourceVar_12303 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12303, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 316)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 325)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.getter_mOptionalProperty (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.getter_mTargetCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 327)).add_operation (var_sourceVar_12303, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 327)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 327)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_6 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.getter_mTargetCppName (HERE).add_operation (GALGAS_string (".setter_set"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 329)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 329)) ;
    const GALGAS_assignmentInstructionForGeneration temp_7 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_7.getter_mOptionalProperty (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 330)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 330)) ;
    const GALGAS_assignmentInstructionForGeneration temp_8 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_12303, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 331)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 331)).add_operation (extensionGetter_sourceFile (temp_8.getter_mSourceLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 331)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 331)) ;
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_9 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_9.getter_mTargetCppName (HERE) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 333)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_assignmentInstructionForGeneration.mSlotID,
                                            extensionMethod_assignmentInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentInstructionForGeneration_generateInstruction (defineExtensionMethod_assignmentInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mCastExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 125)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_mElseInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 126)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_4614 (temp_2.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_4614.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4614.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 128)) ;
    enumerator_4614.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                          extensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structuredCastInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_structuredCastInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionAST * object = (const cPtr_structuredCastInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_castExpression_5378 ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mCastExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_5378, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 144)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 153)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_5740 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 155)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_5874 (temp_1.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_5874.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_5948 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_5874.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
    GALGAS_unifiedTypeMap_2D_entry var_t_6130 = var_type_5948 ;
    GALGAS_bool var_found_6157 = GALGAS_bool (kIsEqual, var_t_6130.objectCompare (var_castExpression_5378.getter_mResultType (HERE))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).isValid ()) {
      uint32_t variant_6200 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).uintValue () ;
      bool loop_6200 = true ;
      while (loop_6200) {
        loop_6200 = var_found_6157.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_6130.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).isValid () ;
        if (loop_6200) {
          loop_6200 = var_found_6157.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_6130.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).boolValue () ;
        }
        if (loop_6200 && (0 == variant_6200)) {
          loop_6200 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 162)) ;
        }
        if (loop_6200) {
          variant_6200 -- ;
          var_t_6130 = var_t_6130.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 164)) ;
          var_found_6157 = GALGAS_bool (kIsEqual, var_t_6130.objectCompare (var_castExpression_5378.getter_mResultType (HERE))) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_6157.operator_not (SOURCE_FILE ("instruction-cast.galgas", 167)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5874.current_mTypeName (HERE).getter_location (HERE), GALGAS_string ("the '@").add_operation (enumerator_5874.current_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (var_castExpression_5378.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
      }
    }
    GALGAS_string var_localConstantName_6645 ;
    GALGAS_localConstantList var_localConstantList_6671 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_5874.current_mConstantVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_6645 = GALGAS_string ("cast_").add_operation (enumerator_5874.current_mConstantVarName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (enumerator_5874.current_mConstantVarName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)) ;
        var_localConstantList_6671.addAssign_operation (var_type_5948, enumerator_5874.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_6645  COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_6645 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_7119 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6671, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 191)), enumerator_5874.current_mInstructionList (HERE), enumerator_5874.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_7119, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 186)) ;
    }
    var_castBranchList_5740.addAssign_operation (enumerator_5874.current_mTypeComparisonKind (HERE), var_type_5948, var_localConstantName_6645, var_instructionList_7119  COMMA_SOURCE_FILE ("instruction-cast.galgas", 197)) ;
    enumerator_5874.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_7567 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = object ;
  const GALGAS_structuredCastInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 205)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 206)), temp_5.getter_mElseInstructionList (HERE), temp_6.getter_mEndOfCastInstruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_7567, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 201)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_7.getter_mEndOfCastInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_5378, var_castBranchList_5740, var_else_5F_instructionList_7567  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionAST.mSlotID,
                                                   extensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structuredCastInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_structuredCastInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structuredCastInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionForGeneration * object = (const cPtr_structuredCastInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionForGeneration) ;
  GALGAS_string var_castCppVarName_9764 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = object ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_9947 (temp_1.getter_mCastBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_9947.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9947.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 262)) ;
    switch (enumerator_9947.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (enumerator_9947.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_9947.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (var_castCppVarName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (enumerator_9947.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (enumerator_9947.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (var_castCppVarName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_9947.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_9947.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (enumerator_9947.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (enumerator_9947.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (var_castCppVarName_9764, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9947.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)) ;
    }
    if (enumerator_9947.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)) ;
    }
    enumerator_9947.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mElseInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 296)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 297)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.getter_mElseInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 308)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 309)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration.mSlotID,
                                            extensionMethod_structuredCastInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structuredCastInstructionForGeneration_generateInstruction (defineExtensionMethod_structuredCastInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  const GALGAS_plusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 155)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  const GALGAS_minusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 161)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_minusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  const GALGAS_mulEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 167)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_mulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  const GALGAS_divEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 173)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_divEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  const GALGAS_plusEqualElementsInstructionAST temp_0 = object ;
  extensionMethod_enterInSemanticContext (temp_0.getter_mExpressions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 179)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_plusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualExpressionInstructionAST * object = (const cPtr_plusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_7612 ;
  GALGAS_string var_targetVariableCppName_7648 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_7698 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_7798 ;
        GALGAS_bool var_unused_0_7802 ;
        GALGAS_bool var_mutableProperties_7844 ;
        const bool optionalResult7778 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_7798, var_unused_0_7802, var_mutableProperties_7844) ;
        if (!optionalResult7778) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_7844.operator_not (SOURCE_FILE ("instruction-concat.galgas", 199)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 200)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_7999 = var_selfType_7798.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 202)) ;
          GALGAS_bool var_isConstant_8093 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_8076 ; // Joker input parameter
          var_propertyMap_7999.method_searchKey (temp_6.getter_mReceiverName (HERE), joker_8076, var_isConstant_8093, var_targetType_7612, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 203)) ;
          var_nameForCheckingFormalParameterUsing_7698 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_7648 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 205)).add_operation (temp_7.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 206)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_8093.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_7844.operator_not (SOURCE_FILE ("instruction-concat.galgas", 210)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 211)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 214)) ;
        var_targetType_7612.drop () ; // Release error dropped variable
        var_targetVariableCppName_7648.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_7698.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.getter_mReceiverName (HERE), var_targetType_7612, var_targetVariableCppName_7648, var_nameForCheckingFormalParameterUsing_7698, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 218)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_8961 (temp_17.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8961.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_9014 = var_targetType_7612.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
    GALGAS_bool var_isPublic_9091 ;
    GALGAS_bool var_isConstant_9107 ;
    var_propertyMap_9014.method_searchKey (enumerator_8961.current_mValue (HERE), var_isPublic_9091, var_isConstant_9107, var_targetType_7612, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 227)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_9091.operator_not (SOURCE_FILE ("instruction-concat.galgas", 228)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8961.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 229)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_9107.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_8961.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 232)) ;
      }
    }
    enumerator_8961.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_7612.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 236)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 236)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 236)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_7612.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 237)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9893 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_7612, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9893, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 241)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_7612, var_expression_9893.getter_mResultType (HERE), temp_26.getter_mInstructionLocation (HERE), var_expression_9893, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 250)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_plusEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.getter_mInstructionLocation (HERE), var_targetType_7612, var_targetVariableCppName_7648, var_nameForCheckingFormalParameterUsing_7698, temp_28.getter_mStructAttributeList (HERE), var_expression_9893, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 252))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 252)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_minusEqualExpressionInstructionAST * object = (const cPtr_minusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_minusEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_10897 ;
  GALGAS_string var_targetVariableCppName_10933 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10983 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_11083 ;
        GALGAS_bool var_selfIsMutable_11111 ;
        GALGAS_bool var_mutableProperties_11153 ;
        const bool optionalResult11063 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_11083, var_selfIsMutable_11111, var_mutableProperties_11153) ;
        if (!optionalResult11063) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_11111.operator_not (SOURCE_FILE ("instruction-concat.galgas", 278)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 279)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_11302 = var_selfType_11083.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 281)) ;
          GALGAS_bool var_isConstant_11396 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_11379 ; // Joker input parameter
          var_propertyMap_11302.method_searchKey (temp_6.getter_mReceiverName (HERE), joker_11379, var_isConstant_11396, var_targetType_10897, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 282)) ;
          var_nameForCheckingFormalParameterUsing_10983 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_10933 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)).add_operation (temp_7.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 285)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_11396.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 287)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_11153.operator_not (SOURCE_FILE ("instruction-concat.galgas", 289)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 290)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 293)) ;
        var_targetType_10897.drop () ; // Release error dropped variable
        var_targetVariableCppName_10933.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_10983.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.getter_mReceiverName (HERE), var_targetType_10897, var_targetVariableCppName_10933, var_nameForCheckingFormalParameterUsing_10983, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 316)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_13221 (temp_17.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_13221.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_13274 = var_targetType_10897.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 324)) ;
    GALGAS_bool var_isPublic_13351 ;
    GALGAS_bool var_isConstant_13367 ;
    var_propertyMap_13274.method_searchKey (enumerator_13221.current_mValue (HERE), var_isPublic_13351, var_isConstant_13367, var_targetType_10897, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 325)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_13351.operator_not (SOURCE_FILE ("instruction-concat.galgas", 326)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_13221.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 327)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_13367.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_13221.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 330)) ;
      }
    }
    enumerator_13221.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_10897.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 334)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 334)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 334)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_minusEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_10897.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 335)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_14154 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10897, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_14154, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 339)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10897, var_expression_14154.getter_mResultType (HERE), temp_26.getter_mInstructionLocation (HERE), var_expression_14154, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 348)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_minusEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.getter_mInstructionLocation (HERE), var_targetType_10897, var_targetVariableCppName_10933, var_nameForCheckingFormalParameterUsing_10983, temp_28.getter_mStructAttributeList (HERE), var_expression_14154, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 350))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 350)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_minusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_minusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mulEqualExpressionInstructionAST * object = (const cPtr_mulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_mulEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_15157 ;
  GALGAS_string var_targetVariableCppName_15193 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_15243 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_15343 ;
        GALGAS_bool var_selfIsMutable_15371 ;
        GALGAS_bool var_mutableProperties_15413 ;
        const bool optionalResult15323 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_15343, var_selfIsMutable_15371, var_mutableProperties_15413) ;
        if (!optionalResult15323) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_15371.operator_not (SOURCE_FILE ("instruction-concat.galgas", 376)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 377)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_15562 = var_selfType_15343.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
          GALGAS_bool var_isConstant_15656 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_15639 ; // Joker input parameter
          var_propertyMap_15562.method_searchKey (temp_6.getter_mReceiverName (HERE), joker_15639, var_isConstant_15656, var_targetType_15157, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 380)) ;
          var_nameForCheckingFormalParameterUsing_15243 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_15193 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)).add_operation (temp_7.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 383)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_15656.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_15413.operator_not (SOURCE_FILE ("instruction-concat.galgas", 387)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 391)) ;
        var_targetType_15157.drop () ; // Release error dropped variable
        var_targetVariableCppName_15193.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_15243.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.getter_mReceiverName (HERE), var_targetType_15157, var_targetVariableCppName_15193, var_nameForCheckingFormalParameterUsing_15243, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 413)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_17708 (temp_17.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_17708.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_17761 = var_targetType_15157.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 428)) ;
    GALGAS_bool var_isPublic_17838 ;
    GALGAS_bool var_isConstant_17854 ;
    var_propertyMap_17761.method_searchKey (enumerator_17708.current_mValue (HERE), var_isPublic_17838, var_isConstant_17854, var_targetType_15157, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 429)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_17838.operator_not (SOURCE_FILE ("instruction-concat.galgas", 430)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_17708.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 431)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_17854.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_17708.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 434)) ;
      }
    }
    enumerator_17708.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_15157.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 438)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 438)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_mulEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_15157.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 440)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 440)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_18635 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_15157, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_18635, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 443)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_15157, var_expression_18635.getter_mResultType (HERE), temp_26.getter_mInstructionLocation (HERE), var_expression_18635, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 452)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_mulEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.getter_mInstructionLocation (HERE), var_targetType_15157, var_targetVariableCppName_15193, var_nameForCheckingFormalParameterUsing_15243, temp_28.getter_mStructAttributeList (HERE), var_expression_18635, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 454))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_mulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_mulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divEqualExpressionInstructionAST * object = (const cPtr_divEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divEqualExpressionInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_19636 ;
  GALGAS_string var_targetVariableCppName_19672 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_19722 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_19822 ;
        GALGAS_bool var_selfIsMutable_19850 ;
        GALGAS_bool var_mutableProperties_19892 ;
        const bool optionalResult19802 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_19822, var_selfIsMutable_19850, var_mutableProperties_19892) ;
        if (!optionalResult19802) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_19850.operator_not (SOURCE_FILE ("instruction-concat.galgas", 480)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 481)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_20041 = var_selfType_19822.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 483)) ;
          GALGAS_bool var_isConstant_20135 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_20118 ; // Joker input parameter
          var_propertyMap_20041.method_searchKey (temp_6.getter_mReceiverName (HERE), joker_20118, var_isConstant_20135, var_targetType_19636, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 484)) ;
          var_nameForCheckingFormalParameterUsing_19722 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_19672 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 486)).add_operation (temp_7.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 487)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_20135.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 489)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_19892.operator_not (SOURCE_FILE ("instruction-concat.galgas", 491)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 492)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 495)) ;
        var_targetType_19636.drop () ; // Release error dropped variable
        var_targetVariableCppName_19672.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_19722.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.getter_mReceiverName (HERE), var_targetType_19636, var_targetVariableCppName_19672, var_nameForCheckingFormalParameterUsing_19722, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 518)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_21987 (temp_17.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21987.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22040 = var_targetType_19636.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 527)) ;
    GALGAS_bool var_isPublic_22117 ;
    GALGAS_bool var_isConstant_22133 ;
    var_propertyMap_22040.method_searchKey (enumerator_21987.current_mValue (HERE), var_isPublic_22117, var_isConstant_22133, var_targetType_19636, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 528)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_22117.operator_not (SOURCE_FILE ("instruction-concat.galgas", 529)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_21987.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 530)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_22133.boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_divEqualExpressionInstructionAST temp_21 = object ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 533)) ;
      }
    }
    enumerator_21987.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_targetType_19636.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 537)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 537)).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_divEqualExpressionInstructionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_19636.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 539)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 539)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_22926 ;
  const GALGAS_divEqualExpressionInstructionAST temp_26 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_26.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_19636, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_22926, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 542)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_27 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_19636, var_expression_22926.getter_mResultType (HERE), temp_27.getter_mInstructionLocation (HERE), var_expression_22926, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 551)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_28 = object ;
  const GALGAS_divEqualExpressionInstructionAST temp_29 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_28.getter_mInstructionLocation (HERE), var_targetType_19636, var_targetVariableCppName_19672, var_nameForCheckingFormalParameterUsing_19722, temp_29.getter_mStructAttributeList (HERE), var_expression_22926, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 553))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 553)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_divEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_divEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualElementsInstructionAST * object = (const cPtr_plusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualElementsInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_23927 ;
  GALGAS_string var_targetVariableCppName_23963 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_24013 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_24113 ;
        GALGAS_bool var_selfIsMutable_24141 ;
        GALGAS_bool var_mutableProperties_24183 ;
        const bool optionalResult24093 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_24113, var_selfIsMutable_24141, var_mutableProperties_24183) ;
        if (!optionalResult24093) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_24141.operator_not (SOURCE_FILE ("instruction-concat.galgas", 579)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualElementsInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 580)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_24332 = var_selfType_24113.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 582)) ;
          GALGAS_bool var_isConstant_24426 ;
          const GALGAS_plusEqualElementsInstructionAST temp_6 = object ;
          GALGAS_bool joker_24409 ; // Joker input parameter
          var_propertyMap_24332.method_searchKey (temp_6.getter_mReceiverName (HERE), joker_24409, var_isConstant_24426, var_targetType_23927, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)) ;
          var_nameForCheckingFormalParameterUsing_24013 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualElementsInstructionAST temp_7 = object ;
          var_targetVariableCppName_23963 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 585)).add_operation (temp_7.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 586)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_24426.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 588)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_24183.operator_not (SOURCE_FILE ("instruction-concat.galgas", 590)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualElementsInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("the property cannot be mutated in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 591)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 594)) ;
        var_targetType_23927.drop () ; // Release error dropped variable
        var_targetVariableCppName_23963.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_24013.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.getter_mReceiverName (HERE), var_targetType_23927, var_targetVariableCppName_23963, var_nameForCheckingFormalParameterUsing_24013, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 616)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_26280 (temp_17.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_26280.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_26333 = var_targetType_23927.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)) ;
    GALGAS_bool var_isPublic_26410 ;
    GALGAS_bool var_isConstant_26426 ;
    var_propertyMap_26333.method_searchKey (enumerator_26280.current_mValue (HERE), var_isPublic_26410, var_isConstant_26426, var_targetType_23927, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_26410.operator_not (SOURCE_FILE ("instruction-concat.galgas", 627)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_26280.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_26426.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_26280.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 631)) ;
      }
    }
    enumerator_26280.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_26737 = var_targetType_23927.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 635)) ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_26737.getter_length (SOURCE_FILE ("instruction-concat.galgas", 636)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualElementsInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_23927.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 638)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 638)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 637)) ;
    }
  }
  if (kBoolFalse == test_22) {
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_plusEqualElementsInstructionAST temp_26 = object ;
      test_25 = GALGAS_bool (kIsNotEqual, temp_26.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 640)).objectCompare (var_addAssignOperatorArguments_26737.getter_length (SOURCE_FILE ("instruction-concat.galgas", 640)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_plusEqualElementsInstructionAST temp_27 = object ;
        const GALGAS_plusEqualElementsInstructionAST temp_28 = object ;
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_27.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_23927.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 642)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 642)).add_operation (var_addAssignOperatorArguments_26737.getter_length (SOURCE_FILE ("instruction-concat.galgas", 643)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 642)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 643)).add_operation (temp_28.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 644)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 643)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 644)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 641)) ;
      }
    }
    if (kBoolFalse == test_25) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_27491 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 646)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_30 = object ;
      cEnumerator_actualOutputExpressionList enumerator_27558 (temp_30.getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_27620 (var_addAssignOperatorArguments_26737, kENUMERATION_UP) ;
      while (enumerator_27558.hasCurrentObject () && enumerator_27620.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_27917 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_27558.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_27620.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_27917, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 648)) ;
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = GALGAS_bool (kIsNotEqual, enumerator_27620.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_27558.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_31) {
            GALGAS_string temp_32 ;
            const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_27620.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_33) {
              temp_32 = enumerator_27620.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 657)) ;
            }else if (kBoolFalse == test_33) {
              temp_32 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_28002 = GALGAS_string ("!").add_operation (temp_32, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 657)) ;
            TC_Array <C_FixItDescription> fixItArray34 ;
            appendFixItActions (fixItArray34, kFixItReplace, var_s_28002) ;
            inCompiler->emitSemanticError (enumerator_27558.current_mActualSelector (HERE).getter_location (HERE), GALGAS_string ("the selector should be '").add_operation (var_s_28002, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)), fixItArray34  COMMA_SOURCE_FILE ("instruction-concat.galgas", 658)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_27620.current_mFormalArgumentType (HERE), var_expression_27917.getter_mResultType (HERE), enumerator_27558.current_mEndOfExpressionLocation (HERE), var_expression_27917, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)) ;
        }
        var_effectiveParameterList_27491.addAssign_operation (var_expression_27917  COMMA_SOURCE_FILE ("instruction-concat.galgas", 663)) ;
        enumerator_27558.gotoNextObject () ;
        enumerator_27620.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_35 = object ;
      const GALGAS_plusEqualElementsInstructionAST temp_36 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_23963, var_targetType_23927, var_nameForCheckingFormalParameterUsing_24013, temp_35.getter_mInstructionLocation (HERE), temp_36.getter_mStructAttributeList (HERE), var_effectiveParameterList_27491  COMMA_SOURCE_FILE ("instruction-concat.galgas", 666))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_plusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_plusEqualnstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualnstructionForGeneration * object = (const cPtr_plusEqualnstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualnstructionForGeneration) ;
  const GALGAS_plusEqualnstructionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 698)) ;
  GALGAS_stringlist var_parameterList_29956 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 699)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_29991 (temp_1.getter_mExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_29991.hasCurrentObject ()) {
    GALGAS_string var_parameter_30199 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_29991.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_30199, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 701)) ;
    var_parameterList_29956.addAssign_operation (var_parameter_30199  COMMA_SOURCE_FILE ("instruction-concat.galgas", 708)) ;
    enumerator_29991.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 711)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mReceiverCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 712)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_30402 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_30402.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_30402.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 714)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 714)) ;
    enumerator_30402.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 717)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 718)) ;
  }
  cEnumerator_stringlist enumerator_30682 (var_parameterList_29956, kENUMERATION_UP) ;
  while (enumerator_30682.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30682.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 720)) ;
    if (enumerator_30682.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 721)) ;
    }
    enumerator_30682.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = object ;
    test_6 = temp_7.getter_mTargetType (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 723)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 723)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 724)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 724)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 725)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 725)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 727)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 727)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 727)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration.mSlotID,
                                            extensionMethod_plusEqualnstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_plusEqualnstructionForGeneration_generateInstruction (defineExtensionMethod_plusEqualnstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opEqualInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_opEqualInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_opEqualInstructionForGeneration * object = (const cPtr_opEqualInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_opEqualInstructionForGeneration) ;
  const GALGAS_opEqualInstructionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 750)) ;
  GALGAS_string var_sourceVar_32257 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_32257, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 751)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 758)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mTargetVariableCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 759)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_32410 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_32410.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_32410.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) ;
    enumerator_32410.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.getter_mGeneratedMethod (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)).add_operation (var_sourceVar_32257, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 765)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 765)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 765)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 766)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 766)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.getter_mTargetVariableCppName (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 767)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_opEqualInstructionForGeneration.mSlotID,
                                            extensionMethod_opEqualInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_opEqualInstructionForGeneration_generateInstruction (defineExtensionMethod_opEqualInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dropInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                          extensionMethod_dropInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dropInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_dropInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dropInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionAST * object = (const cPtr_dropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionAST) ;
  const GALGAS_dropInstructionAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_2214 (temp_0.getter_mDropList (HERE), kENUMERATION_UP) ;
  while (enumerator_2214.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_entry joker_2287_3 ; // Joker input parameter
    GALGAS_string joker_2287_2 ; // Joker input parameter
    GALGAS_string joker_2287_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForDropAccess (enumerator_2214.current_mValue (HERE), joker_2287_3, joker_2287_2, joker_2287_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 53)) ;
    }
    enumerator_2214.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_dropInstructionAST.mSlotID,
                                                   extensionMethod_dropInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dropInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_dropInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_errorInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  const GALGAS_errorInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLocationExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 109)) ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mMessageExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 110)) ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.getter_mFixitListAST (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                          extensionMethod_errorInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_errorInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_errorInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                               const GALGAS_semanticExpressionAST constinArgument_inLocationExpression,
                                               const GALGAS_semanticExpressionAST constinArgument_inMessageExpression,
                                               const GALGAS_fixitListAST constinArgument_inFixitListAST,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               const GALGAS_string constinArgument_inErrorOrWarningString,
                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outLocationExpression,
                                               GALGAS_semanticExpressionForGeneration & outArgument_outMessageExpression,
                                               GALGAS_fixitListForGeneration & outArgument_outFixitListForGeneration,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outFixitListForGeneration.drop () ; // Release 'out' argument
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 164)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE), outArgument_outLocationExpression.getter_mResultType (HERE), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 173)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 227)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 224)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 233)) ;
  cEnumerator_fixitListAST enumerator_9285 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_9285.hasCurrentObject ()) {
    switch (enumerator_9285.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 237))  COMMA_SOURCE_FILE ("instruction-error.galgas", 237)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_10306 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_9285.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9426_exp = extractPtr_10306->mAssociatedValue0 ;
        const GALGAS_location extractedValue_9440_errorLocation = extractPtr_10306->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9700 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_9426_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9700, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 239)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_9700.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_9700.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_9700.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_9700.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_9440_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_9700.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 251)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 251)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 251)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9700  COMMA_SOURCE_FILE ("instruction-error.galgas", 254))  COMMA_SOURCE_FILE ("instruction-error.galgas", 254)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_11223 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_9285.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10338_exp = extractPtr_11223->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10352_errorLocation = extractPtr_11223->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10612 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_10338_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10612, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 256)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_10612.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_10612.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_10612.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_10612.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_10352_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_10612.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 268)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 268)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 268)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10612  COMMA_SOURCE_FILE ("instruction-error.galgas", 271))  COMMA_SOURCE_FILE ("instruction-error.galgas", 271)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_12138 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_9285.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11254_exp = extractPtr_12138->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11268_errorLocation = extractPtr_12138->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11528 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_11254_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11528, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 273)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_11528.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_11528.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_11528.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_11528.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_11268_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_11528.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 285)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 285)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 285)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11528  COMMA_SOURCE_FILE ("instruction-error.galgas", 288))  COMMA_SOURCE_FILE ("instruction-error.galgas", 288)) ;
      }
      break ;
    }
    enumerator_9285.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 294)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 294)).add_operation (outArgument_outMessageExpression.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 294)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 294)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 293)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_errorInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionAST * object = (const cPtr_errorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_13218 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_13245 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_13277 ;
  {
  const GALGAS_errorInstructionAST temp_0 = object ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  const GALGAS_errorInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.getter_mLocationExpression (HERE), temp_1.getter_mMessageExpression (HERE), temp_2.getter_mFixitListAST (HERE), temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_13218, var_messageExpression_13245, var_fixitListForGeneration_13277, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 309)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_13342 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 324)) ;
  const GALGAS_errorInstructionAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_13373 (temp_4.getter_mBuiltVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_13373.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13473 ;
    {
    GALGAS_unifiedTypeMap_2D_entry joker_13456 ; // Joker input parameter
    GALGAS_string joker_13475 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (enumerator_13373.current_mValue (HERE), joker_13456, var_varCppName_13473, joker_13475, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 326)) ;
    }
    var_builtVariableCppNameList_13342.addAssign_operation (var_varCppName_13473  COMMA_SOURCE_FILE ("instruction-error.galgas", 327)) ;
    enumerator_13373.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.getter_mInstructionLocation (HERE), var_locationExpression_13218, var_messageExpression_13245, var_builtVariableCppNameList_13342, var_fixitListForGeneration_13277  COMMA_SOURCE_FILE ("instruction-error.galgas", 330))  COMMA_SOURCE_FILE ("instruction-error.galgas", 330)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_errorInstructionAST.mSlotID,
                                                   extensionMethod_errorInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_errorInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_errorInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_errorInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionForGeneration * object = (const cPtr_errorInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName_16920 ;
  const GALGAS_errorInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16920, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 409)) ;
  GALGAS_string var_messageCppVarName_17127 ;
  const GALGAS_errorInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mErrorExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_17127, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 417)) ;
  GALGAS_string var_fixItArrayCppName_17380 ;
  const GALGAS_errorInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.getter_mFixitListForGeneration (HERE), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_17380, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 425)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 434)) COMMA_SOURCE_FILE ("instruction-error.galgas", 434)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 435)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 435)).add_operation (var_receiverCppVarName_16920, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 435)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 436)).add_operation (var_messageCppVarName_17127, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 436)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 437)).add_operation (var_fixItArrayCppName_17380, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 437)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 438)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 438)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 435)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = object ;
  cEnumerator_stringlist enumerator_17743 (temp_4.getter_mBuiltVariableCppNameList (HERE), kENUMERATION_UP) ;
  while (enumerator_17743.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17743.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 442)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17743.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 443)) ;
    enumerator_17743.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_errorInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_errorInstructionForGeneration.mSlotID,
                                            extensionMethod_errorInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_errorInstructionForGeneration_generateInstruction (defineExtensionMethod_errorInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  const GALGAS_forInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mWhileExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 293)) ;
  const GALGAS_forInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_mBeforeInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 294)) ;
  const GALGAS_forInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_mBetweenInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 295)) ;
  const GALGAS_forInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.getter_mDoInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 296)) ;
  const GALGAS_forInstructionAST temp_4 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.getter_mAfterInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 297)) ;
  const GALGAS_forInstructionAST temp_5 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_10387 (temp_5.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_10387.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_10387.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 299)) ;
    enumerator_10387.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                          extensionMethod_forInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_forInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 310)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 316)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionCstListInExpAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 322)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                               extensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext (defineExtensionMethod_enumeratedCollectionVarInExpAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                        GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 353)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 350)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfAnonymousEnumeration (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 359)).getter_string (SOURCE_FILE ("instruction-for.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 359)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_13189 = outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 360)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_13189.getter_length (SOURCE_FILE ("instruction-for.galgas", 361)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfAnonymousEnumeration (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 362)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 362)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 362)) ;
    }
  }
  GALGAS_string var_suggestion_13489 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_13535 (var_enumerationDescriptorList_13189, kENUMERATION_UP) ;
  while (enumerator_13535.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = object ;
    var_suggestion_13489.plusAssign_operation(temp_5.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_13535.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 368)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = object ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_13535.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_6.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_13535.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 371)), temp_7.getter_mEndOfAnonymousEnumeration (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 371)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 373)).add_operation (enumerator_13535.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 373)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 373))  COMMA_SOURCE_FILE ("instruction-for.galgas", 369)) ;
    if (enumerator_13535.hasNextObject ()) {
      var_suggestion_13489.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 375)) ;
    }
    enumerator_13535.gotoNextObject () ;
  }
  var_suggestion_13489.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 377)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.getter_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_13489) ;
      inCompiler->emitSemanticError (temp_9.getter_mEndOfAnonymousEnumeration (HERE), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 379)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionImplicitVarInExpAST_analyzeEnumeration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                    GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 399)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 396)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)).getter_string (SOURCE_FILE ("instruction-for.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_15154 = outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 407)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 408)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 408)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 408)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = object ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = object ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 411)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (temp_7.getter_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("instruction-for.galgas", 411)) COMMA_SOURCE_FILE ("instruction-for.galgas", 411)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_15533 = outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 412)) ;
        cEnumerator_enumerationDescriptorList enumerator_15641 (var_currentTypedAttributeList_15533, kENUMERATION_UP) ;
        while (enumerator_15641.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = object ;
          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_15641.current_mEnumerationName (HERE), temp_8.getter_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 415)), enumerator_15641.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 417)).add_operation (enumerator_15641.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 417)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 417)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (enumerator_15641.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 414)) ;
          }
          enumerator_15641.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = object ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = object ;
        test_9 = temp_10.getter_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("instruction-for.galgas", 421)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 421)).objectCompare (var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 421)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 421)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 425)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)).add_operation (var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 424)).getter_string (SOURCE_FILE ("instruction-for.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 423)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 424)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 424)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 425)).add_operation (temp_15.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 427)).getter_string (SOURCE_FILE ("instruction-for.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 426)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 422)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = object ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = object ;
          test_17 = temp_18.getter_mEndsWithEllipsis (HERE).operator_and (GALGAS_bool (kIsStrictSup, temp_19.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 428)).objectCompare (var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 428)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 428)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = object ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 432)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 430)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 430)).add_operation (var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 431)).getter_string (SOURCE_FILE ("instruction-for.galgas", 431)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 430)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 431)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 431)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 432)).add_operation (temp_23.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 434)).getter_string (SOURCE_FILE ("instruction-for.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 433)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 429)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.getter_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = object ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 436)).objectCompare (temp_27.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 436)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = object ;
              GALGAS_uint var_missingArgumentCount_17185 = var_enumerationDescriptorList_15154.getter_length (SOURCE_FILE ("instruction-for.galgas", 437)).substract_operation (temp_28.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 437)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = object ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_17185.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_17185.getter_string (SOURCE_FILE ("instruction-for.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 440)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 440)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 438)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = object ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_17583 (temp_33.getter_mElementList (HERE), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_17640 (var_enumerationDescriptorList_15154, kENUMERATION_UP) ;
          while (enumerator_17583.hasCurrentObject () && enumerator_17640.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_17583.current_mOptionalConstantName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_17583.current_mOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMap_2D_entry var_foundType_17823 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_17583.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 445)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_17823.objectCompare (enumerator_17640.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_17583.current_mOptionalTypeName (HERE).getter_location (HERE), GALGAS_string ("incorrect '@").add_operation (var_foundType_17823.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)).add_operation (enumerator_17640.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 450)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 450)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_17640.current_mEnumeratedType (HERE), enumerator_17583.current_mOptionalConstantName (HERE), enumerator_17583.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 457)).add_operation (enumerator_17640.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 457)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 457))  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
              }
            }
            enumerator_17583.gotoNextObject () ;
            enumerator_17640.gotoNextObject () ;
          }
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionCstListInExpAST_analyzeEnumeration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (const cPtr_abstractEnumeratedCollectionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 478)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 475)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 484)).getter_string (SOURCE_FILE ("instruction-for.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 484)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedElementType_19391 = outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 485)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_19391.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 486)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 487)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 487)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 487)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = object ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.getter_mEnumerationVariable (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = object ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_19391, temp_7.getter_mEnumerationVariable (HERE), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 489))  COMMA_SOURCE_FILE ("instruction-for.galgas", 489)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.getter_mEnumerationOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_explicitType_19932 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_10.getter_mEnumerationOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 493)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_19391.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 497)).objectCompare (var_explicitType_19932.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 497)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.getter_mEnumerationOptionalTypeName (HERE).getter_location (HERE), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_19391.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
        }
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (void) {
  enterExtensionMethod_analyzeEnumeration (kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST.mSlotID,
                                           extensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration (defineExtensionMethod_enumeratedCollectionVarInExpAST_analyzeEnumeration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionAST * object = (const cPtr_forInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionAST) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 514)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 517)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_20954 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  const GALGAS_forInstructionAST temp_1 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 523)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 524)), temp_0.getter_mBeforeInstructionList (HERE), temp_1.getter_mEndOf_5F_before_5F_branch (HERE), ioArgument_ioVariableMap, var_before_5F_instructionList_20954, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 519)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_2.getter_mEndOf_5F_before_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 530)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 532)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_21453 ;
  {
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 538)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 539)), temp_3.getter_mBetweenInstructionList (HERE), temp_4.getter_mEndOf_5F_between_5F_branch (HERE), ioArgument_ioVariableMap, var_between_5F_instructionList_21453, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 534)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_5.getter_mEndOf_5F_between_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 545)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 547)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_22222 ;
  {
  const GALGAS_forInstructionAST temp_6 = object ;
  const GALGAS_forInstructionAST temp_7 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 552)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 553)), temp_6.getter_mAfterInstructionList (HERE), temp_7.getter_mEndOf_5F_after_5F_branch (HERE), ioArgument_ioVariableMap, var_after_5F_instructionList_22222, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 548)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_8.getter_mEndOf_5F_after_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 559)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_22372 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 561)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_22448 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 562)) ;
  const GALGAS_forInstructionAST temp_9 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_22493 (temp_9.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_22493.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_22760 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_22826 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_22493.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_22372, var_enumeratorCppName_22760, var_enumerationExpression_22826, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 564)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_22493.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_22448.addAssign_operation (temp_10, var_enumerationExpression_22826, var_enumeratorCppName_22760  COMMA_SOURCE_FILE ("instruction-for.galgas", 574)) ;
    enumerator_22493.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 580)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 581)) ;
  }
  cEnumerator_localConstantList enumerator_23150 (var_localConstantListForDoBranch_22372, kENUMERATION_UP) ;
  while (enumerator_23150.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_23150.current (HERE).getter_mName (HERE), enumerator_23150.current (HERE).getter_mType (HERE), enumerator_23150.current (HERE).getter_mCppName (HERE), enumerator_23150.current (HERE).getter_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 584)) ;
    }
    enumerator_23150.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_23593 ;
  const GALGAS_forInstructionAST temp_12 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_12.getter_mWhileExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 595)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_23593, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 592)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_23771 ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.getter_mEndOf_5F_while_5F_expression (HERE), var_uncheckedWhileExpression_23593, var_whileExpression_23771, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 600)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_14.getter_mEndOf_5F_while_5F_expression (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 607)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_15.getter_mEndOf_5F_while_5F_expression (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 608)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)) ;
  }
  GALGAS_string var_indexCppName_23998 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = object ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mIndexVariableName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = object ;
      var_indexCppName_23998 = GALGAS_string ("index_").add_operation (temp_18.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 614)).getter_string (SOURCE_FILE ("instruction-for.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 614)) ;
      const GALGAS_forInstructionAST temp_19 = object ;
      var_localConstantListForDoBranch_22372.addAssign_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), temp_19.getter_mIndexVariableName (HERE), GALGAS_bool (false), var_indexCppName_23998  COMMA_SOURCE_FILE ("instruction-for.galgas", 615)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_24426 ;
  {
  const GALGAS_forInstructionAST temp_20 = object ;
  const GALGAS_forInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantListForDoBranch_22372, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 628)), temp_20.getter_mDoInstructionList (HERE), temp_21.getter_mEndOf_5F_do_5F_branch (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_24426, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 623)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_23.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_24.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)) ;
  }
  const GALGAS_forInstructionAST temp_25 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.getter_mInstructionLocation (HERE), var_enumerationList_22448, var_indexCppName_23998, var_whileExpression_23771, var_before_5F_instructionList_20954, var_between_5F_instructionList_21453, var_do_5F_instructionList_24426, var_after_5F_instructionList_22222  COMMA_SOURCE_FILE ("instruction-for.galgas", 640))  COMMA_SOURCE_FILE ("instruction-for.galgas", 640)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_forInstructionAST.mSlotID,
                                                   extensionMethod_forInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_forInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_forInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_forInstructionForGeneration * object = (const cPtr_forInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_forInstructionForGeneration) ;
  GALGAS_stringlist var_enumerationVarCppNameList_27074 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 686)) ;
  const GALGAS_forInstructionForGeneration temp_0 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27112 (temp_0.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_27112.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_27177 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_27112.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_27177, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)) ;
    var_enumerationVarCppNameList_27074.addAssign_operation (var_enumerationVar_27177  COMMA_SOURCE_FILE ("instruction-for.galgas", 696)) ;
    enumerator_27112.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27487 (temp_1.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_27527 (var_enumerationVarCppNameList_27074, kENUMERATION_UP) ;
  while (enumerator_27487.hasCurrentObject () && enumerator_27527.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (enumerator_27487.current_mEnumeratedExpression (HERE).getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)).add_operation (enumerator_27487.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 700)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 700)).add_operation (enumerator_27527.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 700)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 700)).add_operation (enumerator_27487.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 701)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 701)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
    enumerator_27487.gotoNextObject () ;
    enumerator_27527.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = object ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_27839 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mWhileExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = object ;
    const GALGAS_forInstructionForGeneration temp_5 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mBeforeInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 706)).add_operation (temp_5.getter_mAfterInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 706)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue_27839.operator_not (SOURCE_FILE ("instruction-for.galgas", 706)) COMMA_SOURCE_FILE ("instruction-for.galgas", 706)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = object ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 709)) ;
        }
      }
      GALGAS_string var_boolVarCppName_28274 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 711)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 711)) ;
      ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 711)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_27839.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_28274, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 713)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_28497 ;
        const GALGAS_forInstructionForGeneration temp_10 = object ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_10.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_28497, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 716)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_28274, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 717)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 717)).add_operation (var_whileVar_28497, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 717)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 717)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 717)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 719)) ;
      const GALGAS_forInstructionForGeneration temp_11 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_28813 (temp_11.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_28813.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_28813.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 721)) ;
        enumerator_28813.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_28274.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 723)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 723)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.getter_mBeforeInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 724)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 732)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 733)) ;
      const GALGAS_forInstructionForGeneration temp_13 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_29318 (temp_13.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_29318.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29318.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 735)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 735)) ;
        enumerator_29318.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_28274.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 737)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.getter_mDoInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 739)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_29801 (temp_15.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_29801.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_29801.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 749)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 749)) ;
        enumerator_29801.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = object ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 752)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 752)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_27839.operator_not (SOURCE_FILE ("instruction-for.galgas", 755)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 756)) ;
          const GALGAS_forInstructionForGeneration temp_20 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30202 (temp_20.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_30202.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30202.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 758)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 758)) ;
            if (enumerator_30202.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 759)) ;
            }
            enumerator_30202.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 761)) ;
          GALGAS_string var_whileVar_30416 ;
          const GALGAS_forInstructionForGeneration temp_21 = object ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_21.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_30416, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 763)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_28274, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)).add_operation (var_whileVar_30416, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 770)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 771)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = object ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.getter_mBetweenInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 774)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 775)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 776)) ;
          const GALGAS_forInstructionForGeneration temp_24 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30951 (temp_24.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_30951.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30951.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 778)) ;
            enumerator_30951.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_28274.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 780)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 780)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = object ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.getter_mBetweenInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 781)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 789)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 790)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 793)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 795)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.getter_mAfterInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 796)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 804)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = object ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 807)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 807)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 809)) ;
    const GALGAS_forInstructionForGeneration temp_30 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_32148 (temp_30.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_32148.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_32148.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 811)) ;
      if (enumerator_32148.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 812)) ;
      }
      enumerator_32148.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = object ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.getter_mDoInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 816)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = object ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.getter_mBetweenInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 825)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 826)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 827)) ;
        const GALGAS_forInstructionForGeneration temp_34 = object ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_32796 (temp_34.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_32796.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_32796.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 829)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 829)) ;
          if (enumerator_32796.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 830)) ;
          }
          enumerator_32796.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 832)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = object ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.getter_mBetweenInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 833)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 841)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33384 (temp_36.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_33384.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_33384.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 846)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 846)) ;
      enumerator_33384.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = object ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 849)) COMMA_SOURCE_FILE ("instruction-for.galgas", 849)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = object ;
        const GALGAS_forInstructionForGeneration temp_40 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 850)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 850)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 850)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 850)).add_operation (extensionGetter_commaSourceFile (temp_40.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 851)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 850)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 853)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_forInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_forInstructionForGeneration.mSlotID,
                                            extensionMethod_forInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_forInstructionForGeneration_generateInstruction (defineExtensionMethod_forInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInFileInstructionAST * object = (const cPtr_grammarInFileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInFileInstructionAST) ;
  const GALGAS_grammarInFileInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 183)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_7784 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_7784.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7784.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
    enumerator_7784.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInFileInstructionAST.mSlotID,
                                                          extensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_grammarInFileInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  const GALGAS_grammarInStringInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 194)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_8240 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_8240.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_8240.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 196)) ;
    enumerator_8240.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                          extensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_grammarInStringInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInFileInstructionAST * object = (const cPtr_grammarInFileInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInFileInstructionAST) ;
  const GALGAS_grammarInFileInstructionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_8948 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 211)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8948 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 212)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_9265 ;
  GALGAS_bool var_hasTranslateFeature_9307 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  GALGAS_bool joker_9271 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_9265, joker_9271, var_hasTranslateFeature_9307, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  GALGAS_formalParameterSignature var_labelSignature_9429 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = object ;
  var_grammarLabelMap_9265.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_9429, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_9879 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = object ;
  const GALGAS_grammarInFileInstructionAST temp_4 = object ;
  const GALGAS_grammarInFileInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)), var_labelSignature_9429, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_9879, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_10175 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_10175, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 239)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_10175.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_10175.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 250)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 249)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_10644 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)) ;
  GALGAS_stringlist var_assignementList_10757 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_9307, var_syntaxDirectedTranslationResultVarName_10644, var_assignementList_10757, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 256)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = object ;
  const GALGAS_grammarInFileInstructionAST temp_13 = object ;
  const GALGAS_grammarInFileInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), temp_13.getter_mGrammarComponentName (HERE).getter_string (HERE), temp_14.getter_mLabelName (HERE).getter_string (HERE), var_sourceExpression_10175, var_actualParameterListForGeneration_9879, var_hasTranslateFeature_9307, var_assignementList_10757, var_syntaxDirectedTranslationResultVarName_10644  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInFileInstructionAST.mSlotID,
                                                   extensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInFileInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInFileInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInStringInstructionAST * object = (const cPtr_grammarInStringInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInStringInstructionAST) ;
  const GALGAS_grammarInStringInstructionAST temp_0 = object ;
  GALGAS_lstring var_grammarUsefulnessName_11847 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_11847 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_12171 ;
  GALGAS_bool var_hasTranslateFeature_12213 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  GALGAS_bool joker_12177 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_12171, joker_12177, var_hasTranslateFeature_12213, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 288)) ;
  GALGAS_formalParameterSignature var_labelSignature_12335 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = object ;
  var_grammarLabelMap_12171.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_12335, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 295)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12785 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = object ;
  const GALGAS_grammarInStringInstructionAST temp_4 = object ;
  const GALGAS_grammarInStringInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)), var_labelSignature_12335, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12785, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 300)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_13081 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 316)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_13081, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 313)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_13081.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_13081.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 324)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 323)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_13686 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_10.getter_mNameExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 331)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_13686, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 328)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_13686.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEndOfNameExpression (HERE), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_13081.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 339)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 338)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_14098 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  GALGAS_stringlist var_assignementList_14211 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 344)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_12213, var_syntaxDirectedTranslationResultVarName_14098, var_assignementList_14211, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = object ;
  const GALGAS_grammarInStringInstructionAST temp_17 = object ;
  const GALGAS_grammarInStringInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.getter_mInstructionLocation (HERE), temp_17.getter_mGrammarComponentName (HERE).getter_string (HERE), temp_18.getter_mLabelName (HERE).getter_string (HERE), var_sourceExpression_13081, var_nameExpression_13686, var_actualParameterListForGeneration_12785, var_hasTranslateFeature_12213, var_assignementList_14211, var_syntaxDirectedTranslationResultVarName_14098  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_grammarInStringInstructionAST.mSlotID,
                                                   extensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInStringInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_grammarInStringInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionWithSourceFileForGeneration * object = (const cPtr_grammarInstructionWithSourceFileForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionWithSourceFileForGeneration) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.getter_mGrammarName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 390))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 390)) ;
  GALGAS_string var_sourceVar_16364 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceFileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_16364, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
  GALGAS_stringlist var_parameterCppNameList_16417 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 400)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_16470 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_stringlist var_inputVariableList_16512 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 402)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_16554 (temp_2.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_16554.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16863 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_16554.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_16470, var_inputVariableList_16512, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16863, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 404)) ;
    var_parameterCppNameList_16417.addAssign_operation (var_parameterCppName_16863  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 413)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_16554.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_16863.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)) ;
      }
    }
    enumerator_16554.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = object ;
    test_4 = temp_5.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_6.getter_mSyntaxDirectedTranslationResultVarName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = object ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = object ;
    temp_10 = temp_12.getter_mSyntaxDirectedTranslationResultVarName (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (temp_8.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (var_sourceVar_16364, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)) ;
  cEnumerator_stringlist enumerator_17651 (var_parameterCppNameList_16417, kENUMERATION_UP) ;
  while (enumerator_17651.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_17651.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)) ;
    enumerator_17651.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = object ;
  cEnumerator_stringlist enumerator_17909 (temp_14.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_17909.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17909.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)) ;
    enumerator_17909.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionWithSourceExpressionForGeneration * object = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.getter_mGrammarName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 461))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 461)) ;
  GALGAS_string var_sourceVar_19558 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_19558, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 463)) ;
  GALGAS_string var_nameVar_19776 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mNameStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_19776, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
  GALGAS_stringlist var_parameterCppNameList_19829 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 479)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_19882 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 480)) ;
  GALGAS_stringlist var_inputVariableList_19924 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 481)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_19966 (temp_3.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_19966.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_20282 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_19966.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19882, var_inputVariableList_19924, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_20282, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)) ;
    var_parameterCppNameList_19829.addAssign_operation (var_parameterCppName_20282  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_19966.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_20282.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)) ;
      }
    }
    enumerator_19966.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = object ;
    test_5 = temp_6.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_7.getter_mSyntaxDirectedTranslationResultVarName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = object ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.getter_mGrammarHasTranslateFeature (HERE).boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = object ;
    temp_11 = temp_13.getter_mSyntaxDirectedTranslationResultVarName (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (temp_9.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (var_sourceVar_19558, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 504)).add_operation (var_nameVar_19776, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  cEnumerator_stringlist enumerator_21089 (var_parameterCppNameList_19829, kENUMERATION_UP) ;
  while (enumerator_21089.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_21089.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
    enumerator_21089.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = object ;
  cEnumerator_stringlist enumerator_21347 (temp_15.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_21347.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_21347.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
    enumerator_21347.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                          extensionMethod_incDecInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_incDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                          extensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfIncDecNoOVFInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionAST * object = (const cPtr_incDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6246 ;
  GALGAS_string var_targetVariableCppName_6282 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6332 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_6432 ;
        GALGAS_bool var_selfIsMutable_6460 ;
        GALGAS_bool var_mutableProperties_6502 ;
        const bool optionalResult6412 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_6432, var_selfIsMutable_6460, var_mutableProperties_6502) ;
        if (!optionalResult6412) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_6460.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 186)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 187)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_6651 = var_selfType_6432.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 189)) ;
          GALGAS_bool var_isConstant_6745 ;
          const GALGAS_incDecInstructionAST temp_6 = object ;
          GALGAS_bool joker_6728 ; // Joker input parameter
          var_propertyMap_6651.method_searchKey (temp_6.getter_mReceiverName (HERE), joker_6728, var_isConstant_6745, var_targetType_6246, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 190)) ;
          var_nameForCheckingFormalParameterUsing_6332 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_incDecInstructionAST temp_7 = object ;
          var_targetVariableCppName_6282 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 192)).add_operation (temp_7.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_6745.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_6502.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 197)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 198)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 201)) ;
        var_targetType_6246.drop () ; // Release error dropped variable
        var_targetVariableCppName_6282.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_6332.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_16.getter_mReceiverName (HERE), var_targetType_6246, var_targetVariableCppName_6282, var_nameForCheckingFormalParameterUsing_6332, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 223)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_8584 (temp_17.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8584.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8637 = var_targetType_6246.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 232)) ;
    GALGAS_bool var_isPublic_8714 ;
    GALGAS_bool var_isConstant_8730 ;
    var_propertyMap_8637.method_searchKey (enumerator_8584.current_mValue (HERE), var_isPublic_8714, var_isConstant_8730, var_targetType_6246, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 233)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_8714.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 234)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8584.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 235)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_8730.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_8584.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 238)) ;
      }
    }
    enumerator_8584.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_6246.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 242)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 242)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 242)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_incDecInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_6246.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 244)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 244)), fixItArray24  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 243)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_25 = object ;
  const GALGAS_incDecInstructionAST temp_26 = object ;
  const GALGAS_incDecInstructionAST temp_27 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_25.getter_mInstructionLocation (HERE), var_targetVariableCppName_6282, var_targetType_6246, temp_26.getter_mStructAttributeList (HERE), temp_27.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 247))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 247)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecInstructionAST.mSlotID,
                                                   extensionMethod_incDecInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                  const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionAST * object = (const cPtr_incDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_9982 ;
  GALGAS_string var_targetVariableCppName_10018 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = object ;
  GALGAS_string joker_10119 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_0.getter_mReceiverName (HERE), var_targetType_9982, var_targetVariableCppName_10018, joker_10119, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 268)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_10135 (temp_1.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_10135.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10188 = var_targetType_9982.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 270)) ;
    GALGAS_bool var_isPublic_10265 ;
    GALGAS_bool var_isConstant_10281 ;
    var_propertyMap_10188.method_searchKey (enumerator_10135.current_mValue (HERE), var_isPublic_10265, var_isConstant_10281, var_targetType_9982, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 271)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_10265.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 272)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10135.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 273)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isConstant_10281.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_10135.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 276)) ;
      }
    }
    enumerator_10135.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_targetType_9982.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 280)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 280)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_incDecNoOVFInstructionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_9982.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 282)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 282)), fixItArray8  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 281)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_9 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_10 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_9.getter_mInstructionLocation (HERE), var_targetVariableCppName_10018, var_targetType_9982, temp_10.getter_mStructAttributeList (HERE), temp_11.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 285))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 285)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_incDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecNoOVFInstructionAST * object = (const cPtr_selfIncDecNoOVFInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecNoOVFInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_11545 ;
    GALGAS_bool var_selfIsMutable_11573 ;
    GALGAS_bool var_unused_0_11595 ;
    const bool optionalResult11525 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_11545, var_selfIsMutable_11573, var_unused_0_11595) ;
    if (!optionalResult11525) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_11573.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 304)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 305)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_11545.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 308)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 308)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 308)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfType_11545.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 310)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 310)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 309)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = object ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.getter_mInstructionLocation (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), var_selfType_11545, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 317)), temp_8.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = object ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 321)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecNoOVFInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfIncDecInstructionAST * object = (const cPtr_selfIncDecInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfIncDecInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_13794 ;
    GALGAS_bool var_selfIsMutable_13822 ;
    GALGAS_bool var_unused_0_13844 ;
    const bool optionalResult13774 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_13794, var_selfIsMutable_13822, var_unused_0_13844) ;
    if (!optionalResult13774) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_13822.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 358)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 359)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_13794.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 362)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 362)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 362)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfType_13794.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 364)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 364)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 363)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = object ;
      const GALGAS_selfIncDecInstructionAST temp_8 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_7.getter_mInstructionLocation (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), var_selfType_13794, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 371)), temp_8.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = object ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 375)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfIncDecInstructionAST.mSlotID,
                                                   extensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfIncDecInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfIncDecInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionForGeneration * object = (const cPtr_incDecInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionForGeneration) ;
  {
  const GALGAS_incDecInstructionForGeneration temp_0 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 436)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_16987 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_17025 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_17025.hasCurrentObject ()) {
    var_receiverCppName_16987.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_17025.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 439)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 439)) ;
    enumerator_17025.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16987.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)).add_operation (extensionGetter_commaSourceFile (temp_4.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 445)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 445)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 444)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 446)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 446)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16987.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)).add_operation (extensionGetter_commaSourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 449)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 450)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 450)) ;
      }
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionForGeneration * object = (const cPtr_incDecNoOVFInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionForGeneration) ;
  {
  const GALGAS_incDecNoOVFInstructionForGeneration temp_0 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 464)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_18223 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_18261 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_18261.hasCurrentObject ()) {
    var_receiverCppName_18223.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_18261.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 467)) ;
    enumerator_18261.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_18223.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 472)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_18223.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 474)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration.mSlotID,
                                            extensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_incDecNoOVFInstructionForGeneration_generateInstruction (defineExtensionMethod_incDecNoOVFInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_7491 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_7491.hasCurrentObject ()) {
    switch (enumerator_7491.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_7623 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_7491.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_7563_exp = extractPtr_7623->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_7563_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_7791 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_7491.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_7646_exp = extractPtr_7791->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_7666_typeName = extractPtr_7791->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_7646_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
        {
        GALGAS_unifiedTypeMap_2D_entry joker_7789 ; // Joker input parameter
        GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, extractedValue_7666_typeName, joker_7789 COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_8233 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_7491.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_7839_receiverExpression = extractPtr_8233->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_7852_parameters = extractPtr_8233->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_7839_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_7950 (extractedValue_7852_parameters, kENUMERATION_UP) ;
        while (enumerator_7950.hasCurrentObject ()) {
          switch (enumerator_7950.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_8104 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_7950.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_8031_expression = extractPtr_8104->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_8031_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
            {
            }
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
            {
            }
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
            {
            }
            break ;
          }
          enumerator_7950.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7491.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 223)) ;
  const GALGAS_ifInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_m_5F_else_5F_instructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 224)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                          extensionMethod_ifInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_ifInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionAST * object = (const cPtr_ifInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionAST) ;
  GALGAS_ifTestListForGeneration var_testListForGeneration_9700 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 261)) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_9723 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_9723.hasCurrentObject ()) {
    switch (enumerator_9723.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_10342 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_9723.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9795_exp = extractPtr_10342->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_10022 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_9795_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 268)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_10022, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_10185 ;
        {
        const GALGAS_ifInstructionAST temp_1 = object ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.getter_mEndOf_5F_if_5F_instruction (HERE), var_analyzed_5F_if_5F_expression_10022, var_if_5F_expression_10185, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 273)) ;
        }
        var_testListForGeneration_9700.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_10185  COMMA_SOURCE_FILE ("instruction-if.galgas", 279))  COMMA_SOURCE_FILE ("instruction-if.galgas", 279)) ;
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 280)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 281)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_13808 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_9723.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_10372_constantName = extractPtr_13808->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_10376_exp = extractPtr_13808->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_10396_typeName = extractPtr_13808->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_10619 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_10376_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 286)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_10619, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
        GALGAS_unifiedTypeMap_2D_entry var_castType_10676 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 292)) ;
        GALGAS_unifiedTypeMap_2D_entry var_testType_10724 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 293)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_analyzedExpression_10619.getter_mResultType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 295)).getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 295)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_10396_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_10396_typeName.getter_location (HERE), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 297)) ;
                var_castType_10676.drop () ; // Release error dropped variable
                var_testType_10724.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_10676 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), extractedValue_10396_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
              var_testType_10724 = var_castType_10676 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_11259 = var_castType_10676 ;
              GALGAS_bool var_found_11296 = GALGAS_bool (kIsEqual, var_t_11259.objectCompare (var_analyzedExpression_10619.getter_mResultType (HERE))) ;
              if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 304)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 304)).isValid ()) {
                uint32_t variant_11349 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 304)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 304)).uintValue () ;
                bool loop_11349 = true ;
                while (loop_11349) {
                  loop_11349 = var_found_11296.operator_not (SOURCE_FILE ("instruction-if.galgas", 305)).operator_and (var_t_11259.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 305)).operator_not (SOURCE_FILE ("instruction-if.galgas", 305)) COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).isValid () ;
                  if (loop_11349) {
                    loop_11349 = var_found_11296.operator_not (SOURCE_FILE ("instruction-if.galgas", 305)).operator_and (var_t_11259.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 305)).operator_not (SOURCE_FILE ("instruction-if.galgas", 305)) COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).boolValue () ;
                  }
                  if (loop_11349 && (0 == variant_11349)) {
                    loop_11349 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 304)) ;
                  }
                  if (loop_11349) {
                    variant_11349 -- ;
                    var_t_11259 = var_t_11259.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 306)) ;
                    var_found_11296 = GALGAS_bool (kIsEqual, var_t_11259.objectCompare (var_analyzedExpression_10619.getter_mResultType (HERE))) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_11296.operator_not (SOURCE_FILE ("instruction-if.galgas", 309)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_10396_typeName.getter_location (HERE), GALGAS_string ("the '@").add_operation (extractedValue_10396_typeName.getter_string (SOURCE_FILE ("instruction-if.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)).add_operation (var_analyzedExpression_10619.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 310)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMap_2D_entry var_classType_11924 ;
            const bool optionalResult11894 = var_analyzedExpression_10619.getter_mResultType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 315)).optional_weakReferenceType (var_classType_11924) ;
            if (!optionalResult11894) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_10396_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_10676 = var_classType_11924 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_10676 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), extractedValue_10396_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
              }
              var_testType_10724 = var_castType_10676 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_12198 = var_castType_10676 ;
              GALGAS_bool var_found_12233 = GALGAS_bool (kIsEqual, var_t_12198.objectCompare (var_analyzedExpression_10619.getter_mResultType (HERE))) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_12233.boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_castType_10676.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 325)).method_weakReferenceType (var_testType_10724, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 325)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_12198.objectCompare (var_classType_11924)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_12233 = GALGAS_bool (true) ;
                  }
                }
              }
              if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 329)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 329)).isValid ()) {
                uint32_t variant_12455 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 329)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 329)).uintValue () ;
                bool loop_12455 = true ;
                while (loop_12455) {
                  loop_12455 = var_found_12233.operator_not (SOURCE_FILE ("instruction-if.galgas", 330)).operator_and (var_t_12198.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 330)).operator_not (SOURCE_FILE ("instruction-if.galgas", 330)) COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).isValid () ;
                  if (loop_12455) {
                    loop_12455 = var_found_12233.operator_not (SOURCE_FILE ("instruction-if.galgas", 330)).operator_and (var_t_12198.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 330)).operator_not (SOURCE_FILE ("instruction-if.galgas", 330)) COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).boolValue () ;
                  }
                  if (loop_12455 && (0 == variant_12455)) {
                    loop_12455 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 329)) ;
                  }
                  if (loop_12455) {
                    variant_12455 -- ;
                    var_t_12198 = var_t_12198.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 331)) ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_12198.objectCompare (var_analyzedExpression_10619.getter_mResultType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_12233 = GALGAS_bool (true) ;
                        var_castType_10676.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 334)).method_weakReferenceType (var_testType_10724, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 334)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_12198.objectCompare (var_classType_11924)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_12233 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_12233.operator_not (SOURCE_FILE ("instruction-if.galgas", 339)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_10396_typeName.getter_location (HERE), GALGAS_string ("the '@").add_operation (var_castType_10676.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)).add_operation (var_analyzedExpression_10619.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 340)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_10619.getter_mLocation (HERE), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (var_analyzedExpression_10619.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 344)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 344)) ;
          }
        }
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 347)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
        }
        GALGAS_string var_targetVariableCppName_13360 = GALGAS_string ("var_").add_operation (extractedValue_10372_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 349)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 349)).add_operation (extractedValue_10372_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 350)).getter_string (SOURCE_FILE ("instruction-if.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 350)) ;
        {
        ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_10372_constantName, var_castType_10676, var_targetVariableCppName_13360, var_targetVariableCppName_13360, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 351)) ;
        }
        var_testListForGeneration_9700.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_13360, var_analyzedExpression_10619, var_castType_10676, var_testType_10724  COMMA_SOURCE_FILE ("instruction-if.galgas", 357))  COMMA_SOURCE_FILE ("instruction-if.galgas", 357)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_14205 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_9723.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13856_receiverExpression = extractPtr_14205->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_13875_optionalMethodName = extractPtr_14205->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_13886_parameters = extractPtr_14205->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_13856_receiverExpression, extractedValue_13875_optionalMethodName, extractedValue_13886_parameters, var_testListForGeneration_9700, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
        }
      }
      break ;
    }
    enumerator_9723.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_14517 ;
  {
  const GALGAS_ifInstructionAST temp_16 = object ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 381)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 382)), temp_16.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioVariableMap, var_then_5F_instructionList_14517, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 377)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = object ;
  GALGAS_ifExpressionList var_expressions_14539 = temp_17.getter_mExpressions (HERE) ;
  {
  GALGAS_ifExpressionKind joker_14586 ; // Joker input parameter
  var_expressions_14539.setter_popLast (joker_14586, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 388)) ;
  }
  cEnumerator_ifExpressionList enumerator_14597 (var_expressions_14539, kENUMERATION_UP) ;
  while (enumerator_14597.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_18 = object ;
    ioArgument_ioVariableMap.setter_closeBranch (temp_18.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 390)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_19 = object ;
    ioArgument_ioVariableMap.setter_closeOverride (temp_19.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 391)) ;
    }
    enumerator_14597.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_20 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_20.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 393)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_15116 ;
  {
  const GALGAS_ifInstructionAST temp_21 = object ;
  const GALGAS_ifInstructionAST temp_22 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 399)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 400)), temp_21.getter_m_5F_else_5F_instructionList (HERE), temp_22.getter_mEndOf_5F_if_5F_instruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_15116, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 395)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_23 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_23.getter_mEndOf_5F_if_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 406)) ;
  }
  const GALGAS_ifInstructionAST temp_24 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_24.getter_mEndOf_5F_then_5F_branch (HERE), var_testListForGeneration_9700, var_then_5F_instructionList_14517, var_else_5F_instructionList_15116  COMMA_SOURCE_FILE ("instruction-if.galgas", 408))  COMMA_SOURCE_FILE ("instruction-if.galgas", 408)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_ifInstructionAST.mSlotID,
                                                   extensionMethod_ifInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_ifInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                        const GALGAS_semanticExpressionAST constinArgument_inReceiverExpression,
                                        const GALGAS_lstring constinArgument_inOptionalMethodName,
                                        const GALGAS_optionalMethodActualArgumentList constinArgument_inActualParameters,
                                        GALGAS_ifTestListForGeneration & ioArgument_ioTestListForGeneration,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_16411 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 434)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_16411, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 431)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 439)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 440)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_16563 = var_receiverExpression_16411.getter_mResultType (HERE) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_16639 = var_receiverType_16563.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 443)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_16758 ;
  const cMapElement_optionalMethodMap * objectArray_16765 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_16639.readAccessForWithInstruction (constinArgument_inOptionalMethodName.getter_string (HERE)) ;
  if (NULL != objectArray_16765) {
      macroValidSharedObject (objectArray_16765, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_16758 = objectArray_16765->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_16882 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_16967 (var_optionalMethodMap_16639, kENUMERATION_UP) ;
    while (enumerator_16967.hasCurrentObject ()) {
      var_s_16882.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_16967.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 451)) ;
      enumerator_16967.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.getter_location (HERE), var_s_16882, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 453)) ;
    var_optionalMethodSignature_16758.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 456)).objectCompare (var_optionalMethodSignature_16758.getter_length (SOURCE_FILE ("instruction-if.galgas", 456)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.getter_location (HERE), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (var_receiverType_16563.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (var_optionalMethodSignature_16758.getter_length (SOURCE_FILE ("instruction-if.galgas", 459)).getter_string (SOURCE_FILE ("instruction-if.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 460)).getter_string (SOURCE_FILE ("instruction-if.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 457)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_17590 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 462)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_17635 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_17698 (var_optionalMethodSignature_16758, kENUMERATION_UP) ;
    while (enumerator_17635.hasCurrentObject () && enumerator_17698.hasCurrentObject ()) {
      switch (enumerator_17635.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_18653 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_17635.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_17794_expression = extractPtr_18653->mAssociatedValue0 ;
          const GALGAS_location extractedValue_17803_location = extractPtr_18653->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_18066 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_17794_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_17698.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_18066, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 467)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17635.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 476)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_18155 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 476)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_18155) ;
              inCompiler->emitSemanticError (enumerator_17635.current_mSelector (HERE).getter_location (HERE), GALGAS_string ("the selector should be '").add_operation (var_s_18155, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 477)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_17698.current_mFormalArgumentType (HERE), var_exp_18066.getter_mResultType (HERE), extractedValue_17803_location, var_exp_18066, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 481)) ;
          }
          var_actualParameterList_17590.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_18066  COMMA_SOURCE_FILE ("instruction-if.galgas", 482))  COMMA_SOURCE_FILE ("instruction-if.galgas", 482)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_19828 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_17635.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_18704_actualTypeName = extractPtr_19828->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_18726_constantName = extractPtr_19828->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_18704_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 484)).objectCompare (extractedValue_18704_actualTypeName.getter_string (HERE))) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 487))) ;
              inCompiler->emitSemanticError (extractedValue_18704_actualTypeName.getter_location (HERE), GALGAS_string ("the '@").add_operation (enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 486)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 486)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 485)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_19025 = GALGAS_string ("var_").add_operation (extractedValue_18726_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 489)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 489)).add_operation (extractedValue_18726_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).getter_string (SOURCE_FILE ("instruction-if.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)) ;
          {
          ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_18726_constantName, enumerator_17698.current_mFormalArgumentType (HERE), var_targetVariableCppName_19025, var_targetVariableCppName_19025, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 491)) ;
          }
          var_actualParameterList_17590.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 497)), var_targetVariableCppName_19025  COMMA_SOURCE_FILE ("instruction-if.galgas", 497))  COMMA_SOURCE_FILE ("instruction-if.galgas", 497)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17635.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_19492 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_19492) ;
              inCompiler->emitSemanticError (enumerator_17635.current_mSelector (HERE).getter_location (HERE), GALGAS_string ("the selector should be '").add_operation (var_s_19492, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 500)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 500)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 500)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_21011 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_17635.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_19879_actualTypeName = extractPtr_21011->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_19901_variableName = extractPtr_21011->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_19879_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).objectCompare (extractedValue_19879_actualTypeName.getter_string (HERE))) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 508))) ;
              inCompiler->emitSemanticError (extractedValue_19879_actualTypeName.getter_location (HERE), GALGAS_string ("the '@").add_operation (enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 506)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_20201 = GALGAS_string ("var_").add_operation (extractedValue_19901_variableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 510)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 510)).add_operation (extractedValue_19901_variableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)).getter_string (SOURCE_FILE ("instruction-if.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)) ;
          {
          ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (extractedValue_19901_variableName, enumerator_17698.current_mFormalArgumentType (HERE), var_targetVariableCppName_20201, var_targetVariableCppName_20201, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)) ;
          }
          var_actualParameterList_17590.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 518)), var_targetVariableCppName_20201  COMMA_SOURCE_FILE ("instruction-if.galgas", 518))  COMMA_SOURCE_FILE ("instruction-if.galgas", 518)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17635.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_20675 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_20675) ;
              inCompiler->emitSemanticError (enumerator_17635.current_mSelector (HERE).getter_location (HERE), GALGAS_string ("the selector should be '").add_operation (var_s_20675, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 521)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 521)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 521)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_21708 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_17635.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_21054_checkSelector = extractPtr_21708->mAssociatedValue0 ;
          const GALGAS_location extractedValue_21063_location = extractPtr_21708->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_21067_idx = extractPtr_21708->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_21104 = GALGAS_string ("var_unused_").add_operation (extractedValue_21067_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 526)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 526)).add_operation (extractedValue_21063_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 526)).getter_string (SOURCE_FILE ("instruction-if.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 526)) ;
          var_actualParameterList_17590.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_17698.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 527)), var_targetVariableCppName_21104  COMMA_SOURCE_FILE ("instruction-if.galgas", 527))  COMMA_SOURCE_FILE ("instruction-if.galgas", 527)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_21054_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17635.current_mSelector (HERE).getter_string (HERE))) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_17698.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 529)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_21372 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 529)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_21372) ;
              inCompiler->emitSemanticError (enumerator_17635.current_mSelector (HERE).getter_location (HERE), GALGAS_string ("the selector should be '").add_operation (var_s_21372, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 530)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 530)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 530)) ;
            }
          }
        }
        break ;
      }
      enumerator_17635.gotoNextObject () ;
      enumerator_17698.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_16411, constinArgument_inOptionalMethodName, var_actualParameterList_17590  COMMA_SOURCE_FILE ("instruction-if.galgas", 536))  COMMA_SOURCE_FILE ("instruction-if.galgas", 536)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_ifInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionForGeneration * object = (const cPtr_ifInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionForGeneration) ;
  GALGAS_string var_testVar_24803 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 616)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 617)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_24803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 618)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 618)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = object ;
  cEnumerator_ifTestListForGeneration enumerator_24967 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_24967.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_24803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 620)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)) ;
    }
    switch (enumerator_24967.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_25404 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_24967.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_25141_exp = extractPtr_25404->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_25321 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_25141_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_25321, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 624)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_24803.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 631)).add_operation (var_cppVarName_25321, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 631)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 631)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 631)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_26133 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_24967.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_25438_targetVarCppName = extractPtr_26133->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_25442_exp = extractPtr_26133->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_25453_targetType = extractPtr_26133->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_25462_testType = extractPtr_26133->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_25490 = extractedValue_25453_targetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 633)) ;
        GALGAS_string var_testTypeName_25553 = extractedValue_25462_testType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 634)) ;
        GALGAS_string var_cppVarName_25768 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_25442_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_25768, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_25490, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 642)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 642)).add_operation (extractedValue_25438_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 642)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 642)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_25553, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 643)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 643)).add_operation (var_cppVarName_25768, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 643)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 643)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 643)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_25438_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 644)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 644)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_24803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 645)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 645)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 645)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 646)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_27864 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_24967.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_26181_receiverExpression = extractPtr_27864->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_26200_optionalMethodName = extractPtr_27864->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_26211_parameters = extractPtr_27864->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_26406 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_26181_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_26406, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)) ;
        GALGAS_stringlist var_actualParameterNameList_26460 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 655)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_26486 (extractedValue_26211_parameters, kENUMERATION_UP) ;
        while (enumerator_26486.hasCurrentObject ()) {
          switch (enumerator_26486.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_26849 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_26486.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_26567_expression = extractPtr_26849->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_26783 ;
              callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_26567_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_26783, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)) ;
              var_actualParameterNameList_26460.addAssign_operation (var_argumentCppName_26783  COMMA_SOURCE_FILE ("instruction-if.galgas", 666)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_27061 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_26486.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_26887_typeName = extractPtr_27061->mAssociatedValue0 ;
              const GALGAS_string extractedValue_26900_constantName = extractPtr_27061->mAssociatedValue1 ;
              var_actualParameterNameList_26460.addAssign_operation (extractedValue_26900_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 668)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_26887_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).add_operation (extractedValue_26900_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 669)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_27273 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_26486.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_27099_typeName = extractPtr_27273->mAssociatedValue0 ;
              const GALGAS_string extractedValue_27112_variableName = extractPtr_27273->mAssociatedValue1 ;
              var_actualParameterNameList_26460.addAssign_operation (extractedValue_27112_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 671)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_27099_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)).add_operation (extractedValue_27112_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 672)) ;
            }
            break ;
          }
          enumerator_26486.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_27320 = GALGAS_string ("optionalResult").add_operation (extractedValue_26200_optionalMethodName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)).getter_string (SOURCE_FILE ("instruction-if.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 675)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_27320, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)).add_operation (var_cppVarName_26406, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 676)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_26200_optionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 677)) ;
        cEnumerator_stringlist enumerator_27544 (var_actualParameterNameList_26460, kENUMERATION_UP) ;
        while (enumerator_27544.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27544.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 680)) ;
          if (enumerator_27544.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 682)) ;
          }
          enumerator_27544.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 684)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_27320, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 685)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 685)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_24803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 686)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 686)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 686)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 687)) ;
      }
      break ;
    }
    enumerator_24967.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_24803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 691)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 691)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 692)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 700)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = object ;
  cEnumerator_ifTestListForGeneration enumerator_28211 (temp_2.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_28211.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 702)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 703)) ;
    enumerator_28211.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_m_5F_else_5F_instructionList (HERE).getter_length (SOURCE_FILE ("instruction-if.galgas", 706)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_24803, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 707)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.getter_m_5F_else_5F_instructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 708)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 716)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_ifInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_ifInstructionForGeneration.mSlotID,
                                            extensionMethod_ifInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_ifInstructionForGeneration_generateInstruction (defineExtensionMethod_ifInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * /* inObject */,
                                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                          extensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_undefinedLocalConstantDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 93)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.getter_mOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_3984 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_2.getter_mOptionalTypeName (HERE), joker_3984 COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_3.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                             GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_undefinedLocalConstantDeclarationAST * object = (const cPtr_undefinedLocalConstantDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_undefinedLocalConstantDeclarationAST) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_4679 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mConstantTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_4812 = GALGAS_string ("var_").add_operation (temp_1.getter_mConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (temp_2.getter_mConstantName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).getter_string (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (temp_3.getter_mConstantName (HERE), var_targetType_4679, var_targetVariableCppName_4812, var_targetVariableCppName_4812, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_4679, var_targetVariableCppName_4812  COMMA_SOURCE_FILE ("instruction-let.galgas", 127))  COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST.mSlotID,
                                                   extensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localConstantDeclarationWithAssignmentAST * object = (const cPtr_localConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localConstantDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_5974 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5974, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_6033 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).getter_string (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertLocalConstant (temp_3.getter_mVariableName (HERE), var_expression_5974.getter_mResultType (HERE), var_targetVariableCppName_6033, var_targetVariableCppName_6033, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5974.getter_mResultType (HERE), GALGAS_bool (true), var_targetVariableCppName_6033, var_expression_5974  COMMA_SOURCE_FILE ("instruction-let.galgas", 154))  COMMA_SOURCE_FILE ("instruction-let.galgas", 154)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6974 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  GALGAS_semanticExpressionForGeneration var_expression_7347 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6974, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7347, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 172)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  GALGAS_string var_targetVariableCppName_7406 = GALGAS_string ("var_").add_operation (temp_2.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (temp_3.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = object ;
    test_4 = temp_5.getter_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = object ;
      ioArgument_ioVariableMap.setter_insertLocalConstant (temp_6.getter_mVariableName (HERE), var_targetType_6974, var_targetVariableCppName_7406, var_targetVariableCppName_7406, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 183)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = object ;
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_7.getter_mVariableName (HERE), var_targetType_6974, var_targetVariableCppName_7406, var_targetVariableCppName_7406, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6974, var_expression_7347.getter_mResultType (HERE), temp_8.getter_mInstructionLocation (HERE), var_expression_7347, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 188)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_6974, temp_9.getter_mIsConstant (HERE), var_targetVariableCppName_7406, var_expression_7347  COMMA_SOURCE_FILE ("instruction-let.galgas", 190))  COMMA_SOURCE_FILE ("instruction-let.galgas", 190)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_undefinedLocalConstantDeclarationForGeneration * object = (const cPtr_undefinedLocalConstantDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 225)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mTargetType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (temp_2.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 226)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration.mSlotID,
                                            extensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction (defineExtensionMethod_undefinedLocalConstantDeclarationForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * object = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)) ;
  GALGAS_string var_sourceVar_10318 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_10318, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.getter_mTargetType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (temp_3.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (var_sourceVar_10318, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 246)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration.mSlotID,
                                            extensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (defineExtensionMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_logInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  const GALGAS_logInstructionAST temp_0 = object ;
  cEnumerator_logListAST enumerator_2347 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_2347.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2347.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 67)) ;
    enumerator_2347.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                          extensionMethod_logInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_logInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_logInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionAST * object = (const cPtr_logInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionAST) ;
  const GALGAS_logInstructionAST temp_0 = object ;
  cEnumerator_logListAST enumerator_3040 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_3040.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_3146 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_3040.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3146, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_3040.current_mLogMessage (HERE), var_expression_3146  COMMA_SOURCE_FILE ("instruction-log.galgas", 93))  COMMA_SOURCE_FILE ("instruction-log.galgas", 93)) ;
    enumerator_3040.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_logInstructionAST.mSlotID,
                                                   extensionMethod_logInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_logInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_logInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionForGeneration * object = (const cPtr_logInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionForGeneration) ;
  GALGAS_string var_logVar_4524 ;
  const GALGAS_logInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mLogExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_4524, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 118)) ;
  const GALGAS_logInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_4524.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)).add_operation (temp_1.getter_mLogMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 125)) ;
  const GALGAS_logInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.getter_mLogMessage (HERE).getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_logInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_logInstructionForGeneration.mSlotID,
                                            extensionMethod_logInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_logInstructionForGeneration_generateInstruction (defineExtensionMethod_logInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  const GALGAS_loopInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mVariantExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 78)) ;
  const GALGAS_loopInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mLoopExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 79)) ;
  const GALGAS_loopInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_mFirstInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 80)) ;
  const GALGAS_loopInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.getter_mSecondInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 81)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                          extensionMethod_loopInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_loopInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionAST * object = (const cPtr_loopInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression_3919 ;
  const GALGAS_loopInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mVariantExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 99)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_3919, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 96)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variantExpression_3919.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfVariantExpression (HERE), GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (var_variantExpression_3919.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop.galgas", 106)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_4575 ;
  const GALGAS_loopInstructionAST temp_4 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.getter_mLoopExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 114)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_4575, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 111)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_loopExpression_4575.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_loopInstructionAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mEndOfLoopExpression (HERE), GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (var_loopExpression_4575.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), fixItArray7  COMMA_SOURCE_FILE ("instruction-loop.galgas", 121)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 125)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_5320 ;
  {
  const GALGAS_loopInstructionAST temp_8 = object ;
  const GALGAS_loopInstructionAST temp_9 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 132)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 133)), temp_8.getter_mFirstInstructions (HERE), temp_9.getter_mEndOfFirstInstructions (HERE), ioArgument_ioVariableMap, var_first_5F_instructionList_5320, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 128)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_5656 ;
  {
  const GALGAS_loopInstructionAST temp_10 = object ;
  const GALGAS_loopInstructionAST temp_11 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 146)), temp_10.getter_mSecondInstructions (HERE), temp_11.getter_mEndOfSecondInstructions (HERE), ioArgument_ioVariableMap, var_second_5F_instructionList_5656, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 141)) ;
  }
  {
  const GALGAS_loopInstructionAST temp_12 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_12.getter_mEndOfLoopInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 153)) ;
  }
  const GALGAS_loopInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (temp_13.getter_mInstructionLocation (HERE), var_variantExpression_3919, var_first_5F_instructionList_5320, var_loopExpression_4575, var_second_5F_instructionList_5656  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155))  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionAST.mSlotID,
                                                   extensionMethod_loopInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_loopInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionForGeneration * object = (const cPtr_loopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionForGeneration) ;
  GALGAS_string var_variantCppVarName_7462 ;
  const GALGAS_loopInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mVariantExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7462, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 185)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7462, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_1 = object ;
  GALGAS_string var_variantVar_7600 = GALGAS_string ("variant_").add_operation (temp_1.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (var_variantCppVarName_7462, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  const GALGAS_loopInstructionForGeneration temp_2 = object ;
  GALGAS_string var_loopVar_7784 = GALGAS_string ("loop_").add_operation (temp_2.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7784, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (var_loopVar_7784, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 199)) ;
  }
  {
  const GALGAS_loopInstructionForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.getter_mFirstInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 200)) ;
  }
  GALGAS_string var_loopExpressionVar_8239 ;
  const GALGAS_loopInstructionForGeneration temp_4 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_4.getter_mLoopExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8239, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7784.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopExpressionVar_8239, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopVar_7784, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7784, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (var_loopExpressionVar_8239, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7784, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_variantVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_loopVar_7784, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (extensionGetter_sourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 218)).add_operation (var_loopVar_7784, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7600, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)) ;
  {
  const GALGAS_loopInstructionForGeneration temp_6 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_6.getter_mSecondInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 221)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 230)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 231)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 232)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 233)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionForGeneration.mSlotID,
                                            extensionMethod_loopInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionForGeneration_generateInstruction (defineExtensionMethod_loopInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@matchInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_matchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  const GALGAS_matchInstructionAST temp_0 = object ;
  cEnumerator_semanticExpressionListAST enumerator_4974 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_4974.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4974.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 135)) ;
    enumerator_4974.gotoNextObject () ;
  }
  const GALGAS_matchInstructionAST temp_1 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_5119 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_5119.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5119.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 138)) ;
    enumerator_5119.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_matchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                          extensionMethod_matchInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_matchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_matchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@matchInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_matchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionAST * object = (const cPtr_matchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionAST) ;
  GALGAS_semanticExpressionListForGeneration var_expressionList_5837 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 152)) ;
  const GALGAS_matchInstructionAST temp_0 = object ;
  cEnumerator_semanticExpressionListAST enumerator_5922 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_5922.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_6246 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5922.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-match.galgas", 158)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_6246, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 155)) ;
    var_expressionList_5837.addAssign_operation (var_matchedExpression_6246  COMMA_SOURCE_FILE ("instruction-match.galgas", 163)) ;
    GALGAS_unifiedTypeMap_2D_entry var_type_6361 = var_matchedExpression_6246.getter_mResultType (HERE) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_type_6361.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 166)).operator_not (SOURCE_FILE ("instruction-match.galgas", 166)).operator_and (GALGAS_bool (kIsNotEqual, var_type_6361.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 166)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5922.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_6361.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), fixItArray2  COMMA_SOURCE_FILE ("instruction-match.galgas", 167)) ;
      }
    }
    enumerator_5922.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 172)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_6779 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 173)) ;
  const GALGAS_matchInstructionAST temp_3 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_6919 (temp_3.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_6919.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_7003 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 176)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_7057 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 177)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_expressionList_5837.getter_length (SOURCE_FILE ("instruction-match.galgas", 178)).objectCompare (enumerator_6919.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 178)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_semanticExpressionListForGeneration enumerator_7173 (var_expressionList_5837, kENUMERATION_UP) ;
        cEnumerator_matchEntryListAST enumerator_7256 (enumerator_6919.current_mMatchEntryList (HERE), kENUMERATION_UP) ;
        while (enumerator_7173.hasCurrentObject () && enumerator_7256.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_type_7296 = enumerator_7173.current_mExpression (HERE).getter_mResultType (HERE) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_type_7296.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 181)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 181)).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = enumerator_7256.current_mIsType (HERE).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_unifiedTypeMap_2D_entry var_namedType_7425 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 183)) ;
                  GALGAS_unifiedTypeMap_2D_entry var_t_7583 = var_type_7296 ;
                  GALGAS_bool var_found_7618 = GALGAS_bool (kIsEqual, var_t_7583.objectCompare (var_namedType_7425)) ;
                  if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).isValid ()) {
                    uint32_t variant_7652 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).uintValue () ;
                    bool loop_7652 = true ;
                    while (loop_7652) {
                      loop_7652 = var_found_7618.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7583.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).isValid () ;
                      if (loop_7652) {
                        loop_7652 = var_found_7618.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7583.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).boolValue () ;
                      }
                      if (loop_7652 && (0 == variant_7652)) {
                        loop_7652 = false ;
                        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 186)) ;
                      }
                      if (loop_7652) {
                        variant_7652 -- ;
                        var_t_7583 = var_t_7583.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 188)) ;
                        var_found_7618 = GALGAS_bool (kIsEqual, var_t_7583.objectCompare (var_namedType_7425)) ;
                      }
                    }
                  }
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_found_7618.operator_not (SOURCE_FILE ("instruction-match.galgas", 191)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (HERE), GALGAS_string ("the '@").add_operation (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (var_type_7296.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 192)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_9 = kBoolTrue ;
                    if (kBoolTrue == test_9) {
                      test_9 = GALGAS_bool (kIsStrictSup, enumerator_7256.current_mLocalConstantName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_9) {
                        var_localConstantList_7003.addAssign_operation (var_t_7583, enumerator_7256.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 195)) ;
                      }
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (HERE), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_7173.current_mExpression (HERE).getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), fixItArray10  COMMA_SOURCE_FILE ("instruction-match.galgas", 198)) ;
              }
              var_matchListForGeneration_7057.addAssign_operation (GALGAS_bool (true), enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (HERE), enumerator_7256.current_mLocalConstantName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("instruction-match.galgas", 201)) ;
            }
          }
          if (kBoolFalse == test_5) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_type_7296.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 202)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 202)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = enumerator_7256.current_mIsType (HERE).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (HERE), GALGAS_string ("a constant of the '@").add_operation (enumerator_7173.current_mExpression (HERE).getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 204)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = var_type_7296.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).getter_hasKey (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).operator_not (SOURCE_FILE ("instruction-match.galgas", 206)).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      TC_Array <C_FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (enumerator_7173.current_mExpression (HERE).getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 207)) ;
                    }
                  }
                }
                var_matchListForGeneration_7057.addAssign_operation (GALGAS_bool (false), enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (HERE), enumerator_7173.current_mExpression (HERE).getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 213))  COMMA_SOURCE_FILE ("instruction-match.galgas", 210)) ;
              }
            }
            if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_7256.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (HERE), GALGAS_string ("internal error"), fixItArray16  COMMA_SOURCE_FILE ("instruction-match.galgas", 215)) ;
            }
          }
          enumerator_7173.gotoNextObject () ;
          enumerator_7256.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_6919.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_5837.getter_length (SOURCE_FILE ("instruction-match.galgas", 220)).getter_string (SOURCE_FILE ("instruction-match.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (enumerator_6919.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 221)).getter_string (SOURCE_FILE ("instruction-match.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)), fixItArray17  COMMA_SOURCE_FILE ("instruction-match.galgas", 219)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_9703 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_7003, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 230)), enumerator_6919.current_mMatchBranchInstructionList (HERE), enumerator_6919.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_9703, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 225)) ;
    }
    var_matchInstructionBranchList_6779.addAssign_operation (var_matchListForGeneration_7057, var_instructionList_9703  COMMA_SOURCE_FILE ("instruction-match.galgas", 237)) ;
    enumerator_6919.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_10153 ;
  {
  const GALGAS_matchInstructionAST temp_18 = object ;
  const GALGAS_matchInstructionAST temp_19 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 245)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 246)), temp_18.getter_mElseInstructionList (HERE), temp_19.getter_mEndOf_5F_match_5F_instruction (HERE), ioArgument_ioVariableMap, var_elseInstructionList_10153, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 241)) ;
  }
  {
  const GALGAS_matchInstructionAST temp_20 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_20.getter_mEndOf_5F_match_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 253)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_5837, var_matchInstructionBranchList_6779, var_elseInstructionList_10153  COMMA_SOURCE_FILE ("instruction-match.galgas", 255))  COMMA_SOURCE_FILE ("instruction-match.galgas", 255)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_matchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_matchInstructionAST.mSlotID,
                                                   extensionMethod_matchInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_matchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_matchInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@matchInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_stringlist var_receiverList_12393 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 296)) ;
  const GALGAS_matchInstructionForGeneration temp_0 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12428 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_12428.hasCurrentObject ()) {
    GALGAS_string var_variable_12612 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_12428.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12612, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
    var_receiverList_12393.addAssign_operation (var_variable_12612  COMMA_SOURCE_FILE ("instruction-match.galgas", 299)) ;
    enumerator_12428.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 301)) ;
  cEnumerator_stringlist enumerator_12691 (var_receiverList_12393, kENUMERATION_UP) ;
  while (enumerator_12691.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12691.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 303)) ;
    if (enumerator_12691.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
    }
    enumerator_12691.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 306)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
  }
  const GALGAS_matchInstructionForGeneration temp_1 = object ;
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12929 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_12929.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 309)) ;
    cEnumerator_matchListForGeneration enumerator_13070 (enumerator_12929.current_mMatchListForGeneration (HERE), kENUMERATION_UP) ;
    cEnumerator_stringlist enumerator_13107 (var_receiverList_12393, kENUMERATION_UP) ;
    while (enumerator_13070.hasCurrentObject () && enumerator_13107.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = enumerator_13070.current_mIsType (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_13070.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (enumerator_13107.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 312)) ;
        }
      }
      if (kBoolFalse == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_13107.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (enumerator_13070.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (enumerator_13070.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 315)) ;
      }
      if (enumerator_13070.hasNextObject () && enumerator_13107.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 319)) ;
      }
      enumerator_13070.gotoNextObject () ;
      enumerator_13107.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 321)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12929.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 322)) ;
    }
    if (enumerator_12929.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 330)) ;
    }
    enumerator_12929.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 332)) ;
  {
  const GALGAS_matchInstructionForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.getter_mElseInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 333)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 341)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 342)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 343)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_matchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_matchInstructionForGeneration.mSlotID,
                                            extensionMethod_matchInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_matchInstructionForGeneration_generateInstruction (defineExtensionMethod_matchInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_messageInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  const GALGAS_messageInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 35)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                          extensionMethod_messageInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_messageInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_messageInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_messageInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionAST * object = (const cPtr_messageInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2256 ;
  const GALGAS_messageInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2256, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_2256.getter_mResultType (HERE).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("the expression has the '@").add_operation (var_expression_2256.getter_mResultType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 60)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2256, temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-message.galgas", 64))  COMMA_SOURCE_FILE ("instruction-message.galgas", 64)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_messageInstructionAST.mSlotID,
                                                   extensionMethod_messageInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_messageInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_messageInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_messageCppVarName_3964 ;
  const GALGAS_messageInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3964, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 88)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (var_messageCppVarName_3964, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) COMMA_SOURCE_FILE ("instruction-message.galgas", 98)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_messageInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_messageInstructionForGeneration.mSlotID,
                                            extensionMethod_messageInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_messageInstructionForGeneration_generateInstruction (defineExtensionMethod_messageInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  const GALGAS_methodCallInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 46)) ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_1948 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1948.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1948.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
    enumerator_1948.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                          extensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_methodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_methodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionAST * object = (const cPtr_methodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2905 ;
  const GALGAS_methodCallInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 67)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2905, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 64)) ;
  GALGAS_methodKind var_kind_3041 ;
  GALGAS_formalParameterSignature var_routineSignature_3067 ;
  GALGAS_bool var_hasCompilerArgument_3103 ;
  GALGAS_string var_errorMessage_3132 ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  GALGAS_location joker_3073 ; // Joker input parameter
  GALGAS_methodQualifier joker_3109 ; // Joker input parameter
  var_receiverExpression_2905.getter_mResultType (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 73)).method_searchKey (temp_1.getter_mMethodName (HERE), var_kind_3041, var_routineSignature_3067, joker_3073, var_hasCompilerArgument_3103, joker_3109, var_errorMessage_3132, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 73)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_3132.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mMethodName (HERE).getter_location (HERE), var_errorMessage_3132, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 83)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3659 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = object ;
  const GALGAS_methodCallInstructionAST temp_6 = object ;
  const GALGAS_methodCallInstructionAST temp_7 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.getter_mMethodName (HERE), GALGAS_string ("'").add_operation (temp_6.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 91)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 91)), var_routineSignature_3067, temp_7.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3659, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_3725 = var_receiverExpression_2905.getter_mResultType (HERE) ;
  GALGAS_bool var_searching_3774 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 101)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 102)).isValid ()) {
        uint32_t variant_3823 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 102)).uintValue () ;
        bool loop_3823 = true ;
        while (loop_3823) {
          loop_3823 = var_searching_3774.isValid () ;
          if (loop_3823) {
            loop_3823 = var_searching_3774.boolValue () ;
          }
          if (loop_3823 && (0 == variant_3823)) {
            loop_3823 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
          }
          if (loop_3823) {
            variant_3823 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = var_baseType_3725.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 103)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 103)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_3774 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = object ;
                test_10 = var_baseType_3725.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106)).getter_hasKey (temp_11.getter_mMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_3725 = var_baseType_3725.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 107)) ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_3774 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = object ;
  const GALGAS_methodCallInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), var_receiverExpression_2905.getter_mResultType (HERE), var_receiverExpression_2905, temp_13.getter_mMethodName (HERE).getter_string (HERE), var_kind_3041, var_actualParameterListForGeneration_3659, var_hasCompilerArgument_3103, var_baseType_3725  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 115))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 115)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_methodCallInstructionAST.mSlotID,
                                                   extensionMethod_methodCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_methodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_methodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_receiverCppName_5789 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5789 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 152)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5882 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5934 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
  GALGAS_stringlist var_inputVariableList_5975 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 156)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_6016 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_6016.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_6082 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_6016.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5934, var_inputVariableList_5975, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_6082, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 159)) ;
    var_parameterCppNameList_5882.addAssign_operation (var_parameterCppName_6082  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)) ;
    enumerator_6016.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = object ;
  switch (temp_2.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = object ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_3.getter_mMethodBaseType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (temp_4.getter_mMethodName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = object ;
        test_5 = temp_6.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 166)).getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 166)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = object ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)).add_operation (temp_8.getter_mReceiverExpression (HERE).getter_mResultType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (var_receiverCppName_5789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 169)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)).add_operation (var_receiverCppName_5789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5789.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175)).add_operation (temp_10.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_7188 (var_parameterCppNameList_5882, kENUMERATION_UP) ;
  while (enumerator_7188.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7188.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
    if (enumerator_7188.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 179)) ;
    }
    enumerator_7188.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5882.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 181)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = object ;
        test_12 = temp_13.getter_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 184)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 184)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_11) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_methodCallInstructionForGeneration temp_15 = object ;
      test_14 = temp_15.getter_mHasCompilerArgument (HERE).boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 188)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 188)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 190)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_methodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_methodCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_methodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_methodCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  const GALGAS_procCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_1694 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1694.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1694.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 40)) ;
    enumerator_1694.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                          extensionMethod_procCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_procCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procCallInstructionAST * object = (const cPtr_procCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_procCallInstructionAST) ;
  const GALGAS_procCallInstructionAST temp_0 = object ;
  GALGAS_lstring var_usefulnessName_2391 = function_procedureNameForUsefulEntitiesGraph (temp_0.getter_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 55)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2391 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 56)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_2696 ;
  GALGAS_bool var_isInternal_2723 ;
  const GALGAS_procCallInstructionAST temp_1 = object ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).method_searchKey (temp_1.getter_mRoutineName (HERE), var_routineSignature_2696, var_isInternal_2723, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 58)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_2723.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_2801 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).getter_locationForKey (temp_3.getter_mRoutineName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mRoutineName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)).objectCompare (var_procDeclarationLocation_2801.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mRoutineName (HERE).getter_location (HERE), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2801.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3532 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = object ;
  const GALGAS_procCallInstructionAST temp_9 = object ;
  const GALGAS_procCallInstructionAST temp_10 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_8.getter_mRoutineName (HERE), GALGAS_string ("'").add_operation (temp_9.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)), var_routineSignature_2696, temp_10.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3532, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 71)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.getter_mRoutineName (HERE), var_actualParameterListForGeneration_3532  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_procCallInstructionAST.mSlotID,
                                                   extensionMethod_procCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_procCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_procCallInstructionForGeneration temp_0 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.getter_mRoutineName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 107))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 107)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 108)) ;
  GALGAS_stringlist var_parameterCppNameList_4696 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4748 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 111)) ;
  GALGAS_stringlist var_inputVariableList_4789 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 112)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_4818 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_4818.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5103 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4818.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4748, var_inputVariableList_4789, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5103, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 114)) ;
    var_parameterCppNameList_4696.addAssign_operation (var_parameterCppName_5103  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)) ;
    enumerator_4818.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.getter_mRoutineName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
  cEnumerator_stringlist enumerator_5294 (var_parameterCppNameList_4696, kENUMERATION_UP) ;
  while (enumerator_5294.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5294.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)) ;
    enumerator_5294.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mRoutineName (HERE).getter_location (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_procCallInstructionForGeneration.mSlotID,
                                            extensionMethod_procCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procCallInstructionForGeneration_generateInstruction (defineExtensionMethod_procCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  const GALGAS_selfAssignmentInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 40)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                          extensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfAssignmentInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfAssignmentInstructionAST * object = (const cPtr_selfAssignmentInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfAssignmentInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_2323 ;
    GALGAS_bool var_selfIsMutable_2351 ;
    GALGAS_bool var_unused_0_2373 ;
    const bool optionalResult2303 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_2323, var_selfIsMutable_2351, var_unused_0_2373) ;
    if (!optionalResult2303) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_2351.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 55)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 56)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_2776 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_2323, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2776, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 59)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_2323, var_expression_2776.getter_mResultType (HERE), temp_5.getter_mInstructionLocation (HERE), var_expression_2776, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 68)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_selfType_2323, constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 74)).getter_string (HERE), var_expression_2776, temp_6.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 70))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 70)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = object ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 79)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfAssignmentInstructionAST.mSlotID,
                                                   extensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfAssignmentInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 113)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 119)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  const GALGAS_selfMulEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfMulEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  const GALGAS_selfDivEqualExpressionInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 131)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                          extensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfDivEqualExpressionInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  const GALGAS_selfPlusEqualElementsInstructionAST temp_0 = object ;
  extensionMethod_enterInSemanticContext (temp_0.getter_mExpressions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                          extensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfPlusEqualElementsInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualElementsInstructionAST * object = (const cPtr_selfPlusEqualElementsInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualElementsInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_6476 ;
    GALGAS_bool var_selfIsMutable_6510 ;
    GALGAS_bool var_unused_0_6538 ;
    const bool optionalResult6450 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_6476, var_selfIsMutable_6510, var_unused_0_6538) ;
    if (!optionalResult6450) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_6510.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 157)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 158)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_7057 = var_selfType_6476.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_7057.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfType_6476.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 171)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 171)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 170)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = object ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 173)).objectCompare (var_addAssignOperatorArguments_7057.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 173)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = object ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = object ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfType_6476.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 175)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 175)).add_operation (var_addAssignOperatorArguments_7057.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 176)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 175)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 176)).add_operation (temp_10.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 177)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 176)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 177)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 174)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7790 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 179)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = object ;
          cEnumerator_actualOutputExpressionList enumerator_7896 (temp_12.getter_mExpressions (HERE), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_7958 (var_addAssignOperatorArguments_7057, kENUMERATION_UP) ;
          while (enumerator_7896.hasCurrentObject () && enumerator_7958.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_8269 ;
            callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7896.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7958.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_8269, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 181)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_7958.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_7896.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_7958.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_7958.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 190)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_8360 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 190)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_8360) ;
                inCompiler->emitSemanticError (enumerator_7896.current_mActualSelector (HERE).getter_location (HERE), GALGAS_string ("the selector should be '").add_operation (var_s_8360, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 191)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 191)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 191)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7958.current_mFormalArgumentType (HERE), var_expression_8269.getter_mResultType (HERE), enumerator_7896.current_mEndOfExpressionLocation (HERE), var_expression_8269, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 193)) ;
            }
            var_effectiveParameterList_7790.addAssign_operation (var_expression_8269  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 194)) ;
            enumerator_7896.gotoNextObject () ;
            enumerator_7958.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = object ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), var_selfType_6476, GALGAS_string::makeEmptyString (), temp_17.getter_mInstructionLocation (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 202)), var_effectiveParameterList_7790  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 197))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 197)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = object ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 207)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualElementsInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfPlusEqualExpressionInstructionAST * object = (const cPtr_selfPlusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfPlusEqualExpressionInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_9769 ;
    GALGAS_bool var_selfIsMutable_9803 ;
    GALGAS_bool var_unused_0_9831 ;
    const bool optionalResult9743 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_9769, var_selfIsMutable_9803, var_unused_0_9831) ;
    if (!optionalResult9743) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_9803.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 226)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 227)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_9769.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 237)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 237)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 237)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfType_9769.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 239)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 239)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 238)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_10840 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_9769, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10840, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 242)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_9769, var_expression_10840.getter_mResultType (HERE), temp_8.getter_mInstructionLocation (HERE), var_expression_10840, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 251)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.getter_mInstructionLocation (HERE), var_selfType_9769, constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 258)), var_expression_10840, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 253))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 253)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = object ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfPlusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMinusEqualExpressionInstructionAST * object = (const cPtr_selfMinusEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMinusEqualExpressionInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_12018 ;
    GALGAS_bool var_selfIsMutable_12052 ;
    GALGAS_bool var_unused_0_12080 ;
    const bool optionalResult11992 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_12018, var_selfIsMutable_12052, var_unused_0_12080) ;
    if (!optionalResult11992) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12052.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 282)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 283)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_12018.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 293)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 293)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 293)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfType_12018.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 295)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 295)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_13090 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_12018, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13090, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 298)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_12018, var_expression_13090.getter_mResultType (HERE), temp_8.getter_mInstructionLocation (HERE), var_expression_13090, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.getter_mInstructionLocation (HERE), var_selfType_12018, constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 314)), var_expression_13090, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = object ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 319)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfMulEqualExpressionInstructionAST * object = (const cPtr_selfMulEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfMulEqualExpressionInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_14267 ;
    GALGAS_bool var_selfIsMutable_14301 ;
    GALGAS_bool var_unused_0_14329 ;
    const bool optionalResult14241 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_14267, var_selfIsMutable_14301, var_unused_0_14329) ;
    if (!optionalResult14241) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14301.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 338)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 339)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_14267.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 349)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 349)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfType_14267.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 351)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 351)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 350)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_15333 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_14267, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15333, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_14267, var_expression_15333.getter_mResultType (HERE), temp_8.getter_mInstructionLocation (HERE), var_expression_15333, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 363)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.getter_mInstructionLocation (HERE), var_selfType_14267, constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 370)), var_expression_15333, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 365))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 365)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = object ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 375)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMulEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfDivEqualExpressionInstructionAST * object = (const cPtr_selfDivEqualExpressionInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfDivEqualExpressionInstructionAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_16508 ;
    GALGAS_bool var_selfIsMutable_16542 ;
    GALGAS_bool var_unused_0_16570 ;
    const bool optionalResult16482 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_16508, var_selfIsMutable_16542, var_unused_0_16570) ;
    if (!optionalResult16482) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16542.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 394)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 395)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_16508.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 405)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 405)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfType_16508.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 407)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 407)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 406)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_17574 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_16508, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_17574, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 410)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_16508, var_expression_17574.getter_mResultType (HERE), temp_8.getter_mInstructionLocation (HERE), var_expression_17574, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 419)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.getter_mInstructionLocation (HERE), var_selfType_16508, constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 426)), var_expression_17574, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 421))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 421)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = object ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.getter_mInstructionLocation (HERE), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfDivEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  const GALGAS_setterCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_3557 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3557.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3557.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 105)) ;
    enumerator_3557.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                          extensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_setterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  const GALGAS_selfSetterCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_3923 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3923.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3923.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
    enumerator_3923.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                          extensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_selfSetterCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionAST * object = (const cPtr_setterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_4642 ;
  GALGAS_string var_targetVariableCppName_4678 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_4728 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_4836 ;
        GALGAS_bool var_selfIsMutable_4872 ;
        GALGAS_bool var_unused_0_4902 ;
        const bool optionalResult4808 = constinArgument_inAnalysisContext.getter_selfType (HERE).optional_available (var_selfType_4836, var_selfIsMutable_4872, var_unused_0_4902) ;
        if (!optionalResult4808) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_4872.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 138)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_setterCallInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.getter_mSetterName (HERE).getter_location (HERE), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 139)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_5042 = var_selfType_4836.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
          GALGAS_bool var_isConstant_5136 ;
          const GALGAS_setterCallInstructionAST temp_6 = object ;
          GALGAS_bool joker_5119 ; // Joker input parameter
          var_propertyMap_5042.method_searchKey (temp_6.getter_mReceiverName (HERE), joker_5119, var_isConstant_5136, var_receiverType_4642, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_isConstant_5136.boolEnum () ;
            if (kBoolTrue == test_7) {
              const GALGAS_setterCallInstructionAST temp_8 = object ;
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (temp_8.getter_mReceiverName (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray9  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 144)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_4728 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_setterCallInstructionAST temp_10 = object ;
          var_targetVariableCppName_4678 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)).add_operation (temp_10.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 148)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_11 = object ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.getter_mSetterName (HERE).getter_location (HERE), GALGAS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 150)) ;
        var_receiverType_4642.drop () ; // Release error dropped variable
        var_targetVariableCppName_4678.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_4728.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_13 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_13.getter_mReceiverName (HERE), var_receiverType_4642, var_targetVariableCppName_4678, var_nameForCheckingFormalParameterUsing_4728, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 172)) ;
    }
  }
  GALGAS_bool var_ok_6870 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_14 = object ;
  GALGAS_location var_errorLocation_6897 = temp_14.getter_mReceiverName (HERE).getter_location (HERE) ;
  const GALGAS_setterCallInstructionAST temp_15 = object ;
  cEnumerator_lstringlist enumerator_6941 (temp_15.getter_mReceiverStructProperties (HERE), kENUMERATION_UP) ;
  bool bool_16 = var_ok_6870.isValidAndTrue () ;
  if (enumerator_6941.hasCurrentObject () && bool_16) {
    while (enumerator_6941.hasCurrentObject () && bool_16) {
      var_ok_6870 = var_receiverType_4642.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 183)).getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 183)) ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_ok_6870.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 184)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_errorLocation_6897, GALGAS_string ("a structure is required for '.' access"), fixItArray18  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 185)) ;
        }
      }
      if (kBoolFalse == test_17) {
        GALGAS_propertyMap var_propertyMap_7160 = var_receiverType_4642.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 187)) ;
        GALGAS_bool var_isPublic_7241 ;
        GALGAS_bool var_isConstant_7257 ;
        var_propertyMap_7160.method_searchKey (enumerator_6941.current_mValue (HERE), var_isPublic_7241, var_isConstant_7257, var_receiverType_4642, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188)) ;
        var_errorLocation_6897 = enumerator_6941.current_mValue (HERE).getter_location (HERE) ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = var_isPublic_7241.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 190)).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_6941.current_mValue (HERE).getter_location (HERE), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray20  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 191)) ;
          }
        }
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = var_isConstant_7257.boolEnum () ;
          if (kBoolTrue == test_21) {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_6941.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a constant property cannot be modified"), fixItArray22  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 194)) ;
          }
        }
      }
      enumerator_6941.gotoNextObject () ;
      if (enumerator_6941.hasCurrentObject ()) {
        bool_16 = var_ok_6870.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_castType_7595 ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    const GALGAS_setterCallInstructionAST temp_24 = object ;
    test_23 = GALGAS_bool (kIsNotEqual, temp_24.getter_mTypeNameForCasting (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_setterCallInstructionAST temp_25 = object ;
      var_castType_7595 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_25.getter_mTypeNameForCasting (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 201)) ;
      {
      const GALGAS_setterCallInstructionAST temp_26 = object ;
      routine_checkAssignmentTypes (var_receiverType_4642, var_castType_7595, temp_26.getter_mTypeNameForCasting (HERE).getter_location (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)) ;
      }
    }
  }
  if (kBoolFalse == test_23) {
    var_castType_7595 = var_receiverType_4642 ;
  }
  GALGAS_methodKind var_kind_7967 ;
  GALGAS_formalParameterSignature var_routineSignature_7993 ;
  GALGAS_bool var_hasCompilerArgument_8022 ;
  GALGAS_string var_setterErrorMessage_8057 ;
  const GALGAS_setterCallInstructionAST temp_27 = object ;
  GALGAS_methodQualifier joker_8028 ; // Joker input parameter
  var_castType_7595.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 207)).method_searchKey (temp_27.getter_mSetterName (HERE), var_kind_7967, var_routineSignature_7993, var_hasCompilerArgument_8022, joker_8028, var_setterErrorMessage_8057, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 207)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    test_28 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_8057.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_28) {
      const GALGAS_setterCallInstructionAST temp_29 = object ;
      TC_Array <C_FixItDescription> fixItArray30 ;
      inCompiler->emitSemanticError (temp_29.getter_mSetterName (HERE).getter_location (HERE), var_setterErrorMessage_8057, fixItArray30  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 216)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_8587 ;
  {
  const GALGAS_setterCallInstructionAST temp_31 = object ;
  const GALGAS_setterCallInstructionAST temp_32 = object ;
  const GALGAS_setterCallInstructionAST temp_33 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_31.getter_mSetterName (HERE), GALGAS_string ("'").add_operation (temp_32.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)), var_routineSignature_7993, temp_33.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_8587, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 219)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_8653 = var_castType_7595 ;
  GALGAS_bool var_searching_8680 = GALGAS_bool (true) ;
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    test_34 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_34) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 235)).isValid ()) {
        uint32_t variant_8728 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 235)).uintValue () ;
        bool loop_8728 = true ;
        while (loop_8728) {
          loop_8728 = var_searching_8680.isValid () ;
          if (loop_8728) {
            loop_8728 = var_searching_8680.boolValue () ;
          }
          if (loop_8728 && (0 == variant_8728)) {
            loop_8728 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 235)) ;
          }
          if (loop_8728) {
            variant_8728 -- ;
            enumGalgasBool test_35 = kBoolTrue ;
            if (kBoolTrue == test_35) {
              test_35 = var_baseType_8653.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 236)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 236)).boolEnum () ;
              if (kBoolTrue == test_35) {
                var_searching_8680 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_35) {
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                const GALGAS_setterCallInstructionAST temp_37 = object ;
                test_36 = var_baseType_8653.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)).getter_hasKey (temp_37.getter_mSetterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 239)).boolEnum () ;
                if (kBoolTrue == test_36) {
                  var_baseType_8653 = var_baseType_8653.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 240)) ;
                }
              }
              if (kBoolFalse == test_36) {
                var_searching_8680 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_setterCallInstructionAST temp_38 = object ;
  const GALGAS_setterCallInstructionAST temp_39 = object ;
  const GALGAS_setterCallInstructionAST temp_40 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_38.getter_mReceiverName (HERE).getter_location (HERE), var_targetVariableCppName_4678, var_nameForCheckingFormalParameterUsing_4728, temp_39.getter_mReceiverStructProperties (HERE), var_castType_7595, var_receiverType_4642, temp_40.getter_mSetterName (HERE), var_kind_7967, var_actualParameterListForGeneration_8587, var_hasCompilerArgument_8022, var_baseType_8653  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 248))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 248)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                   extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

