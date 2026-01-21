#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_7839 ;
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7839, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8176 ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7839.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8176, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 188)) ;
  {
  const GGS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7839.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 199)) COMMA_SOURCE_FILE ("expression-or.galgas", 199)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7839, var_rightExpression_8176, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 198)) ;
  }
  const GGS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7839.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7839, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 209)), var_rightExpression_8176, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_9815 ;
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9815, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 234)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10152 ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9815.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10152, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 244)) ;
  {
  const GGS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9815.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 255)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 255)) COMMA_SOURCE_FILE ("expression-or.galgas", 255)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9815, var_rightExpression_10152, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 254)) ;
  }
  const GGS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_9815.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9815, var_rightExpression_10152, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_11781 ;
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11781, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 289)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12118 ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11781.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12118, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 299)) ;
  {
  const GGS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11781.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 310)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 310)) COMMA_SOURCE_FILE ("expression-or.galgas", 310)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11781, var_rightExpression_12118, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 309)) ;
  }
  const GGS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_11781.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11781, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 321)), var_rightExpression_12118, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_13828 ;
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13828, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 347)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14186 ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14186, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 357)) ;
  GGS_unifiedTypeMapEntry var_leftType_14267 = var_leftExpression_13828.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_14267, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 368)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_13828.readProperty_mLocation (), GGS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 369)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightType_14489 = var_rightExpression_14186.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_14489, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 372)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_14186.readProperty_mLocation (), GGS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 373)) ;
    }
  }
  const GGS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_13828.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 377)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_13828, var_rightExpression_14186, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_16420 ;
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16420, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 404)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16778 ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16778, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 414)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_16420.readProperty_mResultType (), var_leftExpression_16420.readProperty_mLocation (), var_leftExpression_16420, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 424)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_16778.readProperty_mResultType (), var_rightExpression_16778.readProperty_mLocation (), var_rightExpression_16778, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 434)) ;
  }
  const GGS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_16420.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 446)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16420, var_rightExpression_16778, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
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
  GGS_string var_leftTemporaryOperand_19554 ;
  const GGS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19554, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 486)) ;
  GGS_string var_testVar_19611 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 495)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_19611, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (var_leftTemporaryOperand_19554, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 496)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue != ").add_operation (var_testVar_19611, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 497)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 499)) ;
  }
  GGS_string var_rightTemporaryOperand_20092 ;
  const GGS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20092, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_19611.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (var_rightTemporaryOperand_20092, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 507)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 509)) ;
  outArgument_outCppExpression = var_testVar_19611 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
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
  GGS_string var_leftTemporaryOperand_20873 ;
  const GGS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20873, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 523)) ;
  GGS_string var_rightTemporaryOperand_21078 ;
  const GGS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_21078, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 531)) ;
  const GGS_closedSliceExpressionForGeneration temp_3 = this ;
  const GGS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_20873, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (var_rightTemporaryOperand_21078, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (var_leftTemporaryOperand_20873, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string (").add_operation (GGS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
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
  GGS_string var_leftTemporaryOperand_22027 ;
  const GGS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22027, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)) ;
  GGS_string var_rightTemporaryOperand_22232 ;
  const GGS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22232, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 563)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 571)) COMMA_SOURCE_FILE ("expression-or.galgas", 571)) ;
  }
  const GGS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_22027, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (var_rightTemporaryOperand_22232, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GGS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (var_leftTemporaryOperand_22027, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@ifExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_if_5F_expression_5297 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5297, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 132)) ;
  GGS_semanticExpressionForGeneration var_then_5F_expression_5583 ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5583, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 142)) ;
  GGS_semanticExpressionForGeneration var_else_5F_expression_5871 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5871, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 152)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ifExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GGS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 164)).add_operation (GGS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_then_5F_expression_5583.readProperty_mResultType ().objectCompare (var_else_5F_expression_5871.readProperty_mResultType ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5583.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).add_operation (GGS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5871.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)).add_operation (GGS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GGS_ifExpressionForGeneration::init_21__21__21__21__21_ (var_then_5F_expression_5583.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5297, var_then_5F_expression_5583, var_else_5F_expression_5871, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ifExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GGS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_ifExpression_7727 ;
  const GGS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7727, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 202)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 211)) ;
  const GGS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 212)) ;
  GGS_string var_testVar_7993 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 214)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_7993, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)).add_operation (var_ifExpression_7727, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_7993, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 216)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 218)) ;
  }
  GGS_string var_thenExpression_8469 ;
  const GGS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8469, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)).add_operation (var_thenExpression_8469, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else if (GalgasBool::boolFalse == ").add_operation (var_testVar_7993, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 229)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 230)) ;
  }
  GGS_string var_elseExpression_8902 ;
  const GGS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_8902, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 231)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)).add_operation (var_elseExpression_8902, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
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
  GGS_lstring var_usefulnessName_3812 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3812 COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 92)) ;
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GGS_bool joker_4141_7 ; // Joker input parameter
  GGS_terminalMap joker_4141_6 ; // Joker input parameter
  GGS_indexingListAST joker_4141_5 ; // Joker input parameter
  GGS_terminalDeclarationListAST joker_4141_4 ; // Joker input parameter
  GGS_lexicalAttributeListAST joker_4141_3 ; // Joker input parameter
  GGS_lexicalStyleListAST joker_4141_2 ; // Joker input parameter
  GGS_lexicalListDeclarationListAST joker_4141_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_4141_7, joker_4141_6, joker_4141_5, joker_4141_4, joker_4141_3, joker_4141_2, joker_4141_1, inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 94)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GGS_string ("symbols"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GGS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 100)) ;
    }
  }
  const GGS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GGS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_lexiqueIntrospectionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-primary-lexique.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 104)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 128))  COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 128)) ;
  const GGS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GGS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 129)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 129)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-lexique.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 129)).add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 130)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 131)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 131)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_4424 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_4424.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4424.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 107)) ;
    enumerator_4424.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
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
  GGS_lstring var_usefulnessName_5068 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 122)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5068 COMMA_SOURCE_FILE ("expression-function-call.galgas", 123)) ;
  }
  GGS_functionSignature var_functionSignature_5389 ;
  GGS_unifiedTypeMapEntry var_resultType_5439 ;
  GGS_bool var_isInternal_5467 ;
  const GGS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_5389, var_resultType_5439, var_isInternal_5467, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 125)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_5467.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_functionCallExpressionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_5540 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 133)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_functionCallExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 134)).objectCompare (var_procDeclarationLocation_5540.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 134)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_functionCallExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_5540.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 135)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_functionCallExpressionAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_5389.getter_count (SOURCE_FILE ("expression-function-call.galgas", 139)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 139)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_functionCallExpressionAST temp_10 = this ;
      const GGS_functionCallExpressionAST temp_11 = this ;
      const GGS_functionCallExpressionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 141)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 141)).add_operation (var_functionSignature_5389.getter_count (SOURCE_FILE ("expression-function-call.galgas", 141)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 141)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 141)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 142)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 142)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 140)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_6289 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_functionCallExpressionAST temp_14 = this ;
    UpEnumerator_functionSignature enumerator_6390 (var_functionSignature_5389) ;
    UpEnumerator_actualOutputArgumentList enumerator_6427 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_6390.hasCurrentObject () && enumerator_6427.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_6782 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6427.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6390.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6782, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 148)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6390.current (HERE).readProperty_mFormalArgumentType (), var_expression_6782.readProperty_mResultType (), enumerator_6427.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6782, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 157)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_6390.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_6427.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_6390.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_6390.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 165)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_7116 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 164)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_7116) ;
          inCompiler->emitSemanticError (enumerator_6427.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_7116, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 168)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 168)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 168)) ;
        }
      }
      var_semanticExpressionListForGeneration_6289.addAssignOperation (var_expression_6782  COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)) ;
      enumerator_6390.gotoNextObject () ;
      enumerator_6427.gotoNextObject () ;
    }
    const GGS_functionCallExpressionAST temp_19 = this ;
    const GGS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_5439, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_6289, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 202)) ;
  const GGS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 204))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 204)) ;
  GGS_stringlist var_parameterList_8840 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_functionCallExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_8880 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_8880.hasCurrentObject ()) {
    GGS_string var_parameter_9051 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8880.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_9051, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 208)) ;
    var_parameterList_8840.addAssignOperation (var_parameter_9051  COMMA_SOURCE_FILE ("expression-function-call.galgas", 209)) ;
    enumerator_8880.gotoNextObject () ;
  }
  const GGS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 211)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 211)) ;
  UpEnumerator_stringlist enumerator_9203 (var_parameterList_8840) ;
  while (enumerator_9203.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_9203.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 213)) ;
    enumerator_9203.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)) ;
  const GGS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 217)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 217)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@classFuncExpressionAST enterExpressionInSemanticContext'
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
      GGS_unifiedTypeMapEntry joker_5197 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_5197, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 137)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@classFuncExpressionAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_returnedType_6256 ;
  GGS_unifiedTypeMapEntry var_classFuncType_6301 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_6363 ;
  GGS_bool var_hasCompilerArgument_6414 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_6468 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  const GGS_classFuncExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_6256, var_classFuncType_6301, var_constructorEffectiveParameterList_6363, var_hasCompilerArgument_6414, var_requiredTypes_6468, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 152)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_constructorTypeUsefulnessName_6496 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_6301, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 169)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 169)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_6496 COMMA_SOURCE_FILE ("expression-class-func.galgas", 170)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_6741 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_6256, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 171)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 171)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_6741 COMMA_SOURCE_FILE ("expression-class-func.galgas", 172)) ;
  }
  const GGS_classFuncExpressionAST temp_6 = this ;
  const GGS_classFuncExpressionAST temp_7 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_6256, temp_6.readProperty_classFuncName ().readProperty_location (), var_classFuncType_6301, temp_7.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_6363, var_hasCompilerArgument_6414, var_requiredTypes_6468, inCompiler COMMA_HERE) ;
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
                                                                                                       const GGS_location /* constinArgument_inLocationForOldStyleCollectionInitializerError */,
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
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas", 212)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_8883 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 217)).readProperty_classFunctionMap () ;
    GGS_functionSignature var_constructorFormalArgumentTypeList_9004 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classFunctionMap_2E_element var_entry_9049 = var_classFunctionMap_8883.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_classFunctionMap_8883.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        var_constructorFormalArgumentTypeList_9004 = var_entry_9049.readProperty_mArgumentTypeList () ;
        outArgument_outHasCompilerArgument = var_entry_9049.readProperty_mHasCompilerArgument () ;
        outArgument_outReturnedType = var_entry_9049.readProperty_mReturnedType () ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_8883.getter_count (SOURCE_FILE ("expression-class-func.galgas", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 227)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 227)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 227)), fixItArray5  COMMA_SOURCE_FILE ("expression-class-func.galgas", 226)) ;
          var_constructorFormalArgumentTypeList_9004.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, EnumFixItKind::fixItReplace, var_classFunctionMap_8883.getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 235))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 232)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 232)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 232)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 233)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 233)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas", 231)) ;
        var_constructorFormalArgumentTypeList_9004.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 239)).objectCompare (var_constructorFormalArgumentTypeList_9004.getter_count (SOURCE_FILE ("expression-class-func.galgas", 239)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 241)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 241)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 241)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).add_operation (var_constructorFormalArgumentTypeList_9004.getter_count (SOURCE_FILE ("expression-class-func.galgas", 243)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 242)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 243)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas", 244)).getter_string (SOURCE_FILE ("expression-class-func.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 243)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 244)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas", 240)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    UpEnumerator_actualOutputArgumentList enumerator_10486 (constinArgument_inInitializerEffectiveParameterExpressions) ;
    UpEnumerator_functionSignature enumerator_10551 (var_constructorFormalArgumentTypeList_9004) ;
    while (enumerator_10486.hasCurrentObject () && enumerator_10551.hasCurrentObject ()) {
      {
      outArgument_outRequiredTypes.setter_append (enumerator_10551.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 249)) ;
      }
      GGS_semanticExpressionForGeneration var_exp_10982 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10486.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10551.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_10982, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 250)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10551.current (HERE).readProperty_mFormalArgumentType (), var_exp_10982.readProperty_mResultType (), enumerator_10486.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_10982, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 259)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssignOperation (var_exp_10982  COMMA_SOURCE_FILE ("expression-class-func.galgas", 265)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_10551.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10486.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_string temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_10551.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = enumerator_10551.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 268)) ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_11346 = GGS_string ("!").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 267)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, var_s_11346) ;
          inCompiler->emitSemanticError (enumerator_10486.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11346, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 272)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 272)), fixItArray12  COMMA_SOURCE_FILE ("expression-class-func.galgas", 271)) ;
        }
      }
      enumerator_10486.gotoNextObject () ;
      enumerator_10551.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@classFuncExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 296)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_12709 (temp_1.readProperty_requiredTypes ()) ;
  while (enumerator_12709.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_12709.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 298)) ;
    enumerator_12709.gotoNextObject () ;
  }
  GGS_stringlist var_parameterList_12802 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_12831 (temp_2.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_12831.hasCurrentObject ()) {
    GGS_string var_parameter_13061 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12831.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13061, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 302)) ;
    var_parameterList_12802.addAssignOperation (var_parameter_13061  COMMA_SOURCE_FILE ("expression-class-func.galgas", 309)) ;
    enumerator_12831.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 311)) ;
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string ("::class_func_").add_operation (temp_4.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 312)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 313)) ;
  UpEnumerator_stringlist enumerator_13327 (var_parameterList_12802) ;
  while (enumerator_13327.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_13327.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 315)) ;
    enumerator_13327.gotoNextObject () ;
    if (enumerator_13327.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 316)) ;
    }
  }
  GGS_bool var_needsComma_13449 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_12802.getter_count (SOURCE_FILE ("expression-class-func.galgas", 318)).objectCompare (GGS_uint (uint32_t (0U)))) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_classFuncExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_needsComma_13449.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 321)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 323)) COMMA_SOURCE_FILE ("expression-class-func.galgas", 323)) ;
      }
      outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 324)) ;
      var_needsComma_13449 = GGS_bool (true) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_needsComma_13449.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_classFuncExpressionForGeneration temp_9 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 328)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 328)) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_classFuncExpressionForGeneration temp_10 = this ;
    outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 330)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 330)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 330)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@varInExpressionAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_type_3371 ;
  GGS_string var_sourceVariableCppName_3395 ;
  GGS_string var_nameForCheckingFormalParameterUsing_3436 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_3371, var_sourceVariableCppName_3395, var_nameForCheckingFormalParameterUsing_3436, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas", 72)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_3371, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_3395, var_nameForCheckingFormalParameterUsing_3436, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@varInExpressionForGeneration generateExpression'
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
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
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
  GGS_lstring var_usefulnessName_4857 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 121)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4857 COMMA_SOURCE_FILE ("expression-primary-option.galgas", 122)) ;
  }
  GGS_bool var_optionComponentIsPredefined_5166 ;
  GGS_commandLineOptionMap var_boolOptionMap_5225 ;
  GGS_commandLineOptionMap var_uintOptionMap_5270 ;
  GGS_commandLineOptionMap var_stringOptionMap_5315 ;
  GGS_commandLineOptionMap var_stringListOptionMap_5362 ;
  const GGS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_5166, var_boolOptionMap_5225, var_uintOptionMap_5270, var_stringOptionMap_5315, var_stringListOptionMap_5362, inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 124)) ;
  const GGS_optionExpressionAST temp_2 = this ;
  GGS_bool var_found_5398 = var_boolOptionMap_5225.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 132)) ;
  GGS_unifiedTypeMapEntry var_returnedType_5486 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_5398.operator_not (SOURCE_FILE ("expression-primary-option.galgas", 134)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_optionExpressionAST temp_4 = this ;
      var_found_5398 = var_uintOptionMap_5270.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 135)) ;
      var_returnedType_5486 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType () ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_found_5398.operator_not (SOURCE_FILE ("expression-primary-option.galgas", 138)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_optionExpressionAST temp_6 = this ;
      var_found_5398 = var_stringOptionMap_5315.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 139)) ;
      var_returnedType_5486 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_found_5398.operator_not (SOURCE_FILE ("expression-primary-option.galgas", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_optionExpressionAST temp_8 = this ;
      var_found_5398 = var_stringListOptionMap_5362.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-primary-option.galgas", 143)) ;
      var_returnedType_5486 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType () ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_found_5398.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_optionExpressionAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GGS_string ("value"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_optionExpressionAST temp_12 = this ;
          const GGS_optionExpressionAST temp_13 = this ;
          const GGS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GGS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_5486, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5166, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
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
            outArgument_outExpression = GGS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5166, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
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
              outArgument_outExpression = GGS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5166, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
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
                outArgument_outExpression = GGS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5166, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (GalgasBool::boolFalse == test_25) {
              const GGS_optionExpressionAST temp_30 = this ;
              GenericArray <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GGS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 176)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_stringlist var_s_7516 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    UpEnumerator_commandLineOptionMap enumerator_7544 (var_boolOptionMap_5225) ;
    while (enumerator_7544.hasCurrentObject ()) {
      var_s_7516.addAssignOperation (enumerator_7544.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 181)) ;
      enumerator_7544.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_7612 (var_uintOptionMap_5270) ;
    while (enumerator_7612.hasCurrentObject ()) {
      var_s_7516.addAssignOperation (enumerator_7612.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 184)) ;
      enumerator_7612.gotoNextObject () ;
    }
    UpEnumerator_commandLineOptionMap enumerator_7680 (var_stringOptionMap_5315) ;
    while (enumerator_7680.hasCurrentObject ()) {
      var_s_7516.addAssignOperation (enumerator_7680.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 187)) ;
      enumerator_7680.gotoNextObject () ;
    }
    const GGS_optionExpressionAST temp_32 = this ;
    const GGS_optionExpressionAST temp_33 = this ;
    const GGS_optionExpressionAST temp_34 = this ;
    GenericArray <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, EnumFixItKind::fixItReplace, var_s_7516) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GGS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)).add_operation (GGS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)).add_operation (GGS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 190)), fixItArray35  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 189)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
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
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 215))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 215)) ;
    }
  }
  const GGS_optionValueExpressionForGeneration temp_3 = this ;
  const GGS_optionValueExpressionForGeneration temp_4 = this ;
  const GGS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (GGS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 217)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 218)).add_operation (GGS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 218)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
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
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 238))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 238)) ;
    }
  }
  const GGS_optionCharExpressionForGeneration temp_3 = this ;
  const GGS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 240)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 240)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 241)).add_operation (GGS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 241)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
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
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 261))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 261)) ;
    }
  }
  const GGS_optionStringExpressionForGeneration temp_3 = this ;
  const GGS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 263)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 263)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 264)).add_operation (GGS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 264)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
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
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 276))  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 276)) ;
    }
  }
  const GGS_optionCommentExpressionForGeneration temp_3 = this ;
  const GGS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 278)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 278)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-option.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 279)).add_operation (GGS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-option.galgas", 279)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
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
  GGS_lstring var_usefulnessName_5466 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5466 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 143)) ;
  }
  GGS_lstring var_filewrapperPath_5799 ;
  GGS_bool var_isInternal_5838 ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GGS_lstringlist joker_5819_4 ; // Joker input parameter
  GGS_wrapperFileMap joker_5819_3 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_5819_2 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_5819_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5799, joker_5819_4, joker_5819_3, joker_5819_2, joker_5819_1, var_isInternal_5838, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 145)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_5838.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GGS_location var_filewrapperDeclarationLocation_5903 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 153)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 154)).objectCompare (var_filewrapperDeclarationLocation_5903.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 154)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5903.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)), fixItArray7  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 155)) ;
        }
      }
    }
  }
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GGS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GGS_filewrapperInExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 160)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5799.readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_6763 (temp_0.readProperty_mExpressions ()) ;
  while (enumerator_6763.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6763.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 172)) ;
    enumerator_6763.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
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
  GGS_lstring var_usefulnessName_7412 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7412 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 188)) ;
  }
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_7763 ;
  GGS_bool var_isInternal_7802 ;
  const GGS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GGS_lstring joker_7725_4 ; // Joker input parameter
  GGS_lstringlist joker_7725_3 ; // Joker input parameter
  GGS_wrapperFileMap joker_7725_2 ; // Joker input parameter
  GGS_wrapperDirectoryMap joker_7725_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7725_4, joker_7725_3, joker_7725_2, joker_7725_1, var_filewrapperTemplateMap_7763, var_isInternal_7802, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 190)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_isInternal_7802.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GGS_location var_filewrapperDeclarationLocation_7868 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 198)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::notEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 199)).objectCompare (var_filewrapperDeclarationLocation_7868.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 199)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_filewrapperTemplateInExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7868.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 200)) ;
        }
      }
    }
  }
  GGS_functionSignature var_templateSignature_8323 ;
  const GGS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GGS_lstring joker_8341 ; // Joker input parameter
  var_filewrapperTemplateMap_7763.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8323, joker_8341, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 204)) ;
  GGS_semanticExpressionListForGeneration var_effectiveParameterList_8413 ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 207)).objectCompare (var_templateSignature_8323.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 207)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GGS_filewrapperTemplateInExpressionAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (GGS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (GGS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (var_templateSignature_8323.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)).getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 209)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 211)).getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 210)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 211)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 208)) ;
      var_effectiveParameterList_8413.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    var_effectiveParameterList_8413 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GGS_filewrapperTemplateInExpressionAST temp_17 = this ;
    UpEnumerator_actualOutputArgumentList enumerator_8913 (temp_17.readProperty_mExpressions ()) ;
    UpEnumerator_functionSignature enumerator_8999 (var_templateSignature_8323) ;
    while (enumerator_8913.hasCurrentObject () && enumerator_8999.hasCurrentObject ()) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::notEqual, enumerator_8999.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8913.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GGS_string temp_19 ;
          const GalgasBool test_20 = GGS_bool (ComparisonKind::notEqual, enumerator_8999.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            temp_19 = enumerator_8999.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 217)) ;
          }else if (GalgasBool::boolFalse == test_20) {
            temp_19 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_9109 = GGS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 217)) ;
          GenericArray <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, EnumFixItKind::fixItReplace, var_s_9109) ;
          inCompiler->emitSemanticError (enumerator_8913.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9109, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 218)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 218)), fixItArray21  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 218)) ;
        }
      }
      GGS_semanticExpressionForGeneration var_exp_9596 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8913.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8999.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9596, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 220)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8999.current_mFormalArgumentType (HERE), var_exp_9596.readProperty_mResultType (), enumerator_8913.current_mEndOfExpressionLocation (HERE), var_exp_9596, inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 229)) ;
      }
      var_effectiveParameterList_8413.addAssignOperation (var_exp_9596  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 230)) ;
      enumerator_8913.gotoNextObject () ;
      enumerator_8999.gotoNextObject () ;
    }
  }
  const GGS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GGS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GGS_filewrapperTemplateInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8413, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
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
  GGS_lstring var_usefulnessName_10816 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10816 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 261)) ;
  }
  GGS_stringlist var_directoryList_11035 ;
  GGS_string var_fileName_11063 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 265)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_filewrapperInExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 266)) ;
      var_directoryList_11035.drop () ; // Release error dropped variable
      var_fileName_11063.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-primary-filewrapper.galgas", 267)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_filewrapperInExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 268)) ;
        var_directoryList_11035.drop () ; // Release error dropped variable
        var_fileName_11063.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_11035 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("/") COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 270)) ;
      {
      var_directoryList_11035.setter_popLast (var_fileName_11063, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 271)) ;
      }
    }
  }
  GGS_wrapperFileMap var_filewrapperFileMap_11644 ;
  GGS_wrapperDirectoryMap var_filewrapperDirectoryMap_11693 ;
  GGS_bool var_isInternal_11739 ;
  const GGS_filewrapperInExpressionAST temp_10 = this ;
  GGS_lstring joker_11609 ; // Joker input parameter
  GGS_lstringlist joker_11616 ; // Joker input parameter
  GGS_filewrapperTemplateMap joker_11721 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11609, joker_11616, var_filewrapperFileMap_11644, var_filewrapperDirectoryMap_11693, joker_11721, var_isInternal_11739, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 274)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_isInternal_11739.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_filewrapperInExpressionAST temp_12 = this ;
      GGS_location var_filewrapperDeclarationLocation_11804 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 285)) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 286)).objectCompare (var_filewrapperDeclarationLocation_11804.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 286)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_filewrapperInExpressionAST temp_15 = this ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11804.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 287)) ;
        }
      }
    }
  }
  GGS_string var_builtPath_12198 = GGS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11693.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).isValid ()) {
    uint32_t variant_12215 = var_filewrapperDirectoryMap_11693.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)).uintValue () ;
    bool loop_12215 = true ;
    while (loop_12215) {
      loop_12215 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_11035.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 293)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12215) {
        loop_12215 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_11035.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas", 293)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12215 && (0 == variant_12215)) {
        loop_12215 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-primary-filewrapper.galgas", 292)) ;
      }
      if (loop_12215) {
        variant_12215 -= 1 ;
        GGS_string var_directoryName_12330 ;
        {
        var_directoryList_11035.setter_popFirst (var_directoryName_12330, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 294)) ;
        }
        var_builtPath_12198.plusAssignOperation(var_directoryName_12330.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 295)) ;
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11693.getter_hasKey (var_directoryName_12330 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 296)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GGS_uint joker_12603 ; // Joker input parameter
            var_filewrapperDirectoryMap_11693.method_searchKey (GGS_lstring::init_21__21_ (var_directoryName_12330, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 298)), inCompiler COMMA_HERE), var_filewrapperFileMap_11644, var_filewrapperDirectoryMap_11693, joker_12603, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 297)) ;
          }
        }
        if (GalgasBool::boolFalse == test_17) {
          const GGS_filewrapperInExpressionAST temp_18 = this ;
          const GGS_filewrapperInExpressionAST temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_builtPath_12198, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)).add_operation (GGS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)), fixItArray20  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 304)) ;
          var_filewrapperFileMap_11644.drop () ; // Release error dropped variable
          var_directoryList_11035 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  GGS_uint var_fileIndex_12862 ;
  GGS_bool var_isTextFile_12884 ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11644.getter_hasKey (var_fileName_11063 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 310)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      GGS_string joker_13015 ; // Joker input parameter
      GGS_uint joker_13030 ; // Joker input parameter
      var_filewrapperFileMap_11644.method_searchKey (GGS_lstring::init_21__21_ (var_fileName_11063, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 311)), inCompiler COMMA_HERE), joker_13015, var_isTextFile_12884, joker_13030, var_fileIndex_12862, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 311)) ;
    }
  }
  if (GalgasBool::boolFalse == test_21) {
    const GGS_filewrapperInExpressionAST temp_22 = this ;
    const GGS_filewrapperInExpressionAST temp_23 = this ;
    GenericArray <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_fileName_11063, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (GGS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (var_builtPath_12198, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (GGS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 314)), fixItArray24  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 313)) ;
    var_fileIndex_12862.drop () ; // Release error dropped variable
    var_isTextFile_12884.drop () ; // Release error dropped variable
  }
  GGS_unifiedTypeMapEntry temp_25 ;
  const GalgasBool test_26 = var_isTextFile_12884.boolEnum () ;
  if (GalgasBool::boolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (GalgasBool::boolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("data"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 321)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 321)) ;
  }
  const GGS_filewrapperInExpressionAST temp_27 = this ;
  const GGS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GGS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21_ (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12862, var_isTextFile_12884, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 346))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 346)) ;
  const GGS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 347)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 347)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 367))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 367)) ;
  GGS_stringlist var_parameterList_15304 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_15342 (temp_1.readProperty_mActualOutputParameterList ()) ;
  while (enumerator_15342.hasCurrentObject ()) {
    GGS_string var_parameter_15555 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15342.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15555, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 370)) ;
    var_parameterList_15304.addAssignOperation (var_parameter_15555  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 377)) ;
    enumerator_15342.gotoNextObject () ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GGS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 379)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 380)) ;
  UpEnumerator_stringlist enumerator_15834 (var_parameterList_15304) ;
  while (enumerator_15834.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (enumerator_15834.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 382)) ;
    enumerator_15834.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 384)) COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 384)) ;
  }
  const GGS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 385)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 385)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GGS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 405))  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 405)) ;
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
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 407)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
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
//Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_7931 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7931, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8267 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7931.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8267, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 188)) ;
  {
  const GGS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7931.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 199)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 199)), GGS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7931, var_rightExpression_8267, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 198)) ;
  }
  const GGS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7931.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7931, GGS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 210)), var_rightExpression_8267, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_9968 ;
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9968, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 236)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10304 ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9968.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10304, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 246)) ;
  {
  const GGS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9968.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas", 257)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 257)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9968, var_rightExpression_10304, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 256)) ;
  }
  const GGS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_9968.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9968, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 268)), var_rightExpression_10304, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
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
//Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_11998 ;
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11998, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 293)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12334 ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11998.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12334, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 303)) ;
  {
  const GGS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11998.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas", 314)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 314)), GGS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11998, var_rightExpression_12334, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 313)) ;
  }
  const GGS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_11998.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11998, GGS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (SOURCE_FILE ("expression-multiplicative.galgas", 325)), var_rightExpression_12334, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_14019 ;
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14019, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 350)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14355 ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14019.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14355, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 360)) ;
  {
  const GGS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14019.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 371)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas", 371)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 371)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14019, var_rightExpression_14355, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 370)) ;
  }
  const GGS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14019.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14019, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 382)), var_rightExpression_14355, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_16023 ;
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16023, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 407)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16359 ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16023.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16359, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 417)) ;
  {
  const GGS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16023.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 428)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16023, var_rightExpression_16359, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 427)) ;
  }
  const GGS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16023.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16023, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 439)), var_rightExpression_16359, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_5462 ;
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5462, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_5798 ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5462.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5798, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 128)) ;
  {
  const GGS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5462.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 139)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 139)) COMMA_SOURCE_FILE ("expression-and.galgas", 139)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5462, var_rightExpression_5798, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 138)) ;
  }
  const GGS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5462.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5462, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 150)), var_rightExpression_5798, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_7466 ;
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7466, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 175)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_7802 ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7466.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7802, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 185)) ;
  {
  const GGS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7466.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 196)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 196)) COMMA_SOURCE_FILE ("expression-and.galgas", 196)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7466, var_rightExpression_7802, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 195)) ;
  }
  const GGS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7466.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7466, var_rightExpression_7802, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
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
  GGS_string var_leftTemporaryOperand_9275 ;
  const GGS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9275, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  GGS_string var_testVar_9332 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_9332, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (var_leftTemporaryOperand_9275, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_9332, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 241)) ;
  }
  GGS_string var_rightTemporaryOperand_9813 ;
  const GGS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9813, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_9332.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (var_rightTemporaryOperand_9813, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 251)) ;
  outArgument_outCppExpression = var_testVar_9332 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@trueExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@trueExpressionAST analyzeSemanticExpression'
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
//Overriding extension method '@falseExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@falseExpressionAST analyzeSemanticExpression'
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
//Overriding extension method '@trueExpressionForGeneration generateExpression'
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
//Overriding extension method '@falseExpressionForGeneration generateExpression'
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
//Overriding extension method '@comparisonExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@comparisonExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_8807 ;
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8807, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 197)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9147 ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8807.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9147, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 207)) ;
  GGS_bool var_isEquatable_9193 = extensionGetter_definition (var_leftExpression_8807.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("expression-comparison.galgas", 217)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 217)) ;
  GGS_bool var_isComparable_9285 = extensionGetter_definition (var_leftExpression_8807.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("expression-comparison.galgas", 218)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 218)) ;
  GGS_bool var_isReferenceEquatable_9379 = extensionGetter_definition (var_leftExpression_8807.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 219)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas", 219)) COMMA_SOURCE_FILE ("expression-comparison.galgas", 219)) ;
  GGS_bool var_operatorIsAvailable_9495 ;
  GGS_string var_operatorName_9529 ;
  const GGS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
    {
      var_operatorName_9529 = GGS_string ("==") ;
      var_operatorIsAvailable_9495 = var_isEquatable_9193 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
    {
      var_operatorName_9529 = GGS_string ("!=") ;
      var_operatorIsAvailable_9495 = var_isEquatable_9193 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_9529 = GGS_string ("<=") ;
      var_operatorIsAvailable_9495 = var_isComparable_9285 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_9529 = GGS_string ("<") ;
      var_operatorIsAvailable_9495 = var_isComparable_9285 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_9529 = GGS_string (">=") ;
      var_operatorIsAvailable_9495 = var_isComparable_9285 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_9529 = GGS_string (">") ;
      var_operatorIsAvailable_9495 = var_isComparable_9285 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_9529 = GGS_string ("===") ;
      var_operatorIsAvailable_9495 = var_isReferenceEquatable_9379 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_9529 = GGS_string ("!==") ;
      var_operatorIsAvailable_9495 = var_isReferenceEquatable_9379 ;
    }
    break ;
  }
  {
  const GGS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9495, var_operatorName_9529, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8807, var_rightExpression_9147, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 249)) ;
  }
  const GGS_comparisonExpressionAST temp_4 = this ;
  const GGS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8807, temp_5.readProperty_mComparison (), var_rightExpression_9147, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@comparisonExpressionForGeneration generateExpression'
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
  GGS_string var_leftTemporaryOperand_11747 ;
  const GGS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11747, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 287)) ;
  GGS_string var_rightTemporaryOperand_11953 ;
  const GGS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_11953, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 295)) ;
  GGS_string var_operatorName_12013 ;
  const GGS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_12013 = GGS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_12013 = GGS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_12013 = GGS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_12013 = GGS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_12013 = GGS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_12013 = GGS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_operatorName_12013, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_leftTemporaryOperand_11747, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (var_rightTemporaryOperand_11953, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas", 313)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 144)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_expression_5982 ;
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 162)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5982, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 159)) ;
  const GGS_testDynamicClassInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_6031 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 169)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5982.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 171)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 171)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_6282 = var_castType_6031 ;
      GGS_bool var_found_6309 = GGS_bool (ComparisonKind::equal, var_t_6282.objectCompare (var_expression_5982.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).isValid ()) {
        uint32_t variant_6349 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).uintValue () ;
        bool loop_6349 = true ;
        while (loop_6349) {
          loop_6349 = var_found_6309.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6282, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).isValid () ;
          if (loop_6349) {
            loop_6349 = var_found_6309.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6282, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).boolValue () ;
          }
          if (loop_6349 && (0 == variant_6349)) {
            loop_6349 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 175)) ;
          }
          if (loop_6349) {
            variant_6349 -= 1 ;
            var_t_6282 = extensionGetter_definition (var_t_6282, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 177)).readProperty_superType () ;
            var_found_6309 = GGS_bool (ComparisonKind::equal, var_t_6282.objectCompare (var_expression_5982.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_6309.operator_not (SOURCE_FILE ("expression-is-as.galgas", 180)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_testDynamicClassInExpressionAST temp_4 = this ;
          const GGS_testDynamicClassInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (extensionGetter_definition (var_expression_5982.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 181)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5982.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5982.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)) ;
  }
  const GGS_testDynamicClassInExpressionAST temp_8 = this ;
  const GGS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5982, temp_9.readProperty_mTypeComparisonKind (), var_castType_6031, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_expression_8280 ;
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8280, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 217)) ;
  const GGS_castInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_8330 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 227)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_8280.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 229)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 229)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_8577 = var_type_8330 ;
      GGS_bool var_found_8600 = GGS_bool (ComparisonKind::equal, var_t_8577.objectCompare (var_expression_8280.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).isValid ()) {
        uint32_t variant_8640 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).uintValue () ;
        bool loop_8640 = true ;
        while (loop_8640) {
          loop_8640 = var_found_8600.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8577, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).isValid () ;
          if (loop_8640) {
            loop_8640 = var_found_8600.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8577, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).boolValue () ;
          }
          if (loop_8640 && (0 == variant_8640)) {
            loop_8640 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 233)) ;
          }
          if (loop_8640) {
            variant_8640 -= 1 ;
            var_t_8577 = extensionGetter_definition (var_t_8577, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 235)).readProperty_superType () ;
            var_found_8600 = GGS_bool (ComparisonKind::equal, var_t_8577.objectCompare (var_expression_8280.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_8600.operator_not (SOURCE_FILE ("expression-is-as.galgas", 238)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_castInExpressionAST temp_4 = this ;
          const GGS_castInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (extensionGetter_definition (var_expression_8280.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 239)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_8280.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 243)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_8280.readProperty_mLocation (), GGS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_8280.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 245)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 244)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_8280.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 249)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("object"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_castInExpressionAST temp_10 = this ;
      const GGS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GGS_extractObjectInExpressionForGeneration::init_21__21__21__21_ (var_type_8330, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_8280, temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_castInExpressionAST temp_12 = this ;
    const GGS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GGS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_8330, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_8280, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_8330, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GGS_string var_typeNameRepresentation_10590 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 284)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 284)) ;
  GGS_string var_receiverExpression_10883 ;
  const GGS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10883, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 286)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 294)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GGS_dynamicTypeComparisonKind::Enumeration::invalid:
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_equal:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_receiverExpression_10883, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (GGS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (var_typeNameRepresentation_10590, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 298)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 299)) ;
    }
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_inherited:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_10590, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 301)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 302)).add_operation (var_receiverExpression_10883, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)).add_operation (GGS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)) ;
    }
    break ;
  case GGS_dynamicTypeComparisonKind::Enumeration::enum_strictlyInherited:
    {
      outArgument_outCppExpression = GGS_string ("GGS_bool ((").add_operation (var_receiverExpression_10883, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (GGS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (var_typeNameRepresentation_10590, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 306)).add_operation (GGS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (var_typeNameRepresentation_10590, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 308)).add_operation (var_receiverExpression_10883, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)).add_operation (GGS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@castInExpressionForGeneration generateExpression'
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
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)) ;
  GGS_string var_receiverExpression_12355 ;
  const GGS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_12355, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)) ;
  const GGS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (var_receiverExpression_12355, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)) ;
  }
  const GGS_castInExpressionForGeneration temp_3 = this ;
  const GGS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)).add_operation (var_receiverExpression_12355, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (var_receiverExpression_12355, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)).add_operation (GGS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 346)) ;
  }
  const GGS_castInExpressionForGeneration temp_5 = this ;
  const GGS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GGS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (var_receiverExpression_12355, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GGS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 347)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 352)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 356)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 374)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)) ;
  GGS_string var_receiverExpression_14293 ;
  const GGS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_14293, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)) ;
  const GGS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GGS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (GGS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (var_receiverExpression_14293, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
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
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_receiverExpression_4309 ;
  const GGS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 85)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4309, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 82)) ;
  GGS_unifiedTypeMapEntry var_receiverType_4363 = var_receiverExpression_4309.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_getterCallExpressionAST temp_5 = this ;
    const GGS_getterMap_2E_element var_aGetter_4477 = extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_bool test_7 = GGS_bool (ComparisonKind::notEqual, var_aGetter_4477.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())) ;
        if (GalgasBool::boolTrue == test_7.boolEnum ()) {
          test_7 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_6 = test_7.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_getterCallExpressionAST temp_8 = this ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_aGetter_4477.readProperty_mGetterNameThatObsoletesInvokationName ()) ;
          inCompiler->emitSemanticError (temp_8.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray9  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 95)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_getterCallExpressionAST temp_11 = this ;
        GGS_bool test_12 = temp_11.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (GalgasBool::boolTrue == test_12.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_13 = this ;
          test_12 = extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)).readProperty_propertyMap ().getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 100)) ;
        }
        GGS_bool test_14 = test_12 ;
        if (GalgasBool::boolTrue == test_14.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_15 = this ;
          test_14 = GGS_bool (ComparisonKind::equal, temp_15.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 101)).objectCompare (GGS_uint (uint32_t (0U)))) ;
        }
        test_10 = test_14.boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_getterCallExpressionAST temp_16 = this ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mExpressionLocation (), GGS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray17  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 102)) ;
        }
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_getterCallExpressionAST temp_19 = this ;
        test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)).objectCompare (var_aGetter_4477.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 105)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_getterCallExpressionAST temp_20 = this ;
          const GGS_getterCallExpressionAST temp_21 = this ;
          const GGS_getterCallExpressionAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_21.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (var_aGetter_4477.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 108)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 107)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)).add_operation (temp_22.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 109)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 109)), fixItArray23  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5624 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
        const GGS_getterCallExpressionAST temp_24 = this ;
        UpEnumerator_actualOutputArgumentList enumerator_5705 (temp_24.readProperty_mActualArgumentList ()) ;
        UpEnumerator_functionSignature enumerator_5810 (var_aGetter_4477.readProperty_mArgumentTypeList ()) ;
        while (enumerator_5705.hasCurrentObject () && enumerator_5810.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_exp_6177 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5705.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5810.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6177, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 114)) ;
          GalgasBool test_25 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_25) {
            test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_5810.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5705.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_25) {
              GGS_string temp_26 ;
              const GalgasBool test_27 = GGS_bool (ComparisonKind::notEqual, enumerator_5810.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_27) {
                temp_26 = enumerator_5810.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
              }else if (GalgasBool::boolFalse == test_27) {
                temp_26 = GGS_string::makeEmptyString () ;
              }
              GGS_string var_s_6284 = GGS_string ("!").add_operation (temp_26, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 124)) ;
              GenericArray <FixItDescription> fixItArray28 ;
              appendFixItActions (fixItArray28, EnumFixItKind::fixItReplace, var_s_6284) ;
              inCompiler->emitSemanticError (enumerator_5705.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_6284, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)), fixItArray28  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 125)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5810.current_mFormalArgumentType (HERE), var_exp_6177.readProperty_mResultType (), enumerator_5705.current_mEndOfExpressionLocation (HERE), var_exp_6177, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 127)) ;
          }
          var_constructorEffectiveParameterList_5624.addAssignOperation (var_exp_6177  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 128)) ;
          enumerator_5705.gotoNextObject () ;
          enumerator_5810.gotoNextObject () ;
        }
        const GGS_getterCallExpressionAST temp_29 = this ;
        GGS_string temp_30 ;
        const GalgasBool test_31 = GGS_bool (ComparisonKind::equal, var_aGetter_4477.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_31) {
          const GGS_getterCallExpressionAST temp_32 = this ;
          temp_30 = temp_32.readProperty_mGetterName ().readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_31) {
          temp_30 = var_aGetter_4477.readProperty_mGetterNameThatObsoletesInvokationName () ;
        }
        outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_aGetter_4477.readProperty_mReturnedType (), temp_29.readProperty_mGetterName ().readProperty_location (), var_aGetter_4477.readProperty_mKind (), var_receiverExpression_4309, GGS_stringlist::init (inCompiler COMMA_HERE), temp_30, var_constructorEffectiveParameterList_5624, var_aGetter_4477.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
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
            GenericArray <FixItDescription> fixItArray38 ;
            fixItArray38.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
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
        const GGS_propertyMap_2E_element var_prop_7573 = extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)).readProperty_propertyMap ().readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 147)).readProperty_propertyMap ().readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_39 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_39) {
          const GGS_getterCallExpressionAST temp_42 = this ;
          extensionMethod_checkGetAccess (var_prop_7573.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_42.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
          const GGS_getterCallExpressionAST temp_43 = this ;
          const GGS_getterCallExpressionAST temp_44 = this ;
          outArgument_outExpression = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_7573.readProperty_mPropertyType (), temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4309, temp_44.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
          GalgasBool test_45 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_45) {
            const GGS_getterCallExpressionAST temp_46 = this ;
            test_45 = temp_46.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              const GGS_getterCallExpressionAST temp_47 = this ;
              GenericArray <FixItDescription> fixItArray48 ;
              inCompiler->emitSemanticError (temp_47.readProperty_mExpressionLocation (), GGS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray48  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 156)) ;
            }
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_39) {
      GGS_uint var_matchingReaderCount_8276 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_49 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_49) {
        test_49 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 161)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas", 161)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_49) {
          GGS_functionSignature var_getterFormalArgumentTypeList_8395 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          GGS_bool var_hasCompilerArgument_8442 = GGS_bool (true) ;
          GGS_unifiedTypeMapEntry var_returnedType_8481 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 164)) ;
          GGS_methodKind var_kind_8534 = GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 165)) ;
          GGS_stringlist var_fieldList_8596 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
          GGS_string var_obsoletedByGetter_8624 = GGS_string::makeEmptyString () ;
          UpEnumerator_typedPropertyList enumerator_8692 (extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 168)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_8692.hasCurrentObject ()) {
            GGS_unifiedTypeMapEntry var_propertyType_8766 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (extensionGetter_definition (enumerator_8692.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 169)).readProperty_typeName ().readProperty_string (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 169)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 169)) ;
            GGS_getterMap var_aMap_8886 = extensionGetter_definition (var_propertyType_8766, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 170)).readProperty_getterMap () ;
            GalgasBool test_50 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_50) {
              const GGS_getterCallExpressionAST temp_51 = this ;
              const GGS_getterMap_2E_element var_entry_8946 = var_aMap_8886.readSubscript__3F_ (temp_51.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_8886.readSubscript__3F_ (temp_51.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_50 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_50) {
                GalgasBool test_52 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_52) {
                  test_52 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_propertyType_8766, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 172)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_8692.current_name (HERE).readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_52) {
                    var_matchingReaderCount_8276.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 173)) ;
                    var_getterFormalArgumentTypeList_8395 = var_entry_8946.readProperty_mArgumentTypeList () ;
                    var_hasCompilerArgument_8442 = var_entry_8946.readProperty_mHasCompilerArgument () ;
                    var_returnedType_8481 = var_entry_8946.readProperty_mReturnedType () ;
                    const GGS_getterCallExpressionAST temp_53 = this ;
                    var_receiverExpression_4309 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_8481, temp_53.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4309, enumerator_8692.current_name (HERE).readProperty_string (), inCompiler COMMA_HERE) ;
                    var_kind_8534 = var_entry_8946.readProperty_mKind () ;
                    var_obsoletedByGetter_8624 = var_entry_8946.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
              }
            }
            enumerator_8692.gotoNextObject () ;
          }
          GalgasBool test_54 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_54) {
            test_54 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_8276.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_54) {
              const GGS_getterCallExpressionAST temp_55 = this ;
              const GGS_getterCallExpressionAST temp_56 = this ;
              GenericArray <FixItDescription> fixItArray57 ;
              inCompiler->emitSemanticError (temp_55.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).add_operation (temp_56.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)).add_operation (GGS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 190)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 189)) ;
              var_getterFormalArgumentTypeList_8395.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8442.drop () ; // Release error dropped variable
              var_returnedType_8481.drop () ; // Release error dropped variable
              var_kind_8534.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_54) {
            GalgasBool test_58 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_58) {
              test_58 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_8276.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_58) {
                GGS_string var_s_10097 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_10119 (var_fieldList_8596) ;
                while (enumerator_10119.hasCurrentObject ()) {
                  var_s_10097.plusAssignOperation(enumerator_10119.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 196)) ;
                  enumerator_10119.gotoNextObject () ;
                  if (enumerator_10119.hasCurrentObject ()) {
                    var_s_10097.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 197)) ;
                  }
                }
                const GGS_getterCallExpressionAST temp_59 = this ;
                const GGS_getterCallExpressionAST temp_60 = this ;
                GenericArray <FixItDescription> fixItArray61 ;
                inCompiler->emitSemanticError (temp_59.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (temp_60.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (GGS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 200)).add_operation (var_s_10097, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)), fixItArray61  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 199)) ;
                var_getterFormalArgumentTypeList_8395.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8442.drop () ; // Release error dropped variable
                var_returnedType_8481.drop () ; // Release error dropped variable
                var_kind_8534.drop () ; // Release error dropped variable
              }
            }
          }
          GalgasBool test_62 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_62) {
            const GGS_getterCallExpressionAST temp_63 = this ;
            test_62 = GGS_bool (ComparisonKind::notEqual, temp_63.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 205)).objectCompare (var_getterFormalArgumentTypeList_8395.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 205)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_62) {
              const GGS_getterCallExpressionAST temp_64 = this ;
              const GGS_getterCallExpressionAST temp_65 = this ;
              const GGS_getterCallExpressionAST temp_66 = this ;
              GenericArray <FixItDescription> fixItArray67 ;
              inCompiler->emitSemanticError (temp_64.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_65.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (var_getterFormalArgumentTypeList_8395.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 208)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 207)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (temp_66.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 209)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 208)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 209)), fixItArray67  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_62) {
            GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11105 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
            const GGS_getterCallExpressionAST temp_68 = this ;
            UpEnumerator_actualOutputArgumentList enumerator_11188 (temp_68.readProperty_mActualArgumentList ()) ;
            UpEnumerator_functionSignature enumerator_11295 (var_getterFormalArgumentTypeList_8395) ;
            while (enumerator_11188.hasCurrentObject () && enumerator_11295.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_exp_11681 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11188.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11295.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11681, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 214)) ;
              GalgasBool test_69 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_69) {
                test_69 = GGS_bool (ComparisonKind::notEqual, enumerator_11295.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11188.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_69) {
                  GGS_string temp_70 ;
                  const GalgasBool test_71 = GGS_bool (ComparisonKind::notEqual, enumerator_11295.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_71) {
                    temp_70 = enumerator_11295.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 224)) ;
                  }else if (GalgasBool::boolFalse == test_71) {
                    temp_70 = GGS_string::makeEmptyString () ;
                  }
                  GGS_string var_s_11794 = GGS_string ("!").add_operation (temp_70, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 224)) ;
                  GenericArray <FixItDescription> fixItArray72 ;
                  appendFixItActions (fixItArray72, EnumFixItKind::fixItReplace, var_s_11794) ;
                  inCompiler->emitSemanticError (enumerator_11188.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11794, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 225)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11295.current_mFormalArgumentType (HERE), var_exp_11681.readProperty_mResultType (), enumerator_11188.current_mEndOfExpressionLocation (HERE), var_exp_11681, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 227)) ;
              }
              var_constructorEffectiveParameterList_11105.addAssignOperation (var_exp_11681  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
              enumerator_11188.gotoNextObject () ;
              enumerator_11295.gotoNextObject () ;
            }
            GalgasBool test_73 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_73) {
              GGS_bool test_74 = GGS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_8624.objectCompare (GGS_string::makeEmptyString ())) ;
              if (GalgasBool::boolTrue == test_74.boolEnum ()) {
                test_74 = GGS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
              }
              test_73 = test_74.boolEnum () ;
              if (GalgasBool::boolTrue == test_73) {
                const GGS_getterCallExpressionAST temp_75 = this ;
                GenericArray <FixItDescription> fixItArray76 ;
                appendFixItActions (fixItArray76, EnumFixItKind::fixItReplace, var_obsoletedByGetter_8624) ;
                inCompiler->emitSemanticError (temp_75.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray76  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 231)) ;
              }
            }
            const GGS_getterCallExpressionAST temp_77 = this ;
            GGS_string temp_78 ;
            const GalgasBool test_79 = GGS_bool (ComparisonKind::equal, var_obsoletedByGetter_8624.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_79) {
              const GGS_getterCallExpressionAST temp_80 = this ;
              temp_78 = temp_80.readProperty_mGetterName ().readProperty_string () ;
            }else if (GalgasBool::boolFalse == test_79) {
              temp_78 = var_obsoletedByGetter_8624 ;
            }
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_8481, temp_77.readProperty_mGetterName ().readProperty_location (), var_kind_8534, var_receiverExpression_4309, var_fieldList_8596, temp_78, var_constructorEffectiveParameterList_11105, var_hasCompilerArgument_8442, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_49) {
        GalgasBool test_81 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_81) {
          test_81 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 244)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 244)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_81) {
            const GGS_getterCallExpressionAST temp_82 = this ;
            GenericArray <FixItDescription> fixItArray83 ;
            inCompiler->emitSemanticError (temp_82.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)).add_operation (GGS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 246)), fixItArray83  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 245)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_81) {
          const GGS_getterCallExpressionAST temp_84 = this ;
          const GGS_getterCallExpressionAST temp_85 = this ;
          GenericArray <FixItDescription> fixItArray86 ;
          appendFixItActions (fixItArray86, EnumFixItKind::fixItReplace, extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 252))) ;
          inCompiler->emitSemanticError (temp_84.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4363, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (temp_85.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (GGS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)), fixItArray86  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
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
  GGS_string var_receiverCppName_14613 ;
  const GGS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_14613, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 285)) ;
  GGS_stringlist var_getterArgumentCppNameList_14679 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_getterCallExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_14720 (temp_2.readProperty_mActualArgumentList ()) ;
  while (enumerator_14720.hasCurrentObject ()) {
    GGS_string var_argumentCppName_14938 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14720.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_14938, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 295)) ;
    var_getterArgumentCppNameList_14679.addAssignOperation (var_argumentCppName_14938  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 302)) ;
    enumerator_14720.gotoNextObject () ;
  }
  const GGS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_getterCallExpressionForGeneration temp_4 = this ;
      GGS_unifiedTypeMapEntry var_baseType_15134 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_15134, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 308)) ;
      GGS_bool var_searching_15249 = GGS_bool (true) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 310)).isValid ()) {
        uint32_t variant_15272 = GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 310)).uintValue () ;
        bool loop_15272 = true ;
        while (loop_15272) {
          loop_15272 = var_searching_15249.isValid () ;
          if (loop_15272) {
            loop_15272 = var_searching_15249.boolValue () ;
          }
          if (loop_15272 && (0 == variant_15272)) {
            loop_15272 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 310)) ;
          }
          if (loop_15272) {
            variant_15272 -= 1 ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_15134, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 311)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 311)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 311)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  const GGS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_15134, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)).readProperty_getterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    var_baseType_15134 = extensionGetter_definition (var_baseType_15134, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 313)).readProperty_superType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  var_searching_15249 = GGS_bool (false) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              var_searching_15249 = GGS_bool (false) ;
            }
          }
        }
      }
      const GGS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_15134, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 321)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_14613 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 322)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 323)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 323)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionForGeneration temp_11 = this ;
          const GGS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GGS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 324)).add_operation (GGS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 324)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (var_receiverCppName_14613, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        const GGS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)) ;
        const GGS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GGS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (var_receiverCppName_14613, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_14613 ;
      const GGS_getterCallExpressionForGeneration temp_15 = this ;
      UpEnumerator_stringlist enumerator_16486 (temp_15.readProperty_mFieldList ()) ;
      while (enumerator_16486.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssignOperation(GGS_string (".readProperty_").add_operation (enumerator_16486.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 333)) ;
        enumerator_16486.gotoNextObject () ;
      }
      const GGS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 335)) ;
      const GGS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 336)) ;
    }
    break ;
  }
  UpEnumerator_stringlist enumerator_16783 (var_getterArgumentCppNameList_14679) ;
  while (enumerator_16783.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_16783.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)) ;
    enumerator_16783.gotoNextObject () ;
    if (enumerator_16783.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)) ;
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_14679.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 342)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)) ;
          }
          outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 345)) ;
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
        outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 351)) ;
    }
  }
  const GGS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_expression_4090 ;
  const GGS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-bang.galgas", 91)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4090, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 88)) ;
  GGS_unifiedTypeMapEntry var_type_4166 = var_expression_4090.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_weakReferenceType var_weakRef_4205 = extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas", 99)).unwrappedValue () ;
    if (!extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 99)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("expression-primary-bang.galgas", 99)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_bangExpressionForGeneration::init_21__21__21__21_ (var_weakRef_4205.readProperty_referenceType (), temp_2.readProperty_mOperatorLocation (), var_expression_4090, extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 104)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_bangExpressionAST temp_3 = this ;
    GenericArray <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 108)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 108)).add_operation (GGS_string ("' and does not support the 'bang' operator"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 108)), fixItArray4  COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 107)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bangExpressionForGeneration generateExpression'
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
  GGS_string var_operand_5837 ;
  const GGS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5837, inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 131)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 139)) COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 139)) ;
  }
  const GGS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5837.add_operation (GGS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 140)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-bang.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 140)) ;
  const GGS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBigIntExpressionAST analyzeSemanticExpression'
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
//Overriding extension method '@literalUIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 171)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalUInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_uint_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 188)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 188)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalSIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 205)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 205)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalSInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_sint_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 222)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalBigIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 239)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 239)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 240)) COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 240)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 241)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 241)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 242)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@initializerCallAST enterExpressionInSemanticContext'
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
      GGS_unifiedTypeMapEntry joker_7731 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_7731, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 198)) ;
      }
    }
  }
  const GGS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 200)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@initializerCallAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_instanciedType_8641 ;
  GGS_lstring var_initializerName_8676 ;
  GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_8740 ;
  {
  const GGS_initializerCallAST temp_0 = this ;
  const GGS_initializerCallAST temp_1 = this ;
  const GGS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_8641, var_initializerName_8676, var_constructorEffectiveParameterList_8740, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 213)) ;
  }
  GGS_lstring var_typeUsefulnessName_8817 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_instanciedType_8641, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 228)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 228)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_8817 COMMA_SOURCE_FILE ("expression-initializer.galgas", 229)) ;
  }
  const GGS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GGS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_8641, temp_3.readProperty_mEndOfExpressions (), var_initializerName_8676.readProperty_string (), var_constructorEffectiveParameterList_8740, inCompiler COMMA_HERE) ;
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
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas", 262)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_unifiedTypeDefinition var_instanciedTypeDefinition_10489 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 266)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_10489.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas", 267)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas", 268)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_lstring var_nameForUsefulness_10803 = function_initializerNameForUsefulEntitiesGraph (var_instanciedTypeDefinition_10489.readProperty_typeName (), extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 273)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_10803 COMMA_SOURCE_FILE ("expression-initializer.galgas", 277)) ;
      }
      outArgument_outInitializerName = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 279)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GGS_initializerMap var_initializerMap_11202 = var_instanciedTypeDefinition_10489.readProperty_initializerMap () ;
      GGS_functionSignature var_formalSignature_11288 ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_initializerMap_11202.getter_hasKey (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas", 282)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_initializerMap_11202.method_searchKey (outArgument_outInitializerName, var_formalSignature_11288, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 283)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GGS_string var_s_11457 = GGS_string ("@").add_operation (var_instanciedTypeDefinition_10489.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 285)).add_operation (GGS_string ("init ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 285)) ;
        UpEnumerator_actualOutputArgumentList enumerator_11537 (constinArgument_inInvocationArguments) ;
        while (enumerator_11537.hasCurrentObject ()) {
          var_s_11457.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 288)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_11537.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_s_11457.plusAssignOperation(enumerator_11537.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 290)) ;
            }
          }
          enumerator_11537.gotoNextObject () ;
          if (enumerator_11537.hasCurrentObject ()) {
            var_s_11457.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 293)) ;
          }
        }
        var_s_11457.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 295)) ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GGS_string ("the ").add_operation (var_s_11457, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 297)).add_operation (GGS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 297)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas", 296)) ;
        var_formalSignature_11288.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      UpEnumerator_actualOutputArgumentList enumerator_12013 (constinArgument_inInvocationArguments) ;
      UpEnumerator_functionSignature enumerator_12059 (var_formalSignature_11288) ;
      while (enumerator_12013.hasCurrentObject () && enumerator_12059.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_exp_12423 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_12013.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_12059.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_12423, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 304)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12059.current (HERE).readProperty_mFormalArgumentType (), var_exp_12423.readProperty_mResultType (), enumerator_12013.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_12423, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 313)) ;
        }
        outArgument_outConstructorEffectiveParameterList.addAssignOperation (var_exp_12423  COMMA_SOURCE_FILE ("expression-initializer.galgas", 319)) ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_12059.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_12013.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_12059.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = enumerator_12059.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 322)) ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_12807 = GGS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 321)) ;
            GenericArray <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, EnumFixItKind::fixItReplace, var_s_12807) ;
            inCompiler->emitSemanticError (enumerator_12013.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12807, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 326)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 326)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas", 325)) ;
          }
        }
        enumerator_12013.gotoNextObject () ;
        enumerator_12059.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@initializerCallForGeneration generateExpression'
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
  GGS_stringlist var_parameterList_14040 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_initializerCallForGeneration temp_1 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_14069 (temp_1.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_14069.hasCurrentObject ()) {
    GGS_string var_parameter_14299 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14069.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_14299, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 351)) ;
    var_parameterList_14040.addAssignOperation (var_parameter_14299  COMMA_SOURCE_FILE ("expression-initializer.galgas", 358)) ;
    enumerator_14069.gotoNextObject () ;
  }
  const GGS_initializerCallForGeneration temp_2 = this ;
  const GGS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 360)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 360)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 361)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 361)) ;
  UpEnumerator_stringlist enumerator_14551 (var_parameterList_14040) ;
  while (enumerator_14551.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_14551.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 364)) ;
    enumerator_14551.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 366)) COMMA_SOURCE_FILE ("expression-initializer.galgas", 366)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 367)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 368)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalCharExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalCharExpressionAST analyzeSemanticExpression'
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
//Overriding extension method '@literalCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (utf32 (").add_operation (temp_0.readProperty_mCharacter ().getter_uint (SOURCE_FILE ("expression-primary-literal-char.galgas", 103)).getter_string (SOURCE_FILE ("expression-primary-literal-char.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_literalTypeInExpressionAST temp_0 = this ;
  GGS_unifiedTypeMapEntry joker_3139 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_3139, inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 69)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
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
  GGS_lstring var_usefulnessName_3702 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 83)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3702 COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 84)) ;
  }
  const GGS_literalTypeInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_3879 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 86)) ;
  const GGS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_literalTypeInExpressionForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("type"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 88)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 88)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_3879, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
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
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_exprGeneration_5866 ;
  const GGS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exprGeneration_5866, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 149)) ;
  GGS_unifiedTypeMapEntry var_expressionType_5956 = var_exprGeneration_5866.readProperty_mResultType () ;
  GGS_propertyMap var_propertyMap_6008 = extensionGetter_definition (var_expressionType_5956, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 160)).readProperty_propertyMap () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_structPropertyAccessExpressionAST temp_2 = this ;
    const GGS_propertyMap_2E_element var_prop_6073 = var_propertyMap_6008.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_propertyMap_6008.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_exprGeneration_5866.ptr ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          const GGS_structPropertyAccessExpressionAST temp_4 = this ;
          const GGS_structPropertyAccessExpressionAST temp_5 = this ;
          GGS_unifiedTypeMapEntry joker_6298_3 ; // Joker input parameter
          GGS_string joker_6298_2 ; // Joker input parameter
          GGS_string joker_6298_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_4.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 164)), temp_5.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_6298_3, joker_6298_2, joker_6298_1, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 163)) ;
          }
        }
      }
      const GGS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_prop_6073.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_6.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 168)) ;
      const GGS_structPropertyAccessExpressionAST temp_7 = this ;
      const GGS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpressionGeneration = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_6073.readProperty_mPropertyType (), temp_7.readProperty_operatorLocation (), var_exprGeneration_5866, temp_8.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_6667 = extensionGetter_definition (var_expressionType_5956, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 177)).readProperty_getterMap () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_structPropertyAccessExpressionAST temp_10 = this ;
      const GGS_getterMap_2E_element var_theGetter_6730 = var_getterMap_6667.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_getterMap_6667.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_9 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_9) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_theGetter_6730.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 179)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_structPropertyAccessExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_propertyName ().readProperty_location (), GGS_string ("for being called as a property read, the getter should have no formal argument (has ").add_operation (var_theGetter_6730.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 182)).getter_string (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 181)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 182)), fixItArray13  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 180)) ;
            outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          const GGS_structPropertyAccessExpressionAST temp_14 = this ;
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::equal, var_theGetter_6730.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_propertyName ().readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = var_theGetter_6730.readProperty_mGetterNameThatObsoletesInvokationName () ;
          }
          outArgument_outExpressionGeneration = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_theGetter_6730.readProperty_mReturnedType (), temp_14.readProperty_propertyName ().readProperty_location (), var_theGetter_6730.readProperty_mKind (), var_exprGeneration_5866, GGS_stringlist::init (inCompiler COMMA_HERE), temp_15, GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_theGetter_6730.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GGS_string var_s_7605 = GGS_string ("undefined property, undefined getter") ;
      UpEnumerator_propertyMap enumerator_7672 (var_propertyMap_6008) ;
      while (enumerator_7672.hasCurrentObject ()) {
        var_s_7605.plusAssignOperation(GGS_string ("\n  -- property: ").add_operation (enumerator_7672.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 202)) ;
        enumerator_7672.gotoNextObject () ;
      }
      UpEnumerator_getterMap enumerator_7773 (var_getterMap_6667) ;
      while (enumerator_7773.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_7773.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 205)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_s_7605.plusAssignOperation(GGS_string ("\n  -- getter: ").add_operation (enumerator_7773.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 206)) ;
          }
        }
        enumerator_7773.gotoNextObject () ;
      }
      const GGS_structPropertyAccessExpressionAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_propertyName ().readProperty_location (), var_s_7605, fixItArray20  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 209)) ;
      outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@propertyAccessExpressionForGeneration generateExpression'
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
  GGS_string var_operand_9087 ;
  const GGS_propertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_9087, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 233)) ;
  outArgument_outCppExpression = var_operand_9087.add_operation (GGS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 241)) ;
  const GGS_propertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_2.readProperty_structFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 242)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 242)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@subscriptReadAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  UpEnumerator_actualOutputArgumentList enumerator_10023 (temp_0.readProperty_actualArgumentList ()) ;
  while (enumerator_10023.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_10023.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 262)) ;
    enumerator_10023.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@subscriptReadAccessExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_expression_11145 ;
  const GGS_subscriptReadAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 280)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11145, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 277)) ;
  GGS_unifiedTypeMapEntry var_expressionType_11191 = var_expression_11145.readProperty_mResultType () ;
  const GGS_subscriptReadAccessExpressionAST temp_1 = this ;
  GGS_string var_invocationSignature_11278 = extensionGetter_subscriptSignature (temp_1.readProperty_actualArgumentList (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 288)) ;
  GGS_subscriptMap var_subscriptMap_11390 = extensionGetter_definition (var_expressionType_11191, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 290)).readProperty_readSubscriptMap () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_subscriptMap_2E_element var_aSubscript_11461 = var_subscriptMap_11390.readSubscript__3F_ (var_invocationSignature_11278, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_subscriptMap_11390.readSubscript__3F_ (var_invocationSignature_11278, inCompiler COMMA_HERE).isValuated ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_11565 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_subscriptReadAccessExpressionAST temp_3 = this ;
      UpEnumerator_functionSignature enumerator_11677 (var_aSubscript_11461.readProperty_argumentTypeList ()) ;
      UpEnumerator_actualOutputArgumentList enumerator_11713 (temp_3.readProperty_actualArgumentList ()) ;
      while (enumerator_11677.hasCurrentObject () && enumerator_11713.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_12071 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11713.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11677.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12071, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 295)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11677.current (HERE).readProperty_mFormalArgumentType (), var_expression_12071.readProperty_mResultType (), enumerator_11713.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_12071, inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 304)) ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_11677.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_11713.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_string temp_5 ;
            const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_11677.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              temp_5 = enumerator_11677.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 312)) ;
            }else if (GalgasBool::boolFalse == test_6) {
              temp_5 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_12405 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 311)) ;
            GenericArray <FixItDescription> fixItArray7 ;
            appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, var_s_12405) ;
            inCompiler->emitSemanticError (enumerator_11713.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_12405, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 315)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 315)), fixItArray7  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 315)) ;
          }
        }
        var_semanticExpressionListForGeneration_11565.addAssignOperation (var_expression_12071  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 318)) ;
        enumerator_11677.gotoNextObject () ;
        enumerator_11713.gotoNextObject () ;
      }
      const GGS_subscriptReadAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionForGeneration::init_21__21__21__21__21_ (var_aSubscript_11461.readProperty_valueType (), temp_8.readProperty_endOfArgsLocation (), var_expression_11145, var_invocationSignature_11278, var_semanticExpressionListForGeneration_11565, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_subscriptReadAccessExpressionAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_endOfArgsLocation (), GGS_string ("unknown subscript signature"), fixItArray10  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 329)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@subscriptReadAccessExpressionForGeneration generateExpression'
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
  GGS_string var_operand_14308 ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_14308, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 353)) ;
  GGS__5B_string_5D_ var_subscriptArgumentList_14366 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_2 = this ;
  UpEnumerator_semanticExpressionListForGeneration enumerator_14420 (temp_2.readProperty_actualExpressionList ()) ;
  while (enumerator_14420.hasCurrentObject ()) {
    GGS_string var_actualArgOperand_14636 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14420.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_actualArgOperand_14636, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 363)) ;
    {
    var_subscriptArgumentList_14366.setter_append (var_actualArgOperand_14636, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 370)) ;
    }
    enumerator_14420.gotoNextObject () ;
  }
  outArgument_outCppExpression = var_operand_14308.add_operation (GGS_string (".readSubscript_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 373)) ;
  const GGS_subscriptReadAccessExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_3.readProperty_subscriptInvocationName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 374)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 375)) ;
  UpEnumerator__5B_string_5D_ enumerator_14922 (var_subscriptArgumentList_14366) ;
  while (enumerator_14922.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_14922.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 377)) ;
    enumerator_14922.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 379)) COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 379)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 380)).add_operation (GGS_string (" COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 380)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalDoubleExpressionAST analyzeSemanticExpression'
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
//Overriding extension method '@literalDoubleExpressionForGeneration generateExpression'
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
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_expression_4041 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4041, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4117 = var_expression_4041.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (var_expression_4041.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (var_expression_4041.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4117, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 101)) COMMA_SOURCE_FILE ("expression-not.galgas", 101)).operator_not (SOURCE_FILE ("expression-not.galgas", 101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4117, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4117, temp_8.readProperty_mOperatorLocation (), var_expression_4041, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@notExpressionForGeneration generateExpression'
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
  GGS_string var_operand_5807 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5807, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5807.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_type_4093 = outArgument_outExpression.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4093, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas", 97)) COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryPlusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4093, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)).add_operation (GGS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  UpEnumerator_collectionValueElementList enumerator_4232 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_4232.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4232.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 112)) ;
    enumerator_4232.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_targetType_4898 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_targetType_4898 = constinArgument_inType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4898 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 131)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4898.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-collection-value.galgas", 134)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 135)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4898, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 136)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas", 136)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4898, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 138)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 138)).add_operation (GGS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 138)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 137)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_initializerMap var_initializerMap_5400 = extensionGetter_definition (var_targetType_4898, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 141)).readProperty_initializerMap () ;
      GGS_functionSignature var_emptyArgumentList_5485 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_initializerMap_5400.getter_hasKey (extensionGetter_initializerSignature (var_emptyArgumentList_5485, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 143)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 143)).operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas", 143)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 144)).add_operation (GGS_string (" has no @() initializer"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 144)), fixItArray12  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 144)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5728 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4898, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 148)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_5485, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 147)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5728 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 151)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_6007 = extensionGetter_definition (var_targetType_4898, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 153)).readProperty_typeForEnumeratedElement () ;
      GGS_collectionValueElementListForGeneration var_expressionListForGeneration_6121 = GGS_collectionValueElementListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      UpEnumerator_collectionValueElementList enumerator_6177 (temp_13.readProperty_mExpressionList ()) ;
      while (enumerator_6177.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_6492 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6177.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_6007, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_6492, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 156)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_6007, var_expressionForGeneration_6492.readProperty_mResultType (), enumerator_6177.current_location (HERE), var_expressionForGeneration_6492, inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 166)) ;
        }
        var_expressionListForGeneration_6121.addAssignOperation (var_expressionForGeneration_6492, enumerator_6177.current_location (HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 172)) ;
        enumerator_6177.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4898, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_6121, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_7047 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4898, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 180)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 180)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_7047 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 181)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
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
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 212)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 214)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 215)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::init (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 216)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 217)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 217)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  UpEnumerator_collectionValueElementListForGeneration enumerator_8948 (temp_4.readProperty_expressionList ()) ;
  while (enumerator_8948.hasCurrentObject ()) {
    GGS_string var_argumentCppName_9157 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8948.current_expression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_9157, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 220)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (".plusPlusAssignOperation ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 227)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(var_argumentCppName_9157.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 228)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (enumerator_8948.current_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 229)) ;
    enumerator_8948.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_expression_4114 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4114, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4190 = var_expression_4114.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4190, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4190, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4190, temp_4.readProperty_mOperatorLocation (), var_expression_4114, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
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
  GGS_string var_operand_5607 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5607, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 128)) ;
  outArgument_outCppExpression = var_operand_5607.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 136)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'Base.lproj' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'Base.lproj' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_1 [1] = {
  nullptr
} ;

