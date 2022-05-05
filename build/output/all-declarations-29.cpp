#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_2499 ;
    GALGAS_bool var_unused_0_2503 ;
    GALGAS_bool var_unused_1_2503 ;
    const bool optionalResult2479 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_2499, var_unused_0_2503, var_unused_1_2503) ;
    if (!optionalResult2479) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_string var_selfCppName_2537 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
      const GALGAS_selfInExpressionAST temp_1 = object ;
      outArgument_outExpression = GALGAS_selfInExpressionForGeneration::constructor_new (var_selfType_2499, temp_1.readProperty_mSelfLocation (), var_selfCppName_2537  COMMA_SOURCE_FILE ("expression-self.galgas", 62)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfInExpressionAST temp_2 = object ;
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 64)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
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
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = object ;
  const GALGAS_selfInExpressionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (temp_0.readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 85)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 86)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_3126 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-property-access.galgas", 75)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3126, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_expressionType_3210 = var_expression_3126.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_expressionType_3210.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_and (var_expressionType_3210.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 82)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 82)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 82)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_structPropertyAccessExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray3  COMMA_SOURCE_FILE ("expression-property-access.galgas", 83)) ;
    }
  }
  GALGAS_propertyMap var_propertyMap_3471 = var_expressionType_3210.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 85)) ;
  GALGAS_bool var_isPublic_3562 ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3575 ;
  const GALGAS_structPropertyAccessExpressionAST temp_4 = object ;
  GALGAS_bool joker_3564 ; // Joker input parameter
  var_propertyMap_3471.method_searchKey (temp_4.readProperty_mPropertyName (), var_isPublic_3562, joker_3564, var_type_3575, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 86)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_isPublic_3562.boolEnum () ;
    if (kBoolTrue == test_5) {
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      GALGAS_unifiedTypeMap_2D_entry var_selfType_3674 ;
      GALGAS_bool var_unused_0_3678 ;
      GALGAS_bool var_unused_1_3678 ;
      const bool optionalResult3654 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3674, var_unused_0_3678, var_unused_1_3678) ;
      if (!optionalResult3654) {
        test_6 = kBoolFalse ;
      }
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, var_expressionType_3210.objectCompare (var_selfType_3674)).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_structPropertyAccessExpressionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("inaccessible property (due to its 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("expression-property-access.galgas", 90)) ;
        }
      }
    }
  }
  const GALGAS_structPropertyAccessExpressionAST temp_9 = object ;
  const GALGAS_structPropertyAccessExpressionAST temp_10 = object ;
  outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_type_3575, temp_9.readProperty_mOperatorLocation (), var_expression_3126, temp_10.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("expression-property-access.galgas", 93)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 118)) ;
  GALGAS_string var_operand_5049 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5049, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 120)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_5049.add_operation (GALGAS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)).add_operation (temp_2.readProperty_mStructFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 128)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 53)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2923 ;
  const GALGAS_notExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-not.galgas", 69)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2923, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 66)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2993 = var_expression_2923.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_2923.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = object ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 77)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_2923.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = object ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation ()  COMMA_SOURCE_FILE ("expression-not.galgas", 79)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_type_2993.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 80)).getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 80)).operator_not (SOURCE_FILE ("expression-not.galgas", 80)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_2993.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 82)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 82)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 81)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = object ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_2993, temp_8.readProperty_mOperatorLocation (), var_expression_2923  COMMA_SOURCE_FILE ("expression-not.galgas", 86)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 110)) ;
  GALGAS_string var_operand_4722 ;
  const GALGAS_notExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4722, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 112)) ;
  const GALGAS_notExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4722.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 114)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 53)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2962 ;
  const GALGAS_tildeExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-tilde.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2962, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3032 = var_expression_2962.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_3070 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_2962.ptr ())) ;
    if (NULL == var_exp_3070.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_3070.readProperty_mResultType (), var_exp_3070.readProperty_mLocation (), var_exp_3070.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 81))  COMMA_SOURCE_FILE ("expression-tilde.galgas", 78)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_type_3032.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 83)).getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 83)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 83)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = object ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_3032.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 85)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 84)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = object ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_3032, temp_5.readProperty_mOperatorLocation (), var_expression_2962  COMMA_SOURCE_FILE ("expression-tilde.galgas", 89)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 113)) ;
  GALGAS_string var_operand_4606 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4606, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 115)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4606.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 117)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 53)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2959 ;
  const GALGAS_bangExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-bang.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2959, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 67)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3029 = var_expression_2959.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMap_2D_entry var_classIndex_3421 ;
    const bool optionalResult3390 = var_type_3029.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 84)).optional_weakReferenceType (var_classIndex_3421) ;
    if (!optionalResult3390) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = object ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::constructor_new (var_classIndex_3421, temp_2.readProperty_mOperatorLocation (), var_expression_2959, var_type_3029.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 89))  COMMA_SOURCE_FILE ("expression-bang.galgas", 85)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = object ;
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_3029.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 93)).add_operation (GALGAS_string ("' and does not support the '\xC2""\xB0""' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 93)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 92)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 115)) ;
  GALGAS_string var_operand_4755 ;
  const GALGAS_bangExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4755, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 117)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 125)) COMMA_SOURCE_FILE ("expression-bang.galgas", 125)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = object ;
  outArgument_outCppExpression = var_operand_4755.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 126)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 126)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 127)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 53)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2996 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 69)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2996, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 66)) ;
  GALGAS_unifiedTypeMap_2D_entry var_type_3066 = var_expression_2996.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_type_3066.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 76)).getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 76)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 76)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (var_type_3066.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 78)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 77)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = object ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::constructor_new (var_type_3066, temp_4.readProperty_mOperatorLocation (), var_expression_2996  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 82)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 105)) ;
  GALGAS_string var_operand_4512 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4512, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 107)) ;
  outArgument_outCppExpression = var_operand_4512.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 115)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 144)) ;
  const GALGAS_orExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 145)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_6613 ;
  const GALGAS_orExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6613, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 158)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_6906 ;
  const GALGAS_orExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6613.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_6906, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 167)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_6978 = var_leftExpression_6613.readProperty_mResultType () ;
  {
  const GALGAS_orExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_6978, var_rightExpression_6906.readProperty_mResultType (), var_leftType_6978.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 180)).getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 180)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_6906, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 177)) ;
  }
  const GALGAS_orExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_6978, temp_3.readProperty_mOperatorLocation (), var_leftExpression_6613, GALGAS_binaryOperator::constructor_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 189)), var_rightExpression_6906  COMMA_SOURCE_FILE ("expression-or.galgas", 185)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)) ;
  const GALGAS_orShortExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 200)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_8483 ;
  const GALGAS_orShortExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_8483, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 213)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8776 ;
  const GALGAS_orShortExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8483.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_8776, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 222)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_8850 = var_leftExpression_8483.readProperty_mResultType () ;
  {
  const GALGAS_orShortExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_8850, var_rightExpression_8776.readProperty_mResultType (), var_leftType_8850.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 235)).getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 235)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_8776, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 232)) ;
  }
  const GALGAS_orShortExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_8850, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8483, var_rightExpression_8776  COMMA_SOURCE_FILE ("expression-or.galgas", 241)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 253)) ;
  const GALGAS_xorExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 254)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_10344 ;
  const GALGAS_xorExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_10344, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 267)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10637 ;
  const GALGAS_xorExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10344.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_10637, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 276)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_10711 = var_leftExpression_10344.readProperty_mResultType () ;
  {
  const GALGAS_xorExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_10711, var_rightExpression_10637.readProperty_mResultType (), var_leftType_10711.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 289)).getter_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 289)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_10637, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 286)) ;
  }
  const GALGAS_xorExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_10711, temp_3.readProperty_mOperatorLocation (), var_leftExpression_10344, GALGAS_binaryOperator::constructor_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 299)), var_rightExpression_10637  COMMA_SOURCE_FILE ("expression-or.galgas", 295)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 309)) ;
  const GALGAS_closedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 310)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_12287 ;
  const GALGAS_closedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12287, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 324)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12602 ;
  const GALGAS_closedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_12602, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 333)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_12676 = var_leftExpression_12287.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_12676.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 343)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12287.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 344)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_rightType_12877 = var_rightExpression_12602.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_rightType_12877.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 347)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_12602.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 348)) ;
    }
  }
  const GALGAS_closedSliceExpressionAST temp_6 = object ;
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_12287.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 352)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_12287, var_rightExpression_12602  COMMA_SOURCE_FILE ("expression-or.galgas", 351)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 364)) ;
  const GALGAS_openedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 365)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_14468 ;
  const GALGAS_openedSliceExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_14468, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 379)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14783 ;
  const GALGAS_openedSliceExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_14783, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 388)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_14857 = var_leftExpression_14468.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_leftType_14857.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 398)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_14468.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 399)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_rightType_15058 = var_rightExpression_14783.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_rightType_15058.getter_key (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 402)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_14783.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 403)) ;
    }
  }
  const GALGAS_openedSliceExpressionAST temp_6 = object ;
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_14468.readProperty_mLocation ()  COMMA_SOURCE_FILE ("expression-or.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 407)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_14468, var_rightExpression_14783  COMMA_SOURCE_FILE ("expression-or.galgas", 406)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 445)) ;
  GALGAS_string var_leftTemporaryOperand_17256 ;
  const GALGAS_orShortExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17256, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 447)) ;
  GALGAS_string var_testVar_17299 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 455)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 455)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 455)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_17299, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)).add_operation (var_leftTemporaryOperand_17256, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 456)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_17299, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 457)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 457)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 459)) ;
  }
  GALGAS_string var_rightTemporaryOperand_17781 ;
  const GALGAS_orShortExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17781, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 460)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_17299.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)).add_operation (var_rightTemporaryOperand_17781, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 467)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 468)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 469)) ;
  outArgument_outCppExpression = var_testVar_17299 ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 481)) ;
  GALGAS_string var_leftTemporaryOperand_18580 ;
  const GALGAS_closedSliceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18580, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 483)) ;
  GALGAS_string var_rightTemporaryOperand_18785 ;
  const GALGAS_closedSliceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18785, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 491)) ;
  const GALGAS_closedSliceExpressionForGeneration temp_3 = object ;
  const GALGAS_closedSliceExpressionForGeneration temp_4 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_18580, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)).add_operation (var_rightTemporaryOperand_18785, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (var_leftTemporaryOperand_18580, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 501)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 513)) ;
  GALGAS_string var_leftTemporaryOperand_19758 ;
  const GALGAS_openedSliceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19758, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 515)) ;
  GALGAS_string var_rightTemporaryOperand_19963 ;
  const GALGAS_openedSliceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_19963, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 523)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 531)) COMMA_SOURCE_FILE ("expression-or.galgas", 531)) ;
  }
  const GALGAS_openedSliceExpressionForGeneration temp_3 = object ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_19758, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 533)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 533)).add_operation (var_rightTemporaryOperand_19963, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 533)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (var_leftTemporaryOperand_19758, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 534)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 535)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 84)) ;
  const GALGAS_andExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 85)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_4278 ;
  const GALGAS_andExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_4278, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 98)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_4570 ;
  const GALGAS_andExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_4278.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_4570, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 107)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_4644 = var_leftExpression_4278.readProperty_mResultType () ;
  {
  const GALGAS_andExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_4644, var_rightExpression_4570.readProperty_mResultType (), var_leftType_4644.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 120)).getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 120)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_4570, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 117)) ;
  }
  const GALGAS_andExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_4644, temp_3.readProperty_mOperatorLocation (), var_leftExpression_4278, GALGAS_binaryOperator::constructor_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 130)), var_rightExpression_4570  COMMA_SOURCE_FILE ("expression-and.galgas", 126)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 140)) ;
  const GALGAS_andShortExpressionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 141)) ;
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
  GALGAS_semanticExpressionForGeneration var_leftExpression_6177 ;
  const GALGAS_andShortExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_6177, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 154)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_6469 ;
  const GALGAS_andShortExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6177.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_6469, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 163)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_6543 = var_leftExpression_6177.readProperty_mResultType () ;
  {
  const GALGAS_andShortExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_6543, var_rightExpression_6469.readProperty_mResultType (), var_leftType_6543.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 176)).getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 176)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_rightExpression_6469, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 173)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_6543, temp_3.readProperty_mOperatorLocation (), var_leftExpression_6177, var_rightExpression_6469  COMMA_SOURCE_FILE ("expression-and.galgas", 182)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 206)) ;
  GALGAS_string var_leftTemporaryOperand_8034 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_8034, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 208)) ;
  GALGAS_string var_testVar_8077 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 216)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 216)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_8077, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (var_leftTemporaryOperand_8034, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 217)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_8077, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 218)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 218)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 220)) ;
  }
  GALGAS_string var_rightTemporaryOperand_8559 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_8559, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 221)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_8077.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)).add_operation (var_rightTemporaryOperand_8559, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 228)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 230)) ;
  outArgument_outCppExpression = var_testVar_8077 ;
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
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_2264 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_2294 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2264)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).isValid ()) {
    uint32_t variant_2330 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).uintValue () ;
    bool loop_2330 = true ;
    while (loop_2330) {
      loop_2330 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).isValid () ;
      if (loop_2330) {
        loop_2330 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)).boolValue () ;
      }
      if (loop_2330 && (0 == variant_2330)) {
        loop_2330 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 46)) ;
      }
      if (loop_2330) {
        variant_2330 -- ;
        var_sourceType_2264 = var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 47)) ;
        var_ok_2294 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2264)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 50)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_2580 ;
      const bool optionalResult2549 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 50)).optional_weakReferenceType (var_targetType_2580) ;
      if (!optionalResult2549) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_2264 = constinArgument_inSourceType ;
        var_ok_2294 = GALGAS_bool (kIsEqual, var_targetType_2580.objectCompare (var_sourceType_2264)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid ()) {
          uint32_t variant_2659 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).uintValue () ;
          bool loop_2659 = true ;
          while (loop_2659) {
            loop_2659 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid () ;
            if (loop_2659) {
              loop_2659 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).boolValue () ;
            }
            if (loop_2659 && (0 == variant_2659)) {
              loop_2659 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) ;
            }
            if (loop_2659) {
              variant_2659 -- ;
              var_sourceType_2264 = var_sourceType_2264.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) ;
              var_ok_2294 = GALGAS_bool (kIsEqual, var_targetType_2580.objectCompare (var_sourceType_2264)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_2294.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 58)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 59)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_3381 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_3411 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).isValid ()) {
    uint32_t variant_3449 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).uintValue () ;
    bool loop_3449 = true ;
    while (loop_3449) {
      loop_3449 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).isValid () ;
      if (loop_3449) {
        loop_3449 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)).boolValue () ;
      }
      if (loop_3449 && (0 == variant_3449)) {
        loop_3449 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 74)) ;
      }
      if (loop_3449) {
        variant_3449 -- ;
        var_sourceType_3381 = var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 75)) ;
        var_ok_3411 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_3381)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 78)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_3699 ;
      const bool optionalResult3668 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 78)).optional_weakReferenceType (var_targetType_3699) ;
      if (!optionalResult3668) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_3381 = constinArgument_inSourceType ;
        var_ok_3411 = GALGAS_bool (kIsEqual, var_targetType_3699.objectCompare (var_sourceType_3381)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).isValid ()) {
          uint32_t variant_3778 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).uintValue () ;
          bool loop_3778 = true ;
          while (loop_3778) {
            loop_3778 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).isValid () ;
            if (loop_3778) {
              loop_3778 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_and (var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)).boolValue () ;
            }
            if (loop_3778 && (0 == variant_3778)) {
              loop_3778 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 81)) ;
            }
            if (loop_3778) {
              variant_3778 -- ;
              var_sourceType_3381 = var_sourceType_3381.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 82)) ;
              var_ok_3411 = GALGAS_bool (kIsEqual, var_targetType_3699.objectCompare (var_sourceType_3381)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_isPublic_4099 ;
      GALGAS_bool var_unused_0_4102 ;
      GALGAS_unifiedTypeMap_2D_entry var_propertyType_4120 ;
      const bool optionalResult4065 = constinArgument_inSourceType.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)).optional_searchKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 87)), var_isPublic_4099, var_unused_0_4102, var_propertyType_4120) ;
      if (!optionalResult4065) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_isPublic_4099.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 89)) ;
          }
        }
        GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_4276 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_4120, constinArgument_inErrorLocation, ioArgument_ioExpression, constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 95))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)) ;
        ioArgument_ioExpression = var_conversionExpression_4276 ;
        var_ok_3411 = GALGAS_bool (kIsEqual, var_propertyType_4120.objectCompare (constinArgument_inTargetType)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_bool test_5 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) ;
      if (kBoolTrue == test_5.boolEnum ()) {
        test_5 = constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)).getter_hasKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 99)) ;
      }
      test_4 = test_5.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_methodKind var_kind_4667 ;
        GALGAS_functionSignature var_argumentTypeList_4714 ;
        GALGAS_bool var_hasCompilerArgument_4754 ;
        GALGAS_unifiedTypeMap_2D_entry var_returnedType_4778 ;
        GALGAS_location joker_4722 ; // Joker input parameter
        GALGAS_methodQualifier joker_4786_2 ; // Joker input parameter
        GALGAS_string joker_4786_1 ; // Joker input parameter
        constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 100)).method_searchKey (constinArgument_inTargetType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 101)), var_kind_4667, var_argumentTypeList_4714, joker_4722, var_hasCompilerArgument_4754, var_returnedType_4778, joker_4786_2, joker_4786_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 100)) ;
        var_ok_3411 = GALGAS_bool (kIsEqual, var_argumentTypeList_4714.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_4778.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)) ;
        GALGAS_getterCallExpressionForGeneration var_conversionExpression_4930 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_4667, ioArgument_ioExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 116)), constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 118)), var_hasCompilerArgument_4754  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 111)) ;
        ioArgument_ioExpression = var_conversionExpression_4930 ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_ok_3411.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)) ;
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
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_rightType_6173 = constinArgument_inRightType ;
    GALGAS_bool var_ok_6204 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_6173)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).isValid ()) {
      uint32_t variant_6239 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).uintValue () ;
      bool loop_6239 = true ;
      while (loop_6239) {
        loop_6239 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_and (var_rightType_6173.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).isValid () ;
        if (loop_6239) {
          loop_6239 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_and (var_rightType_6173.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)).boolValue () ;
        }
        if (loop_6239 && (0 == variant_6239)) {
          loop_6239 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) ;
        }
        if (loop_6239) {
          variant_6239 -- ;
          var_rightType_6173 = var_rightType_6173.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)) ;
          var_ok_6204 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_6173)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool var_isPublic_6549 ;
        GALGAS_bool var_unused_0_6552 ;
        GALGAS_unifiedTypeMap_2D_entry var_propertyType_6570 ;
        const bool optionalResult6517 = constinArgument_inRightType.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)).optional_searchKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 153)), var_isPublic_6549, var_unused_0_6552, var_propertyType_6570) ;
        if (!optionalResult6517) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_isPublic_6549.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 154)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 155)) ;
            }
          }
          GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_6734 = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_propertyType_6570, constinArgument_inErrorLocation, ioArgument_ioRightExpression, constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 161))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)) ;
          ioArgument_ioRightExpression = var_conversionExpression_6734 ;
          var_ok_6204 = GALGAS_bool (kIsEqual, var_propertyType_6570.objectCompare (constinArgument_inLeftType)) ;
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        GALGAS_bool test_6 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)) ;
        if (kBoolTrue == test_6.boolEnum ()) {
          test_6 = constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).getter_hasKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)) ;
        }
        test_5 = test_6.boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_methodKind var_kind_7147 ;
          GALGAS_functionSignature var_argumentTypeList_7196 ;
          GALGAS_bool var_hasCompilerArgument_7240 ;
          GALGAS_unifiedTypeMap_2D_entry var_returnedType_7266 ;
          GALGAS_location joker_7206 ; // Joker input parameter
          GALGAS_methodQualifier joker_7276_2 ; // Joker input parameter
          GALGAS_string joker_7276_1 ; // Joker input parameter
          constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)).method_searchKey (constinArgument_inLeftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 167)), var_kind_7147, var_argumentTypeList_7196, joker_7206, var_hasCompilerArgument_7240, var_returnedType_7266, joker_7276_2, joker_7276_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 166)) ;
          var_ok_6204 = GALGAS_bool (kIsEqual, var_argumentTypeList_7196.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_7266.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 175)) ;
          GALGAS_getterCallExpressionForGeneration var_conversionExpression_7426 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind_7147, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 182)), constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 183)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 184)), var_hasCompilerArgument_7240  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 177)) ;
          ioArgument_ioRightExpression = var_conversionExpression_7426 ;
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_ok_6204.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 189)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 191)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 192)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 192)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 193)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 190)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 136)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 144)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_5643 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_assignmentInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_assignmentInstructionAST temp_2 = object ;
      GALGAS_string joker_5782 ; // Joker input parameter
      GALGAS_string joker_5791 ; // Joker input parameter
      extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_2.readProperty_mTargetVariableName (), var_targetType_5643, joker_5782, joker_5791, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 161)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_assignmentInstructionAST temp_3 = object ;
    GALGAS_string joker_5898 ; // Joker input parameter
    GALGAS_string joker_5907 ; // Joker input parameter
    extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_3.readProperty_mTargetVariableName (), var_targetType_5643, joker_5898, joker_5907, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 168)) ;
    }
    GALGAS_propertyMap var_propertyMap_5934 = var_targetType_5643.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 174)) ;
    GALGAS_bool var_isPublic_6027 ;
    GALGAS_bool var_isConstant_6043 ;
    const GALGAS_assignmentInstructionAST temp_4 = object ;
    var_propertyMap_5934.method_searchKey (temp_4.readProperty_mOptionalProperty (), var_isPublic_6027, var_isConstant_6043, var_targetType_5643, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 175)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_isPublic_6027.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 176)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_assignmentInstructionAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 177)) ;
      }
    }
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_isConstant_6043.boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_assignmentInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 180)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_6568 ;
  const GALGAS_assignmentInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_11.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_5643, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_6568, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 184)) ;
  {
  const GALGAS_assignmentInstructionAST temp_12 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_5643, var_expression_6568.readProperty_mResultType (), temp_12.readProperty_mInstructionLocation (), var_expression_6568, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 193)) ;
  }
  GALGAS_string var_targetVariableCppName_6816 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6866 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_assignmentInstructionAST temp_14 = object ;
    test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      const GALGAS_assignmentInstructionAST temp_15 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_6994 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_15.readProperty_mTargetVariableName (), joker_6994, var_targetVariableCppName_6816, var_nameForCheckingFormalParameterUsing_6866, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 203)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    {
    const GALGAS_assignmentInstructionAST temp_16 = object ;
    GALGAS_unifiedTypeMap_2D_entry joker_7166 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mTargetVariableName (), joker_7166, var_targetVariableCppName_6816, var_nameForCheckingFormalParameterUsing_6866, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 210)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_17 = object ;
  const GALGAS_assignmentInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_5643, var_targetVariableCppName_6816, var_nameForCheckingFormalParameterUsing_6866, temp_17.readProperty_mOptionalProperty ().readProperty_string (), var_expression_6568, temp_18.readProperty_mTargetVariableName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_8044 ;
    GALGAS_bool var_unused_0_8056 ;
    GALGAS_bool var_mutableProperties_8098 ;
    const bool optionalResult8024 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_8044, var_unused_0_8056, var_mutableProperties_8098) ;
    if (!optionalResult8024) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_mutableProperties_8098.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 239)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_8252 = var_selfType_8044.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 241)) ;
      GALGAS_bool var_isConstant_8354 ;
      GALGAS_unifiedTypeMap_2D_entry var_targetType_8370 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = object ;
      GALGAS_bool joker_8337 ; // Joker input parameter
      var_propertyMap_8252.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_8337, var_isConstant_8354, var_targetType_8370, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 242)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_8354.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 244)) ;
        }
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_8 = object ;
      GALGAS_string var_targetVariableCppName_8516 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 246)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 247)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = object ;
        test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_propertyMap var_propertyMap_8763 = var_targetType_8370.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 250)) ;
          GALGAS_bool var_isPublic_8858 ;
          GALGAS_bool var_isConstant_8874 ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_11 = object ;
          var_propertyMap_8763.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_isPublic_8858, var_isConstant_8874, var_targetType_8370, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 251)) ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = var_isPublic_8858.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 252)).boolEnum () ;
            if (kBoolTrue == test_12) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_13 = object ;
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 253)) ;
            }
          }
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            test_15 = var_isConstant_8874.boolEnum () ;
            if (kBoolTrue == test_15) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = object ;
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (temp_16.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray17  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 256)) ;
            }
          }
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_9429 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_18 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_18.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_8370, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9429, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 260)) ;
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_19 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_8370, var_expression_9429.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_9429, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_20 = object ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_21 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_8370, var_targetVariableCppName_8516, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_9429, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_22 = object ;
    TC_Array <C_FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)) ;
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
  GALGAS_string var_sourceVar_11336 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_11336, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 308)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 315)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 317)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.readProperty_mOptionalProperty ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)).add_operation (var_sourceVar_11336, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 319)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_6 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.readProperty_mTargetCppName ().add_operation (GALGAS_string (".setter_set"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 321)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 321)) ;
    const GALGAS_assignmentInstructionForGeneration temp_7 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_7.readProperty_mOptionalProperty ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 322)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 322)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 322)) ;
    const GALGAS_assignmentInstructionForGeneration temp_8 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_11336, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)).add_operation (extensionGetter_sourceFile (temp_8.readProperty_mSourceLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 323)) ;
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_9 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_9.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 325)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 221)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 222)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_7813 (temp_2.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_7813.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7813.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 224)) ;
    enumerator_7813.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_castExpression_8749 ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_8749, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 239)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 248)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_8889 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 250)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_9023 (temp_1.readProperty_mCastInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_9023.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_9097 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_9023.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 253)) ;
    GALGAS_unifiedTypeMap_2D_entry var_t_9279 = var_type_9097 ;
    GALGAS_bool var_found_9306 = GALGAS_bool (kIsEqual, var_t_9279.objectCompare (var_castExpression_8749.readProperty_mResultType ())) ;
    if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 257)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)).isValid ()) {
      uint32_t variant_9349 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 257)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 257)).uintValue () ;
      bool loop_9349 = true ;
      while (loop_9349) {
        loop_9349 = var_found_9306.operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_and (var_t_9279.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).isValid () ;
        if (loop_9349) {
          loop_9349 = var_found_9306.operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_and (var_t_9279.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 258)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 258)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 258)).boolValue () ;
        }
        if (loop_9349 && (0 == variant_9349)) {
          loop_9349 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 257)) ;
        }
        if (loop_9349) {
          variant_9349 -- ;
          var_t_9279 = var_t_9279.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)) ;
          var_found_9306 = GALGAS_bool (kIsEqual, var_t_9279.objectCompare (var_castExpression_8749.readProperty_mResultType ())) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_9306.operator_not (SOURCE_FILE ("instruction-cast.galgas", 262)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9023.current_mTypeName (HERE).readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_9023.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)).add_operation (var_castExpression_8749.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 264)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 263)) ;
      }
    }
    GALGAS_string var_localConstantName_9794 ;
    GALGAS_localConstantList var_localConstantList_9820 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 268)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_9023.current_mConstantVarName (HERE).readProperty_string ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 269)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_9794 = GALGAS_string ("cast_").add_operation (enumerator_9023.current_mConstantVarName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (enumerator_9023.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)) ;
        var_localConstantList_9820.addAssign_operation (var_type_9097, enumerator_9023.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_9794  COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_9794 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_10593 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_9820, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 285)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 286)), enumerator_9023.current_mInstructionList (HERE), enumerator_9023.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_10593, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
    }
    var_castBranchList_8889.addAssign_operation (enumerator_9023.current_mTypeComparisonKind (HERE), var_type_9097, var_localConstantName_9794, var_instructionList_10593  COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)) ;
    enumerator_9023.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_11090 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = object ;
  const GALGAS_structuredCastInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 299)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 300)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 301)), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_11090, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 295)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 308)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_8749, var_castBranchList_8889, var_else_5F_instructionList_11090  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 310)) ;
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
  GALGAS_string var_castCppVarName_13042 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_13042, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 346)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_13042, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 354)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 355)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = object ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_13225 (temp_1.readProperty_mCastBranchList (), kENUMERATION_UP) ;
  while (enumerator_13225.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_13225.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 357)) ;
    switch (enumerator_13225.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_13042, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 360)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 360)).add_operation (enumerator_13225.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 361)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 362)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 360)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_13225.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 364)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 365)).add_operation (var_castCppVarName_13042, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 364)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_13042, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)).add_operation (enumerator_13225.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 369)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)).add_operation (enumerator_13225.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 370)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 371)).add_operation (var_castCppVarName_13042, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 372)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 368)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_13225.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 374)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_13225.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 376)).add_operation (enumerator_13225.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (enumerator_13225.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 377)).add_operation (var_castCppVarName_13042, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 375)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_13225.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 380)) ;
    }
    if (enumerator_13225.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 388)) ;
    }
    enumerator_13225.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mElseInstructionList ().getter_length (SOURCE_FILE ("instruction-cast.galgas", 391)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 392)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 393)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 403)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 404)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 405)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 255)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 261)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 267)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 273)) ;
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
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 279)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_10809 ;
  GALGAS_string var_targetVariableCppName_10845 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10895 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_10995 ;
        GALGAS_bool var_unused_0_10999 ;
        GALGAS_bool var_mutableProperties_11041 ;
        const bool optionalResult10975 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_10995, var_unused_0_10999, var_mutableProperties_11041) ;
        if (!optionalResult10975) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_11041.operator_not (SOURCE_FILE ("instruction-concat.galgas", 299)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 300)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_11196 = var_selfType_10995.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 302)) ;
          GALGAS_bool var_isConstant_11290 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_11273 ; // Joker input parameter
          var_propertyMap_11196.method_searchKey (temp_6.readProperty_mReceiverName (), joker_11273, var_isConstant_11290, var_targetType_10809, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)) ;
          var_nameForCheckingFormalParameterUsing_10895 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_10845 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 305)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 306)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_11290.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 308)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_11041.operator_not (SOURCE_FILE ("instruction-concat.galgas", 310)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 314)) ;
        var_targetType_10809.drop () ; // Release error dropped variable
        var_targetVariableCppName_10845.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_10895.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_16 = object ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_10809, var_targetVariableCppName_10845, var_nameForCheckingFormalParameterUsing_10895, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 318)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_12158 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12158.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12211 = var_targetType_10809.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 326)) ;
    GALGAS_bool var_isPublic_12288 ;
    GALGAS_bool var_isConstant_12304 ;
    var_propertyMap_12211.method_searchKey (enumerator_12158.current_mValue (HERE), var_isPublic_12288, var_isConstant_12304, var_targetType_10809, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 327)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_12288.operator_not (SOURCE_FILE ("instruction-concat.galgas", 328)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_12158.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 329)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_12304.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_12158.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 332)) ;
      }
    }
    enumerator_12158.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_10809.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 336)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 336)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 336)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_10809.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13090 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10809, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13090, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 341)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10809, var_expression_13090.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_13090, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 350)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_plusEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_10809, var_targetVariableCppName_10845, var_nameForCheckingFormalParameterUsing_10895, temp_28.readProperty_mStructAttributeList (), var_expression_13090, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 352))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 352)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_14094 ;
  GALGAS_string var_targetVariableCppName_14130 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_14180 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_14280 ;
        GALGAS_bool var_selfIsMutable_14308 ;
        GALGAS_bool var_mutableProperties_14350 ;
        const bool optionalResult14260 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14280, var_selfIsMutable_14308, var_mutableProperties_14350) ;
        if (!optionalResult14260) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_14308.operator_not (SOURCE_FILE ("instruction-concat.galgas", 378)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_14499 = var_selfType_14280.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
          GALGAS_bool var_isConstant_14593 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_14576 ; // Joker input parameter
          var_propertyMap_14499.method_searchKey (temp_6.readProperty_mReceiverName (), joker_14576, var_isConstant_14593, var_targetType_14094, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)) ;
          var_nameForCheckingFormalParameterUsing_14180 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_14130 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 384)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_14593.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_14350.operator_not (SOURCE_FILE ("instruction-concat.galgas", 389)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 393)) ;
        var_targetType_14094.drop () ; // Release error dropped variable
        var_targetVariableCppName_14130.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14180.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = object ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_14094, var_targetVariableCppName_14130, var_nameForCheckingFormalParameterUsing_14180, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 397)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_15461 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_15461.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_15514 = var_targetType_14094.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 405)) ;
    GALGAS_bool var_isPublic_15591 ;
    GALGAS_bool var_isConstant_15607 ;
    var_propertyMap_15514.method_searchKey (enumerator_15461.current_mValue (HERE), var_isPublic_15591, var_isConstant_15607, var_targetType_14094, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 406)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_15591.operator_not (SOURCE_FILE ("instruction-concat.galgas", 407)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_15461.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 408)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_15607.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_15461.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 411)) ;
      }
    }
    enumerator_15461.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_14094.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 415)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 415)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 415)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_minusEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_14094.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 416)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_16394 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_14094, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_16394, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 420)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_14094, var_expression_16394.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_16394, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 429)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_minusEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_14094, var_targetVariableCppName_14130, var_nameForCheckingFormalParameterUsing_14180, temp_28.readProperty_mStructAttributeList (), var_expression_16394, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 431))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 431)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_17397 ;
  GALGAS_string var_targetVariableCppName_17433 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_17483 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_17583 ;
        GALGAS_bool var_selfIsMutable_17611 ;
        GALGAS_bool var_mutableProperties_17653 ;
        const bool optionalResult17563 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_17583, var_selfIsMutable_17611, var_mutableProperties_17653) ;
        if (!optionalResult17563) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_17611.operator_not (SOURCE_FILE ("instruction-concat.galgas", 457)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 458)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_17802 = var_selfType_17583.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 460)) ;
          GALGAS_bool var_isConstant_17896 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_17879 ; // Joker input parameter
          var_propertyMap_17802.method_searchKey (temp_6.readProperty_mReceiverName (), joker_17879, var_isConstant_17896, var_targetType_17397, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 461)) ;
          var_nameForCheckingFormalParameterUsing_17483 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_17433 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_17896.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_17653.operator_not (SOURCE_FILE ("instruction-concat.galgas", 468)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 469)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
        var_targetType_17397.drop () ; // Release error dropped variable
        var_targetVariableCppName_17433.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_17483.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = object ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_17397, var_targetVariableCppName_17433, var_nameForCheckingFormalParameterUsing_17483, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 476)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_18992 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18992.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_19045 = var_targetType_17397.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 491)) ;
    GALGAS_bool var_isPublic_19122 ;
    GALGAS_bool var_isConstant_19138 ;
    var_propertyMap_19045.method_searchKey (enumerator_18992.current_mValue (HERE), var_isPublic_19122, var_isConstant_19138, var_targetType_17397, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 492)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_19122.operator_not (SOURCE_FILE ("instruction-concat.galgas", 493)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_18992.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 494)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_19138.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_18992.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 497)) ;
      }
    }
    enumerator_18992.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_17397.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 501)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 501)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_mulEqualExpressionInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_17397.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 503)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 503)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 502)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_19919 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_17397, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_19919, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 506)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_17397, var_expression_19919.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_19919, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_27 = object ;
  const GALGAS_mulEqualExpressionInstructionAST temp_28 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_17397, var_targetVariableCppName_17433, var_nameForCheckingFormalParameterUsing_17483, temp_28.readProperty_mStructAttributeList (), var_expression_19919, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 517))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 517)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_20920 ;
  GALGAS_string var_targetVariableCppName_20956 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_21006 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_21106 ;
        GALGAS_bool var_selfIsMutable_21134 ;
        GALGAS_bool var_mutableProperties_21176 ;
        const bool optionalResult21086 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21106, var_selfIsMutable_21134, var_mutableProperties_21176) ;
        if (!optionalResult21086) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_21134.operator_not (SOURCE_FILE ("instruction-concat.galgas", 543)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_21325 = var_selfType_21106.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)) ;
          GALGAS_bool var_isConstant_21419 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = object ;
          GALGAS_bool joker_21402 ; // Joker input parameter
          var_propertyMap_21325.method_searchKey (temp_6.readProperty_mReceiverName (), joker_21402, var_isConstant_21419, var_targetType_20920, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 547)) ;
          var_nameForCheckingFormalParameterUsing_21006 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = object ;
          var_targetVariableCppName_20956 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 549)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 550)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_21419.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 552)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_21176.operator_not (SOURCE_FILE ("instruction-concat.galgas", 554)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 555)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 558)) ;
        var_targetType_20920.drop () ; // Release error dropped variable
        var_targetVariableCppName_20956.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_21006.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = object ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_20920, var_targetVariableCppName_20956, var_nameForCheckingFormalParameterUsing_21006, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 562)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_22314 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_22314.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22367 = var_targetType_20920.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 571)) ;
    GALGAS_bool var_isPublic_22444 ;
    GALGAS_bool var_isConstant_22460 ;
    var_propertyMap_22367.method_searchKey (enumerator_22314.current_mValue (HERE), var_isPublic_22444, var_isConstant_22460, var_targetType_20920, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 572)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_22444.operator_not (SOURCE_FILE ("instruction-concat.galgas", 573)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_22314.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 574)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_22460.boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_divEqualExpressionInstructionAST temp_21 = object ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 577)) ;
      }
    }
    enumerator_22314.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = var_targetType_20920.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 581)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 581)).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_divEqualExpressionInstructionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_20920.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 583)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 582)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_23253 ;
  const GALGAS_divEqualExpressionInstructionAST temp_26 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_20920, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_23253, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 586)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_27 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_20920, var_expression_23253.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_23253, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 595)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_28 = object ;
  const GALGAS_divEqualExpressionInstructionAST temp_29 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_28.readProperty_mInstructionLocation (), var_targetType_20920, var_targetVariableCppName_20956, var_nameForCheckingFormalParameterUsing_21006, temp_29.readProperty_mStructAttributeList (), var_expression_23253, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 597))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 597)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_24254 ;
  GALGAS_string var_targetVariableCppName_24290 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_24340 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_24440 ;
        GALGAS_bool var_selfIsMutable_24468 ;
        GALGAS_bool var_mutableProperties_24510 ;
        const bool optionalResult24420 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_24440, var_selfIsMutable_24468, var_mutableProperties_24510) ;
        if (!optionalResult24420) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_24468.operator_not (SOURCE_FILE ("instruction-concat.galgas", 623)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualElementsInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 624)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_24659 = var_selfType_24440.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) ;
          GALGAS_bool var_isConstant_24753 ;
          const GALGAS_plusEqualElementsInstructionAST temp_6 = object ;
          GALGAS_bool joker_24736 ; // Joker input parameter
          var_propertyMap_24659.method_searchKey (temp_6.readProperty_mReceiverName (), joker_24736, var_isConstant_24753, var_targetType_24254, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 627)) ;
          var_nameForCheckingFormalParameterUsing_24340 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualElementsInstructionAST temp_7 = object ;
          var_targetVariableCppName_24290 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 629)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 630)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 630)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_24753.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 632)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_24510.operator_not (SOURCE_FILE ("instruction-concat.galgas", 634)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualElementsInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 635)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 638)) ;
        var_targetType_24254.drop () ; // Release error dropped variable
        var_targetVariableCppName_24290.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_24340.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_16 = object ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_24254, var_targetVariableCppName_24290, var_nameForCheckingFormalParameterUsing_24340, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 660)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_26607 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_26607.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_26660 = var_targetType_24254.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 669)) ;
    GALGAS_bool var_isPublic_26737 ;
    GALGAS_bool var_isConstant_26753 ;
    var_propertyMap_26660.method_searchKey (enumerator_26607.current_mValue (HERE), var_isPublic_26737, var_isConstant_26753, var_targetType_24254, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 670)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_26737.operator_not (SOURCE_FILE ("instruction-concat.galgas", 671)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_26607.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 672)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_26753.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_26607.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 675)) ;
      }
    }
    enumerator_26607.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_27064 = var_targetType_24254.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 679)) ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_27064.getter_length (SOURCE_FILE ("instruction-concat.galgas", 680)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualElementsInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_24254.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 681)) ;
    }
  }
  if (kBoolFalse == test_22) {
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_plusEqualElementsInstructionAST temp_26 = object ;
      test_25 = GALGAS_bool (kIsNotEqual, temp_26.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 684)).objectCompare (var_addAssignOperatorArguments_27064.getter_length (SOURCE_FILE ("instruction-concat.galgas", 684)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_plusEqualElementsInstructionAST temp_27 = object ;
        const GALGAS_plusEqualElementsInstructionAST temp_28 = object ;
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_24254.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)).add_operation (var_addAssignOperatorArguments_27064.getter_length (SOURCE_FILE ("instruction-concat.galgas", 687)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 687)).add_operation (temp_28.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 688)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 687)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 688)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 685)) ;
      }
    }
    if (kBoolFalse == test_25) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_27818 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 690)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_30 = object ;
      cEnumerator_actualOutputExpressionList enumerator_27885 (temp_30.readProperty_mExpressions (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_27947 (var_addAssignOperatorArguments_27064, kENUMERATION_UP) ;
      while (enumerator_27885.hasCurrentObject () && enumerator_27947.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_28244 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_27885.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_27947.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_28244, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 692)) ;
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = GALGAS_bool (kIsNotEqual, enumerator_27947.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_27885.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_31) {
            GALGAS_string temp_32 ;
            const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_27947.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_33) {
              temp_32 = enumerator_27947.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 701)) ;
            }else if (kBoolFalse == test_33) {
              temp_32 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_28329 = GALGAS_string ("!").add_operation (temp_32, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 701)) ;
            TC_Array <C_FixItDescription> fixItArray34 ;
            appendFixItActions (fixItArray34, kFixItReplace, var_s_28329) ;
            inCompiler->emitSemanticError (enumerator_27885.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28329, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 702)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 702)), fixItArray34  COMMA_SOURCE_FILE ("instruction-concat.galgas", 702)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_27947.current_mFormalArgumentType (HERE), var_expression_28244.readProperty_mResultType (), enumerator_27885.current_mEndOfExpressionLocation (HERE), var_expression_28244, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 706)) ;
        }
        var_effectiveParameterList_27818.addAssign_operation (var_expression_28244  COMMA_SOURCE_FILE ("instruction-concat.galgas", 707)) ;
        enumerator_27885.gotoNextObject () ;
        enumerator_27947.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_35 = object ;
      const GALGAS_plusEqualElementsInstructionAST temp_36 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_24290, var_targetType_24254, var_nameForCheckingFormalParameterUsing_24340, temp_35.readProperty_mInstructionLocation (), temp_36.readProperty_mStructAttributeList (), var_effectiveParameterList_27818  COMMA_SOURCE_FILE ("instruction-concat.galgas", 710))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 710)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 742)) ;
  GALGAS_stringlist var_parameterList_30283 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 743)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_30318 (temp_1.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_30318.hasCurrentObject ()) {
    GALGAS_string var_parameter_30526 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_30318.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_30526, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)) ;
    var_parameterList_30283.addAssign_operation (var_parameter_30526  COMMA_SOURCE_FILE ("instruction-concat.galgas", 752)) ;
    enumerator_30318.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 755)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 756)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_30729 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30729.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_30729.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 758)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 758)) ;
    enumerator_30729.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 762)) ;
  }
  cEnumerator_stringlist enumerator_31009 (var_parameterList_30283, kENUMERATION_UP) ;
  while (enumerator_31009.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_31009.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 764)) ;
    if (enumerator_31009.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 765)) ;
    }
    enumerator_31009.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = object ;
    test_6 = temp_7.readProperty_mTargetType ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 767)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 767)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 768)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 768)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 769)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 769)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 771)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 771)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 794)) ;
  GALGAS_string var_sourceVar_32584 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_32584, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 795)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 803)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_32737 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_32737.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_32737.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 805)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 805)) ;
    enumerator_32737.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)).add_operation (var_sourceVar_32584, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 810)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 810)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 811)) ;
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
  cEnumerator_lstringlist enumerator_2983 (temp_0.readProperty_mDropList (), kENUMERATION_UP) ;
  while (enumerator_2983.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_entry joker_3056_3 ; // Joker input parameter
    GALGAS_string joker_3056_2 ; // Joker input parameter
    GALGAS_string joker_3056_1 ; // Joker input parameter
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_2983.current_mValue (HERE), joker_3056_3, joker_3056_2, joker_3056_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 76)) ;
    }
    enumerator_2983.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 184)) ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 185)) ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 239)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 248)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 258)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 255)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 264)) ;
  cEnumerator_fixitListAST enumerator_9357 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_9357.hasCurrentObject ()) {
    switch (enumerator_9357.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 268))  COMMA_SOURCE_FILE ("instruction-error.galgas", 268)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_10378 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_9357.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9498_exp = extractPtr_10378->mAssociatedValue0 ;
        const GALGAS_location extractedValue_9512_errorLocation = extractPtr_10378->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9772 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_9498_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9772, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 270)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_9772.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_9512_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_9772.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 282)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9772  COMMA_SOURCE_FILE ("instruction-error.galgas", 285))  COMMA_SOURCE_FILE ("instruction-error.galgas", 285)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_11295 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_9357.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10410_exp = extractPtr_11295->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10424_errorLocation = extractPtr_11295->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10684 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_10410_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10684, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_10684.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_10424_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_10684.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 299)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10684  COMMA_SOURCE_FILE ("instruction-error.galgas", 302))  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_12210 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_9357.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11326_exp = extractPtr_12210->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11340_errorLocation = extractPtr_12210->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11600 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_11326_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11600, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 304)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_11600.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_11340_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_11600.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 316)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11600  COMMA_SOURCE_FILE ("instruction-error.galgas", 319))  COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
      }
      break ;
    }
    enumerator_9357.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (outArgument_outMessageExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 324)) ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_13290 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_13317 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_13349 ;
  {
  const GALGAS_errorInstructionAST temp_0 = object ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  const GALGAS_errorInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_13290, var_messageExpression_13317, var_fixitListForGeneration_13349, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 340)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_13414 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 355)) ;
  const GALGAS_errorInstructionAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_13445 (temp_4.readProperty_mBuiltVariableList (), kENUMERATION_UP) ;
  while (enumerator_13445.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13545 ;
    {
    GALGAS_unifiedTypeMap_2D_entry joker_13528 ; // Joker input parameter
    GALGAS_string joker_13547 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_13445.current_mValue (HERE), joker_13528, var_varCppName_13545, joker_13547, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)) ;
    }
    var_builtVariableCppNameList_13414.addAssign_operation (var_varCppName_13545  COMMA_SOURCE_FILE ("instruction-error.galgas", 358)) ;
    enumerator_13445.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.readProperty_mInstructionLocation (), var_locationExpression_13290, var_messageExpression_13317, var_builtVariableCppNameList_13414, var_fixitListForGeneration_13349  COMMA_SOURCE_FILE ("instruction-error.galgas", 361))  COMMA_SOURCE_FILE ("instruction-error.galgas", 361)) ;
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
  GALGAS_string var_receiverCppVarName_16992 ;
  const GALGAS_errorInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16992, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)) ;
  GALGAS_string var_messageCppVarName_17199 ;
  const GALGAS_errorInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_17199, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 448)) ;
  GALGAS_string var_fixItArrayCppName_17456 ;
  const GALGAS_errorInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_17456, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 456)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 465)) COMMA_SOURCE_FILE ("instruction-error.galgas", 465)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (var_receiverCppVarName_16992, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (var_messageCppVarName_17199, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (var_fixItArrayCppName_17456, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 466)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = object ;
  cEnumerator_stringlist enumerator_17819 (temp_4.readProperty_mBuiltVariableCppNameList (), kENUMERATION_UP) ;
  while (enumerator_17819.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17819.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 473)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17819.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
    enumerator_17819.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  const GALGAS_forInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 499)) ;
  const GALGAS_forInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 500)) ;
  const GALGAS_forInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 501)) ;
  const GALGAS_forInstructionAST temp_4 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 502)) ;
  const GALGAS_forInstructionAST temp_5 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_16514 (temp_5.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_16514.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_16514.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 504)) ;
    enumerator_16514.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 558)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 555)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 564)).getter_string (SOURCE_FILE ("instruction-for.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 564)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_19316 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 565)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_19316.getter_length (SOURCE_FILE ("instruction-for.galgas", 566)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 567)) ;
    }
  }
  GALGAS_string var_suggestion_19616 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_19662 (var_enumerationDescriptorList_19316, kENUMERATION_UP) ;
  while (enumerator_19662.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = object ;
    var_suggestion_19616.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19662.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = object ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_19662.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19662.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), temp_7.readProperty_mEndOfAnonymousEnumeration ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).add_operation (enumerator_19662.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578))  COMMA_SOURCE_FILE ("instruction-for.galgas", 574)) ;
    if (enumerator_19662.hasNextObject ()) {
      var_suggestion_19616.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 580)) ;
    }
    enumerator_19662.gotoNextObject () ;
  }
  var_suggestion_19616.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 582)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = object ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_19616) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 584)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 604)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)).getter_string (SOURCE_FILE ("instruction-for.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_21281 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 611)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 612)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 613)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = object ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = object ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 616)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 616)) COMMA_SOURCE_FILE ("instruction-for.galgas", 616)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_21660 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 617)) ;
        cEnumerator_enumerationDescriptorList enumerator_21768 (var_currentTypedAttributeList_21660, kENUMERATION_UP) ;
        while (enumerator_21768.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = object ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GALGAS_lstring::constructor_new (enumerator_21768.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 620)), enumerator_21768.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).add_operation (enumerator_21768.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)).add_operation (enumerator_21768.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 619)) ;
          }
          enumerator_21768.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = object ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = object ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 626)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 626)).objectCompare (var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 626)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 626)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 630)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 629)).getter_string (SOURCE_FILE ("instruction-for.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 629)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 629)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)).add_operation (temp_15.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 632)).getter_string (SOURCE_FILE ("instruction-for.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 627)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = object ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = object ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (kIsStrictSup, temp_19.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 633)).objectCompare (var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 633)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = object ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 637)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 636)).getter_string (SOURCE_FILE ("instruction-for.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 636)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 636)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).add_operation (temp_23.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 639)).getter_string (SOURCE_FILE ("instruction-for.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 634)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = object ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 641)).objectCompare (temp_27.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 641)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = object ;
              GALGAS_uint var_missingArgumentCount_23312 = var_enumerationDescriptorList_21281.getter_length (SOURCE_FILE ("instruction-for.galgas", 642)).substract_operation (temp_28.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 642)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = object ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_23312.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_23312.getter_string (SOURCE_FILE ("instruction-for.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 645)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 645)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 643)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = object ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_23710 (temp_33.readProperty_mElementList (), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_23767 (var_enumerationDescriptorList_21281, kENUMERATION_UP) ;
          while (enumerator_23710.hasCurrentObject () && enumerator_23767.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_23710.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_23710.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMap_2D_entry var_foundType_23950 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_23710.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 650)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_23950.objectCompare (enumerator_23767.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_23710.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (var_foundType_23950.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)).add_operation (enumerator_23767.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 655)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_23767.current_mEnumeratedType (HERE), enumerator_23710.current_mOptionalConstantName (HERE), enumerator_23710.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 662)).add_operation (enumerator_23767.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 662)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 662))  COMMA_SOURCE_FILE ("instruction-for.galgas", 658)) ;
              }
            }
            enumerator_23710.gotoNextObject () ;
            enumerator_23767.gotoNextObject () ;
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
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 683)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)).getter_string (SOURCE_FILE ("instruction-for.galgas", 689)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedElementType_25518 = outArgument_outEnumerationExpression.readProperty_mResultType ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 690)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_25518.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 691)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 692)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 692)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 692)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = object ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = object ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_25518, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 694))  COMMA_SOURCE_FILE ("instruction-for.galgas", 694)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_explicitType_26059 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 698)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_25518.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 702)).objectCompare (var_explicitType_26059.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 702)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_25518.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 703)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 703)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 703)) ;
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
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 719)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 722)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_27389 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  const GALGAS_forInstructionAST temp_1 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 727)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 728)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 729)), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_27389, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 723)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 735)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_27901 ;
  {
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 742)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 743)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 744)), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_27901, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 738)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 750)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 752)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_28444 ;
  {
  const GALGAS_forInstructionAST temp_6 = object ;
  const GALGAS_forInstructionAST temp_7 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 757)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 758)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 759)), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_28444, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 753)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 765)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_28594 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 767)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_28670 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 768)) ;
  const GALGAS_forInstructionAST temp_9 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_28715 (temp_9.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_28715.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_28982 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_29048 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_28715.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_28594, var_enumeratorCppName_28982, var_enumerationExpression_29048, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_28715.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_28670.addAssign_operation (temp_10, var_enumerationExpression_29048, var_enumeratorCppName_28982  COMMA_SOURCE_FILE ("instruction-for.galgas", 780)) ;
    enumerator_28715.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 786)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 787)) ;
  }
  cEnumerator_localConstantList enumerator_29372 (var_localConstantListForDoBranch_28594, kENUMERATION_UP) ;
  while (enumerator_29372.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_29372.current (HERE).readProperty_mName (), enumerator_29372.current (HERE).readProperty_mType (), enumerator_29372.current (HERE).readProperty_mCppName (), enumerator_29372.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 790)) ;
    }
    enumerator_29372.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_29815 ;
  const GALGAS_forInstructionAST temp_12 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 801)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_29815, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 798)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_29993 ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_29815, var_whileExpression_29993, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 806)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = object ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 816)) ;
  }
  GALGAS_string var_indexCppName_30220 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = object ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = object ;
      var_indexCppName_30220 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 819)).getter_string (SOURCE_FILE ("instruction-for.galgas", 819)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 819)) ;
      const GALGAS_forInstructionAST temp_19 = object ;
      var_localConstantListForDoBranch_28594.addAssign_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_30220  COMMA_SOURCE_FILE ("instruction-for.galgas", 820)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_30945 ;
  {
  const GALGAS_forInstructionAST temp_20 = object ;
  const GALGAS_forInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantListForDoBranch_28594, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 832)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 833)), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_30945, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 827)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 840)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = object ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 843)) ;
  }
  const GALGAS_forInstructionAST temp_25 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_enumerationList_28670, var_indexCppName_30220, var_whileExpression_29993, var_before_5F_instructionList_27389, var_between_5F_instructionList_27901, var_do_5F_instructionList_30945, var_after_5F_instructionList_28444  COMMA_SOURCE_FILE ("instruction-for.galgas", 845))  COMMA_SOURCE_FILE ("instruction-for.galgas", 845)) ;
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
  GALGAS_stringlist var_enumerationVarCppNameList_33312 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 891)) ;
  const GALGAS_forInstructionForGeneration temp_0 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33350 (temp_0.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_33350.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_33571 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_33350.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_33571, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 893)) ;
    var_enumerationVarCppNameList_33312.addAssign_operation (var_enumerationVar_33571  COMMA_SOURCE_FILE ("instruction-for.galgas", 900)) ;
    enumerator_33350.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33698 (temp_1.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_33738 (var_enumerationVarCppNameList_33312, kENUMERATION_UP) ;
  while (enumerator_33698.hasCurrentObject () && enumerator_33738.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (enumerator_33698.current_mEnumeratedExpression (HERE).readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)).add_operation (enumerator_33698.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).add_operation (enumerator_33738.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).add_operation (enumerator_33698.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 905)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 905)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 903)) ;
    enumerator_33698.gotoNextObject () ;
    enumerator_33738.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = object ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_34050 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 908)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = object ;
    const GALGAS_forInstructionForGeneration temp_5 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 910)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 910)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue_34050.operator_not (SOURCE_FILE ("instruction-for.galgas", 910)) COMMA_SOURCE_FILE ("instruction-for.galgas", 910)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = object ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 913)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 913)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 913)) ;
        }
      }
      GALGAS_string var_boolVarCppName_34485 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 915)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 915)) ;
      ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 915)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_34050.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_34485, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 917)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_34834 ;
        const GALGAS_forInstructionForGeneration temp_10 = object ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_34834, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 919)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_34485, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)).add_operation (var_whileVar_34834, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 920)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 922)) ;
      const GALGAS_forInstructionForGeneration temp_11 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35001 (temp_11.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35001.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35001.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 924)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 924)) ;
        enumerator_35001.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34485.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 926)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 926)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 927)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 936)) ;
      const GALGAS_forInstructionForGeneration temp_13 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35506 (temp_13.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35506.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35506.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 938)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 938)) ;
        enumerator_35506.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34485.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 940)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 940)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35989 (temp_15.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35989.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_35989.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 952)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 952)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 952)) ;
        enumerator_35989.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = object ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 955)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 955)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 955)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_34050.operator_not (SOURCE_FILE ("instruction-for.galgas", 958)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 959)) ;
          const GALGAS_forInstructionForGeneration temp_20 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36390 (temp_20.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_36390.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36390.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 961)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 961)) ;
            if (enumerator_36390.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 962)) ;
            }
            enumerator_36390.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 964)) ;
          GALGAS_string var_whileVar_36770 ;
          const GALGAS_forInstructionForGeneration temp_21 = object ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_36770, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 965)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_34485, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)).add_operation (var_whileVar_36770, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 972)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 973)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = object ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 976)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 978)) ;
          const GALGAS_forInstructionForGeneration temp_24 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37116 (temp_24.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_37116.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37116.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 980)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 980)) ;
            enumerator_37116.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34485.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 982)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 982)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = object ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 983)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 991)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 992)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 995)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 998)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1006)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = object ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1009)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1009)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1009)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1011)) ;
    const GALGAS_forInstructionForGeneration temp_30 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38313 (temp_30.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_38313.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38313.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1013)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1013)) ;
      if (enumerator_38313.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1014)) ;
      }
      enumerator_38313.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1016)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = object ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1018)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = object ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 1027)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1028)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1029)) ;
        const GALGAS_forInstructionForGeneration temp_34 = object ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38961 (temp_34.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
        while (enumerator_38961.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38961.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1031)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1031)) ;
          if (enumerator_38961.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1032)) ;
          }
          enumerator_38961.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = object ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1035)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1044)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39549 (temp_36.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_39549.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_39549.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)) ;
      enumerator_39549.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = object ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1051)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1051)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = object ;
        const GALGAS_forInstructionForGeneration temp_40 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1055)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 341)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_15229 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15229.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_15229.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
    enumerator_15229.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 352)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_15685 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15685.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_15685.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 354)) ;
    enumerator_15685.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_16393 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 369)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_16393 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 370)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_16710 ;
  GALGAS_bool var_hasTranslateFeature_16752 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  GALGAS_bool joker_16716 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_16710, joker_16716, var_hasTranslateFeature_16752, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 372)) ;
  GALGAS_formalParameterSignature var_labelSignature_16874 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = object ;
  var_grammarLabelMap_16710.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_16874, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 379)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_17324 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = object ;
  const GALGAS_grammarInFileInstructionAST temp_4 = object ;
  const GALGAS_grammarInFileInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 389)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 389)), var_labelSignature_16874, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_17324, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 384)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_17620 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 400)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_17620, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 397)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_17620.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_17620.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 408)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 409)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 407)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_18089 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 412)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 412)) ;
  GALGAS_stringlist var_assignementList_18202 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 413)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_16752, var_syntaxDirectedTranslationResultVarName_18089, var_assignementList_18202, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 414)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = object ;
  const GALGAS_grammarInFileInstructionAST temp_13 = object ;
  const GALGAS_grammarInFileInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_17620, var_actualParameterListForGeneration_17324, var_hasTranslateFeature_16752, var_assignementList_18202, var_syntaxDirectedTranslationResultVarName_18089  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)) ;
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
  GALGAS_lstring var_grammarUsefulnessName_19292 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 443)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_19292 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 444)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_19616 ;
  GALGAS_bool var_hasTranslateFeature_19658 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  GALGAS_bool joker_19622 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_19616, joker_19622, var_hasTranslateFeature_19658, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 446)) ;
  GALGAS_formalParameterSignature var_labelSignature_19780 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = object ;
  var_grammarLabelMap_19616.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_19780, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 453)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_20230 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = object ;
  const GALGAS_grammarInStringInstructionAST temp_4 = object ;
  const GALGAS_grammarInStringInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 463)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 463)), var_labelSignature_19780, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_20230, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 458)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_20526 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 474)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_20526, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_20526.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_20526.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 482)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 481)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_21131 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 489)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_21131, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 486)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_21131.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_20526.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 497)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 498)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 496)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_21543 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)) ;
  GALGAS_stringlist var_assignementList_21656 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 502)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_19658, var_syntaxDirectedTranslationResultVarName_21543, var_assignementList_21656, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = object ;
  const GALGAS_grammarInStringInstructionAST temp_17 = object ;
  const GALGAS_grammarInStringInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_20526, var_nameExpression_21131, var_actualParameterListForGeneration_20230, var_hasTranslateFeature_19658, var_assignementList_21656, var_syntaxDirectedTranslationResultVarName_21543  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 511))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 511)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 548))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 548)) ;
  GALGAS_string var_sourceVar_23809 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_23809, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 550)) ;
  GALGAS_stringlist var_parameterCppNameList_23862 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 558)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_23915 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 559)) ;
  GALGAS_stringlist var_inputVariableList_23957 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 560)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_23999 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_23999.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_24308 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_23999.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_23915, var_inputVariableList_23957, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_24308, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 562)) ;
    var_parameterCppNameList_23862.addAssign_operation (var_parameterCppName_24308  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 571)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_23999.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_24308.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 573)) ;
      }
    }
    enumerator_23999.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = object ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 577)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 577)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = object ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = object ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 579)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 579)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 581)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)).add_operation (var_sourceVar_23809, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 579)) ;
  cEnumerator_stringlist enumerator_25096 (var_parameterCppNameList_23862, kENUMERATION_UP) ;
  while (enumerator_25096.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_25096.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 586)) ;
    enumerator_25096.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 588)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 589)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 589)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = object ;
  cEnumerator_stringlist enumerator_25354 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_25354.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25354.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 591)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 591)) ;
    enumerator_25354.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 619))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 619)) ;
  GALGAS_string var_sourceVar_27003 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_27003, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) ;
  GALGAS_string var_nameVar_27221 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_27221, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 629)) ;
  GALGAS_stringlist var_parameterCppNameList_27274 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 637)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_27327 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 638)) ;
  GALGAS_stringlist var_inputVariableList_27369 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 639)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_27411 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_27411.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_27727 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_27411.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_27327, var_inputVariableList_27369, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_27727, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 641)) ;
    var_parameterCppNameList_27274.addAssign_operation (var_parameterCppName_27727  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 650)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_27411.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_27727.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 652)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 652)) ;
      }
    }
    enumerator_27411.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = object ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 656)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 656)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 656)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = object ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = object ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = object ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 658)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 658)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 659)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 659)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)).add_operation (var_sourceVar_27003, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)).add_operation (var_nameVar_27221, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 658)) ;
  cEnumerator_stringlist enumerator_28534 (var_parameterCppNameList_27274, kENUMERATION_UP) ;
  while (enumerator_28534.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_28534.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 665)) ;
    enumerator_28534.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 668)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 668)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = object ;
  cEnumerator_stringlist enumerator_28792 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_28792.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_28792.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 670)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 670)) ;
    enumerator_28792.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_9218 ;
  GALGAS_string var_targetVariableCppName_9254 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_9304 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = object ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_entry var_selfType_9404 ;
        GALGAS_bool var_selfIsMutable_9432 ;
        GALGAS_bool var_mutableProperties_9474 ;
        const bool optionalResult9384 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9404, var_selfIsMutable_9432, var_mutableProperties_9474) ;
        if (!optionalResult9384) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_9432.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 290)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = object ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 291)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_9623 = var_selfType_9404.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 293)) ;
          GALGAS_bool var_isConstant_9717 ;
          const GALGAS_incDecInstructionAST temp_6 = object ;
          GALGAS_bool joker_9700 ; // Joker input parameter
          var_propertyMap_9623.method_searchKey (temp_6.readProperty_mReceiverName (), joker_9700, var_isConstant_9717, var_targetType_9218, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 294)) ;
          var_nameForCheckingFormalParameterUsing_9304 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_incDecInstructionAST temp_7 = object ;
          var_targetVariableCppName_9254 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 296)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 297)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_9717.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = object ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 299)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_9474.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 301)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = object ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 302)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = object ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 305)) ;
        var_targetType_9218.drop () ; // Release error dropped variable
        var_targetVariableCppName_9254.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_9304.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = object ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_9218, var_targetVariableCppName_9254, var_nameForCheckingFormalParameterUsing_9304, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 327)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = object ;
  cEnumerator_lstringlist enumerator_11556 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11556.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_11609 = var_targetType_9218.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 336)) ;
    GALGAS_bool var_isPublic_11686 ;
    GALGAS_bool var_isConstant_11702 ;
    var_propertyMap_11609.method_searchKey (enumerator_11556.current_mValue (HERE), var_isPublic_11686, var_isConstant_11702, var_targetType_9218, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 337)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_11686.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 338)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_11556.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 339)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_11702.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_11556.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 342)) ;
      }
    }
    enumerator_11556.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_targetType_9218.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 346)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 346)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_incDecInstructionAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_9218.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)), fixItArray24  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 347)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_25 = object ;
  const GALGAS_incDecInstructionAST temp_26 = object ;
  const GALGAS_incDecInstructionAST temp_27 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_targetVariableCppName_9254, var_targetType_9218, temp_26.readProperty_mStructAttributeList (), temp_27.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 351)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_12954 ;
  GALGAS_string var_targetVariableCppName_13057 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = object ;
  GALGAS_string joker_13059 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_12954, var_targetVariableCppName_13057, joker_13059, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 371)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_13075 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13075.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_13128 = var_targetType_12954.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)) ;
    GALGAS_bool var_isPublic_13205 ;
    GALGAS_bool var_isConstant_13221 ;
    var_propertyMap_13128.method_searchKey (enumerator_13075.current_mValue (HERE), var_isPublic_13205, var_isConstant_13221, var_targetType_12954, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_13205.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 375)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_13075.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isConstant_13221.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_13075.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 379)) ;
      }
    }
    enumerator_13075.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_targetType_12954.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 383)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 383)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 383)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_incDecNoOVFInstructionAST temp_7 = object ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_targetType_12954.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)), fixItArray8  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 384)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_9 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_10 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_targetVariableCppName_13057, var_targetType_12954, temp_10.readProperty_mStructAttributeList (), temp_11.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 388)) ;
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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_14485 ;
    GALGAS_bool var_selfIsMutable_14513 ;
    GALGAS_bool var_unused_0_14535 ;
    const bool optionalResult14465 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14485, var_selfIsMutable_14513, var_unused_0_14535) ;
    if (!optionalResult14465) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14513.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 407)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 408)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_14485.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 411)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 411)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_selfType_14485.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 413)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 412)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = object ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_14485, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 420)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 416))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 416)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = object ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 424)) ;
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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_16734 ;
    GALGAS_bool var_selfIsMutable_16762 ;
    GALGAS_bool var_unused_0_16784 ;
    const bool optionalResult16714 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16734, var_selfIsMutable_16762, var_unused_0_16784) ;
    if (!optionalResult16714) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16762.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 461)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 462)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_16734.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 465)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 465)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 465)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_selfType_16734.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 467)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 467)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 466)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = object ;
      const GALGAS_selfIncDecInstructionAST temp_8 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_16734, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 474)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 470))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 470)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = object ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 478)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 539)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_19927 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_19965 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_19965.hasCurrentObject ()) {
    var_receiverCppName_19927.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_19965.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 542)) ;
    enumerator_19965.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = object ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19927.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 547)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 547)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 547)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 547)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 549)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 549)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19927.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 551)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 551)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 551)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 552)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 551)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 553)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 553)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 567)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_21163 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_21201 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_21201.hasCurrentObject ()) {
    var_receiverCppName_21163.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_21201.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 570)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 570)) ;
    enumerator_21201.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = object ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_21163.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 575)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_21163.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 577)) ;
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
  cEnumerator_ifExpressionList enumerator_12578 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_12578.hasCurrentObject ()) {
    switch (enumerator_12578.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_12710 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_12578.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12650_exp = extractPtr_12710->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12650_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 355)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_12878 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_12578.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12733_exp = extractPtr_12878->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_12753_typeName = extractPtr_12878->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12733_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 357)) ;
        {
        GALGAS_unifiedTypeMap_2D_entry joker_12876 ; // Joker input parameter
        GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, extractedValue_12753_typeName, joker_12876 COMMA_SOURCE_FILE ("instruction-if.galgas", 358)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_13320 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_12578.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12926_receiverExpression = extractPtr_13320->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_12939_parameters = extractPtr_13320->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_12926_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 360)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_13037 (extractedValue_12939_parameters, kENUMERATION_UP) ;
        while (enumerator_13037.hasCurrentObject ()) {
          switch (enumerator_13037.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_13191 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_13037.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_13118_expression = extractPtr_13191->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_13118_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
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
          enumerator_13037.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_12578.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 372)) ;
  const GALGAS_ifInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 373)) ;
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
  GALGAS_ifTestListForGeneration var_testListForGeneration_14785 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 410)) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_14808 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_14808.hasCurrentObject ()) {
    switch (enumerator_14808.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_15427 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_14808.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14880_exp = extractPtr_15427->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_15107 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_14880_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 417)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_15107, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 414)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_15270 ;
        {
        const GALGAS_ifInstructionAST temp_1 = object ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.readProperty_mEndOf_5F_if_5F_instruction (), var_analyzed_5F_if_5F_expression_15107, var_if_5F_expression_15270, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 422)) ;
        }
        var_testListForGeneration_14785.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_15270  COMMA_SOURCE_FILE ("instruction-if.galgas", 428))  COMMA_SOURCE_FILE ("instruction-if.galgas", 428)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 429)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 430)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_18893 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_14808.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15457_constantName = extractPtr_18893->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_15461_exp = extractPtr_18893->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_15481_typeName = extractPtr_18893->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_15704 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_15461_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 435)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_15704, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 432)) ;
        GALGAS_unifiedTypeMap_2D_entry var_castType_15761 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 441)) ;
        GALGAS_unifiedTypeMap_2D_entry var_testType_15809 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 442)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_analyzedExpression_15704.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 444)).getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 444)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_15481_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_15481_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 446)) ;
                var_castType_15761.drop () ; // Release error dropped variable
                var_testType_15809.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_15761 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15481_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 448)) ;
              var_testType_15809 = var_castType_15761 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_16344 = var_castType_15761 ;
              GALGAS_bool var_found_16381 = GALGAS_bool (kIsEqual, var_t_16344.objectCompare (var_analyzedExpression_15704.readProperty_mResultType ())) ;
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 453)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)).isValid ()) {
                uint32_t variant_16434 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 453)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)).uintValue () ;
                bool loop_16434 = true ;
                while (loop_16434) {
                  loop_16434 = var_found_16381.operator_not (SOURCE_FILE ("instruction-if.galgas", 454)).operator_and (var_t_16344.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 454)).operator_not (SOURCE_FILE ("instruction-if.galgas", 454)) COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).isValid () ;
                  if (loop_16434) {
                    loop_16434 = var_found_16381.operator_not (SOURCE_FILE ("instruction-if.galgas", 454)).operator_and (var_t_16344.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 454)).operator_not (SOURCE_FILE ("instruction-if.galgas", 454)) COMMA_SOURCE_FILE ("instruction-if.galgas", 454)).boolValue () ;
                  }
                  if (loop_16434 && (0 == variant_16434)) {
                    loop_16434 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 453)) ;
                  }
                  if (loop_16434) {
                    variant_16434 -- ;
                    var_t_16344 = var_t_16344.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 455)) ;
                    var_found_16381 = GALGAS_bool (kIsEqual, var_t_16344.objectCompare (var_analyzedExpression_15704.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_16381.operator_not (SOURCE_FILE ("instruction-if.galgas", 458)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_15481_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_15481_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)).add_operation (var_analyzedExpression_15704.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 459)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMap_2D_entry var_classType_17009 ;
            const bool optionalResult16979 = var_analyzedExpression_15704.readProperty_mResultType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 464)).optional_weakReferenceType (var_classType_17009) ;
            if (!optionalResult16979) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_15481_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_15761 = var_classType_17009 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_15761 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15481_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 468)) ;
              }
              var_testType_15809 = var_castType_15761 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_17283 = var_castType_15761 ;
              GALGAS_bool var_found_17318 = GALGAS_bool (kIsEqual, var_t_17283.objectCompare (var_analyzedExpression_15704.readProperty_mResultType ())) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_17318.boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_castType_15761.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 474)).method_weakReferenceType (var_testType_15809, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 474)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_17283.objectCompare (var_classType_17009)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_17318 = GALGAS_bool (true) ;
                  }
                }
              }
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 478)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 478)).isValid ()) {
                uint32_t variant_17540 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 478)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 478)).uintValue () ;
                bool loop_17540 = true ;
                while (loop_17540) {
                  loop_17540 = var_found_17318.operator_not (SOURCE_FILE ("instruction-if.galgas", 479)).operator_and (var_t_17283.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 479)).operator_not (SOURCE_FILE ("instruction-if.galgas", 479)) COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).isValid () ;
                  if (loop_17540) {
                    loop_17540 = var_found_17318.operator_not (SOURCE_FILE ("instruction-if.galgas", 479)).operator_and (var_t_17283.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 479)).operator_not (SOURCE_FILE ("instruction-if.galgas", 479)) COMMA_SOURCE_FILE ("instruction-if.galgas", 479)).boolValue () ;
                  }
                  if (loop_17540 && (0 == variant_17540)) {
                    loop_17540 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 478)) ;
                  }
                  if (loop_17540) {
                    variant_17540 -- ;
                    var_t_17283 = var_t_17283.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 480)) ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_17283.objectCompare (var_analyzedExpression_15704.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_17318 = GALGAS_bool (true) ;
                        var_castType_15761.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 483)).method_weakReferenceType (var_testType_15809, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 483)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_17283.objectCompare (var_classType_17009)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_17318 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_17318.operator_not (SOURCE_FILE ("instruction-if.galgas", 488)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_15481_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (var_castType_15761.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (var_analyzedExpression_15704.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 489)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_15704.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (var_analyzedExpression_15704.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 493)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 494)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 493)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 497)) ;
        }
        GALGAS_string var_targetVariableCppName_18445 = GALGAS_string ("var_").add_operation (extractedValue_15457_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).add_operation (extractedValue_15457_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)).getter_string (SOURCE_FILE ("instruction-if.galgas", 499)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 499)) ;
        {
        extensionSetter_insertLocalConstant (ioArgument_ioVariableMap, extractedValue_15457_constantName, var_castType_15761, var_targetVariableCppName_18445, var_targetVariableCppName_18445, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 500)) ;
        }
        var_testListForGeneration_14785.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_18445, var_analyzedExpression_15704, var_castType_15761, var_testType_15809  COMMA_SOURCE_FILE ("instruction-if.galgas", 506))  COMMA_SOURCE_FILE ("instruction-if.galgas", 506)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_19290 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_14808.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_18941_receiverExpression = extractPtr_19290->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_18960_optionalMethodName = extractPtr_19290->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_18971_parameters = extractPtr_19290->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_18941_receiverExpression, extractedValue_18960_optionalMethodName, extractedValue_18971_parameters, var_testListForGeneration_14785, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 513)) ;
        }
      }
      break ;
    }
    enumerator_14808.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_19676 ;
  {
  const GALGAS_ifInstructionAST temp_16 = object ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 530)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 531)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 532)), temp_16.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_19676, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 526)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = object ;
  GALGAS_ifExpressionList var_expressions_19698 = temp_17.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_19745 ; // Joker input parameter
  var_expressions_19698.setter_popLast (joker_19745, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 538)) ;
  }
  cEnumerator_ifExpressionList enumerator_19756 (var_expressions_19698, kENUMERATION_UP) ;
  while (enumerator_19756.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_18 = object ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_18.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 540)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_19 = object ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 541)) ;
    }
    enumerator_19756.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_20 = object ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 543)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_20349 ;
  {
  const GALGAS_ifInstructionAST temp_21 = object ;
  const GALGAS_ifInstructionAST temp_22 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 549)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 550)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 551)), temp_21.readProperty_m_5F_else_5F_instructionList (), temp_22.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_20349, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 545)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_23 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 557)) ;
  }
  const GALGAS_ifInstructionAST temp_24 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_24.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_14785, var_then_5F_instructionList_19676, var_else_5F_instructionList_20349  COMMA_SOURCE_FILE ("instruction-if.galgas", 559))  COMMA_SOURCE_FILE ("instruction-if.galgas", 559)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_21648 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 585)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_21648, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 582)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 590)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 591)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_21800 = var_receiverExpression_21648.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_21876 = var_receiverType_21800.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 594)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_21995 ;
  const cMapElement_optionalMethodMap * objectArray_22002 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_21876.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (NULL != objectArray_22002) {
      macroValidSharedObject (objectArray_22002, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_21995 = objectArray_22002->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_22119 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_22204 (var_optionalMethodMap_21876, kENUMERATION_UP) ;
    while (enumerator_22204.hasCurrentObject ()) {
      var_s_22119.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_22204.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 602)) ;
      enumerator_22204.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_22119, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 604)) ;
    var_optionalMethodSignature_21995.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 607)).objectCompare (var_optionalMethodSignature_21995.getter_length (SOURCE_FILE ("instruction-if.galgas", 607)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).add_operation (var_receiverType_21800.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).add_operation (var_optionalMethodSignature_21995.getter_length (SOURCE_FILE ("instruction-if.galgas", 610)).getter_string (SOURCE_FILE ("instruction-if.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 611)).getter_string (SOURCE_FILE ("instruction-if.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 611)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 608)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_22827 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 613)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_22872 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_22935 (var_optionalMethodSignature_21995, kENUMERATION_UP) ;
    while (enumerator_22872.hasCurrentObject () && enumerator_22935.hasCurrentObject ()) {
      switch (enumerator_22872.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_23890 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_22872.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_23031_expression = extractPtr_23890->mAssociatedValue0 ;
          const GALGAS_location extractedValue_23040_location = extractPtr_23890->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_23303 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_23031_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22935.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_23303, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 618)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22872.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 627)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_23392 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 627)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_23392) ;
              inCompiler->emitSemanticError (enumerator_22872.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_23392, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 628)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 628)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 628)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_22935.current_mFormalArgumentType (HERE), var_exp_23303.readProperty_mResultType (), extractedValue_23040_location, var_exp_23303, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 632)) ;
          }
          var_actualParameterList_22827.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_23303  COMMA_SOURCE_FILE ("instruction-if.galgas", 633))  COMMA_SOURCE_FILE ("instruction-if.galgas", 633)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_25065 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_22872.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_23941_actualTypeName = extractPtr_25065->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_23963_constantName = extractPtr_25065->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_23941_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)).objectCompare (extractedValue_23941_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638))) ;
              inCompiler->emitSemanticError (extractedValue_23941_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 637)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 637)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 636)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_24262 = GALGAS_string ("var_").add_operation (extractedValue_23963_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 640)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 640)).add_operation (extractedValue_23963_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 641)).getter_string (SOURCE_FILE ("instruction-if.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 641)) ;
          {
          extensionSetter_insertLocalConstant (ioArgument_ioVariableMap, extractedValue_23963_constantName, enumerator_22935.current_mFormalArgumentType (HERE), var_targetVariableCppName_24262, var_targetVariableCppName_24262, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 642)) ;
          }
          var_actualParameterList_22827.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)), var_targetVariableCppName_24262  COMMA_SOURCE_FILE ("instruction-if.galgas", 648))  COMMA_SOURCE_FILE ("instruction-if.galgas", 648)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22872.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_24729 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_24729) ;
              inCompiler->emitSemanticError (enumerator_22872.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_24729, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 651)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_26283 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_22872.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_25116_actualTypeName = extractPtr_26283->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_25138_variableName = extractPtr_26283->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_25116_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)).objectCompare (extractedValue_25116_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 659))) ;
              inCompiler->emitSemanticError (extractedValue_25116_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 658)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 658)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 657)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_25438 = GALGAS_string ("var_").add_operation (extractedValue_25138_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).add_operation (extractedValue_25138_variableName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 662)).getter_string (SOURCE_FILE ("instruction-if.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 662)) ;
          {
          extensionSetter_insertDefinedLocalVariable (ioArgument_ioVariableMap, extractedValue_25138_variableName, GALGAS_bool (true), enumerator_22935.current_mFormalArgumentType (HERE), var_targetVariableCppName_25438, var_targetVariableCppName_25438, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 663)) ;
          }
          var_actualParameterList_22827.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)), var_targetVariableCppName_25438  COMMA_SOURCE_FILE ("instruction-if.galgas", 670))  COMMA_SOURCE_FILE ("instruction-if.galgas", 670)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22872.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_25947 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_25947) ;
              inCompiler->emitSemanticError (enumerator_22872.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25947, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 673)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 673)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 673)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_26980 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_22872.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_26326_checkSelector = extractPtr_26980->mAssociatedValue0 ;
          const GALGAS_location extractedValue_26335_location = extractPtr_26980->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_26339_idx = extractPtr_26980->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_26376 = GALGAS_string ("var_unused_").add_operation (extractedValue_26339_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)).add_operation (extractedValue_26335_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)).getter_string (SOURCE_FILE ("instruction-if.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)) ;
          var_actualParameterList_22827.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_22935.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)), var_targetVariableCppName_26376  COMMA_SOURCE_FILE ("instruction-if.galgas", 679))  COMMA_SOURCE_FILE ("instruction-if.galgas", 679)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_26326_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_22872.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_22935.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 681)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26644 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 681)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_26644) ;
              inCompiler->emitSemanticError (enumerator_22872.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26644, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 682)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 682)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 682)) ;
            }
          }
        }
        break ;
      }
      enumerator_22872.gotoNextObject () ;
      enumerator_22935.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_21648, constinArgument_inOptionalMethodName, var_actualParameterList_22827  COMMA_SOURCE_FILE ("instruction-if.galgas", 688))  COMMA_SOURCE_FILE ("instruction-if.galgas", 688)) ;
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
  GALGAS_string var_testVar_30075 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 768)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 769)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_30075, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 770)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 770)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = object ;
  cEnumerator_ifTestListForGeneration enumerator_30239 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_30239.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30075, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 772)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 772)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 772)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 773)) ;
    }
    switch (enumerator_30239.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_30676 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_30239.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_30413_exp = extractPtr_30676->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_30593 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_30413_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_30593, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 776)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_30075.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 783)).add_operation (var_cppVarName_30593, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 783)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 783)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_31405 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_30239.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_30710_targetVarCppName = extractPtr_31405->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_30714_exp = extractPtr_31405->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_30725_targetType = extractPtr_31405->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_30734_testType = extractPtr_31405->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_30762 = extractedValue_30725_targetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 785)) ;
        GALGAS_string var_testTypeName_30825 = extractedValue_30734_testType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 786)) ;
        GALGAS_string var_cppVarName_31040 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_30714_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31040, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 787)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_30762, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 794)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 794)).add_operation (extractedValue_30710_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 794)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 794)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_30825, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 795)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 795)).add_operation (var_cppVarName_31040, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 795)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 795)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 795)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_30710_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 796)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 796)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 796)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30075, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 797)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 797)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 797)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 798)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_33136 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_30239.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31453_receiverExpression = extractPtr_33136->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_31472_optionalMethodName = extractPtr_33136->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_31483_parameters = extractPtr_33136->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_31678 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_31453_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31678, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 800)) ;
        GALGAS_stringlist var_actualParameterNameList_31732 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 807)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_31758 (extractedValue_31483_parameters, kENUMERATION_UP) ;
        while (enumerator_31758.hasCurrentObject ()) {
          switch (enumerator_31758.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_32121 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_31758.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_31839_expression = extractPtr_32121->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_32055 ;
              callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_31839_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_32055, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 811)) ;
              var_actualParameterNameList_31732.addAssign_operation (var_argumentCppName_32055  COMMA_SOURCE_FILE ("instruction-if.galgas", 818)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_32333 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_31758.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32159_typeName = extractPtr_32333->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32172_constantName = extractPtr_32333->mAssociatedValue1 ;
              var_actualParameterNameList_31732.addAssign_operation (extractedValue_32172_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 820)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32159_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 821)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 821)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 821)).add_operation (extractedValue_32172_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 821)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 821)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 821)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_32545 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_31758.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32371_typeName = extractPtr_32545->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32384_variableName = extractPtr_32545->mAssociatedValue1 ;
              var_actualParameterNameList_31732.addAssign_operation (extractedValue_32384_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 823)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32371_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 824)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (extractedValue_32384_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 824)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 824)) ;
            }
            break ;
          }
          enumerator_31758.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_32592 = GALGAS_string ("optionalResult").add_operation (extractedValue_31472_optionalMethodName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 827)).getter_string (SOURCE_FILE ("instruction-if.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 827)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_32592, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (var_cppVarName_31678, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 828)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_31472_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 829)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 829)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 829)) ;
        cEnumerator_stringlist enumerator_32816 (var_actualParameterNameList_31732, kENUMERATION_UP) ;
        while (enumerator_32816.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_32816.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 832)) ;
          if (enumerator_32816.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 834)) ;
          }
          enumerator_32816.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 836)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_32592, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 837)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 837)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30075, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 838)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 838)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 838)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 839)) ;
      }
      break ;
    }
    enumerator_30239.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30075, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 843)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 843)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 843)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 844)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 852)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = object ;
  cEnumerator_ifTestListForGeneration enumerator_33483 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_33483.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 854)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 855)) ;
    enumerator_33483.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_length (SOURCE_FILE ("instruction-if.galgas", 858)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_30075, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 859)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 859)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 859)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 860)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 868)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 143)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_5668 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_5668 COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 154)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6363 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mConstantTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 168)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_6496 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)).getter_string (SOURCE_FILE ("instruction-let.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = object ;
  extensionSetter_insertUndefinedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_6363, var_targetVariableCppName_6496, var_targetVariableCppName_6496, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_6363, var_targetVariableCppName_6496  COMMA_SOURCE_FILE ("instruction-let.galgas", 177))  COMMA_SOURCE_FILE ("instruction-let.galgas", 177)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_7658 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 195)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7658, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 192)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_7717 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 201)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 201)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 201)).getter_string (SOURCE_FILE ("instruction-let.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 201)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = object ;
  extensionSetter_insertLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_7658.readProperty_mResultType (), var_targetVariableCppName_7717, var_targetVariableCppName_7717, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 202)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_7658.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_7717, var_expression_7658  COMMA_SOURCE_FILE ("instruction-let.galgas", 204))  COMMA_SOURCE_FILE ("instruction-let.galgas", 204)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_8658 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mOptionalTypeName (), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 220)) ;
  GALGAS_semanticExpressionForGeneration var_expression_9031 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_8658, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9031, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 222)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  GALGAS_string var_targetVariableCppName_9090 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 231)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 231)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 231)).getter_string (SOURCE_FILE ("instruction-let.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 231)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = object ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = object ;
      extensionSetter_insertLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_8658, var_targetVariableCppName_9090, var_targetVariableCppName_9090, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 233)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = object ;
    extensionSetter_insertDefinedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_8658, var_targetVariableCppName_9090, var_targetVariableCppName_9090, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 235)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_8658, var_expression_9031.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_9031, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 238)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_8658, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_9090, var_expression_9031  COMMA_SOURCE_FILE ("instruction-let.galgas", 240))  COMMA_SOURCE_FILE ("instruction-let.galgas", 240)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 275)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTargetType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 276)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 276)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 276)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 276)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 288)) ;
  GALGAS_string var_sourceVar_12027 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12027, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 289)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mTargetType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)).add_operation (var_sourceVar_12027, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 296)) ;
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
  cEnumerator_logListAST enumerator_3612 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_3612.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_3612.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 107)) ;
    enumerator_3612.gotoNextObject () ;
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
  cEnumerator_logListAST enumerator_4305 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_4305.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_4589 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_4305.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 126)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4589, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 123)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_4305.current_mLogMessage (HERE), var_expression_4589  COMMA_SOURCE_FILE ("instruction-log.galgas", 132))  COMMA_SOURCE_FILE ("instruction-log.galgas", 132)) ;
    enumerator_4305.gotoNextObject () ;
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
  GALGAS_string var_logVar_5741 ;
  const GALGAS_logInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_5741, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 157)) ;
  const GALGAS_logInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_5741.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 164)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 164)) ;
  const GALGAS_logInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 165)) ;
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
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionWithVariantAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionWithVariantAST * object = (const cPtr_loopInstructionWithVariantAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionWithVariantAST) ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 126)) ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 127)) ;
  const GALGAS_loopInstructionWithVariantAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 128)) ;
  const GALGAS_loopInstructionWithVariantAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 129)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionWithVariantAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionWithVariantAST.mSlotID,
                                                          extensionMethod_loopInstructionWithVariantAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionWithVariantAST_enterInstructionInSemanticContext (defineExtensionMethod_loopInstructionWithVariantAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionWithVariantAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionWithVariantAST * object = (const cPtr_loopInstructionWithVariantAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionWithVariantAST) ;
  GALGAS_semanticExpressionForGeneration var_variantExpression_5821 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 146)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_5821, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 143)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variantExpression_5821.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithVariantAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 154)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 154)).add_operation (var_variantExpression_5821.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 154)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 154)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 153)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_6421 ;
  const GALGAS_loopInstructionWithVariantAST temp_4 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 160)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_6421, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 157)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_loopExpression_6421.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_loopInstructionWithVariantAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)).add_operation (var_loopExpression_6421.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 168)), fixItArray7  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 167)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 171)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7251 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_8 = object ;
  const GALGAS_loopInstructionWithVariantAST temp_9 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 177)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 179)), temp_8.readProperty_mFirstInstructions (), temp_9.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7251, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 173)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_7650 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_10 = object ;
  const GALGAS_loopInstructionWithVariantAST temp_11 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 190)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 191)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 192)), temp_10.readProperty_mSecondInstructions (), temp_11.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_7650, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 186)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_12 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_12.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 199)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::constructor_new (temp_13.readProperty_mInstructionLocation (), var_variantExpression_5821, var_first_5F_instructionList_7251, var_loopExpression_6421, var_second_5F_instructionList_7650  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 201))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 201)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionWithVariantAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionWithVariantAST.mSlotID,
                                                   extensionMethod_loopInstructionWithVariantAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionWithVariantAST_analyzeSemanticInstruction (defineExtensionMethod_loopInstructionWithVariantAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionWithVariantForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionWithVariantForGeneration * object = (const cPtr_loopInstructionWithVariantForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionWithVariantForGeneration) ;
  GALGAS_string var_variantCppVarName_9241 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9241, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 231)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_9241, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 238)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 239)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = object ;
  GALGAS_string var_variantVar_9379 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9379, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)).add_operation (var_variantCppVarName_9241, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 241)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = object ;
  GALGAS_string var_loopVar_9563 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9563, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)).add_operation (var_loopVar_9563, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 244)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 243)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 245)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 246)) ;
  }
  GALGAS_string var_loopExpressionVar_10143 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10143, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9563.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (var_loopExpressionVar_10143, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)).add_operation (var_loopVar_9563, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).add_operation (var_loopVar_9563, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)).add_operation (var_loopExpressionVar_10143, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_9563, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)).add_operation (var_variantVar_9379, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)).add_operation (var_loopVar_9563, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)).add_operation (var_loopVar_9563, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_9379, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionWithVariantForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration.mSlotID,
                                            extensionMethod_loopInstructionWithVariantForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionWithVariantForGeneration_generateInstruction (defineExtensionMethod_loopInstructionWithVariantForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionWithoutVariantAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionWithoutVariantAST * object = (const cPtr_loopInstructionWithoutVariantAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionWithoutVariantAST) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 108)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 109)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 110)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionWithoutVariantAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST.mSlotID,
                                                          extensionMethod_loopInstructionWithoutVariantAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionWithoutVariantAST_enterInstructionInSemanticContext (defineExtensionMethod_loopInstructionWithoutVariantAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionWithoutVariantAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                         GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionWithoutVariantAST * object = (const cPtr_loopInstructionWithoutVariantAST *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionWithoutVariantAST) ;
  GALGAS_semanticExpressionForGeneration var_loopExpression_5244 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 127)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_5244, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 124)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression_5244.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).add_operation (var_loopExpression_5244.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 134)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 138)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_6074 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = object ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 144)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 146)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6074, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 140)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_6473 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = object ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 157)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 158)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 159)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6473, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 153)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 166)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_6074, var_loopExpression_5244, var_second_5F_instructionList_6473  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 168))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 168)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionWithoutVariantAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST.mSlotID,
                                                   extensionMethod_loopInstructionWithoutVariantAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionWithoutVariantAST_analyzeSemanticInstruction (defineExtensionMethod_loopInstructionWithoutVariantAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_loopInstructionWithoutVariantForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionWithoutVariantForGeneration * object = (const cPtr_loopInstructionWithoutVariantForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionWithoutVariantForGeneration) ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_0 = object ;
  GALGAS_string var_loopVar_8107 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_8107, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 195)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_8107, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 196)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)) ;
  }
  GALGAS_string var_loopExpressionVar_8713 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8713, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_8107.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (var_loopExpressionVar_8713, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)).add_operation (var_loopVar_8107, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 214)).add_operation (var_loopVar_8107, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (var_loopExpressionVar_8713, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 213)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_8107, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)) ;
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 228)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_loopInstructionWithoutVariantForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration.mSlotID,
                                            extensionMethod_loopInstructionWithoutVariantForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_loopInstructionWithoutVariantForGeneration_generateInstruction (defineExtensionMethod_loopInstructionWithoutVariantForGeneration_generateInstruction, NULL) ;

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
  cEnumerator_semanticExpressionListAST enumerator_8370 (temp_0.readProperty_mMatchedExpressionList (), kENUMERATION_UP) ;
  while (enumerator_8370.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_8370.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 235)) ;
    enumerator_8370.gotoNextObject () ;
  }
  const GALGAS_matchInstructionAST temp_1 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_8515 (temp_1.readProperty_mMatchInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_8515.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_8515.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 238)) ;
    enumerator_8515.gotoNextObject () ;
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
  GALGAS_semanticExpressionListForGeneration var_expressionList_9233 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 252)) ;
  const GALGAS_matchInstructionAST temp_0 = object ;
  cEnumerator_semanticExpressionListAST enumerator_9318 (temp_0.readProperty_mMatchedExpressionList (), kENUMERATION_UP) ;
  while (enumerator_9318.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_9642 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_9318.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-match.galgas", 258)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_9642, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 255)) ;
    var_expressionList_9233.addAssign_operation (var_matchedExpression_9642  COMMA_SOURCE_FILE ("instruction-match.galgas", 263)) ;
    GALGAS_unifiedTypeMap_2D_entry var_type_9757 = var_matchedExpression_9642.readProperty_mResultType () ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_type_9757.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 266)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 266)).operator_not (SOURCE_FILE ("instruction-match.galgas", 266)).operator_and (GALGAS_bool (kIsNotEqual, var_type_9757.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 266)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 266)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 266)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9318.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_9757.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 268)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 268)), fixItArray2  COMMA_SOURCE_FILE ("instruction-match.galgas", 267)) ;
      }
    }
    enumerator_9318.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 272)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_10175 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 273)) ;
  const GALGAS_matchInstructionAST temp_3 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_10315 (temp_3.readProperty_mMatchInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_10315.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_10399 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 276)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_10453 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 277)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_expressionList_9233.getter_length (SOURCE_FILE ("instruction-match.galgas", 278)).objectCompare (enumerator_10315.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 278)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_semanticExpressionListForGeneration enumerator_10569 (var_expressionList_9233, kENUMERATION_UP) ;
        cEnumerator_matchEntryListAST enumerator_10652 (enumerator_10315.current_mMatchEntryList (HERE), kENUMERATION_UP) ;
        while (enumerator_10569.hasCurrentObject () && enumerator_10652.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_type_10692 = enumerator_10569.current_mExpression (HERE).readProperty_mResultType () ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_type_10692.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 281)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 281)).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = enumerator_10652.current_mIsType (HERE).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_unifiedTypeMap_2D_entry var_namedType_10821 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 283)) ;
                  GALGAS_unifiedTypeMap_2D_entry var_t_10979 = var_type_10692 ;
                  GALGAS_bool var_found_11014 = GALGAS_bool (kIsEqual, var_t_10979.objectCompare (var_namedType_10821)) ;
                  if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-match.galgas", 286)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 286)).isValid ()) {
                    uint32_t variant_11048 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-match.galgas", 286)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 286)).uintValue () ;
                    bool loop_11048 = true ;
                    while (loop_11048) {
                      loop_11048 = var_found_11014.operator_not (SOURCE_FILE ("instruction-match.galgas", 287)).operator_and (var_t_10979.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 287)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 287)).operator_not (SOURCE_FILE ("instruction-match.galgas", 287)) COMMA_SOURCE_FILE ("instruction-match.galgas", 287)).isValid () ;
                      if (loop_11048) {
                        loop_11048 = var_found_11014.operator_not (SOURCE_FILE ("instruction-match.galgas", 287)).operator_and (var_t_10979.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 287)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 287)).operator_not (SOURCE_FILE ("instruction-match.galgas", 287)) COMMA_SOURCE_FILE ("instruction-match.galgas", 287)).boolValue () ;
                      }
                      if (loop_11048 && (0 == variant_11048)) {
                        loop_11048 = false ;
                        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 286)) ;
                      }
                      if (loop_11048) {
                        variant_11048 -- ;
                        var_t_10979 = var_t_10979.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 288)) ;
                        var_found_11014 = GALGAS_bool (kIsEqual, var_t_10979.objectCompare (var_namedType_10821)) ;
                      }
                    }
                  }
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_found_11014.operator_not (SOURCE_FILE ("instruction-match.galgas", 291)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 293)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 293)).add_operation (var_type_10692.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 293)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 293)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 292)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_9 = kBoolTrue ;
                    if (kBoolTrue == test_9) {
                      test_9 = GALGAS_bool (kIsStrictSup, enumerator_10652.current_mLocalConstantName (HERE).readProperty_string ().getter_length (SOURCE_FILE ("instruction-match.galgas", 294)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_9) {
                        var_localConstantList_10399.addAssign_operation (var_t_10979, enumerator_10652.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 295)) ;
                      }
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_location (), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_10569.current_mExpression (HERE).readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 299)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 299)), fixItArray10  COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
              }
              var_matchListForGeneration_10453.addAssign_operation (GALGAS_bool (true), enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_string (), enumerator_10652.current_mLocalConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-match.galgas", 301)) ;
            }
          }
          if (kBoolFalse == test_5) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_type_10692.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 302)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 302)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = enumerator_10652.current_mIsType (HERE).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_location (), GALGAS_string ("a constant of the '@").add_operation (enumerator_10569.current_mExpression (HERE).readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 305)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 305)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = var_type_10692.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 306)).getter_hasKey (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-match.galgas", 306)).operator_not (SOURCE_FILE ("instruction-match.galgas", 306)).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      TC_Array <C_FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 308)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 308)).add_operation (enumerator_10569.current_mExpression (HERE).readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 308)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 308)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
                    }
                  }
                }
                var_matchListForGeneration_10453.addAssign_operation (GALGAS_bool (false), enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_string (), enumerator_10569.current_mExpression (HERE).readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313))  COMMA_SOURCE_FILE ("instruction-match.galgas", 310)) ;
              }
            }
            if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_10652.current_mTypeNameOrEnumerationConstantName (HERE).readProperty_location (), GALGAS_string ("internal error"), fixItArray16  COMMA_SOURCE_FILE ("instruction-match.galgas", 315)) ;
            }
          }
          enumerator_10569.gotoNextObject () ;
          enumerator_10652.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_10315.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_9233.getter_length (SOURCE_FILE ("instruction-match.galgas", 320)).getter_string (SOURCE_FILE ("instruction-match.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 320)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 320)).add_operation (enumerator_10315.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 321)).getter_string (SOURCE_FILE ("instruction-match.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 320)), fixItArray17  COMMA_SOURCE_FILE ("instruction-match.galgas", 319)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_13439 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_10399, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 329)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 330)), enumerator_10315.current_mMatchBranchInstructionList (HERE), enumerator_10315.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_13439, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 324)) ;
    }
    var_matchInstructionBranchList_10175.addAssign_operation (var_matchListForGeneration_10453, var_instructionList_13439  COMMA_SOURCE_FILE ("instruction-match.galgas", 337)) ;
    enumerator_10315.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_13926 ;
  {
  const GALGAS_matchInstructionAST temp_18 = object ;
  const GALGAS_matchInstructionAST temp_19 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 344)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 345)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 346)), temp_18.readProperty_mElseInstructionList (), temp_19.readProperty_mEndOf_5F_match_5F_instruction (), ioArgument_ioVariableMap, var_elseInstructionList_13926, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 340)) ;
  }
  {
  const GALGAS_matchInstructionAST temp_20 = object ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_match_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 353)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_9233, var_matchInstructionBranchList_10175, var_elseInstructionList_13926  COMMA_SOURCE_FILE ("instruction-match.galgas", 355))  COMMA_SOURCE_FILE ("instruction-match.galgas", 355)) ;
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
  GALGAS_stringlist var_receiverList_15919 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 396)) ;
  const GALGAS_matchInstructionForGeneration temp_0 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15954 (temp_0.readProperty_mMatchedExpressionList (), kENUMERATION_UP) ;
  while (enumerator_15954.hasCurrentObject ()) {
    GALGAS_string var_variable_16138 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_15954.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_16138, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 398)) ;
    var_receiverList_15919.addAssign_operation (var_variable_16138  COMMA_SOURCE_FILE ("instruction-match.galgas", 399)) ;
    enumerator_15954.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 401)) ;
  cEnumerator_stringlist enumerator_16217 (var_receiverList_15919, kENUMERATION_UP) ;
  while (enumerator_16217.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16217.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 403)) ;
    if (enumerator_16217.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 404)) ;
    }
    enumerator_16217.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 406)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 407)) ;
  }
  const GALGAS_matchInstructionForGeneration temp_1 = object ;
  cEnumerator_matchInstructionBranchListForGeneration enumerator_16455 (temp_1.readProperty_mMatchInstructionBranchList (), kENUMERATION_UP) ;
  while (enumerator_16455.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 409)) ;
    cEnumerator_matchListForGeneration enumerator_16596 (enumerator_16455.current_mMatchListForGeneration (HERE), kENUMERATION_UP) ;
    cEnumerator_stringlist enumerator_16633 (var_receiverList_15919, kENUMERATION_UP) ;
    while (enumerator_16596.hasCurrentObject () && enumerator_16633.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = enumerator_16596.current_mIsType (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_16596.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 412)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 412)).add_operation (enumerator_16633.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 413)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 413)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 412)) ;
        }
      }
      if (kBoolFalse == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_16633.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 415)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 415)).add_operation (enumerator_16596.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 415)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 416)).add_operation (enumerator_16596.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 417)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 415)) ;
      }
      if (enumerator_16596.hasNextObject () && enumerator_16633.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 419)) ;
      }
      enumerator_16596.gotoNextObject () ;
      enumerator_16633.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 421)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_16455.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 422)) ;
    }
    if (enumerator_16455.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 430)) ;
    }
    enumerator_16455.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 432)) ;
  {
  const GALGAS_matchInstructionForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 433)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 441)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 442)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 443)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 52)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_3114 ;
  const GALGAS_messageInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 69)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3114, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 66)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_3114.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the expression has the '@").add_operation (var_expression_3114.readProperty_mResultType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 77)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 77)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 76)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_3114, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-message.galgas", 80))  COMMA_SOURCE_FILE ("instruction-message.galgas", 80)) ;
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
  GALGAS_string var_messageCppVarName_4608 ;
  const GALGAS_messageInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4608, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 104)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 112)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 112)).add_operation (var_messageCppVarName_4608, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 112)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 113)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 114)) COMMA_SOURCE_FILE ("instruction-message.galgas", 114)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 70)) ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  cEnumerator_actualParameterListAST enumerator_2832 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2832.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_2832.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 72)) ;
    enumerator_2832.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3789 ;
  const GALGAS_methodCallInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 91)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_3789, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 88)) ;
  GALGAS_methodKind var_kind_3925 ;
  GALGAS_formalParameterSignature var_routineSignature_3951 ;
  GALGAS_bool var_hasCompilerArgument_3987 ;
  GALGAS_instanceMethodMutability var_mutability_4014 ;
  GALGAS_string var_errorMessage_4036 ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  GALGAS_location joker_3957 ; // Joker input parameter
  GALGAS_methodQualifier joker_3993 ; // Joker input parameter
  var_receiverExpression_3789.readProperty_mResultType ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)).method_searchKey (temp_1.readProperty_mMethodName (), var_kind_3925, var_routineSignature_3951, joker_3957, var_hasCompilerArgument_3987, joker_3993, var_mutability_4014, var_errorMessage_4036, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_4036.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), var_errorMessage_4036, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 108)) ;
    }
  }
  switch (var_mutability_4014.enumValue ()) {
  case GALGAS_instanceMethodMutability::kNotBuilt:
    break ;
  case GALGAS_instanceMethodMutability::kEnum_constantMethod:
    {
    }
    break ;
  case GALGAS_instanceMethodMutability::kEnum_mutatingMethod:
    {
      const GALGAS_methodCallInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mMethodName ().readProperty_location (), GALGAS_string ("not handled yet"), fixItArray6  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 113)) ;
    }
    break ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4684 ;
  {
  const GALGAS_methodCallInstructionAST temp_7 = object ;
  const GALGAS_methodCallInstructionAST temp_8 = object ;
  const GALGAS_methodCallInstructionAST temp_9 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_7.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_8.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 121)), var_routineSignature_3951, temp_9.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4684, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_4750 = var_receiverExpression_3789.readProperty_mResultType () ;
  GALGAS_bool var_searching_4799 = GALGAS_bool (true) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 131)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_10) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 132)).isValid ()) {
        uint32_t variant_4848 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 132)).uintValue () ;
        bool loop_4848 = true ;
        while (loop_4848) {
          loop_4848 = var_searching_4799.isValid () ;
          if (loop_4848) {
            loop_4848 = var_searching_4799.boolValue () ;
          }
          if (loop_4848 && (0 == variant_4848)) {
            loop_4848 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 132)) ;
          }
          if (loop_4848) {
            variant_4848 -- ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = var_baseType_4750.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 133)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 133)).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_searching_4799 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                const GALGAS_methodCallInstructionAST temp_13 = object ;
                test_12 = var_baseType_4750.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 136)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 136)).getter_hasKey (temp_13.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 136)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  var_baseType_4750 = var_baseType_4750.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 137)) ;
                }
              }
              if (kBoolFalse == test_12) {
                var_searching_4799 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_14 = object ;
  const GALGAS_methodCallInstructionAST temp_15 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_14.readProperty_mInstructionLocation (), var_receiverExpression_3789.readProperty_mResultType (), var_receiverExpression_3789, temp_15.readProperty_mMethodName ().readProperty_string (), var_kind_3925, var_actualParameterListForGeneration_4684, var_hasCompilerArgument_3987, var_baseType_4750  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 145))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 145)) ;
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
  GALGAS_string var_receiverCppName_6814 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_6814, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_6814 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_6907 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 184)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_6959 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
  GALGAS_stringlist var_inputVariableList_7000 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 186)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_7041 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7041.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7284 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_7041.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6959, var_inputVariableList_7000, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7284, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 188)) ;
    var_parameterCppNameList_6907.addAssign_operation (var_parameterCppName_7284  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)) ;
    enumerator_7041.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = object ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = object ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_3.readProperty_mMethodBaseType ().getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 194)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = object ;
        test_5 = temp_6.readProperty_mReceiverType ().getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)).getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 195)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = object ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)).add_operation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 197)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 197)).add_operation (var_receiverCppName_6814, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 198)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 200)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 200)).add_operation (var_receiverCppName_6814, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 201)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 200)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_6814.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 204)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_8184 (var_parameterCppNameList_6907, kENUMERATION_UP) ;
  while (enumerator_8184.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8184.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)) ;
    if (enumerator_8184.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)) ;
    }
    enumerator_8184.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_6907.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = object ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_11) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_methodCallInstructionForGeneration temp_15 = object ;
      test_14 = temp_15.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 217)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 219)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 221)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 223)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 223)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 223)) ;
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
  cEnumerator_actualParameterListAST enumerator_2471 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2471.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_2471.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 60)) ;
    enumerator_2471.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_3168 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 75)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3168 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_3473 ;
  GALGAS_bool var_isInternal_3500 ;
  const GALGAS_procCallInstructionAST temp_1 = object ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().method_searchKey (temp_1.readProperty_mRoutineName (), var_routineSignature_3473, var_isInternal_3500, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 78)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3500.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_3578 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().getter_locationForKey (temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 85)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 86)).objectCompare (var_procDeclarationLocation_3578.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 86)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3578.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4309 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = object ;
  const GALGAS_procCallInstructionAST temp_9 = object ;
  const GALGAS_procCallInstructionAST temp_10 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_8.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (temp_9.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)), var_routineSignature_3473, temp_10.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4309, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 91)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.readProperty_mRoutineName (), var_actualParameterListForGeneration_4309  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 104))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 104)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 127)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)) ;
  GALGAS_stringlist var_parameterCppNameList_5473 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5525 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
  GALGAS_stringlist var_inputVariableList_5566 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_5595 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5595.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5880 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5595.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5525, var_inputVariableList_5566, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5880, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 134)) ;
    var_parameterCppNameList_5473.addAssign_operation (var_parameterCppName_5880  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
    enumerator_5595.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_mRoutineName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 146)) ;
  cEnumerator_stringlist enumerator_6071 (var_parameterCppNameList_5473, kENUMERATION_UP) ;
  while (enumerator_6071.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6071.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
    enumerator_6071.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 61)) ;
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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_3055 ;
    GALGAS_bool var_selfIsMutable_3083 ;
    GALGAS_bool var_unused_0_3105 ;
    const bool optionalResult3035 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3055, var_selfIsMutable_3083, var_unused_0_3105) ;
    if (!optionalResult3035) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_3083.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 76)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 77)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_3508 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_3055, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3508, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 80)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_3055, var_expression_3508.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_3508, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 89)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_selfType_3055, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 95)).readProperty_string (), var_expression_3508, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 91))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 91)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = object ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 100)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 192)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 198)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)) ;
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
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)) ;
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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_9004 ;
    GALGAS_bool var_selfIsMutable_9038 ;
    GALGAS_bool var_unused_0_9066 ;
    const bool optionalResult8978 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9004, var_selfIsMutable_9038, var_unused_0_9066) ;
    if (!optionalResult8978) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_9038.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 230)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_9585 = var_selfType_9004.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 241)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_9585.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 242)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_selfType_9004.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 243)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = object ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 246)).objectCompare (var_addAssignOperatorArguments_9585.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 246)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = object ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = object ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfType_9004.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)).add_operation (var_addAssignOperatorArguments_9585.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 249)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (temp_10.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 250)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 250)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 247)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_10318 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 252)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = object ;
          cEnumerator_actualOutputExpressionList enumerator_10424 (temp_12.readProperty_mExpressions (), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_10486 (var_addAssignOperatorArguments_9585, kENUMERATION_UP) ;
          while (enumerator_10424.hasCurrentObject () && enumerator_10486.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_10797 ;
            callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_10424.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10486.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10797, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 254)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_10486.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10424.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_10486.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_10486.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_10888 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_10888) ;
                inCompiler->emitSemanticError (enumerator_10424.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_10888, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10486.current_mFormalArgumentType (HERE), var_expression_10797.readProperty_mResultType (), enumerator_10424.current_mEndOfExpressionLocation (HERE), var_expression_10797, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 266)) ;
            }
            var_effectiveParameterList_10318.addAssign_operation (var_expression_10797  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
            enumerator_10424.gotoNextObject () ;
            enumerator_10486.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = object ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_9004, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 275)), var_effectiveParameterList_10318  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 270))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 270)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = object ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 280)) ;
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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_12297 ;
    GALGAS_bool var_selfIsMutable_12331 ;
    GALGAS_bool var_unused_0_12359 ;
    const bool optionalResult12271 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12297, var_selfIsMutable_12331, var_unused_0_12359) ;
    if (!optionalResult12271) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12331.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 299)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 300)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_12297.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 310)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 310)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 310)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_selfType_12297.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 311)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_13368 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_12297, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13368, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 315)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_12297, var_expression_13368.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_13368, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 324)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_12297, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 331)), var_expression_13368, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = object ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 336)) ;
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
    GALGAS_unifiedTypeMap_2D_entry var_selfType_14546 ;
    GALGAS_bool var_selfIsMutable_14580 ;
    GALGAS_bool var_unused_0_14608 ;
    const bool optionalResult14520 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14546, var_selfIsMutable_14580, var_unused_0_14608) ;
    if (!optionalResult14520) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14580.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 355)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = object ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 356)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_selfType_14546.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 366)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 366)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = object ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (var_selfType_14546.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 367)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_15618 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = object ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_14546, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15618, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 371)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = object ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_14546, var_expression_15618.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_15618, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 380)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_14546, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 387)), var_expression_15618, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 382))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 382)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = object ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 392)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST.mSlotID,
                                                   extensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfMinusEqualExpressionInstructionAST_analyzeSemanticInstruction, NULL) ;

