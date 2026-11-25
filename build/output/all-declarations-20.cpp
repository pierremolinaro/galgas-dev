#include "all-declarations-20.h"
//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateNonEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateNonEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_41439 ;
  const GGS_templateNonEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_41439, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1058)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_41687 ;
  const GGS_templateNonEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_41687, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1066)) ;
  {
  const GGS_templateNonEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_41439.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("templateAnalysis.galgas4", 1075)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)).operator_or (extensionGetter_definition (var_leftExpression_41439.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1075)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1075)), GGS_string ("!="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_41439, var_rightExpression_41687, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1074)) ;
  }
  const GGS_templateNonEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_41439, GGS_comparison::class_func_notEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1086)), var_rightExpression_41687, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictInfTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictInfTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_42864 ;
  const GGS_templateStrictInfTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_42864, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1101)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_43112 ;
  const GGS_templateStrictInfTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_43112, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1109)) ;
  {
  const GGS_templateStrictInfTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_42864.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1118)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1118)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1118)), GGS_string ("<"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_42864, var_rightExpression_43112, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1117)) ;
  }
  const GGS_templateStrictInfTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_42864, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("templateAnalysis.galgas4", 1129)), var_rightExpression_43112, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInfOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInfOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_44219 ;
  const GGS_templateInfOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_44219, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1144)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_44467 ;
  const GGS_templateInfOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_44467, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1152)) ;
  {
  const GGS_templateInfOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_44219.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1161)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1161)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1161)), GGS_string ("<="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_44219, var_rightExpression_44467, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1160)) ;
  }
  const GGS_templateInfOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_44219, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1172)), var_rightExpression_44467, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateStrictSupTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateStrictSupTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_45577 ;
  const GGS_templateStrictSupTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_45577, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1187)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_45825 ;
  const GGS_templateStrictSupTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_45825, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1195)) ;
  {
  const GGS_templateStrictSupTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_45577.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1204)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1204)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1204)), GGS_string (">"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_45577, var_rightExpression_45825, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1203)) ;
  }
  const GGS_templateStrictSupTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_45577, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("templateAnalysis.galgas4", 1215)), var_rightExpression_45825, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateSupOrEqualTestAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateSupOrEqualTestAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_46934 ;
  const GGS_templateSupOrEqualTestAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_46934, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1230)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_47182 ;
  const GGS_templateSupOrEqualTestAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_47182, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1238)) ;
  {
  const GGS_templateSupOrEqualTestAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_46934.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1247)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("templateAnalysis.galgas4", 1247)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1247)), GGS_string (">="), temp_2.readProperty_mOperatorLocation (), var_leftExpression_46934, var_rightExpression_47182, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1246)) ;
  }
  const GGS_templateSupOrEqualTestAST temp_3 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_46934, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("templateAnalysis.galgas4", 1258)), var_rightExpression_47182, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLeftShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLeftShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_48299 ;
  const GGS_templateLeftShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_48299, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1273)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_48547 ;
  const GGS_templateLeftShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_48547, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1281)) ;
  GGS_unifiedTypeMapEntry var_leftType_48629 = var_leftExpression_48299.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_48694 = var_rightExpression_48547.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_48629, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1291)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1291)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1291)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1291)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateLeftShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_48629, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1293)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1293)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1293)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1292)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_48694, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1295)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateLeftShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@u32': it is '@").add_operation (extensionGetter_definition (var_rightType_48694, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1297)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1297)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1297)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1296)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateLeftShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_48629, temp_8.readProperty_mOperatorLocation (), var_leftExpression_48299, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("templateAnalysis.galgas4", 1305)), var_rightExpression_48547, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateRightShiftOperationAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateRightShiftOperationAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_50066 ;
  const GGS_templateRightShiftOperationAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_leftExpression_50066, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1321)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_50314 ;
  const GGS_templateRightShiftOperationAST temp_1 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_rightExpression_50314, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1329)) ;
  GGS_unifiedTypeMapEntry var_leftType_50396 = var_leftExpression_50066.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightType_50461 = var_rightExpression_50314.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_leftType_50396, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1339)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("templateAnalysis.galgas4", 1339)) COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1339)).operator_not (SOURCE_FILE ("templateAnalysis.galgas4", 1339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_templateRightShiftOperationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_50396, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1341)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1341)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1341)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1340)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_50461, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1343)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_templateRightShiftOperationAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("for a shift operator, right operand type should be '@u32': it is '@").add_operation (extensionGetter_definition (var_rightType_50461, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1345)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1345)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1345)), fixItArray7  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1344)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_templateRightShiftOperationAST temp_8 = this ;
      outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_50396, temp_8.readProperty_mOperatorLocation (), var_leftExpression_50066, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("templateAnalysis.galgas4", 1353)), var_rightExpression_50314, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'templateInstructionListAnalysis?&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      const GGS__5B_templateInstructionAST_5D_ constinArgument_inInstructionList,
                                                                      GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_templateInstructionAST_5D_ enumerator_51788 (constinArgument_inInstructionList) ;
  while (enumerator_51788.hasCurrentObject ()) {
    callExtensionMethod_templateInstructionAnalysis ((cPtr_templateInstructionAST *) enumerator_51788.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1374)) ;
    enumerator_51788.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionStringAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                            const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                            GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                            GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringAST temp_0 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionStringForGeneration::init_21_ (temp_0.readProperty_mTemplateString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1393)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionExpressionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_53086 ;
  const GGS_templateInstructionExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_53086, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1405)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_53086.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1412)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("expression type should be '@string' (it is '@").add_operation (extensionGetter_definition (var_expression_53086.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)), fixItArray3  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1413)) ;
    }
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionExpressionForGeneration::init_21_ (var_expression_53086, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1415)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateBlockInstructionAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_53964 ;
  const GGS_templateBlockInstructionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_53964, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1427)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_53964.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1434)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bigint"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_getterCallExpressionForGeneration var_conversionExpression_54059 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_expression_53964.readProperty_mResultType (), var_expression_53964.readProperty_mLocation (), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas4", 1438)), var_expression_53964, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_string ("u32"), GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE) ;
      var_expression_53964 = var_conversionExpression_54059 ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_53964.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1446)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_templateBlockInstructionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mLocation (), GGS_string ("expression type should be '@u32' (it is '@").add_operation (extensionGetter_definition (var_expression_53964.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)), fixItArray4  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1447)) ;
      }
    }
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_blockInstructionList_54522 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateBlockInstructionAST temp_5 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mBlockInstructionList (), var_blockInstructionList_54522, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1450)) ;
  }
  const GGS_templateBlockInstructionAST temp_6 = this ;
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateBlockInstructionForGeneration::init_21__21__21_ (var_expression_53964, temp_6.readProperty_mLocation (), var_blockInstructionList_54522, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1458)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                       GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                       const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                       GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                       GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionGetColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1470)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationAST::method_templateInstructionAnalysis (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                                        const GGS_templateAnalysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                        GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionGotoColumnLocationForGeneration::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1482)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionIfAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_templateInstructionIfBranchForGeneration_5D_ var_templateInstructionIfBranchList_56333 = GGS__5B_templateInstructionIfBranchForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_templateInstructionIfAST temp_0 = this ;
  UpEnumerator__5B_templateInstructionIfBranchAST_5D_ enumerator_56456 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_56456.hasCurrentObject ()) {
    GGS_semanticExpressionForGeneration var_expression_56687 ;
    callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_56456.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_56687, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1497)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_56687.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1504)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_expression_56687.readProperty_mLocation (), GGS_string ("'if' expression type should be '@bool' (it is '@").add_operation (extensionGetter_definition (var_expression_56687.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)).add_operation (GGS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)), fixItArray2  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1505)) ;
      }
    }
    GGS__5B_templateInstructionForGeneration_5D_ var_instructionList_56937 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    {
    routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_56456.current (HERE).readProperty_mInstructionList (), var_instructionList_56937, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1508)) ;
    }
    var_templateInstructionIfBranchList_56333.plusPlusAssignOperation (GGS_templateInstructionIfBranchForGeneration::init_21__21_ (var_expression_56687, var_instructionList_56937, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1516)) ;
    enumerator_56456.gotoNextObject () ;
  }
  GGS__5B_templateInstructionForGeneration_5D_ var_elseInstructionList_57314 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionIfAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mElseInstructionList (), var_elseInstructionList_57314, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1520)) ;
  }
  ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionIfForGeneration::init_21__21_ (var_templateInstructionIfBranchList_56333, var_elseInstructionList_57314, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateAnalysis.galgas4", 1529)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GGS__5B_templateInstructionForGeneration_5D_ & ioArgument_ioInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_switchExpression_5442 ;
  const GGS_templateInstructionSwitchAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_switchExpression_5442, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 134)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_typeKindEnum_2E_enumType var_enumType_5472 = extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).unwrappedValue () ;
    if (!extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 141)).readProperty_typeKind ().getter_getEnumType (SOURCE_FILE ("template-switch-instruction.galgas4", 141)).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GGS_stringset var_constantsNamedInSwitchInstruction_5568 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      GGS__5B_templateInstructionSwitchBranchForGeneration_5D_ var_templateInstructionSwitchBranchList_5689 = GGS__5B_templateInstructionSwitchBranchForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_templateInstructionSwitchAST temp_2 = this ;
      UpEnumerator__5B_templateInstructionSwitchBranchAST_5D_ enumerator_5779 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
      while (enumerator_5779.hasCurrentObject ()) {
        GGS__5B_extractedAssociatedValueForGeneration_5D_ var_extractedAssociatedValuesForGeneration_5869 = GGS__5B_extractedAssociatedValueForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        GGS_templateAnalysisContext var_analysisContext_5924 = constinArgument_inAnalysisContext ;
        UpEnumerator__5B_lstring_5D_ enumerator_6018 (enumerator_5779.current (HERE).readProperty_constantList ()) ;
        while (enumerator_6018.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_enumType_5472.readProperty_constantMap ().getter_contains (enumerator_6018.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 149)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = var_constantsNamedInSwitchInstruction_5568.getter_contains (enumerator_6018.current (HERE).readProperty_string () COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 150)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)).add_operation (GGS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 152)), fixItArray5  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 151)) ;
                }
              }
              var_constantsNamedInSwitchInstruction_5568.plusPlusAssignOperation (enumerator_6018.current (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 154)) ;
              GGS__5B_associatedValueDescriptor_5D_ var_associatedTypeList_6487 ;
              GGS_u_33__32_ joker_6449 ; // Joker input parameter
              var_enumType_5472.readProperty_constantMap ().method_searchKey (enumerator_6018.current (HERE), joker_6449, var_associatedTypeList_6487, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 155)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 156)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 156)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the associated values of '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)).add_operation (GGS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 158)), fixItArray7  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 157)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 159)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 159)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)).add_operation (GGS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 161)), fixItArray9  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 160)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::notEqual, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)).objectCompare (enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 162)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GGS_string temp_11 ;
                      const GalgasBool test_12 = GGS_bool (ComparisonKind::greaterThan, var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 165)).objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_12) {
                        temp_11 = GGS_string ("s") ;
                      }else if (GalgasBool::boolFalse == test_12) {
                        temp_11 = GGS_string::makeEmptyString () ;
                      }
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (var_associatedTypeList_6487.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 164)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 164)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (GGS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 164)), fixItArray13  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 163)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    UpEnumerator__5B_associatedValueDescriptor_5D_ enumerator_7361 (var_associatedTypeList_6487) ;
                    UpEnumerator__5B_switchExtractedValuesAST_5D_ enumerator_7432 (enumerator_5779.current (HERE).readProperty_associatedValuesExtraction ()) ;
                    GGS_u_33__32_ index_7343 (uint32_t (0)) ;
                    while (enumerator_7361.hasCurrentObject () && enumerator_7432.hasCurrentObject ()) {
                      GalgasBool test_14 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_14) {
                        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_7432.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_14) {
                          GalgasBool test_15 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_15) {
                            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_7361.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 169)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_7432.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_string ())).boolEnum () ;
                            if (GalgasBool::boolTrue == test_15) {
                              GenericArray <FixItDescription> fixItArray16 ;
                              inCompiler->emitSemanticError (enumerator_7432.current (HERE).readProperty_mExtractedValueTypeName ().readProperty_location (), GGS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_7361.current (HERE).readProperty_type (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)), fixItArray16  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 170)) ;
                            }
                          }
                        }
                      }
                      GGS_string var_cppName_7878 = GGS_string ("extractedValue_").add_operation (enumerator_7432.current (HERE).readProperty_mExtractedValueName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 173)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 173)).add_operation (enumerator_7432.current (HERE).readProperty_mExtractedValueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)).add_operation (index_7343.getter_string (SOURCE_FILE ("template-switch-instruction.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 174)) ;
                      var_extractedAssociatedValuesForGeneration_5869.plusPlusAssignOperation (GGS_extractedAssociatedValueForGeneration::init_21__21__21_ (enumerator_7361.current (HERE).readProperty_type (), var_cppName_7878, enumerator_7361.current (HERE).readProperty_name (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 175)) ;
                      GalgasBool test_17 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_17) {
                        test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_7432.current (HERE).readProperty_mExtractedValueName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_17) {
                          {
                          var_analysisContext_5924.mProperty_mTemplateVariableMap.setter_insertKey (enumerator_7432.current (HERE).readProperty_mExtractedValueName (), enumerator_7361.current (HERE).readProperty_type (), var_cppName_7878, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 180)) ;
                          }
                        }
                      }
                      enumerator_7361.gotoNextObject () ;
                      enumerator_7432.gotoNextObject () ;
                      index_7343.plusAssignOperation (GGS_u_33__32_ (1), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 167)) ;
                    }
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (enumerator_6018.current (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_6018.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 190)).add_operation (GGS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 191)), fixItArray18  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 189)) ;
          }
          enumerator_6018.gotoNextObject () ;
        }
        GGS__5B_templateInstructionForGeneration_5D_ var_templateInstructionList_8776 = GGS__5B_templateInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        {
        routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_5924, ioArgument_ioTypeMap, enumerator_5779.current (HERE).readProperty_instructionList (), var_templateInstructionList_8776, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 195)) ;
        }
        var_templateInstructionSwitchBranchList_5689.plusPlusAssignOperation (GGS_templateInstructionSwitchBranchForGeneration::init_21__21__21__21_ (enumerator_5779.current (HERE).readProperty_constantList (), var_extractedAssociatedValuesForGeneration_5869, enumerator_5779.current (HERE).readProperty_endOfBranch ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 206)), var_templateInstructionList_8776, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 203)) ;
        enumerator_5779.gotoNextObject () ;
      }
      GGS_stringset var_forgottenConstants_9385 = var_enumType_5472.readProperty_constantMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)).subtract_operation (var_constantsNamedInSwitchInstruction_5568, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 211)) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_forgottenConstants_9385.getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 212)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_string var_s_9529 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_9547 (var_forgottenConstants_9385) ;
          while (enumerator_9547.hasCurrentObject ()) {
            var_s_9529.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_9547.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 215)) ;
            enumerator_9547.gotoNextObject () ;
          }
          const GGS_templateInstructionSwitchAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_switchExpressionEndLocation (), GGS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9529, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 218)), fixItArray21  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 217)) ;
        }
      }
      ioArgument_ioInstructionList.plusPlusAssignOperation (GGS_templateInstructionSwitchForGeneration::init_21__21__21_ (var_switchExpression_5442.readProperty_mResultType (), var_switchExpression_5442, var_templateInstructionSwitchBranchList_5689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 221)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GenericArray <FixItDescription> fixItArray22 ;
    inCompiler->emitSemanticError (var_switchExpression_5442.readProperty_mLocation (), GGS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_string (extensionGetter_definition (var_switchExpression_5442.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)).readProperty_typeKind (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)).add_operation (GGS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 228)), fixItArray22  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateInstructionSwitchForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                                 GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_switchVarCppName_11588 ;
  const GGS_templateInstructionSwitchForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_switchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName_11588, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 261)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_switchVarCppName_11588, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)).add_operation (GGS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 269)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 270)) ;
  const GGS_templateInstructionSwitchForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_1.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::invalid :\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 272)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 273)) ;
  const GGS_templateInstructionSwitchForGeneration temp_2 = this ;
  UpEnumerator__5B_templateInstructionSwitchBranchForGeneration_5D_ enumerator_11914 (temp_2.readProperty_templateInstructionSwitchBranchList ()) ;
  while (enumerator_11914.hasCurrentObject ()) {
    UpEnumerator__5B_lstring_5D_ enumerator_11984 (enumerator_11914.current (HERE).readProperty_mConstantList ()) ;
    while (enumerator_11984.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GGS_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 277)) ;
      const GGS_templateInstructionSwitchForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_identifierRepresentation (temp_3.readProperty_switchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 278)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::Enumeration::enum_"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 279)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11984.current (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 280)).add_operation (GGS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 280)) ;
      enumerator_11984.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 282)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 283)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_11914.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 284)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12432 (enumerator_11914.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12432.hasCurrentObject ()) {
          extensionMethod_addHeaderFileName (enumerator_12432.current (HERE).readProperty_mType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 286)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  GGS_").add_operation (extensionGetter_identifierRepresentation (enumerator_12432.current (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 287)) ;
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (enumerator_12432.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 288)) ;
          enumerator_12432.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_switchVarCppName_11588, inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)).add_operation (GGS_string (".getAssociatedValuesFor_"), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 290)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11914.current (HERE).readProperty_mConstantList ().readSubscript__3F_ (GGS_u_33__32_ (uint32_t (0U)), inCompiler COMMA_HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-switch-instruction.galgas4", 291)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 291)) ;
        UpEnumerator__5B_extractedAssociatedValueForGeneration_5D_ enumerator_12907 (enumerator_11914.current (HERE).readProperty_mExtractedAssociatedValuesForGeneration ()) ;
        while (enumerator_12907.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12907.current (HERE).readProperty_mCppName (), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 293)) ;
          enumerator_12907.gotoNextObject () ;
          if (enumerator_12907.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 294)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 296)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, enumerator_11914.current (HERE).readProperty_mInstructionList ().getter_count (SOURCE_FILE ("template-switch-instruction.galgas4", 298)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 299)) ;
        }
        {
        routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_11914.current (HERE).readProperty_mInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 300)) ;
        }
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 308)) ;
        }
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 310)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 311)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 312)) ;
    }
    enumerator_11914.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-switch-instruction.galgas4", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                        const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                        const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                        const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                        const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_4533 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_4615 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_4615.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_4709 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_4615.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_4709, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 112)) ;
    }
    var_routineSignature_4533.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_4615.current (HERE).readProperty_mFormalSelector (), var_parameterTypeIndex_4709, enumerator_4615.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_4615.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 113)) ;
    enumerator_4615.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 120)) ;
  {
  const GGS_procDeclarationAST temp_2 = this ;
  const GGS_procDeclarationAST temp_3 = this ;
  extensionSetter_insertKey (ioArgument_ioSemanticContext.mProperty_mRoutineMap, temp_2.readProperty_mRoutineName (), var_routineSignature_4533, temp_3.readProperty_isFilePrivate (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 122)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@procDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                       const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_formalParameterSignatureElement_5D_ var_routineSignature_5894 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_procDeclarationAST temp_0 = this ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_5976 (temp_0.readProperty_mFormalArgumentListAST ()) ;
  while (enumerator_5976.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_6012 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_5976.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 141)) ;
    var_routineSignature_5894.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_5976.current (HERE).readProperty_mFormalSelector (), var_parameterType_6012, enumerator_5976.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_5976.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 142)) ;
    enumerator_5976.gotoNextObject () ;
  }
  const GGS_procDeclarationAST temp_1 = this ;
  GGS_lstring var_mangledName_6286 = function_routineMangledName (temp_1.readProperty_mRoutineName (), var_routineSignature_5894, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 148)) ;
  GGS_lstring var_nameForUsefulness_6395 = function_procedureNameForUsefulEntitiesGraph (var_mangledName_6286, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 150)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6395, var_nameForUsefulness_6395, inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 151)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_procDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_usefullProcedure ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_6395  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 153)) ;
    }
  }
  GGS_analysisContext var_analysisContext_6668 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("procedure-declaration.galgas4", 160)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_instructionList_7120 ;
  GGS__5B_formalParameterForGeneration_5D_ var_formalArgumentList_7148 ;
  {
  const GGS_procDeclarationAST temp_4 = this ;
  const GGS_procDeclarationAST temp_5 = this ;
  const GGS_procDeclarationAST temp_6 = this ;
  routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_nameForUsefulness_6395, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_6668, ioArgument_ioTypeMap, temp_4.readProperty_mFormalArgumentListAST (), temp_5.readProperty_mRoutineInstructionList (), temp_6.readProperty_mEndOfRoutineInstructionList (), var_instructionList_7120, var_formalArgumentList_7148, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 163)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_routineImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_string ("proc ").add_operation (var_mangledName_6286.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 175)), GGS_bool (true), GGS_string ("proc-").add_operation (var_mangledName_6286.readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 177)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 177)), var_mangledName_6286.readProperty_string (), var_formalArgumentList_7148, GGS_bool (false), var_instructionList_7120, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 174)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@routineImplementationForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument__5F_inTypeMap */,
                                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_string & outArgument_outImplementation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_routineImplementationForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_generateHeader ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_routineImplementationForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("proc-").add_operation (temp_2.readProperty_routineMangledName ().getter_fileNameRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 207)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207))  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 207)) ;
    }
  }
  GGS_string var_code_8958 ;
  {
  const GGS_routineImplementationForGeneration temp_3 = this ;
  const GGS_routineImplementationForGeneration temp_4 = this ;
  const GGS_routineImplementationForGeneration temp_5 = this ;
  const GGS_routineImplementationForGeneration temp_6 = this ;
  routine_generateProcedure_3F_static_3F__26__3F__3F__3F__3F__3F__3F__3F__21_ (temp_3.readProperty_mGenerateStatic (), GGS_string ("routine_").add_operation (temp_4.readProperty_routineMangledName ().getter_identifierRepresentation (SOURCE_FILE ("procedure-declaration.galgas4", 211)), inCompiler COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 211)), ioArgument_ioInclusionSet, temp_5.readProperty_mFormalArgumentList (), temp_6.readProperty_mRoutineInstructionList (), GGS_bool (false), GGS_string ("Compiler"), GGS_bool (true), GGS_bool (false), GGS_bool (false), var_code_8958, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 209)) ;
  }
  const GGS_routineImplementationForGeneration temp_7 = this ;
  outArgument_outImplementation = GGS_semanticComponentGenerationTemplate::class_func_routineImplementation (temp_7.readProperty_routineMangledName (), var_code_8958, inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST enterExpressionInSemanticContext'
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
      GGS_unifiedTypeMapEntry joker_3578 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_typeName (), joker_3578, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 85)) ;
      }
    }
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_expressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_returnedType_4588 ;
  GGS_unifiedTypeMapEntry var_classFuncType_4634 ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_4695 ;
  GGS_bool var_hasCompilerArgument_4747 ;
  GGS__5B_unifiedTypeMapEntry_5D_ var_requiredTypes_4802 ;
  {
  const GGS_classFuncExpressionAST temp_0 = this ;
  const GGS_classFuncExpressionAST temp_1 = this ;
  const GGS_classFuncExpressionAST temp_2 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_typeName (), temp_1.readProperty_classFuncName (), temp_2.readProperty_expressions (), var_returnedType_4588, var_classFuncType_4634, var_constructorEffectiveParameterList_4695, var_hasCompilerArgument_4747, var_requiredTypes_4802, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 100)) ;
  }
  const GGS_classFuncExpressionAST temp_3 = this ;
  GGS_lstring var_typeUsefulnessName_4838 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_classFuncType_4634, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)).readProperty_typeName ().readProperty_string (), temp_3.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_4838 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 118)) ;
  }
  const GGS_classFuncExpressionAST temp_4 = this ;
  GGS_lstring var_returnedTypeUsefulnessName_5058 = function_typeNameForUsefulEntitiesGraph (GGS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_4588, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 119)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_typeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 119)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_5058 COMMA_SOURCE_FILE ("expression-class-func.galgas4", 120)) ;
  }
  const GGS_classFuncExpressionAST temp_5 = this ;
  const GGS_classFuncExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_classFuncExpressionForGeneration::init_21__21__21__21__21__21__21_ (var_returnedType_4588, temp_5.readProperty_classFuncName ().readProperty_location (), var_classFuncType_4634, temp_6.readProperty_classFuncName ().readProperty_string (), var_constructorEffectiveParameterList_4695, var_hasCompilerArgument_4747, var_requiredTypes_4802, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&???!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   const GGS_lstring constinArgument_inTypeName,
                                                                                                   const GGS_lstring constinArgument_inConstructorName,
                                                                                                   const GGS__5B_actualOutputArgumentAST_5D_ constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                   GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                   GGS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                   GGS__5B_semanticExpressionForGeneration_5D_ & outArgument_outConstructorEffectiveParameterList,
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
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 156)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-class-func.galgas4", 158)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 159)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_classFunctionMap var_classFunctionMap_7110 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 164)).readProperty_classFunctionMap () ;
    GGS__5B_functionSignatureElement_5D_ var_constructorFormalArgumentTypeList_7238 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_classFunctionMap_2E_element var_entry_7283 = var_classFunctionMap_7110.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_classFunctionMap_7110.readSubscript__3F_ (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        var_constructorFormalArgumentTypeList_7238 = var_entry_7283.readProperty_argumentTypeList () ;
        outArgument_outHasCompilerArgument = var_entry_7283.readProperty_hasCompilerArgument () ;
        outArgument_outReturnedType = var_entry_7283.readProperty_returnedType () ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_classFunctionMap_7110.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 172)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)).add_operation (GGS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 174)), fixItArray5  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 173)) ;
          var_constructorFormalArgumentTypeList_7238.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        GenericArray <FixItDescription> fixItArray6 ;
        appendFixItActions (fixItArray6, EnumFixItKind::fixItReplace, var_classFunctionMap_7110.getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 182))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 179)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 180)).add_operation (GGS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 180)), fixItArray6  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 178)) ;
        var_constructorFormalArgumentTypeList_7238.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 186)).objectCompare (var_constructorFormalArgumentTypeList_7238.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 186)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GGS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (GGS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 188)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).add_operation (var_constructorFormalArgumentTypeList_7238.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 190)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 190)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 189)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 190)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 191)).getter_string (SOURCE_FILE ("expression-class-func.galgas4", 191)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 190)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 191)), fixItArray8  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 187)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_8700 (constinArgument_inInitializerEffectiveParameterExpressions) ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_8765 (var_constructorFormalArgumentTypeList_7238) ;
    while (enumerator_8700.hasCurrentObject () && enumerator_8765.hasCurrentObject ()) {
      outArgument_outRequiredTypes.plusPlusAssignOperation (enumerator_8765.current (HERE).readProperty_mFormalArgumentType ()  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 196)) ;
      GGS_semanticExpressionForGeneration var_exp_9194 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8700.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8765.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9194, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 197)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8765.current (HERE).readProperty_mFormalArgumentType (), var_exp_9194.readProperty_mResultType (), enumerator_8700.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9194, inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 206)) ;
      }
      outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (var_exp_9194  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 212)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_8700.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GGS_string temp_10 ;
          const GalgasBool test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            temp_10 = enumerator_8765.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 215)) ;
          }else if (GalgasBool::boolFalse == test_11) {
            temp_10 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_9558 = GGS_string ("!").add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 214)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          appendFixItActions (fixItArray12, EnumFixItKind::fixItReplace, var_s_9558) ;
          inCompiler->emitSemanticError (enumerator_8700.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9558, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 219)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 219)), fixItArray12  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 218)) ;
        }
      }
      enumerator_8700.gotoNextObject () ;
      enumerator_8765.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@classFuncExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                       GGS_stringset & ioArgument_ioInclusionSet,
                                                                       GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                       GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GGS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_classFuncType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 243)) ;
  const GGS_classFuncExpressionForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 244)) ;
  const GGS_classFuncExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_10973 (temp_2.readProperty_requiredTypes ()) ;
  while (enumerator_10973.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_10973.current (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 246)) ;
    enumerator_10973.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_parameterList_11064 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_classFuncExpressionForGeneration temp_3 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_11111 (temp_3.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_11111.hasCurrentObject ()) {
    GGS_string var_parameter_11324 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_11111.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_11324, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 250)) ;
    var_parameterList_11064.plusPlusAssignOperation (var_parameter_11324  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 257)) ;
    enumerator_11111.gotoNextObject () ;
  }
  const GGS_classFuncExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_4.readProperty_classFuncType (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 259)) ;
  const GGS_classFuncExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string ("::class_func_").add_operation (temp_5.readProperty_classFuncName ().getter_identifierRepresentation (SOURCE_FILE ("expression-class-func.galgas4", 260)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 260)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 260)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 261)) ;
  UpEnumerator__5B_string_5D_ enumerator_11594 (var_parameterList_11064) ;
  while (enumerator_11594.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_11594.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 263)) ;
    enumerator_11594.gotoNextObject () ;
    if (enumerator_11594.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 264)) ;
    }
  }
  GGS_bool var_needsComma_11704 = GGS_bool (ComparisonKind::greaterThan, var_parameterList_11064.getter_count (SOURCE_FILE ("expression-class-func.galgas4", 266)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_classFuncExpressionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_needsComma_11704.boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 269)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-class-func.galgas4", 271)) ;
      }
      outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 272)) ;
      var_needsComma_11704 = GGS_bool (true) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_needsComma_11704.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_classFuncExpressionForGeneration temp_10 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_10.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 276)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_classFuncExpressionForGeneration temp_11 = this ;
    outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_11.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 278)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 278)), inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 278)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_collectionValueAST temp_0 = this ;
  UpEnumerator__5B_collectionValueElementAST_5D_ enumerator_3388 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_3388.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3388.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 84)) ;
    enumerator_3388.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@collectionValueAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_targetType_4262 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_collectionValueAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_targetType_4262 = constinArgument_inType ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_collectionValueAST temp_2 = this ;
    var_targetType_4262 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 102)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, var_targetType_4262.objectCompare (GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-primary-collection-value.galgas4", 105)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_collectionValueAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 106)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 107)).readProperty_supportArrayLiteral ().operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 107)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_collectionValueAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfCollectionValue (), GGS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)).add_operation (GGS_string (" type does not array literal value"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 109)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 108)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_initializerMap var_initializerMap_4771 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 112)).readProperty_initializerMap () ;
      GGS__5B_functionSignatureElement_5D_ var_emptyArgumentList_4863 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_initializerMap_4771.getter_contains (extensionGetter_initializerSignature (var_emptyArgumentList_4863, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)).operator_not (SOURCE_FILE ("expression-primary-collection-value.galgas4", 114)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_collectionValueAST temp_10 = this ;
          const GGS_collectionValueAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GGS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)).add_operation (GGS_string (" has no @() initializer"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)), fixItArray12  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 115)) ;
        }
      }
      GGS_lstring var_nameForUsefulness_5105 = function_initializerNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 119)).readProperty_typeName (), extensionGetter_initializerSignature (var_emptyArgumentList_4863, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 120)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 118)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_5105 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 122)) ;
      }
      GGS_unifiedTypeMapEntry var_elementType_5380 = extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 124)).readProperty_typeForEnumeratedElement () ;
      GGS__5B_collectionValueElementForGeneration_5D_ var_expressionListForGeneration_5490 = GGS__5B_collectionValueElementForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_collectionValueAST temp_13 = this ;
      UpEnumerator__5B_collectionValueElementAST_5D_ enumerator_5546 (temp_13.readProperty_mExpressionList ()) ;
      while (enumerator_5546.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expressionForGeneration_5854 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5546.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_5380, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_5854, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 127)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_5380, var_expressionForGeneration_5854.readProperty_mResultType (), enumerator_5546.current (HERE).readProperty_location (), var_expressionForGeneration_5854, inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 137)) ;
        }
        var_expressionListForGeneration_5490.plusPlusAssignOperation (GGS_collectionValueElementForGeneration::init_21__21_ (var_expressionForGeneration_5854, enumerator_5546.current (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 143)) ;
        enumerator_5546.gotoNextObject () ;
      }
      const GGS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GGS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4262, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_5490, inCompiler COMMA_HERE) ;
      GGS_lstring var_typeUsefulnessName_6419 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_targetType_4262, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 151)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6419 COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 152)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@expressionCollectionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 180)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-collection-value.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 182)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 183)) ;
  const GGS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 185)) ;
  const GGS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 186)) ;
  const GGS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("::init (").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 187)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 188)) ;
  }
  const GGS_expressionCollectionForGeneration temp_4 = this ;
  UpEnumerator__5B_collectionValueElementForGeneration_5D_ enumerator_8305 (temp_4.readProperty_expressionList ()) ;
  while (enumerator_8305.hasCurrentObject ()) {
    GGS_string var_argumentCppName_8504 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8305.current (HERE).readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8504, inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 191)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (".plusPlusAssignOperation ("), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 198)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(var_argumentCppName_8504.add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 199)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (enumerator_8305.current (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 200)) ;
    enumerator_8305.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_2766 ;
  GGS_string var_sourceVariableCppName_2791 ;
  GGS_string var_nameForCheckingFormalParameterUsing_2833 ;
  {
  const GGS_varInExpressionAST temp_0 = this ;
  extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, temp_0.readProperty_mVarName (), var_type_2766, var_sourceVariableCppName_2791, var_nameForCheckingFormalParameterUsing_2833, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 56)) ;
  }
  const GGS_varInExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_varInExpressionForGeneration::init_21__21__21__21_ (var_type_2766, temp_1.readProperty_mVarName ().readProperty_location (), var_sourceVariableCppName_2791, var_nameForCheckingFormalParameterUsing_2833, inCompiler COMMA_HERE) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_nameForCheckingFormalParameterUsing_2833.objectCompare (function_gCompilerCppName (inCompiler COMMA_HERE))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_varInExpressionAST temp_3 = this ;
      GGS_lstring var_usefulnessName_3186 = function_functionNameForUsefulEntitiesGraph (temp_3.readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 70)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3186 COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 71)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@varInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_varInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 94)) ;
  {
  const GGS_varInExpressionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 95)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_varInExpressionForGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mNameForCheckingFormalParameterUsing ().objectCompare (function_gCompilerCppName (inCompiler COMMA_HERE))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_varInExpressionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_4.readProperty_mCppVarName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-var.galgas4", 98)), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 98))  COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 98)) ;
      const GGS_varInExpressionForGeneration temp_5 = this ;
      outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_5.readProperty_mCppVarName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 99)).add_operation (GGS_string (" (inCompiler COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 99)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_varInExpressionForGeneration temp_6 = this ;
    outArgument_outCppExpression = temp_6.readProperty_mCppVarName () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@globalConstantInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_globalConstantInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                              GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_globalConstantInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 122)) ;
  const GGS_globalConstantInExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mGlobalConstantName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-primary-var.galgas4", 124)), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 124))  COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 124)) ;
  const GGS_globalConstantInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_2.readProperty_mGlobalConstantName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 126)).add_operation (GGS_string (" (inCompiler COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 126)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 127)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                      GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionAST temp_0 = this ;
  const GGS_literalCharExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalCharExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_0.readProperty_mCharacter ().readProperty_location (), temp_1.readProperty_mCharacter ().readProperty_char (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalCharExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalCharExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_char (utf32 (").add_operation (temp_0.readProperty_mCharacter ().getter_u_33__32_ (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).getter_string (SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionAST temp_0 = this ;
  const GGS_literalBigIntExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_bigint (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_33__32_ (uint32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)).add_operation (GGS_string ("U))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalUInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalUInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_36__34_ (uint64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)).add_operation (GGS_string ("ULL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 116)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalU8ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalU_38_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                          GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                          GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                          GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalU_38_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_u_38_ (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 130)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                         GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                         GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                         GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_s_33__32_ (int32_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)).add_operation (GGS_string ("L))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 148)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalSInt64ExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                 GGS_string & outArgument_outCppExpression,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalSInt_36__34_ExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_s_36__34_ (int64_t (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)).add_operation (GGS_string ("LL))"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalBigIntExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalBigIntExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_bigint (\"").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 182)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 183)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 184)) ;
  const GGS_literalBigIntExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 185)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_3157 = GGS_string::makeEmptyString () ;
  const GGS_literalStringExpressionAST temp_0 = this ;
  UpEnumerator__5B_string_5D_ enumerator_3184 (temp_0.readProperty_mStringSequence ()) ;
  while (enumerator_3184.hasCurrentObject ()) {
    var_s_3157.plusAssignOperation(enumerator_3184.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 72)) ;
    enumerator_3184.gotoNextObject () ;
  }
  const GGS_literalStringExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalStringExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_1.readProperty_mLocation (), var_s_3157, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalStringExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_literalStringExpressionForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mString ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCppExpression = GGS_string ("GGS_string::makeEmptyString ()") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_literalStringExpressionForGeneration temp_2 = this ;
    outArgument_outCppExpression = GGS_string ("GGS_string (").add_operation (temp_2.readProperty_mString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 96)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 54)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3429 ;
  const GGS_unaryMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-minus.galgas4", 72)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3429, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 69)) ;
  GGS_unifiedTypeMapEntry var_type_3505 = var_expression_3429.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3544 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3429.ptr ())) ;
    if (nullptr == var_exp_3544.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3544.readProperty_mResultType (), var_exp_3544.readProperty_mLocation (), var_exp_3544.readProperty_mValue ().operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 83)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3505, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 86)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("expression-unary-minus.galgas4", 86)) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 86)).operator_not (SOURCE_FILE ("expression-unary-minus.galgas4", 86)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_unaryMinusExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3505, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 88)), fixItArray4  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 87)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_unaryMinusExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_unaryMinusExpressionForGeneration::init_21__21__21_ (var_type_3505, temp_5.readProperty_mOperatorLocation (), var_expression_3429, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 115)) ;
  GGS_string var_operand_5366 ;
  const GGS_unaryMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5366, inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 117)) ;
  const GGS_unaryMinusExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5366.add_operation (GGS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 125)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 126)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4090 ;
  const GGS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4090, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4166 = var_expression_4090.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_trueExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_falseExpressionForGeneration *> (var_expression_4090.ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("expression-not.galgas4", 101)) COMMA_SOURCE_FILE ("expression-not.galgas4", 101)).operator_not (SOURCE_FILE ("expression-not.galgas4", 101)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_notExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4166, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)).add_operation (GGS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas4", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        const GGS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GGS_notExpressionForGeneration::init_21__21__21_ (var_type_4166, temp_8.readProperty_mOperatorLocation (), var_expression_4090, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@notExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                 GGS_stringset & ioArgument_ioInclusionSet,
                                                                 GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                 GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 131)) ;
  GGS_string var_operand_5855 ;
  const GGS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5855, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 133)) ;
  const GGS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5855.add_operation (GGS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas4", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_4163 ;
  const GGS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4163, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4239 = var_expression_4163.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryWrappingMinusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4239, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GGS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4239, temp_4.readProperty_mOperatorLocation (), var_expression_4163, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryWrappingMinusExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 126)) ;
  GGS_string var_operand_5663 ;
  const GGS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5663, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 128)) ;
  outArgument_outCppExpression = var_operand_5663.add_operation (GGS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 136)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_string_5D_ var_directoryList_3293 ;
  GGS_string var_fileName_3323 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_filewrapperInExpressionAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 68)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_filewrapperInExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("path is empty"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 69)) ;
      var_directoryList_3293.drop () ; // Release error dropped variable
      var_fileName_3323.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_filewrapperInExpressionAST temp_5 = this ;
      test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 70)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_filewrapperInExpressionAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the path should not begin with '/'"), fixItArray7  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 71)) ;
        var_directoryList_3293.drop () ; // Release error dropped variable
        var_fileName_3323.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_filewrapperInExpressionAST temp_8 = this ;
      var_directoryList_3293 = temp_8.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GGS_string ("/") COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 73)) ;
      {
      var_directoryList_3293.setter_removeLast (var_fileName_3323, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 74)) ;
      }
    }
  }
  GGS_wrapperFileMap var_filewrapperFileMap_3950 ;
  GGS_wrapperDirectoryMap var_filewrapperDirectoryMap_4002 ;
  GGS_bool var_isInternal_4044 ;
  const GGS_filewrapperInExpressionAST temp_9 = this ;
  GGS_lstring joker_3909 ; // Joker input parameter
  GGS__5B_lstring_5D_ joker_3919 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_9.readProperty_mFilewrapperName (), joker_3909, joker_3919, var_filewrapperFileMap_3950, var_filewrapperDirectoryMap_4002, var_isInternal_4044, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 77)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_isInternal_4044.boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperInExpressionAST temp_11 = this ;
      GGS_location var_filewrapperDeclarationLocation_4117 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_11.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 87)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_filewrapperInExpressionAST temp_13 = this ;
        test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 88)).objectCompare (var_filewrapperDeclarationLocation_4117.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 88)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_filewrapperInExpressionAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mFilewrapperName ().readProperty_location (), GGS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_4117.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)), fixItArray15  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 89)) ;
        }
      }
    }
  }
  GGS_string var_builtPath_4516 = GGS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_4002.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).isValid ()) {
    uint32_t variant_4535 = var_filewrapperDirectoryMap_4002.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).uintValue () ;
    bool loop_4535 = true ;
    while (loop_4535) {
      loop_4535 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_3293.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).isValid () ;
      if (loop_4535) {
        loop_4535 = GGS_bool (ComparisonKind::greaterThan, var_directoryList_3293.getter_count (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolValue () ;
      }
      if (loop_4535 && (0 == variant_4535)) {
        loop_4535 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 94)) ;
      }
      if (loop_4535) {
        variant_4535 -= 1 ;
        GGS_string var_directoryName_4649 ;
        {
        var_directoryList_3293.setter_removeFirst (var_directoryName_4649, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 95)) ;
        }
        var_builtPath_4516.plusAssignOperation(var_directoryName_4649.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 96)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = var_filewrapperDirectoryMap_4002.getter_contains (var_directoryName_4649 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 97)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            GGS_u_33__32_ joker_4917 ; // Joker input parameter
            var_filewrapperDirectoryMap_4002.method_searchKey (var_directoryName_4649.getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 99)), var_filewrapperFileMap_3950, var_filewrapperDirectoryMap_4002, joker_4917, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 98)) ;
          }
        }
        if (GalgasBool::boolFalse == test_16) {
          const GGS_filewrapperInExpressionAST temp_17 = this ;
          const GGS_filewrapperInExpressionAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_builtPath_4516, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)).add_operation (GGS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)).add_operation (temp_18.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)), fixItArray19  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 105)) ;
          var_filewrapperFileMap_3950.drop () ; // Release error dropped variable
          GGS__5B_string_5D_ temp_20 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 106)) ;
          var_directoryList_3293 = temp_20 ;
        }
      }
    }
  }
  GGS_u_33__32_ var_fileIndex_5181 ;
  GGS_bool var_isTextFile_5205 ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = var_filewrapperFileMap_3950.getter_contains (var_fileName_3323 COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 111)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      GGS_string joker_5340 ; // Joker input parameter
      GGS_u_33__32_ joker_5357 ; // Joker input parameter
      var_filewrapperFileMap_3950.method_searchKey (GGS_lstring::init_21__21_ (var_fileName_3323, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 112)), inCompiler COMMA_HERE), joker_5340, var_isTextFile_5205, joker_5357, var_fileIndex_5181, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 112)) ;
    }
  }
  if (GalgasBool::boolFalse == test_21) {
    const GGS_filewrapperInExpressionAST temp_22 = this ;
    const GGS_filewrapperInExpressionAST temp_23 = this ;
    GenericArray <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("the '").add_operation (var_fileName_3323, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (GGS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (var_builtPath_4516, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (GGS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)).add_operation (GGS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 115)), fixItArray24  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 114)) ;
    var_fileIndex_5181.drop () ; // Release error dropped variable
    var_isTextFile_5205.drop () ; // Release error dropped variable
  }
  const GGS_filewrapperInExpressionAST temp_25 = this ;
  GGS_unifiedTypeMapEntry var_fileWrapperType_5644 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_25.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 119)) ;
  GGS_unifiedTypeMapEntry temp_26 ;
  const GalgasBool test_27 = var_isTextFile_5205.boolEnum () ;
  if (GalgasBool::boolTrue == test_27) {
    temp_26 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (GalgasBool::boolFalse == test_27) {
    temp_26 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_string ("data").getter_here (inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 124)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 124)) ;
  }
  const GGS_filewrapperInExpressionAST temp_28 = this ;
  const GGS_filewrapperInExpressionAST temp_29 = this ;
  outArgument_outExpression = GGS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21__21_ (temp_26, temp_28.readProperty_mFilewrapperName ().readProperty_location (), var_fileWrapperType_5644, temp_29.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_5181, var_isTextFile_5205, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                                     GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                     GGS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_filewrapperType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 156)) ;
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
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 158)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST enterExpressionInSemanticContext'
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
      GGS_unifiedTypeMapEntry joker_5829 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_5829, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 140)) ;
      }
    }
  }
  const GGS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 142)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallAST analyzeSemanticExpression'
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
  GGS_unifiedTypeMapEntry var_instanciedType_6748 ;
  GGS_lstring var_initializerName_6784 ;
  GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_6847 ;
  {
  const GGS_initializerCallAST temp_0 = this ;
  const GGS_initializerCallAST temp_1 = this ;
  const GGS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_6748, var_initializerName_6784, var_constructorEffectiveParameterList_6847, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 155)) ;
  }
  GGS_lstring var_typeUsefulnessName_6924 = function_typeNameForUsefulEntitiesGraph (extensionGetter_definition (var_instanciedType_6748, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 170)).readProperty_typeName (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 170)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_typeUsefulnessName_6924 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 171)) ;
  }
  const GGS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GGS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_6748, temp_3.readProperty_mEndOfExpressions (), var_initializerName_6784.readProperty_string (), var_constructorEffectiveParameterList_6847, inCompiler COMMA_HERE) ;
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
                                                                                           const GGS__5B_actualOutputArgumentAST_5D_ constinArgument_inInvocationArguments,
                                                                                           const GGS_location constinArgument_inEndOfExpressions,
                                                                                           GGS_unifiedTypeMapEntry & outArgument_outInstanciedType,
                                                                                           GGS_lstring & outArgument_outInitializerName,
                                                                                           GGS__5B_semanticExpressionForGeneration_5D_ & outArgument_outConstructorEffectiveParameterList,
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
      outArgument_outInstanciedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 201)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outInstanciedType.getter_isNull (SOURCE_FILE ("expression-initializer.galgas4", 203)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 204)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_unifiedTypeDefinition var_instanciedTypeDefinition_8602 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 208)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_8602.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas4", 209)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 210)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_lstring var_nameForUsefulness_8918 = function_initializerNameForUsefulEntitiesGraph (var_instanciedTypeDefinition_8602.readProperty_typeName (), extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 217)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 215)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_nameForUsefulness_8918 COMMA_SOURCE_FILE ("expression-initializer.galgas4", 219)) ;
      }
      outArgument_outInitializerName = GGS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 221)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GGS_initializerMap var_initializerMap_9312 = var_instanciedTypeDefinition_8602.readProperty_initializerMap () ;
      GGS__5B_functionSignatureElement_5D_ var_formalSignature_9407 ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_initializerMap_9312.getter_contains (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas4", 224)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_initializerMap_9312.method_searchKey (outArgument_outInitializerName, var_formalSignature_9407, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 225)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GGS_string var_s_9577 = GGS_string ("@").add_operation (var_instanciedTypeDefinition_8602.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 227)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 227)) ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_9653 (constinArgument_inInvocationArguments) ;
        while (enumerator_9653.hasCurrentObject ()) {
          var_s_9577.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 230)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_9653.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_s_9577.plusAssignOperation(enumerator_9653.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 232)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 232)) ;
            }
          }
          enumerator_9653.gotoNextObject () ;
          if (enumerator_9653.hasCurrentObject ()) {
            var_s_9577.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 235)) ;
          }
        }
        var_s_9577.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 237)) ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GGS_string ("the ").add_operation (var_s_9577, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 239)).add_operation (GGS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 239)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 238)) ;
        var_formalSignature_9407.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_10133 (constinArgument_inInvocationArguments) ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_10179 (var_formalSignature_9407) ;
      while (enumerator_10133.hasCurrentObject () && enumerator_10179.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_exp_10549 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10133.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10179.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_10549, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 246)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10179.current (HERE).readProperty_mFormalArgumentType (), var_exp_10549.readProperty_mResultType (), enumerator_10133.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_10549, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 255)) ;
        }
        outArgument_outConstructorEffectiveParameterList.plusPlusAssignOperation (var_exp_10549  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 261)) ;
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10133.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = enumerator_10179.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 264)) ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_10933 = GGS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 263)) ;
            GenericArray <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, EnumFixItKind::fixItReplace, var_s_10933) ;
            inCompiler->emitSemanticError (enumerator_10133.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_10933, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 268)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 268)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 267)) ;
          }
        }
        enumerator_10133.gotoNextObject () ;
        enumerator_10179.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@initializerCallForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_initializerCallForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 290)) ;
  GGS__5B_string_5D_ var_parameterList_12166 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_initializerCallForGeneration temp_1 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12213 (temp_1.readProperty_mEffectiveParameterList ()) ;
  while (enumerator_12213.hasCurrentObject ()) {
    GGS_string var_parameter_12425 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12213.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_12425, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 293)) ;
    var_parameterList_12166.plusPlusAssignOperation (var_parameter_12425  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 300)) ;
    enumerator_12213.gotoNextObject () ;
  }
  const GGS_initializerCallForGeneration temp_2 = this ;
  const GGS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)).add_operation (GGS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 302)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 303)) ;
  UpEnumerator__5B_string_5D_ enumerator_12681 (var_parameterList_12166) ;
  while (enumerator_12681.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_12681.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 306)) ;
    enumerator_12681.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-initializer.galgas4", 308)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 309)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 310)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 163)) ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 164)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_8068 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8068, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 178)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8409 ;
  const GGS_multiplicationExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8068.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8409, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 188)) ;
  {
  const GGS_multiplicationExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_8068.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 199)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 199)), GGS_string ("&*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8068, var_rightExpression_8409, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 198)) ;
  }
  const GGS_multiplicationExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_8068.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8068, GGS_binaryOperator::class_func_wrappingMul (SOURCE_FILE ("expression-multiplicative.galgas4", 210)), var_rightExpression_8409, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_multiplicationExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 221)) ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 222)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@multiplicationExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_10106 ;
  const GGS_multiplicationExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_10106, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 236)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10447 ;
  const GGS_multiplicationExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_10106.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10447, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 246)) ;
  {
  const GGS_multiplicationExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_10106.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 257)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 257)), GGS_string ("*"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_10106, var_rightExpression_10447, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 256)) ;
  }
  const GGS_multiplicationExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_10106.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_10106, GGS_binaryOperator::class_func_multiply_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 268)), var_rightExpression_10447, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 278)) ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 279)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionNoOverflowAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_12151 ;
  const GGS_divisionExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12151, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 293)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12492 ;
  const GGS_divisionExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12151.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12492, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 303)) ;
  {
  const GGS_divisionExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12151.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("expression-multiplicative.galgas4", 314)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 314)), GGS_string ("&/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12151, var_rightExpression_12492, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 313)) ;
  }
  const GGS_divisionExpressionNoOverflowAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12151.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_12151, GGS_binaryOperator::class_func_wrappingDiv (SOURCE_FILE ("expression-multiplicative.galgas4", 325)), var_rightExpression_12492, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_divisionExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 335)) ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 336)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@divisionExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_14175 ;
  const GGS_divisionExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14175, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 350)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14516 ;
  const GGS_divisionExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14175.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14516, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 360)) ;
  {
  const GGS_divisionExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14175.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 371)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 371)), GGS_string ("/"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14175, var_rightExpression_14516, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 370)) ;
  }
  const GGS_divisionExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14175.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_14175, GGS_binaryOperator::class_func_divide_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 382)), var_rightExpression_14516, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 392)) ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 393)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@moduloExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_16194 ;
  const GGS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16194, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 407)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_16535 ;
  const GGS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16194.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16535, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 417)) ;
  {
  const GGS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16194.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas4", 428)) COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 428)), GGS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16194, var_rightExpression_16535, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 427)) ;
  }
  const GGS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16194.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16194, GGS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas4", 439)), var_rightExpression_16535, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                 GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                 GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_3510 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("expression-primary-self.galgas4", 80)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_selfCppName_3595 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      const GGS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GGS_selfInExpressionForGeneration::init_21__21__21_ (var_selfAvailable_3510.readProperty_type (), temp_1.readProperty_mSelfLocation (), var_selfCppName_3595, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_selfInExpressionAST temp_2 = this ;
    GenericArray <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@selfInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                    GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-self.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 105)) ;
  const GGS_selfInExpressionForGeneration temp_0 = this ;
  const GGS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 106)) ;
  {
  const GGS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                               GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                               GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                               GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                               GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_trueExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_falseExpressionAST temp_0 = this ;
  outArgument_outExpression = GGS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@trueExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                  GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                  GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                  GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                  GGS_string & outArgument_outCppExpression,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (true)") ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@falseExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                   GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                   GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                   GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GGS_string ("GGS_bool (false)") ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@trueExpressionForGeneration isTrueExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_trueExpressionForGeneration::getter_isTrueExpression (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@unaryPlusExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_unaryPlusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-plus.galgas4", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 86)) ;
  GGS_unifiedTypeMapEntry var_type_4142 = outArgument_outExpression.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4142, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("expression-unary-plus.galgas4", 97)) COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 97)).operator_not (SOURCE_FILE ("expression-unary-plus.galgas4", 97)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_unaryPlusExpressionAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4142, inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)).add_operation (GGS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_5289 ;
  const GGS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 133)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5289, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 130)) ;
  const GGS_testDynamicClassInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_castType_5338 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 140)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 142)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_5584 = var_castType_5338 ;
      GGS_bool var_found_5611 = GGS_bool (ComparisonKind::equal, var_t_5584.objectCompare (var_expression_5289.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).isValid ()) {
        uint32_t variant_5651 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 146)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 146)).uintValue () ;
        bool loop_5651 = true ;
        while (loop_5651) {
          loop_5651 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).isValid () ;
          if (loop_5651) {
            loop_5651 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_and (extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 147)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 147)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 147)).boolValue () ;
          }
          if (loop_5651 && (0 == variant_5651)) {
            loop_5651 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 146)) ;
          }
          if (loop_5651) {
            variant_5651 -= 1 ;
            var_t_5584 = extensionGetter_definition (var_t_5584, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 148)).readProperty_superType () ;
            var_found_5611 = GGS_bool (ComparisonKind::equal, var_t_5584.objectCompare (var_expression_5289.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_5611.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 151)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_testDynamicClassInExpressionAST temp_4 = this ;
          const GGS_testDynamicClassInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 153)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 152)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5289.readProperty_mLocation (), GGS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5289.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 157)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 156)) ;
  }
  const GGS_testDynamicClassInExpressionAST temp_8 = this ;
  outArgument_outExpression = GGS_testDynamicClassInExpressionForGeneration::init_21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5289, var_castType_5338, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                 const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                 GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7547 ;
  const GGS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas4", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7547, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 188)) ;
  const GGS_castInExpressionAST temp_1 = this ;
  GGS_unifiedTypeMapEntry var_type_7597 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 198)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 200)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas4", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_unifiedTypeMapEntry var_t_7837 = var_type_7597 ;
      GGS_bool var_found_7860 = GGS_bool (ComparisonKind::equal, var_t_7837.objectCompare (var_expression_7547.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).isValid ()) {
        uint32_t variant_7900 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas4", 204)).add_operation (GGS_u_33__32_ (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 204)).uintValue () ;
        bool loop_7900 = true ;
        while (loop_7900) {
          loop_7900 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).isValid () ;
          if (loop_7900) {
            loop_7900 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_and (extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas4", 205)).operator_not (SOURCE_FILE ("expression-is-as.galgas4", 205)) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 205)).boolValue () ;
          }
          if (loop_7900 && (0 == variant_7900)) {
            loop_7900 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas4", 204)) ;
          }
          if (loop_7900) {
            variant_7900 -= 1 ;
            var_t_7837 = extensionGetter_definition (var_t_7837, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 206)).readProperty_superType () ;
            var_found_7860 = GGS_bool (ComparisonKind::equal, var_t_7837.objectCompare (var_expression_7547.readProperty_mResultType ())) ;
          }
        }
      }
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = var_found_7860.operator_not (SOURCE_FILE ("expression-is-as.galgas4", 209)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_castInExpressionAST temp_4 = this ;
          const GGS_castInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GGS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 211)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 212)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 210)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GenericArray <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_7547.readProperty_mLocation (), GGS_string ("cast expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_7547.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 216)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 217)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 215)) ;
  }
  const GGS_castInExpressionAST temp_8 = this ;
  const GGS_castInExpressionAST temp_9 = this ;
  outArgument_outExpression = GGS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_7597, temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_7547, temp_9.readProperty_mTypeName ().readProperty_string (), var_type_7597, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testDynamicClassInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GGS_string var_typeNameRepresentation_9426 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 246)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 246)) ;
  GGS_string var_receiverExpression_9719 ;
  const GGS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_9719, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 248)) ;
  const GGS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 256)) ;
  outArgument_outCppExpression = GGS_string ("GGS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_9426, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 257)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 258)).add_operation (var_receiverExpression_9719, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 259)).add_operation (GGS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 259)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@castInExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                    GGS_stringset & ioArgument_ioInclusionSet,
                                                                    GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GGS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 271)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas4", 272)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 272)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 273)) ;
  GGS_string var_receiverExpression_10651 ;
  const GGS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 275)) ;
  const GGS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 283)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (GGS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 284)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 285)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 285)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 283)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 286)) ;
  }
  const GGS_castInExpressionForGeneration temp_3 = this ;
  const GGS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 289)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 290)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (GGS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 291)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 292)).add_operation (GGS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)).add_operation (GGS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 288)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 295)) ;
  }
  const GGS_castInExpressionForGeneration temp_5 = this ;
  const GGS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 297)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 297)).add_operation (GGS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 298)).add_operation (var_receiverExpression_10651, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 299)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 300)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 296)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 301)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-is-as.galgas4", 302)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 303)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas4", 304)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 305)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 130)) ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 131)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@rightShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_6551 ;
  const GGS_rightShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6551, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 146)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_6915 ;
  const GGS_rightShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_6915, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 156)) ;
  GGS_unifiedTypeMapEntry var_leftType_6996 = var_leftExpression_6551.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_7043 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_6551.ptr ())) ;
    if (nullptr == var_left_7043.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_7116 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_6915.ptr ())) ;
      if (nullptr == var_right_7116.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_rightShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_7043.readProperty_mValue ().right_shift_operation (var_right_7116.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 172)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_7384 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_6551.ptr ())) ;
      if (nullptr == var_left_7384.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_7457 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_6915.ptr ())) ;
        if (nullptr == var_right_7457.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_rightShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_7384.readProperty_mValue ().right_shift_operation (var_right_7457.readProperty_mValue ().getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 179)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 179)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_6996, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 181)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 181)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 181)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 181)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_rightShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_6996, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 183)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 182)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_rightShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_6996, temp_9.readProperty_mOperatorLocation (), var_leftExpression_6551, GGS_binaryOperator::class_func_rightShift (SOURCE_FILE ("expression-additive.galgas4", 191)), var_rightExpression_6915, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 202)) ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 203)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@leftShiftExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_9392 ;
  const GGS_leftShiftExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9392, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 218)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9756 ;
  const GGS_leftShiftExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9756, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 228)) ;
  GGS_unifiedTypeMapEntry var_leftType_9837 = var_leftExpression_9392.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_left_9884 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_9392.ptr ())) ;
    if (nullptr == var_left_9884.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS_literalUIntExpressionForGeneration var_right_9957 (dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_9756.ptr ())) ;
      if (nullptr == var_right_9957.ptr ()) {
        test_2 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_2) {
        const GGS_leftShiftExpressionAST temp_3 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_3.readProperty_mOperatorLocation (), var_left_9884.readProperty_mValue ().left_shift_operation (var_right_9957.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 244)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      GGS_literalBigIntExpressionForGeneration var_left_10225 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_9392.ptr ())) ;
      if (nullptr == var_left_10225.ptr ()) {
        test_4 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_4) {
        GGS_literalBigIntExpressionForGeneration var_right_10298 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_9756.ptr ())) ;
        if (nullptr == var_right_10298.ptr ()) {
          test_4 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_4) {
          const GGS_leftShiftExpressionAST temp_5 = this ;
          outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_5.readProperty_mOperatorLocation (), var_left_10225.readProperty_mValue ().left_shift_operation (var_right_10298.readProperty_mValue ().getter_u_33__32_ (inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 251)), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 251)), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = extensionGetter_definition (var_leftType_9837, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 253)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("expression-additive.galgas4", 253)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 253)).operator_not (SOURCE_FILE ("expression-additive.galgas4", 253)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_leftShiftExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftType_9837, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)).add_operation (GGS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 255)), fixItArray8  COMMA_SOURCE_FILE ("expression-additive.galgas4", 254)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_leftShiftExpressionAST temp_9 = this ;
        outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftType_9837, temp_9.readProperty_mOperatorLocation (), var_leftExpression_9392, GGS_binaryOperator::class_func_leftShift (SOURCE_FILE ("expression-additive.galgas4", 263)), var_rightExpression_9756, inCompiler COMMA_HERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 274)) ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 275)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12240 ;
  const GGS_addExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12240, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 290)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12581 ;
  const GGS_addExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12240.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12581, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 300)) ;
  {
  const GGS_addExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_12240.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 311)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 311)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 311)), GGS_string ("&+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_12240, var_rightExpression_12581, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 310)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_12886 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_12240.ptr ())) ;
    if (nullptr == var_leftBigint_12886.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_12966 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_12581.ptr ())) ;
      if (nullptr == var_rightBigint_12966.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_12886.readProperty_mValue ().add_operation (var_rightBigint_12966.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 323)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_12240.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_12240, GGS_binaryOperator::class_func_wrappingAdd (SOURCE_FILE ("expression-additive.galgas4", 330)), var_rightExpression_12581, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 341)) ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 342)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@addExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14640 ;
  const GGS_addExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14640, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 356)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14981 ;
  const GGS_addExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_14640.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14981, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 366)) ;
  {
  const GGS_addExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_14640.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 377)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("expression-additive.galgas4", 377)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 377)), GGS_string ("+"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14640, var_rightExpression_14981, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 376)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_15280 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_14640.ptr ())) ;
    if (nullptr == var_leftBigint_15280.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_15360 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_14981.ptr ())) ;
      if (nullptr == var_rightBigint_15360.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_addExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_15280.readProperty_mValue ().add_operation (var_rightBigint_15360.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 389)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_addExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_14640.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_14640, GGS_binaryOperator::class_func_add (SOURCE_FILE ("expression-additive.galgas4", 396)), var_rightExpression_14981, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 407)) ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 408)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionNoOverflowAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_17046 ;
  const GGS_subExpressionNoOverflowAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_17046, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 423)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_17387 ;
  const GGS_subExpressionNoOverflowAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_17046.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_17387, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 433)) ;
  {
  const GGS_subExpressionNoOverflowAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_17046.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 444)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("expression-additive.galgas4", 444)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 444)), GGS_string ("&-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_17046, var_rightExpression_17387, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 443)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_17692 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_17046.ptr ())) ;
    if (nullptr == var_leftBigint_17692.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_17772 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_17387.ptr ())) ;
      if (nullptr == var_rightBigint_17772.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionNoOverflowAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_17692.readProperty_mValue ().subtract_operation (var_rightBigint_17772.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 456)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionNoOverflowAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_17046.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_17046, GGS_binaryOperator::class_func_wrappingSub (SOURCE_FILE ("expression-additive.galgas4", 463)), var_rightExpression_17387, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 474)) ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 475)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_19446 ;
  const GGS_subExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_19446, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 489)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_19787 ;
  const GGS_subExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_19446.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_19787, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 499)) ;
  {
  const GGS_subExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_19446.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 510)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("expression-additive.galgas4", 510)) COMMA_SOURCE_FILE ("expression-additive.galgas4", 510)), GGS_string ("-"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_19446, var_rightExpression_19787, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 509)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    GGS_literalBigIntExpressionForGeneration var_leftBigint_20086 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_19446.ptr ())) ;
    if (nullptr == var_leftBigint_20086.ptr ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      GGS_literalBigIntExpressionForGeneration var_rightBigint_20166 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_rightExpression_19787.ptr ())) ;
      if (nullptr == var_rightBigint_20166.ptr ()) {
        test_3 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_3) {
        const GGS_subExpressionAST temp_4 = this ;
        outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBigIntType (), temp_4.readProperty_mOperatorLocation (), var_leftBigint_20086.readProperty_mValue ().subtract_operation (var_rightBigint_20166.readProperty_mValue (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 522)), inCompiler COMMA_HERE) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    const GGS_subExpressionAST temp_5 = this ;
    outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_19446.readProperty_mResultType (), temp_5.readProperty_mOperatorLocation (), var_leftExpression_19446, GGS_binaryOperator::class_func_sub (SOURCE_FILE ("expression-additive.galgas4", 529)), var_rightExpression_19787, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@binaryOperatorExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_binaryOperatorExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_binaryOperatorExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 572)) ;
  GGS_string var_leftTemporaryOperand_22086 ;
  const GGS_binaryOperatorExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22086, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 574)) ;
  GGS_string var_rightTemporaryOperand_22272 ;
  const GGS_binaryOperatorExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22272, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 576)) ;
  GGS_string var_operatorString_22335 ;
  GGS_bool var_hasCompilerOption_22362 ;
  const GGS_binaryOperatorExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mOperator ().enumValue ()) {
  case GGS_binaryOperator::Enumeration::invalid:
    break ;
  case GGS_binaryOperator::Enumeration::enum_rightShift:
    {
      var_operatorString_22335 = GGS_string ("right_shift_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_leftShift:
    {
      var_operatorString_22335 = GGS_string ("left_shift_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_add:
    {
      var_operatorString_22335 = GGS_string ("add_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingAdd:
    {
      var_operatorString_22335 = GGS_string ("wrapping_add_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_sub:
    {
      var_operatorString_22335 = GGS_string ("subtract_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingSub:
    {
      var_operatorString_22335 = GGS_string ("wrapping_subtract_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_and:
    {
      var_operatorString_22335 = GGS_string ("operator_and") ;
      var_hasCompilerOption_22362 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_or:
    {
      var_operatorString_22335 = GGS_string ("operator_or") ;
      var_hasCompilerOption_22362 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_operator_5F_xor:
    {
      var_operatorString_22335 = GGS_string ("operator_xor") ;
      var_hasCompilerOption_22362 = GGS_bool (false) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingMul:
    {
      var_operatorString_22335 = GGS_string ("wrapping_multiply_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_multiply_5F_operation:
    {
      var_operatorString_22335 = GGS_string ("multiply_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_divide_5F_operation:
    {
      var_operatorString_22335 = GGS_string ("divide_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_wrappingDiv:
    {
      var_operatorString_22335 = GGS_string ("wrapping_divide_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  case GGS_binaryOperator::Enumeration::enum_modulo_5F_operation:
    {
      var_operatorString_22335 = GGS_string ("modulo_operation") ;
      var_hasCompilerOption_22362 = GGS_bool (true) ;
    }
    break ;
  }
  outArgument_outCppExpression = var_leftTemporaryOperand_22086.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)).add_operation (var_operatorString_22335, inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 624)) ;
  outArgument_outCppExpression.plusAssignOperation(var_rightTemporaryOperand_22272, inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 625)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_hasCompilerOption_22362.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 627)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 627)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-additive.galgas4", 628)) ;
      }
    }
  }
  const GGS_binaryOperatorExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_5.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)), inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 630)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 116)) ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_6013 ;
  const GGS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_6013, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 131)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_6355 ;
  const GGS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_6013.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_6355, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 141)) ;
  {
  const GGS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_6013.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 152)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 152)) COMMA_SOURCE_FILE ("expression-or.galgas4", 152)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_6013, var_rightExpression_6355, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 151)) ;
  }
  const GGS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_6013.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_6013, GGS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas4", 162)), var_rightExpression_6355, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 172)) ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_8004 ;
  const GGS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8004, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 187)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_8346 ;
  const GGS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8004.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8346, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 197)) ;
  {
  const GGS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_8004.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 208)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("expression-or.galgas4", 208)) COMMA_SOURCE_FILE ("expression-or.galgas4", 208)), GGS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_8004, var_rightExpression_8346, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 207)) ;
  }
  const GGS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_8004.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_8004, var_rightExpression_8346, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 227)) ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 228)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_9985 ;
  const GGS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9985, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 242)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_10327 ;
  const GGS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9985.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10327, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 252)) ;
  {
  const GGS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9985.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 263)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("expression-or.galgas4", 263)) COMMA_SOURCE_FILE ("expression-or.galgas4", 263)), GGS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9985, var_rightExpression_10327, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 262)) ;
  }
  const GGS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_9985.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9985, GGS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas4", 274)), var_rightExpression_10327, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 284)) ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 285)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_12041 ;
  const GGS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_12041, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 300)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_12405 ;
  const GGS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12405, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 310)) ;
  GGS_unifiedTypeMapEntry var_leftType_12486 = var_leftExpression_12041.readProperty_mResultType () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_12486, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 321)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_12041.readProperty_mLocation (), GGS_string ("the left expression or '...' operator should an @u32"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas4", 322)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_rightType_12704 = var_rightExpression_12405.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_12704, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 325)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("u32"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_12405.readProperty_mLocation (), GGS_string ("the right expression or '...' operator should an @u32"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas4", 326)) ;
    }
  }
  const GGS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GGS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_12041.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 330)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_12041, var_rightExpression_12405, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 342)) ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 343)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GGS_unifiedTypeMapEntry /* constinArgument__5F_inInferenceType */,
                                                                      const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                      GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_leftExpression_14634 ;
  const GGS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_14634, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 357)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_14997 ;
  const GGS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14997, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 367)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_14634.readProperty_mResultType (), var_leftExpression_14634.readProperty_mLocation (), var_leftExpression_14634, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 377)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_14997.readProperty_mResultType (), var_rightExpression_14997.readProperty_mLocation (), var_rightExpression_14997, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 383)) ;
  }
  const GGS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GGS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (GGS_string ("range"), var_leftExpression_14634.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 391)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_14634, var_rightExpression_14997, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                     GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GGS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 429)) ;
  GGS_string var_leftTemporaryOperand_17311 ;
  const GGS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_17311, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 431)) ;
  GGS_string var_testVar_17368 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas4", 439)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 439)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 440)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_17368, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (var_leftTemporaryOperand_17311, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 441)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 441)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue != ").add_operation (var_testVar_17368, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 442)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 442)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 442)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 444)) ;
  }
  GGS_string var_rightTemporaryOperand_17850 ;
  const GGS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_17850, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 445)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_17368.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)).add_operation (var_rightTemporaryOperand_17850, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 452)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 452)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 453)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 454)) ;
  outArgument_outCppExpression = var_testVar_17368 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@closedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 466)) ;
  GGS_string var_leftTemporaryOperand_18638 ;
  const GGS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_18638, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 468)) ;
  GGS_string var_rightTemporaryOperand_18847 ;
  const GGS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_18847, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 476)) ;
  const GGS_closedSliceExpressionForGeneration temp_3 = this ;
  const GGS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_18638, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (var_rightTemporaryOperand_18847, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 485)).add_operation (GGS_string (".subtract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (var_leftTemporaryOperand_18638, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string (").add_operation (GGS_u_33__32_ (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 486)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@openedSliceExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                         GGS_stringset & ioArgument_ioInclusionSet,
                                                                         GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                         GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GGS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 498)) ;
  GGS_string var_leftTemporaryOperand_19800 ;
  const GGS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19800, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 500)) ;
  GGS_string var_rightTemporaryOperand_20009 ;
  const GGS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20009, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 508)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-or.galgas4", 516)) ;
  }
  const GGS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_range (").add_operation (var_leftTemporaryOperand_19800, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (var_rightTemporaryOperand_20009, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 518)).add_operation (GGS_string (".subtract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (var_leftTemporaryOperand_19800, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 520)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 519)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas4", 520)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                               const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                               GGS_semanticExpressionForGeneration & outArgument_outExpressionGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_exprGeneration_4285 ;
  const GGS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exprGeneration_4285, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 97)) ;
  GGS_unifiedTypeMapEntry var_expressionType_4375 = var_exprGeneration_4285.readProperty_mResultType () ;
  GGS_propertyMap var_propertyMap_4427 = extensionGetter_definition (var_expressionType_4375, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 108)).readProperty_propertyMap () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_structPropertyAccessExpressionAST temp_2 = this ;
    const GGS_propertyMap_2E_element var_prop_4490 = var_propertyMap_4427.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_propertyMap_4427.readSubscript__3F_ (temp_2.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_exprGeneration_4285.ptr ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          const GGS_structPropertyAccessExpressionAST temp_4 = this ;
          const GGS_structPropertyAccessExpressionAST temp_5 = this ;
          GGS_unifiedTypeMapEntry joker_4713_3 ; // Joker input parameter
          GGS_string joker_4713_2 ; // Joker input parameter
          GGS_string joker_4713_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GGS_lstring::init_21__21_ (GGS_string ("self.").add_operation (temp_4.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 112)), temp_5.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_4713_3, joker_4713_2, joker_4713_1, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 111)) ;
          }
        }
      }
      const GGS_structPropertyAccessExpressionAST temp_6 = this ;
      extensionMethod_checkGetAccess (var_prop_4490.readProperty_mAccessControl (), constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_6.readProperty_propertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 116)) ;
      const GGS_structPropertyAccessExpressionAST temp_7 = this ;
      const GGS_structPropertyAccessExpressionAST temp_8 = this ;
      outArgument_outExpressionGeneration = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_4490.readProperty_mPropertyType (), temp_7.readProperty_operatorLocation (), var_exprGeneration_4285, temp_8.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_5080 = extensionGetter_definition (var_expressionType_4375, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 125)).readProperty_getterMap () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_structPropertyAccessExpressionAST temp_10 = this ;
      const GGS_getterMap_2E_element var_theGetter_5141 = var_getterMap_5080.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
      if (!var_getterMap_5080.readSubscript__3F_ (temp_10.readProperty_propertyName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
        test_9 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_9) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_theGetter_5141.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 127)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_structPropertyAccessExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_propertyName ().readProperty_location (), GGS_string ("for being called as a property read, the func should have no formal argument (has ").add_operation (var_theGetter_5141.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 130)).getter_string (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 130)), fixItArray13  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 128)) ;
            outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_11) {
          const GGS_structPropertyAccessExpressionAST temp_14 = this ;
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::equal, var_theGetter_5141.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_structPropertyAccessExpressionAST temp_17 = this ;
            temp_15 = temp_17.readProperty_propertyName ().readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = var_theGetter_5141.readProperty_mGetterNameThatObsoletesInvokationName () ;
          }
          outArgument_outExpressionGeneration = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_theGetter_5141.readProperty_mReturnedType (), temp_14.readProperty_propertyName ().readProperty_location (), var_theGetter_5141.readProperty_mKind (), var_exprGeneration_4285, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), temp_15, GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE), var_theGetter_5141.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GGS_string var_s_6012 = GGS_string ("undefined property, undefined func") ;
      UpEnumerator_propertyMap enumerator_6077 (var_propertyMap_4427) ;
      while (enumerator_6077.hasCurrentObject ()) {
        var_s_6012.plusAssignOperation(GGS_string ("\n  -- property: ").add_operation (enumerator_6077.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 150)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 150)) ;
        enumerator_6077.gotoNextObject () ;
      }
      UpEnumerator_getterMap enumerator_6178 (var_getterMap_5080) ;
      while (enumerator_6178.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_6178.current (HERE).readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 153)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            var_s_6012.plusAssignOperation(GGS_string ("\n  -- func: ").add_operation (enumerator_6178.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 154)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 154)) ;
          }
        }
        enumerator_6178.gotoNextObject () ;
      }
      const GGS_structPropertyAccessExpressionAST temp_19 = this ;
      GenericArray <FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (temp_19.readProperty_propertyName ().readProperty_location (), var_s_6012, fixItArray20  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 157)) ;
      outArgument_outExpressionGeneration.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@propertyAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                            GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                            GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GGS_string & outArgument_outCppExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_propertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 179)) ;
  GGS_string var_operand_7500 ;
  const GGS_propertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_7500, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 181)) ;
  outArgument_outCppExpression = var_operand_7500.add_operation (GGS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 189)) ;
  const GGS_propertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_2.readProperty_structFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 190)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subcriptReadAccessExpressionAST temp_0 = this ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_8434 (temp_0.readProperty_actualArgumentList ()) ;
  while (enumerator_8434.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_8434.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 210)) ;
    enumerator_8434.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                             GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_9561 ;
  const GGS_subcriptReadAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 228)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9561, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 225)) ;
  GGS_unifiedTypeMapEntry var_expressionType_9607 = var_expression_9561.readProperty_mResultType () ;
  const GGS_subcriptReadAccessExpressionAST temp_1 = this ;
  GGS_string var_invocationSignature_9693 = extensionGetter_subcriptSignature (temp_1.readProperty_actualArgumentList (), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 236)) ;
  GGS_readSubscriptMap var_subcriptMap_9801 = extensionGetter_definition (var_expressionType_9607, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 238)).readProperty_readSubscriptMap () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_readSubscriptMap_2E_element var_aSubscript_9869 = var_subcriptMap_9801.readSubscript__3F_ (var_invocationSignature_9693, inCompiler COMMA_HERE).unwrappedValue () ;
    if (!var_subcriptMap_9801.readSubscript__3F_ (var_invocationSignature_9693, inCompiler COMMA_HERE).isValuated ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_9971 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      const GGS_subcriptReadAccessExpressionAST temp_3 = this ;
      UpEnumerator__5B_functionSignatureElement_5D_ enumerator_10081 (var_aSubscript_9869.readProperty_argumentTypeList ()) ;
      UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_10117 (temp_3.readProperty_actualArgumentList ()) ;
      while (enumerator_10081.hasCurrentObject () && enumerator_10117.hasCurrentObject ()) {
        GGS_semanticExpressionForGeneration var_expression_10480 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10117.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10081.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10480, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 243)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10081.current (HERE).readProperty_mFormalArgumentType (), var_expression_10480.readProperty_mResultType (), enumerator_10117.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_10480, inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 252)) ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_10081.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10117.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_string temp_5 ;
            const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_10081.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              temp_5 = enumerator_10081.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 260)) ;
            }else if (GalgasBool::boolFalse == test_6) {
              temp_5 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_10814 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 259)) ;
            GenericArray <FixItDescription> fixItArray7 ;
            appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, var_s_10814) ;
            inCompiler->emitSemanticError (enumerator_10117.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_10814, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)), fixItArray7  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 263)) ;
          }
        }
        var_semanticExpressionListForGeneration_9971.plusPlusAssignOperation (var_expression_10480  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 266)) ;
        enumerator_10081.gotoNextObject () ;
        enumerator_10117.gotoNextObject () ;
      }
      const GGS_subcriptReadAccessExpressionAST temp_8 = this ;
      outArgument_outExpression = GGS_subcriptReadAccessExpressionForGeneration::init_21__21__21__21__21_ (var_aSubscript_9869.readProperty_valueType (), temp_8.readProperty_endOfArgsLocation (), var_expression_9561, var_invocationSignature_9693, var_semanticExpressionListForGeneration_9971, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_subcriptReadAccessExpressionAST temp_9 = this ;
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_endOfArgsLocation (), GGS_string ("unknown subcript signature"), fixItArray10  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 277)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@subcriptReadAccessExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_subcriptReadAccessExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_subcriptReadAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 299)) ;
  GGS_string var_operand_12720 ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_expression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_12720, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 301)) ;
  GGS__5B_string_5D_ var_subcriptArgumentList_12777 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12830 (temp_2.readProperty_actualExpressionList ()) ;
  while (enumerator_12830.hasCurrentObject ()) {
    GGS_string var_actualArgOperand_13039 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12830.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_actualArgOperand_13039, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 311)) ;
    {
    var_subcriptArgumentList_12777.setter_append (var_actualArgOperand_13039, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 318)) ;
    }
    enumerator_12830.gotoNextObject () ;
  }
  outArgument_outCppExpression = var_operand_12720.add_operation (GGS_string (".readSubscript_"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 321)) ;
  const GGS_subcriptReadAccessExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssignOperation(temp_3.readProperty_subcriptInvocationName ().getter_identifierRepresentation (SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 322)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 322)) ;
  outArgument_outCppExpression.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 323)) ;
  UpEnumerator__5B_string_5D_ enumerator_13320 (var_subcriptArgumentList_12777) ;
  while (enumerator_13320.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_13320.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 325)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 325)) ;
    enumerator_13320.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 327)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" COMMA_HERE)"), inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 328)), inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 328)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_3190 ;
  const GGS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_3190, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 62)) ;
  GGS_unifiedTypeMapEntry var_type_3272 = var_expression_3190.readProperty_mResultType () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_literalBigIntExpressionForGeneration var_exp_3313 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_3190.ptr ())) ;
    if (nullptr == var_exp_3313.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outExpression = GGS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_3313.readProperty_mResultType (), var_exp_3313.readProperty_mLocation (), var_exp_3313.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas4", 76)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_3272, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 79)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas4", 79)) COMMA_SOURCE_FILE ("expression-tilde.galgas4", 79)).operator_not (SOURCE_FILE ("expression-tilde.galgas4", 79)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_tildeExpressionAST temp_3 = this ;
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GGS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_3272, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)).add_operation (GGS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 81)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas4", 80)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      const GGS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GGS_tildeExpressionForGeneration::init_21__21__21_ (var_type_3272, temp_5.readProperty_mOperatorLocation (), var_expression_3190, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@tildeExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                   GGS_stringset & ioArgument_ioInclusionSet,
                                                                   GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GGS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 114)) ;
  GGS_string var_operand_4968 ;
  const GGS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_4968, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 116)) ;
  const GGS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_4968.add_operation (GGS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas4", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 181)) ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 182)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_8997 ;
  const GGS_comparisonExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_8997, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 197)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_9342 ;
  const GGS_comparisonExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_8997.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_9342, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 207)) ;
  GGS_bool var_isEquatable_9388 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_equatable (SOURCE_FILE ("expression-comparison.galgas4", 217)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 217)) ;
  GGS_bool var_isComparable_9477 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_comparable (SOURCE_FILE ("expression-comparison.galgas4", 218)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 218)) ;
  GGS_bool var_isReferenceEquatable_9568 = extensionGetter_definition (var_leftExpression_8997.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_referenceEquatable (SOURCE_FILE ("expression-comparison.galgas4", 219)) COMMA_SOURCE_FILE ("expression-comparison.galgas4", 219)) ;
  GGS_bool var_operatorIsAvailable_9681 ;
  GGS_string var_operatorName_9715 ;
  const GGS_comparisonExpressionAST temp_2 = this ;
  switch (temp_2.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
    {
      var_operatorName_9715 = GGS_string ("==") ;
      var_operatorIsAvailable_9681 = var_isEquatable_9388 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
    {
      var_operatorName_9715 = GGS_string ("!=") ;
      var_operatorIsAvailable_9681 = var_isEquatable_9388 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_9715 = GGS_string ("<=") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_9715 = GGS_string ("<") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_9715 = GGS_string (">=") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_9715 = GGS_string (">") ;
      var_operatorIsAvailable_9681 = var_isComparable_9477 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_9715 = GGS_string ("===") ;
      var_operatorIsAvailable_9681 = var_isReferenceEquatable_9568 ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_9715 = GGS_string ("!==") ;
      var_operatorIsAvailable_9681 = var_isReferenceEquatable_9568 ;
    }
    break ;
  }
  {
  const GGS_comparisonExpressionAST temp_3 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (var_operatorIsAvailable_9681, var_operatorName_9715, temp_3.readProperty_mOperatorLocation (), var_leftExpression_8997, var_rightExpression_9342, inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 249)) ;
  }
  const GGS_comparisonExpressionAST temp_4 = this ;
  const GGS_comparisonExpressionAST temp_5 = this ;
  outArgument_outExpression = GGS_comparisonExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), var_leftExpression_8997, temp_5.readProperty_mComparison (), var_rightExpression_9342, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@comparisonExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_comparisonExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 285)) ;
  GGS_string var_leftTemporaryOperand_11941 ;
  const GGS_comparisonExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_11941, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 287)) ;
  GGS_string var_rightTemporaryOperand_12151 ;
  const GGS_comparisonExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_12151, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 295)) ;
  GGS_string var_operatorName_12211 ;
  const GGS_comparisonExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mComparison ().enumValue ()) {
  case GGS_comparison::Enumeration::invalid:
    break ;
  case GGS_comparison::Enumeration::enum_equal:
  case GGS_comparison::Enumeration::enum_sameInstance:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::equal") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_notEqual:
  case GGS_comparison::Enumeration::enum_differentInstances:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::notEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerOrEqual:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::lowerOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_lowerThan:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::lowerThan") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterOrEqual:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::greaterOrEqual") ;
    }
    break ;
  case GGS_comparison::Enumeration::enum_greaterThan:
    {
      var_operatorName_12211 = GGS_string ("ComparisonKind::greaterThan") ;
    }
    break ;
  }
  outArgument_outCppExpression = GGS_string ("GGS_bool (").add_operation (var_operatorName_12211, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_leftTemporaryOperand_11941, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (var_rightTemporaryOperand_12151, inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)).add_operation (GGS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-comparison.galgas4", 313)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                                        const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                        GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                        GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionAST temp_0 = this ;
  const GGS_literalDoubleExpressionAST temp_1 = this ;
  outArgument_outExpression = GGS_literalDoubleExpressionForGeneration::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mDoubleType (), temp_0.readProperty_mValue ().readProperty_location (), temp_1.readProperty_mValue ().readProperty_f_36__34_ (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalDoubleExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                           GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                           GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                           GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                           GGS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalDoubleExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_f_36__34_ (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_2546 (temp_0.readProperty_mExpressionList ()) ;
  while (enumerator_2546.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2546.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 53)) ;
    enumerator_2546.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionAST temp_0 = this ;
  GGS_lstring var_usefulnessName_3190 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 68)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3190 COMMA_SOURCE_FILE ("expression-function-call.galgas4", 69)) ;
  }
  GGS__5B_functionSignatureElement_5D_ var_functionSignature_3520 ;
  GGS_unifiedTypeMapEntry var_resultType_3571 ;
  GGS_bool var_isInternal_3600 ;
  const GGS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_3520, var_resultType_3571, var_isInternal_3600, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 71)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_isInternal_3600.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_functionCallExpressionAST temp_3 = this ;
      GGS_location var_procDeclarationLocation_3673 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 79)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_functionCallExpressionAST temp_5 = this ;
        test_4 = GGS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 80)).objectCompare (var_procDeclarationLocation_3673.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 80)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          const GGS_functionCallExpressionAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GGS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3673.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)).add_operation (GGS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 81)) ;
        }
      }
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_functionCallExpressionAST temp_9 = this ;
    test_8 = GGS_bool (ComparisonKind::notEqual, var_functionSignature_3520.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 85)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 85)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_functionCallExpressionAST temp_10 = this ;
      const GGS_functionCallExpressionAST temp_11 = this ;
      const GGS_functionCallExpressionAST temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GGS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (GGS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (var_functionSignature_3520.getter_count (SOURCE_FILE ("expression-function-call.galgas4", 87)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (GGS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 87)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas4", 88)).getter_string (SOURCE_FILE ("expression-function-call.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 88)).add_operation (GGS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 88)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 86)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GGS__5B_semanticExpressionForGeneration_5D_ var_semanticExpressionListForGeneration_4407 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
    const GGS_functionCallExpressionAST temp_14 = this ;
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_4506 (var_functionSignature_3520) ;
    UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_4543 (temp_14.readProperty_mExpressionList ()) ;
    while (enumerator_4506.hasCurrentObject () && enumerator_4543.hasCurrentObject ()) {
      GGS_semanticExpressionForGeneration var_expression_4903 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4543.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4506.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4903, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 94)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_4506.current (HERE).readProperty_mFormalArgumentType (), var_expression_4903.readProperty_mResultType (), enumerator_4543.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_4903, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 103)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_4543.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = enumerator_4506.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 111)) ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5237 = GGS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 110)) ;
          GenericArray <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, EnumFixItKind::fixItReplace, var_s_5237) ;
          inCompiler->emitSemanticError (enumerator_4543.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5237, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 114)) ;
        }
      }
      var_semanticExpressionListForGeneration_4407.plusPlusAssignOperation (var_expression_4903  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 117)) ;
      enumerator_4506.gotoNextObject () ;
      enumerator_4543.gotoNextObject () ;
    }
    const GGS_functionCallExpressionAST temp_19 = this ;
    const GGS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GGS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_3571, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_4407, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                          GGS_stringset & ioArgument_ioInclusionSet,
                                                                          GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GGS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 148)) ;
  const GGS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 150)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 150))  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 150)) ;
  GGS__5B_string_5D_ var_parameterList_6959 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_functionCallExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_7008 (temp_2.readProperty_mExpressions ()) ;
  while (enumerator_7008.hasCurrentObject ()) {
    GGS_string var_parameter_7154 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_7008.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_7154, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 154)) ;
    var_parameterList_6959.plusPlusAssignOperation (var_parameter_7154  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 155)) ;
    enumerator_7008.gotoNextObject () ;
  }
  const GGS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GGS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas4", 157)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 157)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 157)) ;
  UpEnumerator__5B_string_5D_ enumerator_7312 (var_parameterList_6959) ;
  while (enumerator_7312.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_7312.current (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 159)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 159)) ;
    enumerator_7312.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-function-call.galgas4", 161)) ;
  }
  outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 162)) ;
  const GGS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas4", 163)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 103)) ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 104)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_5550 ;
  const GGS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5550, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 118)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_5891 ;
  const GGS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5550.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5891, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 128)) ;
  {
  const GGS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5550.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 139)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 139)) COMMA_SOURCE_FILE ("expression-and.galgas4", 139)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5550, var_rightExpression_5891, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 138)) ;
  }
  const GGS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5550.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5550, GGS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas4", 150)), var_rightExpression_5891, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 160)) ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_leftExpression_7569 ;
  const GGS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7569, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 175)) ;
  GGS_semanticExpressionForGeneration var_rightExpression_7910 ;
  const GGS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7569.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7910, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 185)) ;
  {
  const GGS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7569.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 196)).readProperty_features ().getter_contains (GGS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("expression-and.galgas4", 196)) COMMA_SOURCE_FILE ("expression-and.galgas4", 196)), GGS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7569, var_rightExpression_7910, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 195)) ;
  }
  const GGS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GGS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7569.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7569, var_rightExpression_7910, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@andShortExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                      GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GGS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 227)) ;
  GGS_string var_leftTemporaryOperand_9389 ;
  const GGS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9389, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 229)) ;
  GGS_string var_testVar_9446 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas4", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 237)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_bool ").add_operation (var_testVar_9446, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (var_leftTemporaryOperand_9389, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 238)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_9446, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)).add_operation (GGS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 241)) ;
  }
  GGS_string var_rightTemporaryOperand_9928 ;
  const GGS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9928, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 242)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_testVar_9446.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (var_rightTemporaryOperand_9928, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas4", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 251)) ;
  outArgument_outCppExpression = var_testVar_9446 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 115)) ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 116)) ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 117)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionAST analyzeSemanticExpression'
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
  GGS_semanticExpressionForGeneration var_if_5F_expression_5384 ;
  const GGS_ifExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mIfExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_if_5F_expression_5384, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 132)) ;
  GGS_semanticExpressionForGeneration var_then_5F_expression_5675 ;
  const GGS_ifExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mThenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_then_5F_expression_5675, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 142)) ;
  GGS_semanticExpressionForGeneration var_else_5F_expression_5968 ;
  const GGS_ifExpressionAST temp_2 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_2.readProperty_mElseExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_else_5F_expression_5968, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 152)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_if_5F_expression_5384.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 162)).readProperty_typeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ifExpressionAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mOperatorLocation (), GGS_string ("the test expression type is '@").add_operation (extensionGetter_definition (var_if_5F_expression_5384.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)).add_operation (GGS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 164)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 163)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::notEqual, var_then_5F_expression_5675.readProperty_mResultType ().objectCompare (var_else_5F_expression_5968.readProperty_mResultType ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_ifExpressionAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mOperatorLocation (), GGS_string ("operand expression types are '@").add_operation (extensionGetter_definition (var_then_5F_expression_5675.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (extensionGetter_definition (var_else_5F_expression_5968.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)).add_operation (GGS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 168)), fixItArray8  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 167)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      const GGS_ifExpressionAST temp_9 = this ;
      outArgument_outExpression = GGS_ifExpressionForGeneration::init_21__21__21__21__21_ (var_then_5F_expression_5675.readProperty_mResultType (), temp_9.readProperty_mOperatorLocation (), var_if_5F_expression_5384, var_then_5F_expression_5675, var_else_5F_expression_5968, inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ifExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                GGS_string & outArgument_outCppExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_ifExpression_7834 ;
  const GGS_ifExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mIfExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression_7834, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 202)) ;
  outArgument_outCppExpression = GGS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 210)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 210)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 211)) ;
  const GGS_ifExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mThenExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 212)) ;
  GGS_string var_testVar_8096 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-primary-if.galgas4", 213)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 213)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 214)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_8096, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (var_ifExpression_7834, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 215)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (var_testVar_8096, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 216)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 218)) ;
  }
  GGS_string var_thenExpression_8573 ;
  const GGS_ifExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mThenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression_8573, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 219)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (var_thenExpression_8573, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 226)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else if (GalgasBool::boolFalse == ").add_operation (var_testVar_8096, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 230)) ;
  }
  GGS_string var_elseExpression_9008 ;
  const GGS_ifExpressionForGeneration temp_3 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_3.readProperty_mElseExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression_9008, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 231)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outCppExpression.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (var_elseExpression_9008, inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_u_33__32_ (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 240)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::method_analyzeSemanticExpression (const GGS_lstring /* constinArgument__5F_inUsefulnessCallerEntityName */,
                                                              GGS_usefulEntitiesGraph & /* ioArgument__5F_ioUsefulEntitiesGraph */,
                                                              const GGS_unifiedTypeMapEntry constinArgument_inType,
                                                              const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                              GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                              GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                              GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inType.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas4", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nilExpressionAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 73)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_unwrappedType_3413 = extensionGetter_definition (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 75)).readProperty_unwrappedType () ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_unwrappedType_3413.getter_isNull (SOURCE_FILE ("expression-primary-nil.galgas4", 76)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_nilExpressionAST temp_4 = this ;
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mLocation (), GGS_string ("the inferred type @").add_operation (extensionGetter_typeName (var_unwrappedType_3413, inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)).add_operation (GGS_string (" is not an optional type"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)), fixItArray5  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 77)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_nilExpressionAST temp_6 = this ;
      outArgument_outExpression = GGS_nilExpressionForGeneration::init_21__21_ (constinArgument_inType, temp_6.readProperty_mLocation (), inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@nilExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionForGeneration::method_generateExpression (GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                 GGS_stringset & /* ioArgument__5F_ioInclusionSet */,
                                                                 GGS_u_33__32_ & /* ioArgument__5F_ioTemporaryVariableIndex */,
                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                 GGS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nilExpressionForGeneration temp_0 = this ;
  outArgument_outCppExpression = GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)).add_operation (GGS_string ("::init_nil ()"), inCompiler COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 30)) ;
  const GGS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
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
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 46)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_2972 ;
  const GGS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 52)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_2972, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 49)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3026 = var_receiverExpression_2972.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_getterCallExpressionAST temp_5 = this ;
    const GGS_getterMap_2E_element var_aGetter_3138 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubscript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_getterCallExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ()) ;
          inCompiler->emitSemanticError (temp_7.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray8  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 62)) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionAST temp_10 = this ;
        GGS_bool test_11 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)).readProperty_propertyMap ().getter_contains (temp_10.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)) ;
        if (GalgasBool::boolTrue == test_11.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_12 = this ;
          test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 67)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) ;
        }
        test_9 = test_11.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray14  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 68)) ;
        }
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_getterCallExpressionAST temp_16 = this ;
        test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)).objectCompare (var_aGetter_3138.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_getterCallExpressionAST temp_17 = this ;
          const GGS_getterCallExpressionAST temp_18 = this ;
          const GGS_getterCallExpressionAST temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_18.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (var_aGetter_3138.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 74)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 73)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 75)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 74)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 75)), fixItArray20  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 72)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_4120 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        const GGS_getterCallExpressionAST temp_21 = this ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_4187 (temp_21.readProperty_mActualArgumentList ()) ;
        UpEnumerator__5B_functionSignatureElement_5D_ enumerator_4226 (var_aGetter_3138.readProperty_mArgumentTypeList ()) ;
        while (enumerator_4187.hasCurrentObject () && enumerator_4226.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_exp_4599 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4187.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4226.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_4599, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 79)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = GGS_bool (ComparisonKind::notEqual, enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_4187.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GGS_string temp_23 ;
              const GalgasBool test_24 = GGS_bool (ComparisonKind::notEqual, enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                temp_23 = enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              }else if (GalgasBool::boolFalse == test_24) {
                temp_23 = GGS_string::makeEmptyString () ;
              }
              GGS_string var_s_4720 = GGS_string ("!").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              GenericArray <FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, EnumFixItKind::fixItReplace, var_s_4720) ;
              inCompiler->emitSemanticError (enumerator_4187.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_4720, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)), fixItArray25  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_4226.current (HERE).readProperty_mFormalArgumentType (), var_exp_4599.readProperty_mResultType (), enumerator_4187.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_4599, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 92)) ;
          }
          var_constructorEffectiveParameterList_4120.plusPlusAssignOperation (var_exp_4599  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 93)) ;
          enumerator_4187.gotoNextObject () ;
          enumerator_4226.gotoNextObject () ;
        }
        const GGS_getterCallExpressionAST temp_26 = this ;
        GGS_string temp_27 ;
        const GalgasBool test_28 = GGS_bool (ComparisonKind::equal, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          const GGS_getterCallExpressionAST temp_29 = this ;
          temp_27 = temp_29.readProperty_mGetterName ().readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_28) {
          temp_27 = var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName () ;
        }
        outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_aGetter_3138.readProperty_mReturnedType (), temp_26.readProperty_mGetterName ().readProperty_location (), var_aGetter_3138.readProperty_mKind (), var_receiverExpression_2972, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), temp_27, var_constructorEffectiveParameterList_4120, var_aGetter_3138.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          const GGS_getterCallExpressionAST temp_31 = this ;
          test_30 = GGS_bool (ComparisonKind::equal, temp_31.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 105)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            const GGS_getterCallExpressionAST temp_32 = this ;
            GenericArray <FixItDescription> fixItArray33 ;
            fixItArray33.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_32.readProperty_mExpressionLocation (), GGS_string ("func with no argument, remove parenthesis"), fixItArray33  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 106)) ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      const GGS_getterCallExpressionAST temp_35 = this ;
      test_34 = GGS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 110)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        const GGS_getterCallExpressionAST temp_36 = this ;
        test_34 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).readProperty_propertyMap ().getter_contains (temp_36.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).boolEnum () ;
        if (GalgasBool::boolTrue == test_34) {
          const GGS_getterCallExpressionAST temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 111)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      GGS_u_33__32_ var_matchingReaderCount_6157 = GGS_u_33__32_ (uint32_t (0U)) ;
      GalgasBool test_39 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_39) {
        test_39 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 115)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas4", 115)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_39) {
          GGS__5B_functionSignatureElement_5D_ var_getterFormalArgumentTypeList_6283 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
          GGS_bool var_hasCompilerArgument_6330 = GGS_bool (true) ;
          GGS_unifiedTypeMapEntry var_returnedType_6369 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 118)) ;
          GGS_methodKind var_kind_6422 = GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas4", 119)) ;
          GGS__5B_string_5D_ var_fieldList_6482 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
          GGS_string var_obsoletedByGetter_6510 = GGS_string::makeEmptyString () ;
          UpEnumerator__5B_typedProperty_5D_ enumerator_6581 (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 122)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_6581.hasCurrentObject ()) {
            GGS_unifiedTypeMapEntry var_propertyType_6623 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (extensionGetter_definition (enumerator_6581.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)).readProperty_typeName ().readProperty_string (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)) ;
            GGS_getterMap var_aMap_6740 = extensionGetter_definition (var_propertyType_6623, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 124)).readProperty_getterMap () ;
            GalgasBool test_40 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_40) {
              const GGS_getterCallExpressionAST temp_41 = this ;
              const GGS_getterMap_2E_element var_entry_6798 = var_aMap_6740.readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_6740.readSubscript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_40 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_40) {
                GalgasBool test_42 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_42) {
                  test_42 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (enumerator_6581.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 126)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_6581.current (HERE).readProperty_name ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_42) {
                    var_matchingReaderCount_6157.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 127)) ;
                    var_getterFormalArgumentTypeList_6283 = var_entry_6798.readProperty_mArgumentTypeList () ;
                    var_hasCompilerArgument_6330 = var_entry_6798.readProperty_mHasCompilerArgument () ;
                    var_returnedType_6369 = var_entry_6798.readProperty_mReturnedType () ;
                    const GGS_getterCallExpressionAST temp_43 = this ;
                    var_receiverExpression_2972 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_6369, temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_2972, enumerator_6581.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE) ;
                    var_kind_6422 = var_entry_6798.readProperty_mKind () ;
                    var_obsoletedByGetter_6510 = var_entry_6798.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
              }
            }
            enumerator_6581.gotoNextObject () ;
          }
          GalgasBool test_44 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_44) {
            test_44 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_6157.objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_44) {
              const GGS_getterCallExpressionAST temp_45 = this ;
              const GGS_getterCallExpressionAST temp_46 = this ;
              GenericArray <FixItDescription> fixItArray47 ;
              inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (temp_46.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)), fixItArray47  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 143)) ;
              var_getterFormalArgumentTypeList_6283.drop () ; // Release error dropped variable
              var_hasCompilerArgument_6330.drop () ; // Release error dropped variable
              var_returnedType_6369.drop () ; // Release error dropped variable
              var_kind_6422.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_44) {
            GalgasBool test_48 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_48) {
              test_48 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_6157.objectCompare (GGS_u_33__32_ (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_48) {
                GGS_string var_s_7953 = GGS_string::makeEmptyString () ;
                UpEnumerator__5B_string_5D_ enumerator_7983 (var_fieldList_6482) ;
                while (enumerator_7983.hasCurrentObject ()) {
                  var_s_7953.plusAssignOperation(enumerator_7983.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 150)) ;
                  enumerator_7983.gotoNextObject () ;
                  if (enumerator_7983.hasCurrentObject ()) {
                    var_s_7953.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 151)) ;
                  }
                }
                const GGS_getterCallExpressionAST temp_49 = this ;
                const GGS_getterCallExpressionAST temp_50 = this ;
                GenericArray <FixItDescription> fixItArray51 ;
                inCompiler->emitSemanticError (temp_49.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (temp_50.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (var_s_7953, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)), fixItArray51  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 153)) ;
                var_getterFormalArgumentTypeList_6283.drop () ; // Release error dropped variable
                var_hasCompilerArgument_6330.drop () ; // Release error dropped variable
                var_returnedType_6369.drop () ; // Release error dropped variable
                var_kind_6422.drop () ; // Release error dropped variable
              }
            }
          }
          GalgasBool test_52 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_52) {
            const GGS_getterCallExpressionAST temp_53 = this ;
            test_52 = GGS_bool (ComparisonKind::notEqual, temp_53.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)).objectCompare (var_getterFormalArgumentTypeList_6283.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_52) {
              const GGS_getterCallExpressionAST temp_54 = this ;
              const GGS_getterCallExpressionAST temp_55 = this ;
              const GGS_getterCallExpressionAST temp_56 = this ;
              GenericArray <FixItDescription> fixItArray57 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (var_getterFormalArgumentTypeList_6283.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 162)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 162)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (temp_56.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 163)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 163)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 163)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 160)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_52) {
            GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_8943 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
            const GGS_getterCallExpressionAST temp_58 = this ;
            UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_9012 (temp_58.readProperty_mActualArgumentList ()) ;
            UpEnumerator__5B_functionSignatureElement_5D_ enumerator_9043 (var_getterFormalArgumentTypeList_6283) ;
            while (enumerator_9012.hasCurrentObject () && enumerator_9043.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_exp_9443 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_9012.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_9043.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9443, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 167)) ;
              GalgasBool test_59 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_59) {
                test_59 = GGS_bool (ComparisonKind::notEqual, enumerator_9043.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_9012.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_59) {
                  GGS_string temp_60 ;
                  const GalgasBool test_61 = GGS_bool (ComparisonKind::notEqual, enumerator_9043.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_61) {
                    temp_60 = enumerator_9043.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  }else if (GalgasBool::boolFalse == test_61) {
                    temp_60 = GGS_string::makeEmptyString () ;
                  }
                  GGS_string var_s_9570 = GGS_string ("!").add_operation (temp_60, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  GenericArray <FixItDescription> fixItArray62 ;
                  appendFixItActions (fixItArray62, EnumFixItKind::fixItReplace, var_s_9570) ;
                  inCompiler->emitSemanticError (enumerator_9012.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9570, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)), fixItArray62  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_9043.current (HERE).readProperty_mFormalArgumentType (), var_exp_9443.readProperty_mResultType (), enumerator_9012.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9443, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 180)) ;
              }
              var_constructorEffectiveParameterList_8943.plusPlusAssignOperation (var_exp_9443  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 181)) ;
              enumerator_9012.gotoNextObject () ;
              enumerator_9043.gotoNextObject () ;
            }
            GalgasBool test_63 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_63) {
              test_63 = GGS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_6510.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_63) {
                const GGS_getterCallExpressionAST temp_64 = this ;
                GenericArray <FixItDescription> fixItArray65 ;
                appendFixItActions (fixItArray65, EnumFixItKind::fixItReplace, var_obsoletedByGetter_6510) ;
                inCompiler->emitSemanticError (temp_64.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray65  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 184)) ;
              }
            }
            const GGS_getterCallExpressionAST temp_66 = this ;
            GGS_string temp_67 ;
            const GalgasBool test_68 = GGS_bool (ComparisonKind::equal, var_obsoletedByGetter_6510.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_68) {
              const GGS_getterCallExpressionAST temp_69 = this ;
              temp_67 = temp_69.readProperty_mGetterName ().readProperty_string () ;
            }else if (GalgasBool::boolFalse == test_68) {
              temp_67 = var_obsoletedByGetter_6510 ;
            }
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_6369, temp_66.readProperty_mGetterName ().readProperty_location (), var_kind_6422, var_receiverExpression_2972, var_fieldList_6482, temp_67, var_constructorEffectiveParameterList_8943, var_hasCompilerArgument_6330, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_39) {
        GalgasBool test_70 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_70) {
          test_70 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 197)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 197)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_70) {
            const GGS_getterCallExpressionAST temp_71 = this ;
            GenericArray <FixItDescription> fixItArray72 ;
            inCompiler->emitSemanticError (temp_71.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 198)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_70) {
          const GGS_getterCallExpressionAST temp_73 = this ;
          const GGS_getterCallExpressionAST temp_74 = this ;
          GenericArray <FixItDescription> fixItArray75 ;
          appendFixItActions (fixItArray75, EnumFixItKind::fixItReplace, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205))) ;
          inCompiler->emitSemanticError (temp_73.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (temp_74.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' func "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 202)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_u_33__32_ & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 236)) ;
  GGS_string var_receiverCppName_12351 ;
  const GGS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_12351, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 238)) ;
  GGS__5B_string_5D_ var_getterArgumentCppNameList_12415 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_getterCallExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12474 (temp_2.readProperty_mActualArgumentList ()) ;
  while (enumerator_12474.hasCurrentObject ()) {
    GGS_string var_argumentCppName_12674 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12474.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_12674, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 248)) ;
    var_getterArgumentCppNameList_12415.plusPlusAssignOperation (var_argumentCppName_12674  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 255)) ;
    enumerator_12474.gotoNextObject () ;
  }
  const GGS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_getterCallExpressionForGeneration temp_4 = this ;
      GGS_unifiedTypeMapEntry var_baseType_12870 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_12870, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 261)) ;
      GGS_bool var_searching_12985 = GGS_bool (true) ;
      if (GGS_u_33__32_::class_func_max (SOURCE_FILE ("expression-getter-call.galgas4", 263)).isValid ()) {
        uint32_t variant_13008 = GGS_u_33__32_::class_func_max (SOURCE_FILE ("expression-getter-call.galgas4", 263)).uintValue () ;
        bool loop_13008 = true ;
        while (loop_13008) {
          loop_13008 = var_searching_12985.isValid () ;
          if (loop_13008) {
            loop_13008 = var_searching_12985.boolValue () ;
          }
          if (loop_13008 && (0 == variant_13008)) {
            loop_13008 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas4", 263)) ;
          }
          if (loop_13008) {
            variant_13008 -= 1 ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_12870, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 264)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas4", 264)).operator_not (SOURCE_FILE ("expression-getter-call.galgas4", 264)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  const GGS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_12870, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).readProperty_getterMap ().getter_contains (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    var_baseType_12870 = extensionGetter_definition (var_baseType_12870, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 266)).readProperty_superType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  var_searching_12985 = GGS_bool (false) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              var_searching_12985 = GGS_bool (false) ;
            }
          }
        }
      }
      const GGS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (var_baseType_12870, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 274)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 274)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274))  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_12351 COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 275)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 276)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas4", 276)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionForGeneration temp_11 = this ;
          const GGS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GGS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 277)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 277)).add_operation (GGS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 277)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (var_receiverCppName_12351, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        const GGS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 280)) ;
        const GGS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GGS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 281)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (var_receiverCppName_12351, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_12351 ;
      const GGS_getterCallExpressionForGeneration temp_15 = this ;
      UpEnumerator__5B_string_5D_ enumerator_14206 (temp_15.readProperty_mFieldList ()) ;
      while (enumerator_14206.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssignOperation(GGS_string (".readProperty_").add_operation (enumerator_14206.current (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)) ;
        enumerator_14206.gotoNextObject () ;
      }
      const GGS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 288)) ;
      const GGS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 289)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)) ;
    }
    break ;
  }
  UpEnumerator__5B_string_5D_ enumerator_14490 (var_getterArgumentCppNameList_12415) ;
  while (enumerator_14490.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_14490.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 292)) ;
    enumerator_14490.gotoNextObject () ;
    if (enumerator_14490.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 293)) ;
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_12415.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 295)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 297)) ;
          }
          outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 298)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 301)) ;
        }
        outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 304)) ;
    }
  }
  const GGS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (GGS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GGS_lexicalRoutineMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_lexicalRoutineFormalArgumentAST_5D_ var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)), GGS_string ("ioASCIICharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 50)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 51)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 53)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 52)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)), GGS_string ("ioASCIICharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 63)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 64)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 66)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 65)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 76)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 75)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("prependCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 86)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 85)) ;
  }
  {
  GGS__5B_lexicalRoutineFormalArgumentAST_5D_ temp_0 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)) ;
  temp_0.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("resetString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 93)), inCompiler COMMA_HERE), temp_0, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 92)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)), GGS_string ("ioDouble"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 103)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertStringToDouble"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 105)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 104)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)), GGS_string ("ioCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 116)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 115)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)), GGS_string ("ioNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 125)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 127)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 126)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)), GGS_string ("ioNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 136)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 138)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 137)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 148)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUIntToSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 150)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 149)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 160)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUInt64ToSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 162)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 161)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 172)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 173)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 175)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 174)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 185)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 186)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 188)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 187)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)) ;
  {
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 200)) ;
  temp_1.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 200)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDecimalDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 198)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, temp_1, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 197)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)), GGS_string ("inBinaryDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)) ;
  {
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 210)) ;
  temp_2.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 210)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinaryDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 208)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, temp_2, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 207)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)) ;
  {
  GGS__5B_string_5D_ temp_3 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 220)) ;
  temp_3.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 220)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 218)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, temp_3, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 217)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)) ;
  {
  GGS__5B_string_5D_ temp_4 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 230)) ;
  temp_4.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 230)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 228)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, temp_4, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 227)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 237)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 236)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)) ;
  {
  GGS__5B_string_5D_ temp_5 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 249)) ;
  temp_5.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 249)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertBinaryStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 247)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 246)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)) ;
  {
  GGS__5B_string_5D_ temp_6 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 259)) ;
  temp_6.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 259)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 257)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, temp_6, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 256)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 267)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 268)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 270)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 269)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 280)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 281)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 283)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 282)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 293)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 294)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 296)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 295)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 306)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 307)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 309)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 308)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)) ;
  {
  GGS__5B_string_5D_ temp_7 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 319)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, temp_7, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 318)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 329)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 330)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 332)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 331)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 342)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 343)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 345)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 344)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 355)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 356)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 358)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 357)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 368)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 369)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 371)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 370)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 381)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 382)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 384)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 383)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 394)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 396)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 395)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 406)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 408)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 407)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 418)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 419)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 421)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 420)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 431)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 432)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 434)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 433)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 444)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 445)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 447)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 446)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 457)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 458)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 460)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 459)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)), GGS_string ("ioUnicodeCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 470)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUnsignedNumberToUnicodeChar"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 472)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 471)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)), GGS_string ("ioUnicodeCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)) ;
  var_errorMessageList_2310.plusPlusAssignOperation (GGS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 482)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHTMLSequenceToUnicodeCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 484)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 483)) ;
  }
  var_lexicalRoutineFormalArgumentList_2255 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2310 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)), GGS_string ("inCodePointString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)) ;
  var_lexicalRoutineFormalArgumentList_2255.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("codePointToUnicode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 495)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2255, var_errorMessageList_2310, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 494)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (GGS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GGS_lexicalFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_lexicalFunctionFormalArgumentAST_5D_ var_lexicalTypeList_22499 = GGS__5B_lexicalFunctionFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22499.plusPlusAssignOperation (GGS_lexicalFunctionFormalArgumentAST::init_21__21_ (GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 510)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 510)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("toLower"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 512)), inCompiler COMMA_HERE), var_lexicalTypeList_22499, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 514)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 511)) ;
  }
  var_lexicalTypeList_22499 = GGS__5B_lexicalFunctionFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22499.plusPlusAssignOperation (GGS_lexicalFunctionFormalArgumentAST::init_21__21_ (GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 520)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 520)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("toUpper"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 522)), inCompiler COMMA_HERE), var_lexicalTypeList_22499, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 524)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 521)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineMap var_lexicalRoutineMap_23447 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_23447, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 536)) ;
  }
  GGS_string var_s_23546 = GGS_string::makeEmptyString () ;
  var_s_23546.plusAssignOperation(GGS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 539)) ;
  UpEnumerator_lexicalRoutineMap enumerator_23649 (var_lexicalRoutineMap_23447) ;
  while (enumerator_23649.hasCurrentObject ()) {
    var_s_23546.plusAssignOperation(enumerator_23649.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 541)) ;
    UpEnumerator__5B_lexicalRoutineFormalArgumentAST_5D_ enumerator_23742 (enumerator_23649.current (HERE).readProperty_mLexicalRoutineFormalArgumentList ()) ;
    while (enumerator_23742.hasCurrentObject ()) {
      var_s_23546.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23742.current (HERE).readProperty_mLexicalFormalArgumentMode (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (GGS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23742.current (HERE).readProperty_mLexicalFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (enumerator_23742.current (HERE).readProperty_mArgumentNameForComment (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)) ;
      enumerator_23742.gotoNextObject () ;
    }
    UpEnumerator__5B_string_5D_ enumerator_24002 (enumerator_23649.current (HERE).readProperty_mErrorMessageList ()) ;
    const bool bool_0 = true ;
    if (enumerator_24002.hasCurrentObject () && bool_0) {
      var_s_23546.plusAssignOperation(GGS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 546)) ;
      while (enumerator_24002.hasCurrentObject () && bool_0) {
        var_s_23546.plusAssignOperation(GGS_string (" ").add_operation (enumerator_24002.current (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 547)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 547)) ;
        enumerator_24002.gotoNextObject () ;
        if (enumerator_24002.hasCurrentObject () && bool_0) {
          var_s_23546.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 548)) ;
        }
      }
    }
    var_s_23546.plusAssignOperation(GGS_string (" ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 550)) ;
    enumerator_23649.gotoNextObject () ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_24222 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_24222, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 553)) ;
  }
  var_s_23546.plusAssignOperation(GGS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 555)) ;
  UpEnumerator_lexicalFunctionMap enumerator_24407 (var_lexicalFunctionMap_24222) ;
  while (enumerator_24407.hasCurrentObject ()) {
    var_s_23546.plusAssignOperation(enumerator_24407.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 557)) ;
    UpEnumerator__5B_lexicalFunctionFormalArgumentAST_5D_ enumerator_24505 (enumerator_24407.current (HERE).readProperty_mLexicalTypeList ()) ;
    while (enumerator_24505.hasCurrentObject ()) {
      var_s_23546.plusAssignOperation(GGS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24505.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)).add_operation (enumerator_24505.current (HERE).readProperty_mArgumentNameForComment (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)) ;
      enumerator_24505.gotoNextObject () ;
    }
    var_s_23546.plusAssignOperation(GGS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24407.current (HERE).readProperty_mReturnedLexicalType (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_24407.current (HERE).readProperty_mReplacementFunctionName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_s_23546.plusAssignOperation(GGS_string ("Note: the '").add_operation (enumerator_24407.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)).add_operation (GGS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)).add_operation (enumerator_24407.current (HERE).readProperty_mReplacementFunctionName (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)).add_operation (GGS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)) ;
      }
    }
    var_s_23546.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 565)) ;
    enumerator_24407.gotoNextObject () ;
  }
  var_s_23546.plusAssignOperation(GGS_string ("************************************************************"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 568)) ;
  {
  routine_println_3F_ (var_s_23546, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 569)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GGS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapper var_fw_1670 = GGS_libpmFileWrapper::class_func_contents (SOURCE_FILE ("libpmHandling.galgas4", 37)) ;
  UpEnumerator__5B_string_5D_ enumerator_1748 (var_fw_1670.getter_allDirectoryPaths (SOURCE_FILE ("libpmHandling.galgas4", 39))) ;
  while (enumerator_1748.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1785 = constinArgument_inLIBPMPath.add_operation (enumerator_1748.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 40)) ;
    var_actualDirectory_1785.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 41)) ;
    enumerator_1748.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1907 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_1948 (var_fw_1670.getter_allTextFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 45))) ;
  while (enumerator_1948.hasCurrentObject ()) {
    GGS_string var_contents_1976 = var_fw_1670.getter_textFileContentsAtPath (enumerator_1948.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 46)) ;
    GGS_string var_actualFilePath_2029 = constinArgument_inLIBPMPath.add_operation (enumerator_1948.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 47)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_actualFilePath_2029.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas4", 48)).objectCompare (GGS_string ("py"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool joker_2190 ; // Joker input parameter
        var_contents_1976.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_2029, joker_2190, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 49)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool joker_2268 ; // Joker input parameter
      var_contents_1976.method_writeToFileWhenDifferentContents (var_actualFilePath_2029, joker_2268, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 51)) ;
    }
    var_allNeededFileSet_1907.plusPlusAssignOperation (enumerator_1948.current (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 53)) ;
    enumerator_1948.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_2361 (var_fw_1670.getter_allBinaryFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 56))) ;
  while (enumerator_2361.hasCurrentObject ()) {
    GGS_data var_contents_2391 = var_fw_1670.getter_binaryFileContentsAtPath (enumerator_2361.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 57)) ;
    GGS_string var_actualFilePath_2446 = constinArgument_inLIBPMPath.add_operation (enumerator_2361.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58)) ;
    GGS_bool joker_2546 ; // Joker input parameter
    var_contents_2391.method_writeToFileWhenDifferentContents (var_actualFilePath_2446, joker_2546, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 59)) ;
    var_allNeededFileSet_1907.plusPlusAssignOperation (enumerator_2361.current (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 60)) ;
    enumerator_2361.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2631 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_2699 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas4", 64))) ;
  while (enumerator_2699.hasCurrentObject ()) {
    var_allActualFileSet_2631.plusPlusAssignOperation (GGS_string ("/").add_operation (enumerator_2699.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 65))  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 65)) ;
    enumerator_2699.gotoNextObject () ;
  }
  GGS_stringset var_uselessFileSet_2753 = var_allActualFileSet_2631.subtract_operation (var_allNeededFileSet_1907, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 67)) ;
  UpEnumerator_stringset enumerator_2813 (var_uselessFileSet_2753) ;
  while (enumerator_2813.hasCurrentObject ()) {
    {
    GGS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2813.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 69)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 69)) ;
    }
    enumerator_2813.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 129)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_5434 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 142)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5434, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 143)) ;
  }
  const GGS_templateLexiqueComponentAST temp_3 = this ;
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  GGS_lstring var_superKey_5588 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 144)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5434, var_superKey_5588 COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 145)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                 const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                 const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                 const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                 const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_superLexiqueIsTemplate_6607 ;
  GGS_terminalMap var_terminalMap_6641 ;
  GGS__5B_indexingAST_5D_ var_indexingListAST_6664 ;
  GGS__5B_terminalDeclarationAST_5D_ var_terminalListAST_6691 ;
  GGS__5B_lexicalAttributeAST_5D_ var_lexicalAttributeListAST_6718 ;
  GGS__5B_lexicalListDeclarationAST_5D_ var_lexicalListDeclarationListAST_6786 ;
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_6607, var_terminalMap_6641, var_indexingListAST_6664, var_terminalListAST_6691, var_lexicalAttributeListAST_6718, var_lexicalListDeclarationListAST_6786, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 159)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_6607.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLexiqueComponentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GGS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 170)) ;
    }
  }
  {
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GGS_bool (true), var_terminalMap_6641, var_indexingListAST_6664, var_terminalListAST_6691, var_lexicalAttributeListAST_6718, var_lexicalListDeclarationListAST_6786, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 173)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_8011 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 196)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8011, var_nameForUsefulness_8011, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 197)) ;
  }
  GGS__5B_terminalDeclarationAST_5D_ var_terminalListAST_8453 ;
  GGS__5B_lexicalAttributeAST_5D_ var_lexicalAttributeListAST_8480 ;
  GGS__5B_lexicalListDeclarationAST_5D_ var_lexicalListDeclarationListAST_8548 ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_bool joker_8350 ; // Joker input parameter
  GGS_terminalMap joker_8388 ; // Joker input parameter
  GGS__5B_indexingAST_5D_ joker_8415 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_8350, joker_8388, joker_8415, var_terminalListAST_8453, var_lexicalAttributeListAST_8480, var_lexicalListDeclarationListAST_8548, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 199)) ;
  GGS_lexicalTypeMap var_lexicalTypeMap_8677 = function_gLexicalTypeMap (inCompiler COMMA_HERE) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_8808 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_8808, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 212)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_8927 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_8927, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 214)) ;
  }
  GGS_stringset var_unicodeTestFunctions_9054 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_9054, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 216)) ;
  }
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_9147 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_8808, var_lexicalFunctionMap_8927, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_9054, inCompiler COMMA_HERE) ;
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_8677, var_lexicalAttributeListAST_8480, var_lexiqueAnalysisContext_9147.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 232)) ;
  }
  GGS__5B_terminalAST_5D_ var_terminalList_9750 = GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_terminalDeclarationAST_5D_ enumerator_9787 (var_terminalListAST_8453) ;
  while (enumerator_9787.hasCurrentObject ()) {
    GGS_u_33__32_ var_terminalStyleIndex_9819 = GGS_u_33__32_ (uint32_t (0U)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_9787.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 241)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_lstring joker_9968 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_9787.current (HERE).readProperty_mStyle (), joker_9968, var_terminalStyleIndex_9819, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 242)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_10009 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_10081 (enumerator_9787.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_10081.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_10195 ;
      var_lexiqueAnalysisContext_9147.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_10081.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_10195, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 246)) ;
      var_argumentTypeList_10009.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_10081.current (HERE).readProperty_mFormalSelector (), enumerator_10081.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_10195, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 247)) ;
      enumerator_10081.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_9147.mProperty_mTerminalMap.setter_insertKey (enumerator_9787.current (HERE).readProperty_mName (), var_argumentTypeList_10009, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 249)) ;
    }
    var_terminalList_9750.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_9787.current (HERE).readProperty_mName (), var_argumentTypeList_10009, enumerator_9787.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_9787.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_9787.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 255)), var_terminalStyleIndex_9819, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 250)) ;
    enumerator_9787.gotoNextObject () ;
  }
  UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_10704 (var_lexicalListDeclarationListAST_8548) ;
  while (enumerator_10704.hasCurrentObject ()) {
    GGS_u_33__32_ var_terminalStyleIndex_10750 = GGS_u_33__32_ (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_10704.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 260)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_10905 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_10704.current (HERE).readProperty_mStyle (), joker_10905, var_terminalStyleIndex_10750, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 261)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_10946 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_11021 (enumerator_10704.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_11021.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_11135 ;
      var_lexiqueAnalysisContext_9147.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_11021.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_11135, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 265)) ;
      var_argumentTypeList_10946.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_11021.current (HERE).readProperty_mFormalSelector (), enumerator_11021.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_11135, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 266)) ;
      enumerator_11021.gotoNextObject () ;
    }
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_11305 (enumerator_10704.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_11305.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_11329 = enumerator_10704.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_11305.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 269)) ;
      var_terminalList_9750.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_11305.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_10946, var_syntaxErrorMessage_11329, enumerator_11305.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_11305.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 275)), var_terminalStyleIndex_10750, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 270)) ;
      enumerator_11305.gotoNextObject () ;
    }
    enumerator_10704.gotoNextObject () ;
  }
  GGS_stringset var_unicodeStringToGenerate_11789 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS__5B_templateDelimitorAST_5D_ var_templateDelimitorList_11849 = GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_templateLexiqueComponentAST temp_5 = this ;
  UpEnumerator__5B_templateDelimitor_32_AST_5D_ enumerator_11909 (temp_5.readProperty_mTemplateDelimitorList ()) ;
  while (enumerator_11909.hasCurrentObject ()) {
    var_unicodeStringToGenerate_11789.plusPlusAssignOperation (enumerator_11909.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 283)) ;
    var_unicodeStringToGenerate_11789.plusPlusAssignOperation (enumerator_11909.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 284)) ;
    var_templateDelimitorList_11849.plusPlusAssignOperation (GGS_templateDelimitorAST::init_21__21__21_ (enumerator_11909.current (HERE).readProperty_mStartString (), enumerator_11909.current (HERE).readProperty_mEndString (), enumerator_11909.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 285)) ;
    enumerator_11909.gotoNextObject () ;
  }
  const GGS_templateLexiqueComponentAST temp_6 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_12297 (temp_6.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_12297.hasCurrentObject ()) {
    var_unicodeStringToGenerate_11789.plusPlusAssignOperation (enumerator_12297.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 289)) ;
    var_unicodeStringToGenerate_11789.plusPlusAssignOperation (enumerator_12297.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 290)) ;
    enumerator_12297.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas4", 294)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateLexiqueComponentAST temp_8 = this ;
      const GGS_templateLexiqueComponentAST temp_9 = this ;
      GGS_string var_headerContents_12654 = GGS_templateLexiqueGenerationTemplates::class_func_cppHeader (temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 297)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 296)) ;
      const GGS_templateLexiqueComponentAST temp_10 = this ;
      const GGS_templateLexiqueComponentAST temp_11 = this ;
      const GGS_templateLexiqueComponentAST temp_12 = this ;
      const GGS_templateLexiqueComponentAST temp_13 = this ;
      GGS_string var_cppContents_12883 = GGS_templateLexiqueGenerationTemplates::class_func_cppImplementation (temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 302)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 303)), var_lexiqueAnalysisContext_9147.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_11789, var_templateDelimitorList_11849, var_terminalList_9750, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 301)) ;
      const GGS_templateLexiqueComponentAST temp_14 = this ;
      const GGS_templateLexiqueComponentAST temp_15 = this ;
      const GGS_templateLexiqueComponentAST temp_16 = this ;
      const GGS_templateLexiqueComponentAST temp_17 = this ;
      GGS_string var_swiftuiImplementation_13343 = GGS_templateLexiqueGenerationTemplates::class_func_swiftuiImplementationZone (GGS_string ("lexique-").add_operation (temp_14.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 313)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 313)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 313)), temp_15.readProperty_mLexiqueComponentName ().readProperty_string (), temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_9750, var_templateDelimitorList_11849, temp_17.readProperty_mTemplateReplacementList (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 312)) ;
      const GGS_templateLexiqueComponentAST temp_18 = this ;
      const GGS_templateLexiqueComponentAST temp_19 = this ;
      const GGS_templateLexiqueComponentAST temp_20 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 324)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 324)), temp_19.readProperty_mLexiqueComponentName ().readProperty_string (), temp_20.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_12654, var_cppContents_12883, var_swiftuiImplementation_13343, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 321)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const GGS__5B_formalParameterForGeneration_5D_ constinArgument_inTestedSignature,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS__5B_formalParameterSignatureElement_5D_ constinArgument_inReferenceSignature,
                                                    const GGS_location constinArgument_inReferenceLocation,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 31)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 31)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this proc declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 32)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 32)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)).add_operation (GGS_string (" formal parameter(s), but overriden proc declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 33)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 33)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 33)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 34)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_2123 (constinArgument_inReferenceSignature) ;
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_2155 (constinArgument_inTestedSignature) ;
    while (enumerator_2123.hasCurrentObject () && enumerator_2155.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (enumerator_2155.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2155.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string (", but overriden proc declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 40)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 42)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_2155.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string var_s_2728 ;
          switch (enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
            {
              var_s_2728 = GGS_string ("\?") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
            {
              var_s_2728 = GGS_string ("\?!") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
            {
              var_s_2728 = GGS_string ("!") ;
            }
            break ;
          }
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          var_s_2728.plusAssignOperation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_2728) ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_2728, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_2155.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_2123.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (extensionGetter_definition (enumerator_2155.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' type, but overriden proc declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (extensionGetter_definition (enumerator_2123.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 61)) ;
        }
      }
      enumerator_2123.gotoNextObject () ;
      enumerator_2155.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const GGS__5B_formalInputParameterForGeneration_5D_ constinArgument_inTestedSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inReturnType,
                                                            const GGS_location constinArgument_inErrorLocation,
                                                            const GGS__5B_functionSignatureElement_5D_ constinArgument_inReferenceSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inInheritedReturnType,
                                                            const GGS_location constinArgument_inReferenceLocation,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 79)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 79)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the return type is '@").add_operation (extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 80)).add_operation (GGS_string ("', but overriden func names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).add_operation (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 82)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).add_operation (GGS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 82)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 80)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 83)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 85)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 85)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this func declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 86)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)).add_operation (GGS_string (" formal parameter(s), but overriden func declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 87)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 87)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 88)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_5076 (constinArgument_inReferenceSignature) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_5108 (constinArgument_inTestedSignature) ;
    while (enumerator_5076.hasCurrentObject () && enumerator_5108.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_5108.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5223 = GGS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_5223) ;
          inCompiler->emitSemanticError (enumerator_5108.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5223, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5108.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5076.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5108.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_5108.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (extensionGetter_definition (enumerator_5108.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' type, but overriden func declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (extensionGetter_definition (enumerator_5076.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 99)) ;
        }
      }
      enumerator_5076.gotoNextObject () ;
      enumerator_5108.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS__5B_formalParameterAST_5D_ constinArgument_inRoutineSignatureAST,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS__5B_formalParameterForGeneration_5D_ & outArgument_outRoutineSignature,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_6996 (constinArgument_inRoutineSignatureAST) ;
  while (enumerator_6996.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_7029 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 124)) ;
    GGS_string var_formalArgumentCppName_7123 ;
    switch (enumerator_6996.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_formalArgumentCppName_7123 = GGS_string ("inArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 128)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 131)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 138)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_formalArgumentCppName_7123 = GGS_string ("outArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 146)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 148)) ;
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_formalArgumentCppName_7123 = GGS_string ("ioArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 156)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 155)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 158)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 165)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        var_formalArgumentCppName_7123 = GGS_string ("constinArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 173)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 176)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 183)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_6996.current (HERE).readProperty_mFormalSelector (), enumerator_6996.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_7029, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_7123, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 191)) ;
    enumerator_6996.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GGS__5B_formalParameterAST_5D_ constinArgument_inRoutineSignatureAST,
                                                                     const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                     const GGS_location constinArgument_inEndOfMethodLocation,
                                                                     GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                     GGS__5B_formalParameterForGeneration_5D_ & outArgument_outRoutineSignature,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_10302 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10458 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_10577 (extensionGetter_definition (var_selfAvailable_10458.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 209)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_10577.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_10458.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas4", 210)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_10577.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 211)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_10611 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_10302, enumerator_10577.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_10577.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_10577.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 219)), var_initialized_10611, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 214)) ;
        }
        enumerator_10577.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_10302, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 225)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_11334 (constinArgument_inInstructionList) ;
  while (enumerator_11334.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_11334.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10302, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 235)) ;
    enumerator_11334.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10302, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 245)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_12444 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12444, var_nameForUsefulness_12444, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 259)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_12444  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 261)) ;
    }
  }
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalArgumentList_12689 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_3 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_12771 (temp_3.readProperty_mFormalArgumentList ()) ;
  while (enumerator_12771.hasCurrentObject ()) {
    var_formalArgumentList_12689.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_12771.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12771.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 268)), enumerator_12771.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12771.current (HERE).readProperty_mFormalArgumentName (), enumerator_12771.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 266)) ;
    enumerator_12771.gotoNextObject () ;
  }
  const GGS_externFunctionDeclarationAST temp_4 = this ;
  const GGS_externFunctionDeclarationAST temp_5 = this ;
  const GGS_externFunctionDeclarationAST temp_6 = this ;
  const GGS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionPrototypeDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 274)), GGS_bool (true), GGS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 276)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_12689, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 273)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&????!signatureIR!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GGS__5B_formalInputParameterAST_5D_ constinArgument_inFunctionSignature,
                                                                                             const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                                             const GGS_lstring constinArgument_inResultTypeName,
                                                                                             const GGS_location constinArgument_inEndOfFunctionLocation,
                                                                                             GGS__5B_formalInputParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                                             GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                             GGS_string & outArgument_outResultVariableCppName,
                                                                                             GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_14395 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  outArgument_outSignatureForGeneration = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_14600 (constinArgument_inFunctionSignature) ;
  while (enumerator_14600.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_14631 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14600.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 301)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_14600.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_cppName_14765 = GGS_string ("constinArgument_").add_operation (enumerator_14600.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 303)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_14600.current (HERE).readProperty_mFormalSelector (), var_parameterType_14631, var_cppName_14765, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), enumerator_14600.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 304)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14600.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_14765, var_cppName_14765, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 311)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_14765, var_cppName_14765, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 313)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_cppName_15382 = GGS_string ("inArgument_").add_operation (enumerator_14600.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 316)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 316)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_14600.current (HERE).readProperty_mFormalSelector (), var_parameterType_14631, var_cppName_15382, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), enumerator_14600.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 317)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = enumerator_14600.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_15382, var_cppName_15382, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 324)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_15382, var_cppName_15382, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 326)) ;
        }
      }
    }
    enumerator_14600.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 331)) ;
  outArgument_outResultVariableCppName = GGS_string ("result") ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_14395, GGS_string ("result").getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 333)), outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 333)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_selfAvailability_2E_available var_selfAvailable_16301 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 335)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 335)).isValuated ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_16420 (extensionGetter_definition (var_selfAvailable_16301.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 336)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_16420.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_14395, enumerator_16420.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_16420.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_16420.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 342)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 337)) ;
        }
        enumerator_16420.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_16828 (constinArgument_inInstructionList) ;
  while (enumerator_16828.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_16828.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_14395, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 350)) ;
    enumerator_16828.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_14395, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 360)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17701 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 375)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17701, var_nameForUsefulness_17701, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 376)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17701  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 378)) ;
    }
  }
  GGS_analysisContext var_analysisContext_17968 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 385)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalInputParameterList_18429 ;
  GGS_unifiedTypeMapEntry var_returnType_18464 ;
  GGS_string var_resultVariableCppName_18485 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_18517 ;
  {
  const GGS_functionDeclarationAST temp_3 = this ;
  const GGS_functionDeclarationAST temp_4 = this ;
  const GGS_functionDeclarationAST temp_5 = this ;
  const GGS_functionDeclarationAST temp_6 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_17701, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_17968, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_18429, var_returnType_18464, var_resultVariableCppName_18485, var_semanticInstructionListForGeneration_18517, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 388)) ;
  }
  const GGS_functionDeclarationAST temp_7 = this ;
  const GGS_functionDeclarationAST temp_8 = this ;
  const GGS_functionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 404)), GGS_bool (true), GGS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 406)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 406)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_18429, var_returnType_18464, var_resultVariableCppName_18485, var_semanticInstructionListForGeneration_18517, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 403)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_19519 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 427)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_19519, var_nameForUsefulness_19519, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 428)) ;
  }
  GGS_terminalMap var_terminalMap_19858 ;
  GGS__5B_indexingAST_5D_ var_indexingListAST_19895 ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_bool joker_19832 ; // Joker input parameter
  GGS__5B_terminalDeclarationAST_5D_ joker_19916_3 ; // Joker input parameter
  GGS__5B_lexicalAttributeAST_5D_ joker_19916_2 ; // Joker input parameter
  GGS__5B_lexicalListDeclarationAST_5D_ joker_19916_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_19832, var_terminalMap_19858, var_indexingListAST_19895, joker_19916_3, joker_19916_2, joker_19916_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 430)) ;
  GGS_stringset var_indexNameSet_20003 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_indexingAST_5D_ enumerator_20037 (var_indexingListAST_19895) ;
  while (enumerator_20037.hasCurrentObject ()) {
    var_indexNameSet_20003.plusPlusAssignOperation (enumerator_20037.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 440)) ;
    enumerator_20037.gotoNextObject () ;
  }
  GGS_bool var_hasIndexing_20119 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas4", 444)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GGS_string var_lexiqueName_20298 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GGS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_20757 ;
      {
      const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_19519, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_20298, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_19858, var_indexNameSet_20003, var_hasIndexing_20119, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_20757, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 446)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (var_syntaxDeclarationForGeneration_20757  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 462)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_buildOptionValue::class_func_quiet (SOURCE_FILE ("semanticAnalysis.galgas4", 479)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 479)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
      routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 480)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 480)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 480)) ;
      }
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  GGS_lstring var_grammarNameForUsefulness_21802 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 483)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_21802, var_grammarNameForUsefulness_21802, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 484)) ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_22107 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_22189 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_22243 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 488)) ;
  GGS__5B_syntaxComponentForGrammarAnalysis_5D_ var_syntaxComponentListForGrammarAnalysis_22351 = GGS__5B_syntaxComponentForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_nonTerminalToAdd_5D_ var_nonTerminalToAddList_22421 = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_HERE) ;
  GGS_u_33__32_ var_addedNonTerminalCount_22459 = GGS_u_33__32_ (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_22519 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_22519.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_22548 = function_syntaxNameForUsefulEntitiesGraph (enumerator_22519.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 493)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_21802, var_syntaxNameForUsefulness_22548 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 494)) ;
    }
    GGS_u_33__32_ var_addedNonTerminalCountRef_22742 = var_addedNonTerminalCount_22459 ;
    GGS_lstring var_lexiqueName_22910 ;
    GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_22963 ;
    GGS__5B_syntaxRuleAST_5D_ var_ruleList_23019 ;
    GGS_bool var_hasTranslateFeature_23046 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_22519.current (HERE), var_lexiqueName_22910, var_nonterminalDeclarationList_22963, var_ruleList_23019, var_hasTranslateFeature_23046, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 496)) ;
    GGS_lstring var_lexiqueNameForUsefulness_23080 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_22910, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 503)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_21802, var_lexiqueNameForUsefulness_23080 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 504)) ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_23046.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 506)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_galgas_33_GrammarComponentAST temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_22519.current (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 507)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 507)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 507)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_23046.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 508)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 508)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_galgas_33_GrammarComponentAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_22519.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 509)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 509)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 509)) ;
        }
      }
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_22243.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        var_lexiqueComponentName_22243 = var_lexiqueName_22910 ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_22910.readProperty_string ().objectCompare (var_lexiqueComponentName_22243.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_22519.current (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_22910.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 515)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 516)).add_operation (var_lexiqueComponentName_22243.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 516)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 517)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 515)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_22189, var_nonterminalDeclarationList_22963, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 520)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_22189, var_ruleList_23019, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 525)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_22189, enumerator_22519.current (HERE), var_ruleList_23019, var_actuallyUsedTerminalSymbolMap_22107, var_syntaxComponentListForGrammarAnalysis_22351, var_addedNonTerminalCount_22459, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 530)) ;
    }
    GGS_u_33__32_ var_i_24741 = GGS_u_33__32_ (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_22459.isValid ()) {
      uint32_t variant_24751 = var_addedNonTerminalCount_22459.uintValue () ;
      bool loop_24751 = true ;
      while (loop_24751) {
        loop_24751 = GGS_bool (ComparisonKind::lowerThan, var_i_24741.objectCompare (var_addedNonTerminalCount_22459.subtract_operation (var_addedNonTerminalCountRef_22742, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 539)))).isValid () ;
        if (loop_24751) {
          loop_24751 = GGS_bool (ComparisonKind::lowerThan, var_i_24741.objectCompare (var_addedNonTerminalCount_22459.subtract_operation (var_addedNonTerminalCountRef_22742, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 539)))).boolValue () ;
        }
        if (loop_24751 && (0 == variant_24751)) {
          loop_24751 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas4", 539)) ;
        }
        if (loop_24751) {
          variant_24751 -= 1 ;
          var_nonTerminalToAddList_22421.plusPlusAssignOperation (GGS_nonTerminalToAdd::init_21__21_ (enumerator_22519.current (HERE).readProperty_string (), var_i_24741, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 540)) ;
          var_i_24741.plusAssignOperation(GGS_u_33__32_ (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 541)) ;
        }
      }
    }
    enumerator_22519.gotoNextObject () ;
  }
  GGS_u_33__32_ var_startSymbolIndex_25134 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_25206 ;
  const GGS_galgas_33_GrammarComponentAST temp_15 = this ;
  var_nonTerminalMapForGrammarAnalysis_22189.method_searchKey (temp_15.readProperty_mStartSymbolName (), var_startSymbolIndex_25134, var_startSymbolAltMap_25206, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 546)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_16.readProperty_mStartSymbolName ().readProperty_location (), temp_17.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_22189.getter_locationForKey (temp_18.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 555)), var_startSymbolAltMap_25206, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 552)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_25587 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_19 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_25660 (temp_19.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_25660.hasCurrentObject ()) {
    GGS_u_33__32_ var_nonterminalIndex_25763 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_25781 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_22189.method_searchKey (enumerator_25660.current (HERE), var_nonterminalIndex_25763, joker_25781, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 561)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_25587.setter_insertKey (enumerator_25660.current (HERE), var_nonterminalIndex_25763, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 562)) ;
    }
    enumerator_25660.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_26032 = GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_26105 (var_nonTerminalMapForGrammarAnalysis_22189) ;
  while (enumerator_26105.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_26032.plusPlusAssignOperation (GGS_sortedNonTerminalSymbolForGrammarAnalysis::init_21__21__21_ (enumerator_26105.current (HERE).readProperty_lkey (), enumerator_26105.current (HERE).readProperty_mNonTerminalIndex (), enumerator_26105.current (HERE).readProperty_mNonterminalSymbolParametersMap (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 567)) ;
    enumerator_26105.gotoNextObject () ;
  }
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    test_20 = GGS_buildOptionValue::class_func_emitSyntaxDiagrams (SOURCE_FILE ("semanticAnalysis.galgas4", 570)).boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_21 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_22 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_21.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_22189, var_syntaxComponentListForGrammarAnalysis_22351, temp_22.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 571)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_26747 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 580)) ;
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_buildOptionValue::class_func_emitClassGraph (SOURCE_FILE ("semanticAnalysis.galgas4", 581)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_26747, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 582)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_23) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_26747, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 587)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_27303 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_27355 (var_nonTerminalMapForGrammarAnalysis_22189) ;
  while (enumerator_27355.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_27428 (enumerator_27355.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_27428.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_27497 (enumerator_27428.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_27497.hasCurrentObject ()) {
        switch (enumerator_27497.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_27652 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_27497.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 598)) ;
            extensionMethod_addHeaderFileName (var_t_27652, var_implementationFileHeader_27303, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 599)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_27497.gotoNextObject () ;
      }
      enumerator_27428.gotoNextObject () ;
    }
    enumerator_27355.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("semanticAnalysis.galgas4", 605)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      var_implementationFileHeader_27303 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  GGS_string var_HTMLFilePath_28035 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 609)).add_operation (temp_25.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 609)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 609)) ;
  GGS_string var_grammarCppFile_28564 ;
  GGS_string var_grammarHTMLHelperContents_28597 ;
  GGS_string var_swiftGrammarDescription_28641 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_27 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_28 = this ;
  GGS_string temp_29 ;
  const GalgasBool test_30 = temp_28.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_30) {
    temp_29 = function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_30) {
    temp_29 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_26.readProperty_mGrammarComponentName (), temp_27.readProperty_mGrammarClass (), var_startSymbolIndex_25134, var_lexiqueComponentName_22243.readProperty_string (), var_actuallyUsedTerminalSymbolMap_22107, var_syntaxComponentListForGrammarAnalysis_22351, var_unusedNonTerminalSymbolsForGrammar_25587, var_HTMLFilePath_28035, var_nonTerminalSymbolSortedListForGrammarAnalysis_26032, temp_29, var_grammarCppFile_28564, var_grammarHTMLHelperContents_28597, var_swiftGrammarDescription_28641, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 610)) ;
  }
  GalgasBool test_31 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_31) {
    test_31 = GGS_buildOptionValue::class_func_outputHTMLgrammarFile (SOURCE_FILE ("semanticAnalysis.galgas4", 626)).boolEnum () ;
    if (GalgasBool::boolTrue == test_31) {
      var_HTMLFilePath_28035.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 627)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 627)) ;
      GGS_bool joker_28951 ; // Joker input parameter
      var_grammarHTMLHelperContents_28597.method_writeToFileWhenDifferentContents (var_HTMLFilePath_28035, joker_28951, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 628)) ;
    }
  }
  if (GalgasBool::boolFalse == test_31) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_28035, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 630)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_32 = this ;
  GGS_string var_swiftFilePath_29112 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 633)).add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 633)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 633)) ;
  GalgasBool test_33 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_33) {
    test_33 = GGS_buildOptionValue::class_func_outputGrammarSwiftDescriptionFile (SOURCE_FILE ("semanticAnalysis.galgas4", 634)).boolEnum () ;
    if (GalgasBool::boolTrue == test_33) {
      var_swiftFilePath_29112.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 635)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 635)) ;
      GGS_bool joker_29404 ; // Joker input parameter
      var_swiftGrammarDescription_28641.method_writeToFileWhenDifferentContents (var_swiftFilePath_29112, joker_29404, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 636)) ;
    }
  }
  if (GalgasBool::boolFalse == test_33) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_29112, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 638)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_38 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_grammarForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("grammar-").add_operation (temp_34.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 645)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 645)), temp_35.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_22243.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_22189, var_nonTerminalToAddList_22421, temp_36.readProperty_mSyntaxComponents (), temp_37.readProperty_mStartSymbolName ().readProperty_string (), temp_38.readProperty_mHasTranslateFeature (), var_grammarCppFile_28564, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 642)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes function_buildPredefinedTypes (const GGS_unifiedTypeMap & constinArgument_inTypeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result ; // Returned variable
  result = GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("location").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 664)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 664)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 665)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 665)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("char").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 666)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 666)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 667)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 667)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("u32").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 668)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 668)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("s32").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("u64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("s64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 671)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 671)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("f64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 672)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 672)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 673)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 673)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lchar").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 674)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 674)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lstring").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 675)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 675)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lu32").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 676)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("ls32").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 677)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 677)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lu64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 678)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 678)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("ls64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 679)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 679)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lf64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 680)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 680)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 681)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 681)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 682)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 682)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("stringset").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 683)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 683)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[string]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 684)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 684)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[lstring]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 685)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 685)), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const GGS_lstring constinArgument_inNonTerminalName,
                                                                   const GGS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                                   GGS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_nonterminalMap_2E_element var_entry_34349 = ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioNonterminalDeclarationMap.readSubscript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset var_firstDeclarationLabelSet_34436 = var_entry_34349.readProperty_mLabelMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)) ;
      GGS_stringset var_reDeclarationLabelSet_34505 = constinArgument_inNonterminalLabelMap.getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 764)) ;
      GGS_stringset var_missingLabelSet_34577 = var_firstDeclarationLabelSet_34436.subtract_operation (var_reDeclarationLabelSet_34505, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 765)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::greaterThan, var_missingLabelSet_34577.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 766)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_s_34700 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_34718 (var_missingLabelSet_34577) ;
          while (enumerator_34718.hasCurrentObject ()) {
            var_s_34700.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_34718.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 769)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 769)) ;
            enumerator_34718.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 772)).add_operation (GGS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 772)).add_operation (var_s_34700, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 772)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 771)) ;
        }
      }
      GGS_stringset var_newLabelSet_34943 = var_reDeclarationLabelSet_34505.subtract_operation (var_firstDeclarationLabelSet_34436, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 774)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_newLabelSet_34943.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 775)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_string var_s_35050 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_35068 (var_newLabelSet_34943) ;
          while (enumerator_35068.hasCurrentObject ()) {
            var_s_35050.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_35068.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 778)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 778)) ;
            enumerator_35068.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 781)).add_operation (GGS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 781)).add_operation (var_s_35050, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 781)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 780)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_missingLabelSet_34577.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 783)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_newLabelSet_34943.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 783)).objectCompare (GGS_u_33__32_ (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 783)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          UpEnumerator_nonterminalLabelMap enumerator_35355 (var_entry_34349.readProperty_mLabelMap ()) ;
          UpEnumerator_nonterminalLabelMap enumerator_35378 (constinArgument_inNonterminalLabelMap) ;
          while (enumerator_35355.hasCurrentObject () && enumerator_35378.hasCurrentObject ()) {
            GGS__5B_formalParameterSignatureElement_5D_ var_newSignature_35450 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
            UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_35500 (enumerator_35378.current (HERE).readProperty_mSignature ()) ;
            while (enumerator_35500.hasCurrentObject ()) {
              var_newSignature_35450.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_35500.current (HERE).readProperty_mFormalSelector (), enumerator_35500.current (HERE).readProperty_mFormalArgumentType (), enumerator_35500.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_35500.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 787)) ;
              enumerator_35500.gotoNextObject () ;
            }
            {
            routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_35355.current (HERE).readProperty_mSignatureForGeneration (), enumerator_35355.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_35450, enumerator_35378.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 789)) ;
            }
            enumerator_35355.gotoNextObject () ;
            enumerator_35378.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 798)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                              const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GGS_nonterminalMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonterminalDeclarationAST_5D_ enumerator_36451 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_36451.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_36491 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_36567 (enumerator_36451.current (HERE).readProperty_mLabels ()) ;
    while (enumerator_36567.hasCurrentObject ()) {
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_36588 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_36658 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_36735 (enumerator_36567.current (HERE).readProperty_mFormalArgumentList ()) ;
      while (enumerator_36735.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_t_36770 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_36735.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 817)) ;
        var_signatureForGeneration_36588.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_36735.current (HERE).readProperty_mFormalSelector (), enumerator_36735.current (HERE).readProperty_mFormalArgumentPassingMode (), var_t_36770, enumerator_36735.current (HERE).readProperty_mFormalArgumentName (), enumerator_36735.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 818)) ;
        var_signature_36658.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_36735.current (HERE).readProperty_mFormalSelector (), var_t_36770, enumerator_36735.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_36735.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 819)) ;
        enumerator_36735.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_36491.setter_insertKey (enumerator_36567.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_36588, var_signature_36658, enumerator_36567.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 821)) ;
      }
      enumerator_36567.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_36451.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_36491, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 823)) ;
    }
    enumerator_36451.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                   const GGS_terminalMap /* constinArgument__5F_inTerminalMap */,
                                                                   const GGS_string /* constinArgument__5F_inLexiqueName */,
                                                                   const GGS_nonterminalMap /* constinArgument__5F_inNonterminalMap */,
                                                                   const GGS_string /* constinArgument__5F_inComponentName */,
                                                                   const GGS_stringset /* constinArgument__5F_inIndexNameSet */,
                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_u_33__32_ & /* ioArgument__5F_ioSelectMethodCount */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 848)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterAnonymousVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::method_analyzeInputParameter (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         const GGS_lexicalTypeEnum /* constinArgument__5F_inRequiredLexicalType */,
                                                                         const GGS_string /* constinArgument__5F_inLexicalAttributeName */,
                                                                         GGS__5B_terminalCheckAssignement_5D_ & /* ioArgument__5F_ioTerminalCheckAssignementList */,
                                                                         GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                const GGS_string constinArgument_inLexicalAttributeName,
                                                                GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_39413 ;
  GGS_string var_cppName_39432 ;
  {
  const GGS_inputParameterVariable temp_0 = this ;
  GGS_string joker_39441 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_39413, var_cppName_39432, joker_39441, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 878)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_39472 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_39472 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expectedType_39472.objectCompare (var_type_39413)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_inputParameterVariable temp_2 = this ;
      const GGS_inputParameterVariable temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)).add_operation (extensionGetter_identifierRepresentation (var_type_39413, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_39472, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 893)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 893)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 893)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 891)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (GGS_string::makeEmptyString (), var_cppName_39432, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 895)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_41094 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_41094 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredVariable temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_41957 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 924)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_41094.objectCompare (var_type_41957)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredVariable temp_4 = this ;
          const GGS_inputParameterDeclaredVariable temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)).add_operation (extensionGetter_definition (var_type_41957, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)).add_operation (extensionGetter_definition (var_expectedType_41094, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 928)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 928)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 928)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredVariable temp_7 = this ;
  const GGS_inputParameterDeclaredVariable temp_8 = this ;
  GGS_string var_cppName_42353 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 932)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 932)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 932)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 932)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 932)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 932)) ;
  {
  const GGS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GGS_bool (true), var_expectedType_41094, var_cppName_42353, var_cppName_42353, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 933)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_41094, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 941)).readProperty_typeName ().readProperty_string (), var_cppName_42353, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 940)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredConstant analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_43287 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_43287 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredConstant temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_44150 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 969)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_43287.objectCompare (var_type_44150)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredConstant temp_4 = this ;
          const GGS_inputParameterDeclaredConstant temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)).add_operation (extensionGetter_definition (var_type_44150, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)).add_operation (extensionGetter_definition (var_expectedType_43287, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 973)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 973)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 973)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 971)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredConstant temp_7 = this ;
  const GGS_inputParameterDeclaredConstant temp_8 = this ;
  GGS_string var_cppName_44546 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 977)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 977)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 977)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 977)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 977)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 977)) ;
  {
  const GGS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_43287, var_cppName_44546, var_cppName_44546, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 978)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_43287, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 981)).readProperty_typeName ().readProperty_string (), var_cppName_44546, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 980)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                    const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                                    GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                    const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                    GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1002)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1003)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1014)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1015)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_46448 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_46454 ; // Joker input parameter
  GGS_string joker_46458 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_46448, joker_46454, joker_46458, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1017)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_46468 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_46468.objectCompare (var_type_46448)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)).add_operation (extensionGetter_identifierRepresentation (var_type_46448, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_46468, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1022)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1022)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1022)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1020)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1033)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1034)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_47345 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1036)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1036)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1036)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1036)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1036)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_47490 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1037)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_47490, var_cppName_47345, var_cppName_47345, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1038)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_47715 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_47715.objectCompare (var_type_47490)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)).add_operation (extensionGetter_identifierRepresentation (var_type_47490, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_47715, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1049)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1049)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1049)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1047)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1060)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1061)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_48585 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1063)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1063)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1063)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1063)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1063)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1063)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_48730 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1064)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_48730, var_cppName_48585, var_cppName_48585, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1065)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_48906 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_48906.objectCompare (var_type_48730)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)).add_operation (extensionGetter_identifierRepresentation (var_type_48730, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_48906, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1070)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1068)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_generateCode (const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      const GGS_string constinArgument_inAccessMethodName,
                                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE).add_operation (GGS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1082)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1082)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1082)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1082)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1083)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                      const GGS_string /* constinArgument__5F_inAccessMethodName */,
                                                                                      GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                      GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                       const GGS_string constinArgument_inAccessMethodName,
                                                                                       GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
  GGS_string var_cppName_50560 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1103)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1103)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_cppName_50560.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1104)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1104)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1104)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1104)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GGS_string constinArgument_inAccessMethodName,
                                                                                               GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
  GGS_string var_cppName_51148 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1114)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1114)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_string ").add_operation (var_cppName_51148, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1115)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1115)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1115)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1115)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1115)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GGS_string constinArgument_inAccessMethodName,
                                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                                 GGS_string & ioArgument_ioGeneratedCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
  GGS_string var_cppName_51741 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1125)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1125)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_string ").add_operation (var_cppName_51741, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1126)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1126)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1126)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1126)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1126)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                       const GGS_string constinArgument_inLexiqueName,
                                                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                       const GGS_string constinArgument_inComponentName,
                                                                                                       const GGS__5B_syntaxInstructionAST_5D_ constinArgument_inSyntaxInstructionListAST,
                                                                                                       const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                       const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       GGS_u_33__32_ & ioArgument_ioSelectMethodCount,
                                                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1149)) ;
  }
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_52916 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_52916.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_52916.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1152)) ;
    enumerator_52916.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1169)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                              const GGS__5B_formalParameterAST_5D_ constinArgument_inFormalArguments,
                                                                                                              const GGS__5B_syntaxInstructionAST_5D_ constinArgument_inSyntaxInstructionList,
                                                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                              const GGS_string constinArgument_inLexiqueName,
                                                                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                              const GGS_string constinArgument_inComponentName,
                                                                                                              const GGS_location constinArgument_inEndOfInstructionList,
                                                                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                              GGS_u_33__32_ & ioArgument_ioSelectMethodCount,
                                                                                                              GGS__5B_formalParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                                                              GGS__5B_formalParameterSignatureElement_5D_ & outArgument_outSignature,
                                                                                                              GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_54465 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_54465, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1198)) ;
  }
  outArgument_outSignature = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_54799 (outArgument_outSignatureForGeneration) ;
  while (enumerator_54799.hasCurrentObject ()) {
    outArgument_outSignature.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_54799.current (HERE).readProperty_mFormalSelector (), enumerator_54799.current (HERE).readProperty_mFormalArgumentType (), enumerator_54799.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_54799.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1208)) ;
    enumerator_54799.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_55119 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_55119.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_55119.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_54465, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1213)) ;
    enumerator_55119.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_54465, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1230)) ;
}