//--- Directory 'Base.lproj'

const cDirectoryWrapper gWrapperDirectory_1_xcodeProjectGenerationFilewrapper (
  "Base.lproj",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_1,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_1
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [2] = {
  & gWrapperDirectory_1_xcodeProjectGenerationFilewrapper,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  1,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_REF,
                                                                            const GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const GGS_XCodeGroupList & in_GROUPS,
                                                                            const GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__32_stringlist & in_C_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                            const GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_249.gotoNextObject () ;
      index_249_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_552_ (0) ;
  if (in_C_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_552 (in_C_5F_FILE_5F_LIST) ;
    while (enumerator_552.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_552.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_552.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.c;\n    name = ") ;
      result.appendString (enumerator_552.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_552.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_552.gotoNextObject () ;
      index_552_.increment () ;
    }
  }
  GGS_uint index_937_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_937 (in_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_937.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_937.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_937.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_937.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_937.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_937.gotoNextObject () ;
      index_937_.increment () ;
    }
  }
  GGS_uint index_1328_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1328 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1328.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1328.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1328.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1328.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1328.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1328.gotoNextObject () ;
      index_1328_.increment () ;
    }
  }
  GGS_uint index_1713_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1713 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_1713.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1713.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1713.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_1713.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1713.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1713.gotoNextObject () ;
      index_1713_.increment () ;
    }
  }
  GGS_uint index_2099_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2099 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_2099.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2099.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2099.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_2099.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2099.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2099.gotoNextObject () ;
      index_2099_.increment () ;
    }
  }
  GGS_uint index_2494_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2494 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_2494.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2494.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2494.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_2494.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2494.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 76)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2494.gotoNextObject () ;
      index_2494_.increment () ;
    }
  }
  GGS_uint index_2885_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2885 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2885.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2885.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2885.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2885.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2885.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2885.gotoNextObject () ;
      index_2885_.increment () ;
    }
  }
  GGS_uint index_3458_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_3458 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_3458.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3458.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3458.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 94)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3458.gotoNextObject () ;
      index_3458_.increment () ;
    }
  }
  GGS_uint index_4054_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_4054 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_4054.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4054.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_4054.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_4054.gotoNextObject () ;
      index_4054_.increment () ;
    }
  }
  GGS_uint index_4383_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4383 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_4383.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4383.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_4383.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4383.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4383.gotoNextObject () ;
      index_4383_.increment () ;
    }
  }
  GGS_uint index_4747_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4747 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_4747.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4747.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4747.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4747.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 123)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4747.gotoNextObject () ;
      index_4747_.increment () ;
    }
  }
  GGS_uint index_5113_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_5113 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_5113.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5113.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_5113.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_5113.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 132)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_5113.gotoNextObject () ;
      index_5113_.increment () ;
    }
  }
  GGS_uint index_5452_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_5452 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_5452.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5452.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_5452.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 140)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 140)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_5452.current_mValue_31_ (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 141)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_5452.gotoNextObject () ;
      index_5452_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_6103_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_6103 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_6103.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_6103.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 149)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_6103.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_6342_ (0) ;
        if (enumerator_6103.current_mFrameworksFileRefList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_6342 (enumerator_6103.current_mFrameworksFileRefList (HERE)) ;
          while (enumerator_6342.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_6342.current_mValue (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_6342.gotoNextObject () ;
            index_6342_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_6103.gotoNextObject () ;
      index_6103_.increment () ;
    }
  }
  GGS_uint index_6780_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_6780 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_6780.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6780.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6964_ (0) ;
      if (enumerator_6780.current_mFrameworksFileRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6964 (enumerator_6780.current_mFrameworksFileRefList (HERE)) ;
        while (enumerator_6964.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6964.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_6964.gotoNextObject () ;
          index_6964_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_6780.gotoNextObject () ;
      index_6780_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_7240_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator_XCodeGroupList enumerator_7240 (in_GROUPS) ;
    while (enumerator_7240.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7240.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7240.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_7367_ (0) ;
      if (enumerator_7240.current_mChildrenRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_7367 (enumerator_7240.current_mChildrenRefs (HERE)) ;
        while (enumerator_7367.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_7367.current_mValue (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_7367.gotoNextObject () ;
          index_7367_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_7240.current_mGroupName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 184)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_7240.current_mGroupPath (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 185)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_7240.gotoNextObject () ;
      index_7240_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_7719_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator_stringlist enumerator_7719 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_7719.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_7719.current_mValue (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_7719.gotoNextObject () ;
      index_7719_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_8133_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_8133 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_8133.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8133.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8133.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8133.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8133.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_8133.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_8133.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_8133.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 218)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8133.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 220)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8133.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_8133.gotoNextObject () ;
      index_8133_.increment () ;
    }
  }
  GGS_uint index_9090_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_9090 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_9090.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_9090.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_9090.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_9090.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_9090.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_9090.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_9090.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_9479_ (0) ;
      if (enumerator_9090.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_9479 (enumerator_9090.current_mDependentTargets (HERE)) ;
        while (enumerator_9479.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_9479.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_9479.gotoNextObject () ;
          index_9479_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_9090.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 244)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_9090.current_mTargetName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 246)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_9090.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_9090.gotoNextObject () ;
      index_9090_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_10503_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_10503 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_10503.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10503.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10503.gotoNextObject () ;
      index_10503_.increment () ;
    }
  }
  GGS_uint index_10842_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10842 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10842.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10842.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10842.gotoNextObject () ;
      index_10842_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_11294_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_11294 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11294.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_11294.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_11477_ (0) ;
      if (enumerator_11294.current_mResourceFileBuildRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11477 (enumerator_11294.current_mResourceFileBuildRefs (HERE)) ;
        while (enumerator_11477.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_11477.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11477.gotoNextObject () ;
          index_11477_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_11294.gotoNextObject () ;
      index_11294_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11927_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_11927 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11927.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11927.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_12094_ (0) ;
      if (enumerator_11927.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_12094 (enumerator_11927.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_12094.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_12094.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_12094.gotoNextObject () ;
          index_12094_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11927.gotoNextObject () ;
      index_11927_.increment () ;
    }
  }
  GGS_uint index_12500_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_12500 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_12500.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_12500.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_12667_ (0) ;
      if (enumerator_12500.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_12667 (enumerator_12500.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_12667.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_12667.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_12667.gotoNextObject () ;
          index_12667_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_12500.gotoNextObject () ;
      index_12500_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_13174_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_13174 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_13174.hasCurrentObject ()) {
      GGS_uint index_13222_ (0) ;
      if (enumerator_13174.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_13222 (enumerator_13174.current_mDependentTargets (HERE)) ;
        while (enumerator_13222.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_13222.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_13222.current_mValue_31_ (HERE).stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_13222.gotoNextObject () ;
          index_13222_.increment () ;
        }
      }
      enumerator_13174.gotoNextObject () ;
      index_13174_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        CLANG_CXX_LANGUAGE_STANDARD = \"c++17\";\n        SWIFT_APPROACHABLE_CONCURRENCY = YES;\n        SWIFT_DEFAULT_ACTOR_ISOLATION = MainActor;\n        SWIFT_OPTIMIZATION_LEVEL = \"-Onone\";\n        SWIFT_STRICT_CONCURRENCY = complete;\n        SWIFT_VERSION = 6.0;\n") ;
  GGS_uint index_13962_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_13962 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_13962.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_13962.current_mValue (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_13962.gotoNextObject () ;
      index_13962_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_14277_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_14277 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_14277.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14277.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n        ONLY_ACTIVE_ARCH = NO;\n") ;
      GGS_uint index_14480_ (0) ;
      if (enumerator_14277.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_14480 (enumerator_14277.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_14480.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14480.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14480.gotoNextObject () ;
          index_14480_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_14277.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_14277.gotoNextObject () ;
      index_14277_.increment () ;
    }
  }
  GGS_uint index_14955_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_14955 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_14955.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14955.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_15123_ (0) ;
      if (enumerator_14955.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_15123 (enumerator_14955.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_15123.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_15123.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_15123.gotoNextObject () ;
          index_15123_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = \"Info.plist\";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_14955.current_mProductFileName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("project.pbxproj.galgasTemplate", 373)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_BUNDLE_IDENTIFIER = \"") ;
      result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
      result.appendString (".") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString ("\";\n      SWIFT_ACTIVE_COMPILATION_CONDITIONS = \"CONFIGURATION_IS_DEBUG $(inherited)\";\n      SWIFT_VERSION = 6.0;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_14955.gotoNextObject () ;
      index_14955_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_16200_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_16200 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_16200.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_16200.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_16200.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_16200.gotoNextObject () ;
      index_16200_.increment () ;
    }
  }
  GGS_uint index_16782_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_16782 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_16782.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_16782.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_16782.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_16782.gotoNextObject () ;
      index_16782_.increment () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'grammarRulesInTexDocumentTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_grammarRulesInTexDocumentTemplate (
  "",
  0,
  gWrapperAllFiles_grammarRulesInTexDocumentTemplate_0,
  0,
  gWrapperAllDirectories_grammarRulesInTexDocumentTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'grammarRulesInTexDocumentTemplate document'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (Compiler * /* inCompiler */,
                                                                           const GGS_string & in_DOCUMENT_5F_NAME,
                                                                           const GGS_string & in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("%!TEX encoding = UTF-8 Unicode\n\n\\documentclass[landscape]{book}\n\\usepackage[a3paper]{geometry}\n\n\\usepackage{verbatim}\n\n\\usepackage{hyperref}\n\n\\usepackage{tikz}\n\n\\usetikzlibrary{\n  arrows,\n  shapes.misc,% wg. rounded rectangle\n  shapes.arrows,%\n  matrix,%\n  scopes,%\n  shadows%\n}\n\n\\tikzset{\n  nonterminal/.style={\n    % The shape:\n    rectangle,\n    % The size:\n    minimum size=6mm,\n    % The border:\n    very thick,\n    draw=red!50!black!50,         % 50% red and 50% black,\n                                  % and that mixed with 50% white\n    % The filling:\n    top color=white,              % a shading that is white at the top...\n    bottom color=red!50!black!20, % and something else at the bottom\n    % Font\n    font=\\itshape\\small\n  },\n  terminal/.style={\n    % The shape:\n    rounded rectangle,\n    minimum size=6mm,\n    % The rest\n    very thick,draw=black!50,\n    top color=white,bottom color=black!20,\n    font=\\ttfamily\\small\n  },\n  firstPoint/.style={circle,>=stealth',thick,draw=black!50},\n  point/.style={coordinate,>=stealth',thick,draw=black!50},\n  tip/.style={->,shorten >=0.007pt},\n  lastPoint/.style={rectangle,>=stealth',thick,draw=black!50},\n  every join/.style={rounded corners}\n}\n\n\\newcommand\\nonTerminalSection[2]{\\section{Nonterminal \\texttt{#1}}\\label{nt:#2}}\n\\newcommand\\ruleSubsection[3]{\\subsection{Component \\texttt{#1}, in file \\texttt{#2}, line #3}}\n\\newcommand\\ruleMatrixColumnSeparation{3mm}\n\\newcommand\\ruleMatrixRowSeparation{3mm}\n\\newcommand\\nonTerminalSymbol[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\startSymbol[2]{The start symbol is \\hyperref[nt:#2]{#1}.}\n\n\\newcommand\\nonTerminalSummaryStart{This is the alphabetical list of non terminal : }\n\\newcommand\\nonTerminalSummary[2]{\\hyperref[nt:#2]{#1}}\n\\newcommand\\nonTerminalSummarySeparator{, }\n\\newcommand\\nonTerminalSummaryEnd{.\\\\}\n\n\\begin{document}\n\n\\title{\\Huge{Grammar \\texttt{") ;
  result.appendString (in_TEX_5F_ESCAPED_5F_DOCUMENT_5F_NAME.stringValue ()) ;
  result.appendString ("}}}\n\\date \\today \n\n\\maketitle\n\n\\input{") ;
  result.appendString (in_DOCUMENT_5F_NAME.stringValue ()) ;
  result.appendString (".tex}\n\n\\end{document}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'escapeForTex'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_escapeForTex (const GGS_string & constinArgument_inString,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  UpEnumerator_range enumerator_1971 (GGS_range (GGS_uint (uint32_t (0U)), constinArgument_inString.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 39)).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 39)))) ;
  while (enumerator_1971.hasCurrentObject ()) {
    GGS_char var_c_1984 = constinArgument_inString.getter_characterAtIndex (enumerator_1971.current (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 40)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (95)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        result_result.plusAssignOperation(GGS_string ("\\_"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 42)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (123)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          result_result.plusAssignOperation(GGS_string ("\\{"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 44)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (125)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result_result.plusAssignOperation(GGS_string ("\\}"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 46)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (38)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              result_result.plusAssignOperation(GGS_string ("\\&"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 48)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (35)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                result_result.plusAssignOperation(GGS_string ("\\#"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 50)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (36)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  result_result.plusAssignOperation(GGS_string ("\\$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 52)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    result_result.plusAssignOperation(GGS_string ("\\verb=^="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 54)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (37)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      result_result.plusAssignOperation(GGS_string ("\\verb=%="), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 56)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_7) {
                    GalgasBool test_8 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_8) {
                      test_8 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (126)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_8) {
                        result_result.plusAssignOperation(GGS_string ("$\\sim$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 58)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_8) {
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = GGS_bool (ComparisonKind::equal, var_c_1984.objectCompare (GGS_char (utf32 (94)))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          result_result.plusAssignOperation(GGS_string ("$\\wedge$"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 60)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_9) {
                        result_result.plusAssignOperation(var_c_1984.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 62)) ;
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
    enumerator_1971.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_escapeForTex [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_escapeForTex (Compiler * inCompiler,
                                                          const cObjectArray & inEffectiveParameterArray,
                                                          const GGS_location & /* inErrorLocation */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  return function_escapeForTex (operand0,
                                inCompiler
                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_escapeForTex ("escapeForTex",
                                                              functionWithGenericHeader_escapeForTex,
                                                              & kTypeDescriptor_GALGAS_string,
                                                              1,
                                                              functionArgs_escapeForTex) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'emitProductionRulesInTexFile?????'
//
//--------------------------------------------------------------------------------------------------

void routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inProductDirectory,
                                                               const GGS_string constinArgument_inGrammarComponentName,
                                                               const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalMapForGrammarAnalysis,
                                                               const GGS_syntaxComponentListForGrammarAnalysis constinArgument_inSyntaxComponentListForGrammarAnalysis,
                                                               const GGS_lstring constinArgument_inStartSymbol,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_texDocumentFilePath_3059 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)).add_operation (GGS_string (".document.tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 77)) ;
  var_texDocumentFilePath_3059.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas", 78)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 78)) ;
  GGS_string var_document_3236 = GGS_string (filewrapperTemplate_grammarRulesInTexDocumentTemplate_document (inCompiler, constinArgument_inGrammarComponentName, function_escapeForTex (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 81)) COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 79))) ;
  GGS_bool joker_3445 ; // Joker input parameter
  var_document_3236.method_writeToFileWhenDifferentContents (var_texDocumentFilePath_3059, joker_3445, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 83)) ;
  GGS_string var_texFilePath_3455 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../tex/"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)).add_operation (constinArgument_inGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)).add_operation (GGS_string (".tex"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 84)) ;
  GGS_string var_s_3541 = GGS_string::makeEmptyString () ;
  GGS_uint var_startSymbolIndex_3616 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_3633 ; // Joker input parameter
  constinArgument_inNonTerminalMapForGrammarAnalysis.method_searchKey (constinArgument_inStartSymbol, var_startSymbolIndex_3616, joker_3633, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 86)) ;
  var_s_3541.plusAssignOperation(GGS_string ("\\startSymbol{").add_operation (function_escapeForTex (constinArgument_inStartSymbol.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)).add_operation (var_startSymbolIndex_3616.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 87)) ;
  var_s_3541.plusAssignOperation(GGS_string ("\\nonTerminalSummaryStart "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 88)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_3786 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_3786.hasCurrentObject ()) {
    var_s_3541.plusAssignOperation(GGS_string ("\\nonTerminalSummary{").add_operation (function_escapeForTex (enumerator_3786.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)).add_operation (enumerator_3786.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 90)) ;
    enumerator_3786.gotoNextObject () ;
    if (enumerator_3786.hasCurrentObject ()) {
      var_s_3541.plusAssignOperation(GGS_string ("\\nonTerminalSummarySeparator "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 91)) ;
    }
  }
  var_s_3541.plusAssignOperation(GGS_string ("\\nonTerminalSummaryEnd "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 93)) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_4048 (constinArgument_inNonTerminalMapForGrammarAnalysis) ;
  while (enumerator_4048.hasCurrentObject ()) {
    var_s_3541.plusAssignOperation(GGS_string ("\\nonTerminalSection{").add_operation (function_escapeForTex (enumerator_4048.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)).add_operation (enumerator_4048.current (HERE).readProperty_mNonTerminalIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 95)) ;
    UpEnumerator_syntaxComponentListForGrammarAnalysis enumerator_4230 (constinArgument_inSyntaxComponentListForGrammarAnalysis) ;
    while (enumerator_4230.hasCurrentObject ()) {
      UpEnumerator_productionRuleListForGrammarAnalysis enumerator_4317 (enumerator_4230.current (HERE).readProperty_mProductionRulesList ()) ;
      while (enumerator_4317.hasCurrentObject ()) {
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = GGS_bool (ComparisonKind::equal, enumerator_4317.current (HERE).readProperty_mLeftNonterminalSymbol ().readProperty_string ().objectCompare (enumerator_4048.current (HERE).readProperty_lkey ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            GalgasBool test_1 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_1) {
              test_1 = extensionGetter_displayVertically (enumerator_4317.current (HERE).readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 99)).boolEnum () ;
              if (GalgasBool::boolTrue == test_1) {
                extensionMethod_displayRuleVertically (enumerator_4317.current (HERE), enumerator_4230.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3541, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 100)) ;
              }
            }
            if (GalgasBool::boolFalse == test_1) {
              extensionMethod_displayRule (enumerator_4317.current (HERE), enumerator_4230.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), var_s_3541, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 102)) ;
            }
          }
        }
        enumerator_4317.gotoNextObject () ;
      }
      enumerator_4230.gotoNextObject () ;
    }
    enumerator_4048.gotoNextObject () ;
  }
  GGS_bool joker_4798 ; // Joker input parameter
  var_s_3541.method_writeToFileWhenDifferentContents (var_texFilePath_3455, joker_4798, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 108)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonTerminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
                                                                                         const GGS_uint constinArgument_inRow,
                                                                                         GGS_uint & ioArgument_ioColumn,
                                                                                         GGS_string & ioArgument_ioCurrentNode,
                                                                                         GGS_string & ioArgument_ioArrowShape,
                                                                                         GGS_string & ioArgument_ioArrows,
                                                                                         GGS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                         const GGS_bool /* constinArgument_inDebug */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nonTerminalInstructionForGrammarAnalysis temp_0 = this ;
  const GGS_nonTerminalInstructionForGrammarAnalysis temp_1 = this ;
  GGS_string var_nodeDefinition_11645 = GGS_string ("[nonterminal] {\\nonTerminalSymbol{").add_operation (function_escapeForTex (temp_0.readProperty_mNonterminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 326)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 326)).add_operation (temp_1.readProperty_mNonterminalSymbolIndex ().getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 327)).add_operation (GGS_string ("}}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 327)) ;
  GGS_string var_nodeName_11909 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, var_nodeDefinition_11645, constinArgument_inRow, ioArgument_ioColumn, var_nodeName_11909, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 328)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (var_nodeName_11909, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 334)) ;
  ioArgument_ioCurrentNode = var_nodeName_11909 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 337)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
                                                                                    const GGS_uint constinArgument_inRow,
                                                                                    GGS_uint & ioArgument_ioColumn,
                                                                                    GGS_string & ioArgument_ioCurrentNode,
                                                                                    GGS_string & ioArgument_ioArrowShape,
                                                                                    GGS_string & ioArgument_ioArrows,
                                                                                    GGS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GGS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_markerStartNodeName_12701 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SS").add_operation (temp_1.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 355)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 355)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 355)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_12701, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 354)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (var_markerStartNodeName_12701, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 360)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_12701 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 363)) ;
    }
  }
  GGS_string var_startNodeName_13045 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_13045, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 366)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 367)) ;
  const GGS_selectInstructionForGrammarAnalysis temp_2 = this ;
  GGS_branchListForGrammarAnalysis var_branches_13106 = temp_2.readProperty_mSelectBranchList () ;
  GGS_syntaxInstructionListForGrammarAnalysis var_brancheZero_13209 ;
  {
  var_branches_13106.setter_popFirst (var_brancheZero_13209, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 370)) ;
  }
  GGS_uint var_branchZeroColumn_13228 = ioArgument_ioColumn ;
  GGS_uint var_maxUsedRowIndex_13262 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_13209, ioArgument_ioRowList, constinArgument_inRow, var_branchZeroColumn_13228, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_13262, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 373)) ;
  GGS_uint var_endColumn_13523 = var_branchZeroColumn_13228 ;
  GGS_stringlist var_endingNodes_13601 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  UpEnumerator_branchListForGrammarAnalysis enumerator_13635 (var_branches_13106) ;
  while (enumerator_13635.hasCurrentObject ()) {
    var_maxUsedRowIndex_13262.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 387)) ;
    GGS_uint var_branchColumn_13680 = ioArgument_ioColumn ;
    GGS_string var_currentNode_13712 = var_startNodeName_13045 ;
    GGS_string var_arrowStyle_13748 = GGS_string ("|-") ;
    extensionMethod_tikzNodeForSyntaxInstruction (enumerator_13635.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_maxUsedRowIndex_13262, var_branchColumn_13680, var_currentNode_13712, var_arrowStyle_13748, ioArgument_ioArrows, var_maxUsedRowIndex_13262, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 391)) ;
    var_endingNodes_13601.addAssignOperation (var_currentNode_13712  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 401)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_13523.objectCompare (var_branchColumn_13680)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_endColumn_13523 = var_branchColumn_13680 ;
      }
    }
    enumerator_13635.gotoNextObject () ;
  }
  ioArgument_ioColumn = var_endColumn_13523 ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_13262)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_13262 ;
    }
  }
  GGS_string var_endNodeName_14384 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_endNodeName_14384, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 411)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 412)) ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (var_endNodeName_14384, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 414)) ;
  ioArgument_ioCurrentNode = var_endNodeName_14384 ;
  UpEnumerator_stringlist enumerator_14591 (var_endingNodes_13601) ;
  while (enumerator_14591.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_14591.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)).add_operation (var_endNodeName_14384, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 418)) ;
    enumerator_14591.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_markerEndNodeName_14896 ;
      {
      const GGS_selectInstructionForGrammarAnalysis temp_6 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {SE").add_operation (temp_6.readProperty_mSelectBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 423)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 423)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 423)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_14896, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 422)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 428)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (var_markerEndNodeName_14896, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 429)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_14896 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
                                                                                    const GGS_uint constinArgument_inRow,
                                                                                    GGS_uint & ioArgument_ioColumn,
                                                                                    GGS_string & ioArgument_ioCurrentNode,
                                                                                    GGS_string & ioArgument_ioArrowShape,
                                                                                    GGS_string & ioArgument_ioArrows,
                                                                                    GGS_uint & ioArgument_ioMaxUsedRowIndex,
                                                                                    const GGS_bool constinArgument_inDebug,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_markerStartNodeName_15707 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_1 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RS").add_operation (temp_1.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 449)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 449)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 449)), constinArgument_inRow, ioArgument_ioColumn, var_markerStartNodeName_15707, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 448)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (var_markerStartNodeName_15707, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 454)) ;
      ioArgument_ioCurrentNode = var_markerStartNodeName_15707 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 457)) ;
    }
  }
  GGS_string var_returnNodeName_16052 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_returnNodeName_16052, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 460)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 461)) ;
  const GGS_repeatInstructionForGrammarAnalysis temp_2 = this ;
  GGS_branchListForGrammarAnalysis var_branches_16114 = temp_2.readProperty_mRepeatBranchList () ;
  GGS_syntaxInstructionListForGrammarAnalysis var_brancheZero_16217 ;
  {
  var_branches_16114.setter_popFirst (var_brancheZero_16217, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 464)) ;
  }
  GGS_uint var_maxUsedRowIndex_16236 = constinArgument_inRow ;
  extensionMethod_tikzNodeForSyntaxInstruction (var_brancheZero_16217, ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, var_maxUsedRowIndex_16236, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 466)) ;
  GGS_uint var_endColumn_16489 = ioArgument_ioColumn ;
  GGS_string var_startNodeName_16630 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_startNodeName_16630, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 478)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 479)) ;
  GGS_bool var_oneEmptyBranch_16733 = GGS_bool (ComparisonKind::equal, var_branches_16114.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 481)).objectCompare (GGS_uint (uint32_t (1U)))) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_oneEmptyBranch_16733.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_syntaxInstructionListForGrammarAnalysis var_firstBranch_16822 ;
      var_branches_16114.method_first (var_firstBranch_16822, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 483)) ;
      var_oneEmptyBranch_16733 = GGS_bool (ComparisonKind::equal, var_firstBranch_16822.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 484)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    }
  }
  GGS_stringlist var_endingNodes_16926 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_oneEmptyBranch_16733.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      var_endingNodes_16926.addAssignOperation (var_startNodeName_16630  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 489)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GGS_uint var_nextBranchUsedRowIndex_17018 = constinArgument_inRow ;
    UpEnumerator_branchListForGrammarAnalysis enumerator_17067 (var_branches_16114) ;
    while (enumerator_17067.hasCurrentObject ()) {
      var_nextBranchUsedRowIndex_17018.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 493)) ;
      GGS_uint var_branchColumn_17123 = ioArgument_ioColumn ;
      GGS_string var_currentNode_17157 = var_startNodeName_16630 ;
      GGS_string var_arrowStyle_17195 = GGS_string ("|-") ;
      extensionMethod_tikzNodeForSyntaxInstruction (enumerator_17067.current (HERE).readProperty_mSyntaxInstructionList (), ioArgument_ioRowList, var_nextBranchUsedRowIndex_17018, var_branchColumn_17123, var_currentNode_17157, var_arrowStyle_17195, ioArgument_ioArrows, var_nextBranchUsedRowIndex_17018, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 497)) ;
      var_endingNodes_16926.addAssignOperation (var_currentNode_17157  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 507)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::lowerThan, var_endColumn_16489.objectCompare (var_branchColumn_17123)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_endColumn_16489 = var_branchColumn_17123 ;
        }
      }
      enumerator_17067.gotoNextObject () ;
    }
    ioArgument_ioColumn = var_endColumn_16489 ;
    ioArgument_ioMaxUsedRowIndex = var_nextBranchUsedRowIndex_17018 ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::lowerThan, ioArgument_ioMaxUsedRowIndex.objectCompare (var_maxUsedRowIndex_16236)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      ioArgument_ioMaxUsedRowIndex = var_maxUsedRowIndex_16236 ;
    }
  }
  ioArgument_ioMaxUsedRowIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 519)) ;
  GGS_string var_returnUpperNodeName_18031 ;
  {
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), ioArgument_ioMaxUsedRowIndex, ioArgument_ioColumn, var_returnUpperNodeName_18031, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 521)) ;
  }
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 522)) ;
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_returnUpperNodeName_18031, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)).add_operation (var_returnNodeName_16052, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 523)) ;
  UpEnumerator_stringlist enumerator_18190 (var_endingNodes_16926) ;
  while (enumerator_18190.hasCurrentObject ()) {
    ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (enumerator_18190.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)).add_operation (GGS_string (") -| ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)).add_operation (var_returnUpperNodeName_18031, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 526)) ;
    enumerator_18190.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = constinArgument_inDebug.boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string var_markerEndNodeName_18503 ;
      {
      const GGS_repeatInstructionForGrammarAnalysis temp_8 = this ;
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[nonterminal] {RE").add_operation (temp_8.readProperty_mRepeatBranchList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 531)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 531)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 531)), constinArgument_inRow, ioArgument_ioColumn, var_markerEndNodeName_18503, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 530)) ;
      }
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 536)) ;
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (var_markerEndNodeName_18503, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 537)) ;
      ioArgument_ioCurrentNode = var_markerEndNodeName_18503 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonTerminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_nonTerminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GGS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_3922 (temp_0.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_3922.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3922.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 101)) ;
    GGS_lexicalTagMap var_tagMap_4061 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 102)) ;
    UpEnumerator_lexicalInstructionListAST enumerator_4126 (enumerator_3922.current_mWhileInstructionList (HERE)) ;
    while (enumerator_4126.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4126.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4061, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 104)) ;
      enumerator_4126.gotoNextObject () ;
    }
    enumerator_3922.gotoNextObject () ;
  }
  GGS_lexicalTagMap var_tagMap_4269 = GGS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 107)) ;
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_4332 (temp_1.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_4332.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4332.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4269, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 109)) ;
    enumerator_4332.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("while (loop && scanningOk) {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 158)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_6756 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_6756.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6756.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)) ;
    enumerator_6756.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_6961 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_6961.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 166)) ;
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6961.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 168)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 169)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_7251 (enumerator_6961.current_mWhileInstructionList (HERE)) ;
    while (enumerator_7251.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7251.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)) ;
      enumerator_7251.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 173)) ;
    }
    enumerator_6961.gotoNextObject () ;
    if (enumerator_6961.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 175)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 177)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 180)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 181)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalRepeatInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                    const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 200)) ;
  }
  const GGS_lexicalRepeatInstructionAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_8435 (temp_0.readProperty_mRepeatedInstructionList ()) ;
  while (enumerator_8435.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8435.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)) ;
    enumerator_8435.gotoNextObject () ;
  }
  const GGS_lexicalRepeatInstructionAST temp_1 = this ;
  UpEnumerator_lexicalWhileBranchListAST enumerator_8627 (temp_1.readProperty_mLexicalWhileBranchList ()) ;
  while (enumerator_8627.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 208)) ;
    result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8627.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)) ;
    result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 210)) ;
    {
    result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 211)) ;
    }
    UpEnumerator_lexicalInstructionListAST enumerator_8861 (enumerator_8627.current_mWhileInstructionList (HERE)) ;
    while (enumerator_8861.hasCurrentObject ()) {
      result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8861.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)) ;
      enumerator_8861.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 215)) ;
    }
    enumerator_8627.gotoNextObject () ;
    if (enumerator_8627.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 217)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 219)) ;
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 222)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 223)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GGS_lexicalSentValueList joker_8232 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8232, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 208)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 222)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 223)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_hasKey (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 237)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 237)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterSetMatchAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, EnumFixItKind::fixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GGS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 238)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 252)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.plusPlusAssignOperation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 259)) ;
  {
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GGS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 260)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_11869 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11869, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_11869.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11869, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 284)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 285)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 286)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 297)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 298)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 299)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 298)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 311)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal character has @uint").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 313)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                            const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 325)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14528 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_14559 ;
  GGS_string var_replacementFunctionName_14594 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_14622 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_14528, var_returnedLexicalFormalType_14559, var_replacementFunctionName_14594, joker_14622, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 339)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_14594.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14594, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_14559.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14559, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 354)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_14528.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 359)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 359)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 361)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)).add_operation (var_lexicalFormalTypeList_14528.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 363)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator_lexicalFunctionFormalArgumentList enumerator_15615 (var_lexicalFormalTypeList_14528) ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15645 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_15615.hasCurrentObject () && enumerator_15645.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15645.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15615.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 367)) ;
    enumerator_15615.gotoNextObject () ;
    enumerator_15645.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeEnum var_attributeLexicalType_16746 ;
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_16746, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_attributeLexicalType_16746.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalAttributeInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GGS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16746, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)).add_operation (GGS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 396)).add_operation (GGS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 397)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 408)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GGS_string ("type error, a literal character has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 410)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 411)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 422)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GGS_string ("type error, a literal unsigned value has @uint").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 424)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 425)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                           const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 436)).objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("type error, current character value has @char").add_operation (GGS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 438)).add_operation (GGS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   const GGS_lexicalTypeEnum constinArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19408 ;
  GGS_lexicalTypeEnum var_returnedLexicalFormalType_19439 ;
  GGS_string var_replacementFunctionName_19474 ;
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GGS_bool joker_19502 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_19408, var_returnedLexicalFormalType_19439, var_replacementFunctionName_19474, joker_19502, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 450)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_replacementFunctionName_19474.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_lexicalFunctionInputArgumentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GGS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19474, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_19439.objectCompare (constinArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_lexicalFunctionInputArgumentAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GGS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19439, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)).add_operation (GGS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)).add_operation (extensionGetter_lexicalTypeBaseName (constinArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_19408.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 470)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 470)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GGS_lexicalFunctionInputArgumentAST temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 472)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)).add_operation (GGS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)).add_operation (var_lexicalFormalTypeList_19408.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 474)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)).add_operation (GGS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 474)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)) ;
    }
  }
  const GGS_lexicalFunctionInputArgumentAST temp_12 = this ;
  UpEnumerator_lexicalFunctionFormalArgumentList enumerator_20495 (var_lexicalFormalTypeList_19408) ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20525 (temp_12.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_20495.hasCurrentObject () && enumerator_20525.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20525.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20495.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)) ;
    enumerator_20495.gotoNextObject () ;
    enumerator_20525.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_21792 ; // Joker input parameter
  GGS_tokenSortedlist joker_21795 ; // Joker input parameter
  GGS_bool joker_21798 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_21792, joker_21795, joker_21798, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 504)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 511)) ;
  GGS_lexicalTagMap var_tagMap_22122 = GGS_lexicalTagMap::init (inCompiler COMMA_HERE) ;
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_22142 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_22142.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_22142.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_22122, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 514)) ;
    enumerator_22142.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_4556 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_4556.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GGS_bool (true), enumerator_4556.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)) ;
    }
    GGS_lexicalTypeEnum joker_4796 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_4556.current_mAttributeName (HERE), joker_4796, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 113)) ;
    enumerator_4556.gotoNextObject () ;
  }
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                               const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_6309 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_6309.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 146)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (enumerator_6309.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (GGS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (enumerator_6309.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 149)) ;
    enumerator_6309.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 151)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                            const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_lexicalStructuredSendInstructionAST temp_0 = this ;
  UpEnumerator_lexicalSendSearchListAST enumerator_7518 (temp_0.readProperty_mLexicalSendSearchList ()) ;
  while (enumerator_7518.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_7518.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (GGS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (enumerator_7518.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)) ;
    result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 174)) ;
    enumerator_7518.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 176)) ;
  const GGS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_result.plusAssignOperation(GGS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)) ;
  result_result.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 178)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'compilerCppName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_compilerCppName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GGS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GGS_string gOnceFunctionResult_compilerCppName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_compilerCppName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compilerCppName) {
    gOnceFunctionResult_compilerCppName = onceFunction_compilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compilerCppName = true ;
  }
  return gOnceFunctionResult_compilerCppName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compilerCppName (void) {
  gOnceFunctionResult_compilerCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_compilerCppName (nullptr,
                                                           releaseOnceFunctionResult_compilerCppName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compilerCppName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compilerCppName (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_compilerCppName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compilerCppName ("compilerCppName",
                                                                 functionWithGenericHeader_compilerCppName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_compilerCppName) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'syntaxDirectedTranslationResultVarName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_syntaxDirectedTranslationResultVarName (Compiler *
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outName ; // Returned variable
  result_outName = GGS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GGS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_syntaxDirectedTranslationResultVarName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_syntaxDirectedTranslationResultVarName = onceFunction_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_syntaxDirectedTranslationResultVarName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_syntaxDirectedTranslationResultVarName (nullptr,
                                                                                  releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (Compiler * inCompiler,
                                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                                    const GGS_location & /* inErrorLocation */
                                                                                    COMMA_LOCATION_ARGS) {
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxDirectedTranslationResultVarName ("syntaxDirectedTranslationResultVarName",
                                                                                        functionWithGenericHeader_syntaxDirectedTranslationResultVarName,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        0,
                                                                                        functionArgs_syntaxDirectedTranslationResultVarName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3GrammarComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  result_result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 314)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result_result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 321)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@predefinedTypeAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_predefinedTypeAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_predefinedTypeAST temp_0 = this ;
  result_result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 328)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sortedListDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_sortedListDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_sortedListDeclarationAST temp_0 = this ;
  result_result = GGS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 335)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  result_result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 342)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_optionComponentDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  result_result = GGS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 349)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@graphDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_graphDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_graphDeclarationAST temp_0 = this ;
  result_result = GGS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 356)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 363)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  result_result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 369)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions????&&??isClass&&&&?acceptSetters'
//
//--------------------------------------------------------------------------------------------------

void routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                                                    const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                                    const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                                    const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                                    GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    const GGS_lstring constinArgument_inTypeName,
                                                                                                    const GGS_bool constinArgument_inIsClass,
                                                                                                    GGS_initializerMap & ioArgument_ioInitializerMap,
                                                                                                    GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                    GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                    GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                    const GGS_bool constinArgument_inAcceptSetters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 393)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_16297 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_16297, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 394)) ;
      UpEnumerator_extensionGetterMapForType enumerator_16380 (var_extensionGetterMapForType_16297) ;
      while (enumerator_16380.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_16452 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_16510 (enumerator_16380.current_mInputFormalParameterList (HERE)) ;
        while (enumerator_16510.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16620 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16510.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16620, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 398)) ;
          }
          var_formalArgumentList_16452.addAssignOperation (enumerator_16510.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16620, enumerator_16510.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_16510.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 399)) ;
          enumerator_16510.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_16891 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16380.current_mResultTypeName (HERE), var_returnedType_16891, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 405)) ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_16380.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 406)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16380.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 407)).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 408)), enumerator_16380.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 408)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_16380.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 410)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16380.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 411)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 412)), enumerator_16380.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 412)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_16380.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 414)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 414)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_16380.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 417)), var_formalArgumentList_16452, enumerator_16380.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_16891, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 422)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 415)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_16380.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 428)), var_formalArgumentList_16452, enumerator_16380.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_16891, enumerator_16380.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 426)) ;
              }
            }
          }
        }
        enumerator_16380.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 440)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_18108 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_18108, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 441)) ;
      UpEnumerator_extensionMethodMapForType enumerator_18170 (var_extensionMethodMapForType_18108) ;
      while (enumerator_18170.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_18223 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_18296 (enumerator_18170.current_mFormalParameterList (HERE)) ;
        while (enumerator_18296.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_18432 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18296.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_18432, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 445)) ;
          }
          var_formalArgumentList_18223.addAssignOperation (enumerator_18296.current (HERE).readProperty_mFormalSelector (), var_typeIndex_18432, enumerator_18296.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_18296.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 449)) ;
          enumerator_18296.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_18170.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 455)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18170.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 456)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 457)), enumerator_18170.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 457)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_18170.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 459)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18170.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 460)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 461)), enumerator_18170.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 461)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_18170.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 463)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 463)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18170.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 466)), var_formalArgumentList_18223, enumerator_18170.current_lkey (HERE).readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas", 470)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 464)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18170.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 476)), var_formalArgumentList_18223, enumerator_18170.current_lkey (HERE).readProperty_location (), GGS_bool (true), enumerator_18170.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 474)) ;
              }
            }
          }
        }
        enumerator_18170.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 487)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_19792 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_19792, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 488)) ;
      UpEnumerator_extensionSetterMapForType enumerator_19833 (var_extensionSetterMapForType_19792) ;
      while (enumerator_19833.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_19923 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_19971 (enumerator_19833.current_mFormalParameterList (HERE)) ;
        while (enumerator_19971.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_20067 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19971.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_20067, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 492)) ;
          }
          var_formalArgumentList_19923.addAssignOperation (enumerator_19971.current (HERE).readProperty_mFormalSelector (), var_typeIndex_20067, enumerator_19971.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_19971.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 493)) ;
          enumerator_19971.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_19833.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 501)), var_formalArgumentList_19923, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas", 504)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 499)) ;
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 507)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_19833.current_lkey (HERE).readProperty_location (), GGS_string ("a class does not accept any setter; use method instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas", 508)) ;
          }
        }
        enumerator_19833.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 513)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_20817 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_20817, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 514)) ;
      UpEnumerator_extensionInitializerMapForType enumerator_20854 (var_initializerMapForType_20817) ;
      while (enumerator_20854.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_20933 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_21030 (enumerator_20854.current_mFormalParameterList (HERE)) ;
        while (enumerator_21030.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_21130 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21030.current_mFormalArgumentTypeName (HERE), var_typeIndex_21130, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 518)) ;
          }
          var_formalArgumentList_20933.addAssignOperation (enumerator_21030.current_mFormalSelector (HERE), var_typeIndex_21130, enumerator_21030.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_21030.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 519)) ;
          enumerator_21030.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_20854.current_lkey (HERE), var_formalArgumentList_20933, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 529)) ;
        }
        enumerator_20854.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories????!!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (const GGS_string constinArgument_inAbsoluteSourcePath,
                                                                              const GGS_string constinArgument_inPathInWrapper,
                                                                              const GGS_wrapperExtensionMap constinArgument_inTextFileExtensionMap,
                                                                              const GGS_wrapperExtensionMap constinArgument_inBinaryFileExtensionMap,
                                                                              GGS_wrapperFileMap & outArgument_outWrapperFileMap,
                                                                              GGS_wrapperDirectoryMap & outArgument_outWrapperDirectoryMap,
                                                                              GGS_uint & ioArgument_ioWrapperFileIndex,
                                                                              GGS_uint & ioArgument_ioWrapperDirectoryIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GGS_uint var_currentDirectoryIndex_22502 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 557)) ;
  GGS_stringlist var_files_22630 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 559)) ;
  outArgument_outWrapperFileMap = GGS_wrapperFileMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_22714 (var_files_22630) ;
  while (enumerator_22714.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_22714.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 562)) COMMA_SOURCE_FILE ("semanticContext.galgas", 562)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteFilePath_22820 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 563)).add_operation (enumerator_22714.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 563)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_22714.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 565)), inCompiler COMMA_HERE), var_absoluteFilePath_22820, GGS_bool (true), var_currentDirectoryIndex_22502, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 564)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 571)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_22714.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 572)) COMMA_SOURCE_FILE ("semanticContext.galgas", 572)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteFilePath_23197 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 573)).add_operation (enumerator_22714.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 573)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_22714.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 575)), inCompiler COMMA_HERE), var_absoluteFilePath_23197, GGS_bool (false), var_currentDirectoryIndex_22502, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 574)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 581)) ;
        }
      }
    }
    enumerator_22714.gotoNextObject () ;
  }
  GGS_stringlist var_directories_23555 = constinArgument_inAbsoluteSourcePath.getter_directories (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 585)) ;
  outArgument_outWrapperDirectoryMap = GGS_wrapperDirectoryMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_23649 (var_directories_23555) ;
  while (enumerator_23649.hasCurrentObject ()) {
    GGS_uint var_theDirectoryIndex_23689 = ioArgument_ioWrapperDirectoryIndex ;
    GGS_wrapperFileMap var_internalWrapperFileMap_23925 ;
    GGS_wrapperDirectoryMap var_internalWrapperDirectoryMap_23959 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 590)).add_operation (enumerator_23649.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 590)), constinArgument_inPathInWrapper.add_operation (enumerator_23649.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 591)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 591)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_23925, var_internalWrapperDirectoryMap_23959, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 589)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_23649.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 600)), inCompiler COMMA_HERE), var_internalWrapperFileMap_23925, var_internalWrapperDirectoryMap_23959, var_theDirectoryIndex_23689, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 599)) ;
    }
    enumerator_23649.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                               const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                               const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_24994 = GGS_filewrapperTemplateMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  UpEnumerator_filewrapperTemplateListAST enumerator_25080 (temp_0.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_25080.hasCurrentObject ()) {
    GGS_functionSignature var_templateSignature_25186 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalTemplateInputParameterListAST enumerator_25231 (enumerator_25080.current_mFilewrapperTemplateFormalInputParameters (HERE)) ;
    while (enumerator_25231.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_25345 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_25231.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_25345, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 624)) ;
      }
      var_templateSignature_25186.addAssignOperation (enumerator_25231.current (HERE).readProperty_mFormalTemplateSelector (), var_parameterTypeIndex_25345, enumerator_25231.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_25231.current (HERE).readProperty_mIsUnused ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 625)) ;
      enumerator_25231.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_24994.setter_insertKey (enumerator_25080.current_mFilewrapperTemplateName (HERE), var_templateSignature_25186, enumerator_25080.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 631)) ;
    }
    enumerator_25080.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_textExtensionMap_25750 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  UpEnumerator_lstringlist enumerator_25780 (temp_1.readProperty_mFilewrapperTextFileExtensionList ()) ;
  while (enumerator_25780.hasCurrentObject ()) {
    {
    var_textExtensionMap_25750.setter_insertKey (enumerator_25780.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 640)) ;
    }
    enumerator_25780.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_binaryFileExtensionMap_25947 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_25983 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
  while (enumerator_25983.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_textExtensionMap_25750.getter_hasKey (enumerator_25983.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 645)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_25983.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_25983.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 646)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 646)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 646)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      {
      var_binaryFileExtensionMap_25947.setter_insertKey (enumerator_25983.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 648)) ;
      }
    }
    enumerator_25983.gotoNextObject () ;
  }
  GGS_wrapperFileMap var_regularRootFileMap_26302 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_26348 ;
  GGS_string var_absoluteSourcePath_26382 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 655)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_filewrapperDeclarationAST temp_7 = this ;
      var_absoluteSourcePath_26382 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_filewrapperDeclarationAST temp_8 = this ;
    const GGS_filewrapperDeclarationAST temp_9 = this ;
    var_absoluteSourcePath_26382 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 658)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 658)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 658)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_absoluteSourcePath_26382.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 660)).operator_not (SOURCE_FILE ("semanticContext.galgas", 660)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_26382, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 661)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 661)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas", 661)) ;
      var_regularRootFileMap_26302.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_26348.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GGS_uint var_wrapperFileIndex_26899 = GGS_uint (uint32_t (0U)) ;
    GGS_uint var_wrapperDirectoryIndex_26934 = GGS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_26382, GGS_string ("/"), var_textExtensionMap_25750, var_binaryFileExtensionMap_25947, var_regularRootFileMap_26302, var_wrapperDirectoryMap_26348, var_wrapperFileIndex_26899, var_wrapperDirectoryIndex_26934, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 667)) ;
    }
  }
  {
  const GGS_filewrapperDeclarationAST temp_13 = this ;
  const GGS_filewrapperDeclarationAST temp_14 = this ;
  const GGS_filewrapperDeclarationAST temp_15 = this ;
  const GGS_filewrapperDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_26302, var_wrapperDirectoryMap_26348, var_filewrapperTemplateMap_24994, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 679)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_functionSignature var_functionSignature_28255 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_28348 (temp_0.readProperty_mFormalArgumentList ()) ;
  while (enumerator_28348.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_28449 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_28348.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_28449, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 703)) ;
    }
    var_functionSignature_28255.addAssignOperation (enumerator_28348.current_mFormalSelector (HERE), var_parameterTypeIndex_28449, enumerator_28348.current_mFormalArgumentTypeName (HERE).readProperty_string (), enumerator_28348.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas", 704)) ;
    enumerator_28348.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_resultTypeIndex_28652 ;
  {
  const GGS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_28652, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 707)) ;
  }
  {
  const GGS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_28255, var_resultTypeIndex_28652, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 709)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_resultTypeIndex_29658 ;
  {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_29658, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 728)) ;
  }
  {
  const GGS_onceFunctionDeclarationAST temp_1 = this ;
  const GGS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GGS_functionSignature::init (inCompiler COMMA_HERE), var_resultTypeIndex_29658, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 730)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                  const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                  const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 744)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_grammarLabelMap var_grammarLabelMap_31526 = GGS_grammarLabelMap::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  UpEnumerator_nonTerminalLabelListAST enumerator_31586 (temp_0.readProperty_mStartSymbolLabelList ()) ;
  while (enumerator_31586.hasCurrentObject ()) {
    GGS_formalParameterSignature var_formalArgumentList_31682 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_31803 (enumerator_31586.current_mFormalArgumentList (HERE)) ;
    while (enumerator_31803.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentType_31892 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_31803.current_mFormalArgumentTypeName (HERE), var_argumentType_31892, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 770)) ;
      }
      var_formalArgumentList_31682.addAssignOperation (enumerator_31803.current_mFormalSelector (HERE), var_argumentType_31892, enumerator_31803.current_mFormalArgumentPassingMode (HERE), enumerator_31803.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 771)) ;
      enumerator_31803.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_31526.setter_insertKey (enumerator_31586.current_mLabelName (HERE), var_formalArgumentList_31682, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 777)) ;
    }
    enumerator_31586.gotoNextObject () ;
  }
  {
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_grammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_31526, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 783)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  GGS_lstring var_key_33628 = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 815)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_33628, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 816)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator_lstringlist enumerator_33785 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_33785.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_33628, GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (enumerator_33785.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 818)), enumerator_33785.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 818)) ;
    }
    enumerator_33785.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_lstring var_key_34645 = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 832)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_34645, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 833)) ;
  }
  {
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34645, GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 834)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 834)) ;
  }
  const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
  UpEnumerator_syntaxRuleListAST enumerator_34924 (temp_5.readProperty_mRuleList ()) ;
  while (enumerator_34924.hasCurrentObject ()) {
    UpEnumerator_syntaxRuleLabelListAST enumerator_34989 (enumerator_34924.current_mLabelList (HERE)) ;
    while (enumerator_34989.hasCurrentObject ()) {
      UpEnumerator_formalParameterListAST enumerator_35075 (enumerator_34989.current_mFormalArguments (HERE)) ;
      while (enumerator_35075.hasCurrentObject ()) {
        switch (enumerator_35075.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34645, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_35075.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 839)), enumerator_35075.current_mFormalArgumentTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas", 839)) ;
            }
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          break ;
        }
        enumerator_35075.gotoNextObject () ;
      }
      enumerator_34989.gotoNextObject () ;
    }
    enumerator_34924.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                        GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                        GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 857)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                      GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                      GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                      GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 870)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                     GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                     GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                     GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                     GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                     GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                     GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 883)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'projectCreationFileWrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_projectCreationFileWrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_projectCreationFileWrapper_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_projectCreationFileWrapper (
  "",
  0,
  gWrapperAllFiles_projectCreationFileWrapper_0,
  0,
  gWrapperAllDirectories_projectCreationFileWrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_project'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("project (0:0:1) -> ") ;
  result.appendString (in_PROJECT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("+PROJECT.galgasProject.galgasTemplate", 1)).stringValue ()) ;
  result.appendString (" {\n#--- Targets\n  %makefile-unix\n  %makefile-macosx\n  %makefile-x86linux32-on-macosx\n  %makefile-x86linux64-on-macosx\n  %makefile-arm64-linux-on-macosx\n  %makefile-win32-on-macosx\n  %MacSwiftApp\n  %applicationBundleBase : \"fr.what\"\n  %codeblocks-windows\n  %codeblocks-linux32\n  %codeblocks-linux64\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_cocoa'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("gui cocoa {\n  with option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options\n\n  with lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n    fileExtension: \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n    title: \"Source\"\n    blockComment : \"#\"\n  }\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_grammar'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar \"LL1\" {\n  syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax\n  <start_symbol>\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_lexique'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("lexique ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique {\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Identifiers and keywords                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString error message \"an identifier\"\n\n#--- This is the keyword list\nlist keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send search tokenString in keyWordList default $identifier$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal decimal integers                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n\nmessage decimalNumberTooLarge : \"decimal number too large\"\nmessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Literal character strings                                                                    \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n\n\nmessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Delimiters                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Comments                                                                                     \n#-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\nrule '#' {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n#   Separators                                                                                   \n#-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n#-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_options'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("option ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_options {\n\n# ADD YOUR CODE\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_program'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (Compiler * /* inCompiler */,
                                                                              const GGS_string & in_PROJECT_5F_NAME
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#--- Prologue routine\nbefore {\n}\n\n#--- 'when' clauses\ncase . \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\nmessage \"a source text file with the .") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" extension\"\ngrammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar\n\?sourceFilePath:@lstring inSourceFile {\n  grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar () in inSourceFile\n}\n\n#--- Epilogue routine\nafter {\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_semantics'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (Compiler * /* inCompiler */,
                                                                                const GGS_string & /* in_PROJECT_5F_NAME */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n# ADD YOUR CODE\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'projectCreationFileWrapper PROJECT_syntax'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (Compiler * /* inCompiler */,
                                                                             const GGS_string & in_PROJECT_5F_NAME
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("syntax ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_syntax (") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_lexique) {\n\nrule <start_symbol> {\n  # ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n# ADD OTHER RULES\n\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performProjectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_performProjectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_projectName_2515 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 47)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 48))).method_writeToFile (constinArgument_inProjectPath.add_operation (GGS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)).add_operation (GGS_string (".galgasProject"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 48)) ;
  GGS_string var_galgas_5F_sources_5F_DIR_2736 = constinArgument_inProjectPath.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 50)) ;
  var_galgas_5F_sources_5F_DIR_2736.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 51)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 52))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)).add_operation (GGS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 52)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 53))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)).add_operation (GGS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 53)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 54))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)).add_operation (GGS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 54)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 55))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)).add_operation (GGS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 55)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 56))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)).add_operation (GGS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 56)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 57))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)).add_operation (GGS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 57)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2515 COMMA_SOURCE_FILE ("projectCreation.galgas", 58))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (var_projectName_2515, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)).add_operation (GGS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 58)) ;
  {
  routine_println_3F_ (GGS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 60)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'projectCreation?'
//
//--------------------------------------------------------------------------------------------------

void routine_projectCreation_3F_ (const GGS_string constinArgument_inProjectPath,
                                  Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas", 66)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 67)).add_operation (GGS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 67)) ;
      }
      GGS_string var_projectName_4249 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas", 69)) ;
      GGS_bool var_ok_4311 = var_projectName_4249.getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 70)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas", 70)) ;
      GGS_uint var_idx_4374 = GGS_uint (uint32_t (1U)) ;
      if (var_projectName_4249.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)).isValid ()) {
        uint32_t variant_4386 = var_projectName_4249.getter_count (SOURCE_FILE ("projectCreation.galgas", 72)).uintValue () ;
        bool loop_4386 = true ;
        while (loop_4386) {
          loop_4386 = GGS_bool (ComparisonKind::lowerThan, var_idx_4374.objectCompare (var_projectName_4249.getter_count (SOURCE_FILE ("projectCreation.galgas", 73)))).operator_and (var_ok_4311 COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).isValid () ;
          if (loop_4386) {
            loop_4386 = GGS_bool (ComparisonKind::lowerThan, var_idx_4374.objectCompare (var_projectName_4249.getter_count (SOURCE_FILE ("projectCreation.galgas", 73)))).operator_and (var_ok_4311 COMMA_SOURCE_FILE ("projectCreation.galgas", 73)).boolValue () ;
          }
          if (loop_4386 && (0 == variant_4386)) {
            loop_4386 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas", 72)) ;
          }
          if (loop_4386) {
            variant_4386 -= 1 ;
            GGS_char var_c_4475 = var_projectName_4249.getter_characterAtIndex (var_idx_4374, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 74)) ;
            var_ok_4311 = var_c_4475.getter_isalnum (SOURCE_FILE ("projectCreation.galgas", 75)).operator_or (GGS_bool (ComparisonKind::equal, var_c_4475.objectCompare (GGS_char (utf32 (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas", 75)) ;
            var_idx_4374.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 76)) ;
          }
        }
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_ok_4311.operator_not (SOURCE_FILE ("projectCreation.galgas", 78)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_println_3F_ (GGS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4249, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 79)).add_operation (GGS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 79)) ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_ok_4311.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_ok_4311 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas", 84)).operator_not (SOURCE_FILE ("projectCreation.galgas", 84)) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_ok_4311.operator_not (SOURCE_FILE ("projectCreation.galgas", 85)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_println_3F_ (GGS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 86)).add_operation (GGS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 86)) ;
              }
            }
          }
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_ok_4311.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas", 90)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalLogInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalLogInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                 Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
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
        GGS_stringlist var_undefinedNodeList_2190 = constinArgument_inUsefulEntitiesGraph.getter_undefinedNodeKeyList (SOURCE_FILE ("useful-entities-computation.galgas", 44)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_2190.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 45)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_string var_s_2307 = GGS_string ("usefulness computation, ").add_operation (var_undefinedNodeList_2190.getter_count (SOURCE_FILE ("useful-entities-computation.galgas", 46)).getter_string (SOURCE_FILE ("useful-entities-computation.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 46)).add_operation (GGS_string (" undefined nodes:"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 46)) ;
            UpEnumerator_stringlist enumerator_2399 (var_undefinedNodeList_2190) ;
            while (enumerator_2399.hasCurrentObject ()) {
              var_s_2307.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_2399.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)), inCompiler  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 48)) ;
              enumerator_2399.gotoNextObject () ;
            }
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 50)), var_s_2307, fixItArray2  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 50)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GGS_lstringlist var_usefullEntityList_2566 = constinArgument_inUsefulEntitiesGraph.getter_accessibleNodesFrom (constinArgument_inRootEntities, GGS_stringset::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 53)) ;
          GGS_stringset var_usefullEntitySet_2661 = GGS_stringset::class_func_setWithLStringList (var_usefullEntityList_2566  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 54)) ;
          GGS_stringset var_allEntitySet_2741 = GGS_stringset::class_func_setWithStringList (constinArgument_inUsefulEntitiesGraph.getter_keyList (SOURCE_FILE ("useful-entities-computation.galgas", 55))  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 55)) ;
          GGS_stringset var_unusedEntities_2830 = var_allEntitySet_2741.substract_operation (var_usefullEntitySet_2661, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 56)) ;
          GGS_uselessEntityLocationMap var_uselessEntityLocationMap_2915 = GGS_uselessEntityLocationMap::init (inCompiler COMMA_HERE) ;
          UpEnumerator_stringset enumerator_2957 (var_unusedEntities_2830) ;
          while (enumerator_2957.hasCurrentObject ()) {
            GGS_location var_l_3004 = constinArgument_inUsefulEntitiesGraph.getter_locationForKey (enumerator_2957.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 59)) ;
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::equal, var_l_3004.objectCompare (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 60)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                GenericArray <FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 61)), GGS_string ("unused entity, '").add_operation (enumerator_2957.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)).add_operation (GGS_string ("' (due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 62)), fixItArray4  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 61)) ;
              }
            }
            if (GalgasBool::boolFalse == test_3) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = var_uselessEntityLocationMap_2915.getter_hasKey (var_l_3004.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)) COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 63)).operator_not (SOURCE_FILE ("useful-entities-computation.galgas", 63)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  var_uselessEntityLocationMap_2915.setter_insertKey (var_l_3004.getter_startLocationString (inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)).getter_nowhere (SOURCE_FILE ("useful-entities-computation.galgas", 64)), enumerator_2957.current_key (HERE), var_l_3004, inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 64)) ;
                  }
                }
              }
            }
            enumerator_2957.gotoNextObject () ;
          }
          UpEnumerator_uselessEntityLocationMap enumerator_3490 (var_uselessEntityLocationMap_2915) ;
          while (enumerator_3490.hasCurrentObject ()) {
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (enumerator_3490.current_mLocation (HERE), GGS_string ("unused '").add_operation (enumerator_3490.current_mUnusedEntityName (HERE), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string ("' entity, due to option --"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string (gOption_galgas_5F_cli_5F_options_checkEntityUsefulness.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 69)), fixItArray6  COMMA_SOURCE_FILE ("useful-entities-computation.galgas", 68)) ;
            enumerator_3490.gotoNextObject () ;
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

static const GALGAS_TypeDescriptor * functionArgs_getterNameForUsefulEntitiesGraph [3] = {
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

static const GALGAS_TypeDescriptor * functionArgs_setterNameForUsefulEntitiesGraph [3] = {
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

static const GALGAS_TypeDescriptor * functionArgs_methodNameForUsefulEntitiesGraph [3] = {
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

static const GALGAS_TypeDescriptor * functionArgs_initializerNameForUsefulEntitiesGraph [3] = {
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

static const GALGAS_TypeDescriptor * functionArgs_equatableNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_lexiqueNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_grammarNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_syntaxNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_optionNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_filewrapperNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_filewrapperTemplateNameForUsefulEntitiesGraph [3] = {
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

static const GALGAS_TypeDescriptor * functionArgs_functionNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_procedureNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_typeNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_afterNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_beforeNameForUsefulEntitiesGraph [2] = {
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

static const GALGAS_TypeDescriptor * functionArgs_rootRuleNameForUsefulEntitiesGraph [2] = {
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
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GGS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GGS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GGS_lexicalSentValueList joker_3100 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_3100, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateLexicalInstructionCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                        const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)) ;
  result_result.plusAssignOperation(GGS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typePredefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GGS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("typeList"), GGS_string ("typelist"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 32)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@typePredefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GGS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("name"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("hasSuperclass"), GGS_string::makeEmptyString (), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("superclass"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 62)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_typePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)).operator_or (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)) COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_typePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 81))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_mapDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_mapDeclarationAST temp_0 = this ;
  result_result = GGS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 331)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_addAssociatedElement (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST var_structAttributeList_12207 = GGS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_structAttributeList_12207.addAssignOperation (GGS_propertyMutability::class_func_constantProperty (SOURCE_FILE ("declaration-type-map.galgas", 339)), GGS_string ("lstring").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 340)), GGS_string ("lkey").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 341)), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas", 342)), GGS_bool (false), GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-type-map.galgas", 344))  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 338)) ;
  const GGS_mapDeclarationAST temp_0 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_12508 (temp_0.readProperty_mPropertyList ()) ;
  while (enumerator_12508.hasCurrentObject ()) {
    var_structAttributeList_12207.addAssignOperation (GGS_propertyMutability::class_func_mutableProperty (SOURCE_FILE ("declaration-type-map.galgas", 347)), enumerator_12508.current_typeName (HERE), enumerator_12508.current_name (HERE), GGS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-type-map.galgas", 350)), enumerator_12508.current_hasSelector (HERE), enumerator_12508.current_initialization (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 346)) ;
    enumerator_12508.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_elementTypeName_12778 = function_makeEmbeddedElementTypeLName (temp_1.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 354)) ;
  const GGS_mapDeclarationAST temp_2 = this ;
  const GGS_mapDeclarationAST temp_3 = this ;
  GGS_structComparison temp_4 ;
  const GalgasBool test_5 = temp_3.readProperty_equatable ().boolEnum () ;
  if (GalgasBool::boolTrue == test_5) {
    temp_4 = GGS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas", 360)) ;
  }else if (GalgasBool::boolFalse == test_5) {
    temp_4 = GGS_structComparison::class_func_none (SOURCE_FILE ("declaration-type-map.galgas", 360)) ;
  }
  ioArgument_ioDeclarations.mProperty_mDeclarationList.addAssignOperation (GGS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (temp_2.readProperty_isPredefined (), var_elementTypeName_12778, var_structAttributeList_12207, GGS_string::makeEmptyString (), temp_4, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 355)) ;
  {
  GGS_lstring joker_13210 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_13210, var_elementTypeName_12778, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 364)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                             GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GGS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_mapDeclarationAST temp_0 = this ;
  const GGS_mapDeclarationAST temp_1 = this ;
  GGS_lstring var_key_13989 = GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 377)), temp_1.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_13989, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 378)) ;
  }
  const GGS_mapDeclarationAST temp_3 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_14145 (temp_3.readProperty_mPropertyList ()) ;
  while (enumerator_14145.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_14145.current_typeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 380)), enumerator_14145.current_typeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 380)) ;
    }
    enumerator_14145.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@mapDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                       const GGS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GGS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GGS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GGS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_stringTypeIndex_15011 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("string"), var_stringTypeIndex_15011, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 396)) ;
  }
  GGS_unifiedTypeMapEntry var_lstringTypeIndex_15108 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GGS_string ("lstring"), var_lstringTypeIndex_15108, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 398)) ;
  }
  GGS_enumerationDescriptorList temp_0 = GGS_enumerationDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 400)) ;
  temp_0.plusPlusAssignOperation (GGS_enumerationDescriptorList_2E_element::init_21__21_ (var_lstringTypeIndex_15108, GGS_string ("lkey"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 400)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_15193 = temp_0 ;
  GGS_classFunctionMap var_classFunctionMap_15282 = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS_getterMap var_getterMap_15365 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_15365, inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 403)) ;
  }
  GGS_setterMap var_setterMap_15395 = GGS_setterMap::init (inCompiler COMMA_HERE) ;
  GGS_instanceMethodMap var_instanceMethodMap_15438 = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_1 = this ;
  const GGS_mapDeclarationAST temp_2 = this ;
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (var_classFunctionMap_15282, ioArgument_ioTypeMap, GGS_string ("mapWithMapToOverride"), temp_1.readProperty_mMapTypeName ().readProperty_string (), GGS_string ("inMap"), temp_2.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 407)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("levels"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 417)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("hasKeyAtLevel"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("uint"), GGS_string ("inLevel"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 425)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("keySet"), GGS_string::makeEmptyString (), GGS_string ("stringset"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("keyList"), GGS_string::makeEmptyString (), GGS_string ("lstringlist"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 444)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("hasKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("bool"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 452)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("locationForKey"), GGS_string ("string"), GGS_string ("inKey"), GGS_string ("location"), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 461)) ;
  }
  {
  const GGS_mapDeclarationAST temp_3 = this ;
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("overriddenMap"), GGS_string::makeEmptyString (), temp_3.readProperty_mMapTypeName ().readProperty_string (), GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 470)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_15365, ioArgument_ioTypeMap, GGS_string ("count"), GGS_string::makeEmptyString (), GGS_string ("uint"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 478)) ;
  }
  GGS_formalParameterSignature var_insertMethodFormalArgumentList_17519 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_typedPropertyList var_typedPropertyList_17589 = GGS_typedPropertyList::init (inCompiler COMMA_HERE) ;
  GGS_optionalMethodSignature var_optionalMethodSignature_17664 = GGS_optionalMethodSignature::init (inCompiler COMMA_HERE) ;
  var_optionalMethodSignature_17664.addAssignOperation (GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 492)), var_stringTypeIndex_15011, GGS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 490)) ;
  GGS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_17821 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_17821.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 497)), var_lstringTypeIndex_15108, GGS_string ("lkey"), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 496)) ;
  var_insertMethodFormalArgumentList_17519.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 502)), var_lstringTypeIndex_15108, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 504)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 501)) ;
  GGS_formalParameterSignature var_removeMethodFormalArgumentList_18196 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_removeMethodFormalArgumentList_18196.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 508)), var_lstringTypeIndex_15108, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 510)), GGS_string ("inLKey")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 507)) ;
  GGS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_18420 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  const GGS_mapDeclarationAST temp_4 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_18516 (temp_4.readProperty_mPropertyList ()) ;
  while (enumerator_18516.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = enumerator_18516.current_initialization (HERE).getter_isSome (SOURCE_FILE ("declaration-type-map.galgas", 514)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_18516.current_name (HERE).readProperty_location (), GGS_string ("property initialization is not handled for a map"), fixItArray6  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 515)) ;
      }
    }
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_18738 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18516.current_typeName (HERE), var_attributeTypeIndex_18738, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 517)) ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_17821.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 518)), var_attributeTypeIndex_18738, enumerator_18516.current_name (HERE).readProperty_string (), GGS_bool (true)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 518)) ;
    var_typedPropertyList_17589.addAssignOperation (var_attributeTypeIndex_18738, enumerator_18516.current_name (HERE), enumerator_18516.current_initialization (HERE), GGS_bool (true), enumerator_18516.current_hasSelector (HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 519)) ;
    var_typesToIncludeInHeaderCompilation_18420.addAssignOperation (var_attributeTypeIndex_18738  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 520)) ;
    var_enumerationDescriptor_15193.addAssignOperation (var_attributeTypeIndex_18738, enumerator_18516.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 521)) ;
    GGS_lstring temp_7 ;
    const GalgasBool test_8 = enumerator_18516.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      temp_7 = enumerator_18516.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_8) {
      temp_7 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 523)) ;
    }
    var_insertMethodFormalArgumentList_17519.addAssignOperation (temp_7, var_attributeTypeIndex_18738, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 525)), enumerator_18516.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 522)) ;
    GGS_lstring temp_9 ;
    const GalgasBool test_10 = enumerator_18516.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      temp_9 = enumerator_18516.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_10) {
      temp_9 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 528)) ;
    }
    var_removeMethodFormalArgumentList_18196.addAssignOperation (temp_9, var_attributeTypeIndex_18738, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-map.galgas", 530)), enumerator_18516.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 527)) ;
    GGS_lstring temp_11 ;
    const GalgasBool test_12 = enumerator_18516.current_hasSelector (HERE).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      temp_11 = enumerator_18516.current_name (HERE) ;
    }else if (GalgasBool::boolFalse == test_12) {
      temp_11 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 534)) ;
    }
    var_optionalMethodSignature_17664.addAssignOperation (GGS_bool (false), temp_11, var_attributeTypeIndex_18738, enumerator_18516.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 532)) ;
    enumerator_18516.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_13 = this ;
  UpEnumerator_insertSetterListAST enumerator_19753 (temp_13.readProperty_mInsertSetterList ()) ;
  while (enumerator_19753.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_setterMap_15395.getter_hasKey (enumerator_19753.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 540)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_19753.current_mInsertMethodName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_19753.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 541)).add_operation (GGS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 541)), fixItArray15  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 541)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      {
      var_setterMap_15395.setter_insertOrReplace (enumerator_19753.current_mInsertMethodName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 545)), var_insertMethodFormalArgumentList_17519, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 548)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 543)) ;
      }
    }
    enumerator_19753.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_16 = this ;
  GGS_lstring var_elementTypeName_20204 = function_makeEmbeddedElementTypeLName (temp_16.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 554)) ;
  GGS_unifiedTypeMapEntry var_elementTypeEntry_20354 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_elementTypeName_20204, var_elementTypeEntry_20354, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 555)) ;
  }
  const GGS_mapDeclarationAST temp_17 = this ;
  UpEnumerator_mapAccessorListAST enumerator_20430 (temp_17.readProperty_mReplaceSetterList ()) ;
  while (enumerator_20430.hasCurrentObject ()) {
    GGS_formalParameterSignature temp_18 = GGS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 562)) ;
    temp_18.plusPlusAssignOperation (GGS_formalParameterSignature_2E_element::init_21__21__21__21_ (GGS_string ("with").getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 562)), var_elementTypeEntry_20354, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 562)), GGS_string ("inEntry"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 562)) ;
    GGS_formalParameterSignature var_replaceSetterFormalArgumentList_20488 = temp_18 ;
    {
    var_setterMap_15395.setter_insertOrReplace (enumerator_20430.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 566)), var_replaceSetterFormalArgumentList_20488, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 569)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 564)) ;
    }
    enumerator_20430.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_19 = this ;
  UpEnumerator_mapAccessorListAST enumerator_20844 (temp_19.readProperty_mRemoveSetterList ()) ;
  while (enumerator_20844.hasCurrentObject ()) {
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = var_setterMap_15395.getter_hasKey (enumerator_20844.current (HERE).readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 575)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_20844.current (HERE).readProperty_mName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_20844.current (HERE).readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 577)).add_operation (GGS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 577)), fixItArray21  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 576)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      {
      var_setterMap_15395.setter_insertOrReplace (enumerator_20844.current (HERE).readProperty_mName (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 582)), var_removeMethodFormalArgumentList_18196, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 585)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 580)) ;
      }
    }
    enumerator_20844.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_22 = this ;
  UpEnumerator_mapAccessorListAST enumerator_21383 (temp_22.readProperty_mSearchMethodList ()) ;
  while (enumerator_21383.hasCurrentObject ()) {
    {
    var_instanceMethodMap_15438.setter_insertKey (enumerator_21383.current_mName (HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 594)), var_removeMethodFormalArgumentList_18196, enumerator_21383.current_mName (HERE).readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 598)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 592)) ;
    }
    enumerator_21383.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_23 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_21726 (temp_23.readProperty_mPropertyList ()) ;
  while (enumerator_21726.hasCurrentObject ()) {
    GGS_lstring var_accessorName_21753 = GGS_lstring::init_21__21_ (enumerator_21726.current (HERE).readProperty_name ().readProperty_string ().add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 604)), enumerator_21726.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_21889 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21726.current (HERE).readProperty_typeName (), var_attributeTypeIndex_21889, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 605)) ;
    }
    {
    GGS_functionSignature temp_24 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 609)) ;
    temp_24.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 609)), var_stringTypeIndex_15011, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 609)) ;
    var_getterMap_15365.setter_insertOrReplace (var_accessorName_21753, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 608)), temp_24, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 610)), GGS_bool (true), var_attributeTypeIndex_21889, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 613)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 606)) ;
    }
    enumerator_21726.gotoNextObject () ;
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_mapDeclarationAST temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterOrEqual, temp_26.readProperty_mInsertOrReplaceDeclarationListAST ().getter_count (SOURCE_FILE ("declaration-type-map.galgas", 618)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      GGS_location var_insertOrReplaceLocation_22397 ;
      const GGS_mapDeclarationAST temp_27 = this ;
      temp_27.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_22397, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 619)) ;
      {
      var_setterMap_15395.setter_insertOrReplace (GGS_lstring::init_21__21_ (GGS_string ("insertOrReplace"), var_insertOrReplaceLocation_22397, inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 622)), var_insertMethodFormalArgumentList_17519, GGS_bool (false), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 625)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 620)) ;
      }
    }
  }
  const GGS_mapDeclarationAST temp_28 = this ;
  UpEnumerator_propertyInCollectionListAST enumerator_22769 (temp_28.readProperty_mPropertyList ()) ;
  while (enumerator_22769.hasCurrentObject ()) {
    GGS_lstring var_accessorName_22796 = GGS_lstring::init_21__21_ (GGS_string ("set").add_operation (enumerator_22769.current (HERE).readProperty_name ().readProperty_string ().getter_capitalizingFirstCharacter (SOURCE_FILE ("declaration-type-map.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 632)).add_operation (GGS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 632)), enumerator_22769.current (HERE).readProperty_name ().readProperty_location (), inCompiler COMMA_HERE) ;
    GGS_unifiedTypeMapEntry var_attributeTypeIndex_23030 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_22769.current (HERE).readProperty_typeName (), var_attributeTypeIndex_23030, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 635)) ;
    }
    GGS_formalParameterSignature var_accessorFormalArgumentList_23093 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    var_accessorFormalArgumentList_23093.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 640)), var_attributeTypeIndex_23030, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 640)), enumerator_22769.current (HERE).readProperty_name ().readProperty_string ()  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 640)) ;
    var_accessorFormalArgumentList_23093.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 641)), var_stringTypeIndex_15011, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-map.galgas", 641)), GGS_string ("key")  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 641)) ;
    {
    var_setterMap_15395.setter_insertOrReplace (var_accessorName_22796, GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-map.galgas", 644)), var_accessorFormalArgumentList_23093, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-map.galgas", 647)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("declaration-type-map.galgas", 642)) ;
    }
    enumerator_22769.gotoNextObject () ;
  }
  GGS_initializerMap var_initializerMap_23625 = GGS_initializerMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature var_emptyArgumentList_23673 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GGS_mapDeclarationAST temp_29 = this ;
  var_initializerMap_23625.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_23673, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 655)), temp_29.readProperty_mMapTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_23673, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 654)) ;
  }
  GGS_typeFeatures var_features_23856 = GGS_typeFeatures::class_func_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("declaration-type-map.galgas", 659)).operator_or (GGS_typeFeatures::class_func_doNotGenererateObjectCompare (SOURCE_FILE ("declaration-type-map.galgas", 660)) COMMA_SOURCE_FILE ("declaration-type-map.galgas", 659)) ;
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    const GGS_mapDeclarationAST temp_31 = this ;
    test_30 = temp_31.readProperty_equatable ().boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_features_23856.orAssignOperation(GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-map.galgas", 662)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 662)) ;
    }
  }
  {
  const GGS_mapDeclarationAST temp_32 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_32.readProperty_mMapTypeName (), var_features_23856, GGS_bool (true), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 664)) ;
  }
  {
  const GGS_mapDeclarationAST temp_33 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_33.readProperty_mMapTypeName (), GGS_bool (false), var_initializerMap_23625, var_getterMap_15365, var_setterMap_15395, var_instanceMethodMap_15438, GGS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 672)) ;
  }
  GGS_lstring var_optionalElementTypeName_24703 = function_makeOptionalTypeLName (var_elementTypeName_20204, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 688)) ;
  GGS_unifiedTypeMapEntry var_optionalElementTypeEntry_24874 ;
  {
  extensionSetter_makeEntry (ioArgument_ioTypeMap, var_optionalElementTypeName_24703, var_optionalElementTypeEntry_24874, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 689)) ;
  }
  GGS_subscriptMap var_readSubscriptMap_24951 = GGS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GGS_functionSignature temp_34 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 695)) ;
  temp_34.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 695)), var_stringTypeIndex_15011, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 695)) ;
  GGS_functionSignature var_argumentTypeList_25001 = temp_34 ;
  {
  var_readSubscriptMap_24951.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_25001, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 697)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 697)), inCompiler COMMA_HERE), var_argumentTypeList_25001, var_optionalElementTypeEntry_24874, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 696)) ;
  }
  const GGS_mapDeclarationAST temp_35 = this ;
  UpEnumerator_mapAccessorListAST enumerator_25251 (temp_35.readProperty_mSearchSubscriptList ()) ;
  while (enumerator_25251.hasCurrentObject ()) {
    GGS_functionSignature temp_36 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 702)) ;
    temp_36.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (enumerator_25251.current_mName (HERE), var_lstringTypeIndex_15108, GGS_string ("inKey"), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-map.galgas", 702)) ;
    GGS_functionSignature var_subscriptArgumentTypeList_25316 = temp_36 ;
    {
    var_readSubscriptMap_24951.setter_insertKey (GGS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_subscriptArgumentTypeList_25316, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 704)), GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-map.galgas", 704)), inCompiler COMMA_HERE), var_subscriptArgumentTypeList_25316, var_elementTypeEntry_20354, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 703)) ;
    }
    enumerator_25251.gotoNextObject () ;
  }
  const GGS_mapDeclarationAST temp_37 = this ;
  const GGS_mapDeclarationAST temp_38 = this ;
  const GGS_mapDeclarationAST temp_39 = this ;
  GGS_unifiedTypeDefinition var_typeDefinition_25617 = GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_37.readProperty_mMapTypeName (), temp_38.readProperty_isPredefined (), GGS_bool (true), GGS_bool (true), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas", 715)), GGS_typeKindEnum::class_func_mapType (SOURCE_FILE ("declaration-type-map.galgas", 716)), GGS_bool (false), GGS_typedPropertyList::init (inCompiler COMMA_HERE), GGS_propertyMap::init (inCompiler COMMA_HERE), var_typedPropertyList_17589, var_initializerMap_23625, var_classFunctionMap_15282, var_getterMap_15365, var_setterMap_15395, var_instanceMethodMap_15438, GGS_classMethodMap::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-map.galgas", 727)), var_readSubscriptMap_24951, var_enumerationDescriptor_15193, var_features_23856, GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_bool (false), var_elementTypeEntry_20354, GGS_string ("map-").add_operation (temp_39.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-map.galgas", 734)), inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 734)), GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-map.galgas", 735)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_25617.readProperty_typeName (), var_typeDefinition_25617, inCompiler COMMA_SOURCE_FILE ("declaration-type-map.galgas", 737)) ;
  }
}

