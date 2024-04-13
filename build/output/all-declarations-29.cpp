#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-29.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 392)) ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 393)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16008 ;
  const GALGAS_moduloExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16008, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 407)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16343 ;
  const GALGAS_moduloExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_16008.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16343, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 417)) ;
  {
  const GALGAS_moduloExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_16008.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 428)).readProperty_features ().getter_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 428)), GALGAS_string ("mod"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16008, var_rightExpression_16343, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 427)) ;
  }
  const GALGAS_moduloExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_16008.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_16008, GALGAS_binaryOperator::class_func_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 439)), var_rightExpression_16343, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 144)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_5986 ;
  const GALGAS_testDynamicClassInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 162)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5986, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 159)) ;
  const GALGAS_testDynamicClassInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_castType_6034 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 169)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_5986.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 171)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 171)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_6283 = var_castType_6034 ;
      GALGAS_bool var_found_6310 = GALGAS_bool (ComparisonKind::equal, var_t_6283.objectCompare (var_expression_5986.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).isValid ()) {
        uint32_t variant_6350 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 175)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 175)).uintValue () ;
        bool loop_6350 = true ;
        while (loop_6350) {
          loop_6350 = var_found_6310.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6283, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).isValid () ;
          if (loop_6350) {
            loop_6350 = var_found_6310.operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_and (extensionGetter_definition (var_t_6283, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 176)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 176)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 176)).boolValue () ;
          }
          if (loop_6350 && (0 == variant_6350)) {
            loop_6350 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 175)) ;
          }
          if (loop_6350) {
            variant_6350 -- ;
            var_t_6283 = extensionGetter_definition (var_t_6283, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 177)).readProperty_superType () ;
            var_found_6310 = GALGAS_bool (ComparisonKind::equal, var_t_6283.objectCompare (var_expression_5986.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_6310.operator_not (SOURCE_FILE ("expression-is-as.galgas", 180)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_testDynamicClassInExpressionAST temp_4 = this ;
          const GALGAS_testDynamicClassInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (extensionGetter_definition (var_expression_5986.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 182)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 181)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    TC_Array <FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (var_expression_5986.readProperty_mLocation (), GALGAS_string ("expression should be a class instance: it is an @").add_operation (extensionGetter_definition (var_expression_5986.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 186)), fixItArray7  COMMA_SOURCE_FILE ("expression-is-as.galgas", 185)) ;
  }
  const GALGAS_testDynamicClassInExpressionAST temp_8 = this ;
  const GALGAS_testDynamicClassInExpressionAST temp_9 = this ;
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_8.readProperty_mTypeName ().readProperty_location (), var_expression_5986, temp_9.readProperty_mTypeComparisonKind (), var_castType_6034, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8297 ;
  const GALGAS_castInExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-is-as.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8297, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 217)) ;
  const GALGAS_castInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_8346 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 227)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_definition (var_expression_8297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 229)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-is-as.galgas", 229)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_unifiedTypeMapEntry var_t_8591 = var_type_8346 ;
      GALGAS_bool var_found_8614 = GALGAS_bool (ComparisonKind::equal, var_t_8591.objectCompare (var_expression_8297.readProperty_mResultType ())) ;
      if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).isValid ()) {
        uint32_t variant_8654 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("expression-is-as.galgas", 233)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 233)).uintValue () ;
        bool loop_8654 = true ;
        while (loop_8654) {
          loop_8654 = var_found_8614.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8591, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).isValid () ;
          if (loop_8654) {
            loop_8654 = var_found_8614.operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_and (extensionGetter_definition (var_t_8591, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-is-as.galgas", 234)).operator_not (SOURCE_FILE ("expression-is-as.galgas", 234)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 234)).boolValue () ;
          }
          if (loop_8654 && (0 == variant_8654)) {
            loop_8654 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-is-as.galgas", 233)) ;
          }
          if (loop_8654) {
            variant_8654 -- ;
            var_t_8591 = extensionGetter_definition (var_t_8591, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 235)).readProperty_superType () ;
            var_found_8614 = GALGAS_bool (ComparisonKind::equal, var_t_8591.objectCompare (var_expression_8297.readProperty_mResultType ())) ;
          }
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_found_8614.operator_not (SOURCE_FILE ("expression-is-as.galgas", 238)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_castInExpressionAST temp_4 = this ;
          const GALGAS_castInExpressionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_5.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (extensionGetter_definition (var_expression_8297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 240)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 241)), fixItArray6  COMMA_SOURCE_FILE ("expression-is-as.galgas", 239)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_expression_8297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 243)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_expression_8297.readProperty_mLocation (), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (extensionGetter_definition (var_expression_8297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 245)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 246)), fixItArray8  COMMA_SOURCE_FILE ("expression-is-as.galgas", 244)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_expression_8297.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 249)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_castInExpressionAST temp_10 = this ;
      const GALGAS_castInExpressionAST temp_11 = this ;
      outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::init_21__21__21__21_ (var_type_8346, temp_10.readProperty_mEndOfReceiverExpression (), var_expression_8297, temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_castInExpressionAST temp_12 = this ;
    const GALGAS_castInExpressionAST temp_13 = this ;
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::init_21__21__21__21__21_ (var_type_8346, temp_12.readProperty_mTypeName ().readProperty_location (), var_expression_8297, temp_13.readProperty_mTypeName ().readProperty_string (), var_type_8346, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testDynamicClassInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testDynamicClassInExpressionForGeneration temp_0 = this ;
  GALGAS_string var_typeNameRepresentation_10615 = extensionGetter_definition (temp_0.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 284)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 284)) ;
  GALGAS_string var_receiverExpression_10907 ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_10907, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 286)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 294)) ;
  const GALGAS_testDynamicClassInExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mTypeComparisonKind ().enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression_10907, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 297)).add_operation (var_typeNameRepresentation_10615, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 298)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 299)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (nullptr != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation_10615, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 301)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 302)).add_operation (var_receiverExpression_10907, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 303)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression_10907, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 305)).add_operation (var_typeNameRepresentation_10615, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 306)).add_operation (GALGAS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (var_typeNameRepresentation_10615, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 307)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 308)).add_operation (var_receiverExpression_10907, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 309)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@castInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_castInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mCastType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 322)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 323)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 324)) ;
  GALGAS_string var_receiverExpression_12384 ;
  const GALGAS_castInExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_12384, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 326)) ;
  const GALGAS_castInExpressionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 335)).add_operation (var_receiverExpression_12384, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 334)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 337)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_3 = this ;
  const GALGAS_castInExpressionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (temp_3.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 340)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 341)).add_operation (var_receiverExpression_12384, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 342)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (temp_4.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (var_receiverExpression_12384, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 343)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 344)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 339)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 346)) ;
  }
  const GALGAS_castInExpressionForGeneration temp_5 = this ;
  const GALGAS_castInExpressionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (temp_5.readProperty_mTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-is-as.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 348)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 349)).add_operation (var_receiverExpression_12384, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 350)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 347)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 352)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 353)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 354)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 355)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 356)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extractObjectInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_extractObjectInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-is-as.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 374)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 375)) ;
  GALGAS_string var_receiverExpression_14337 ;
  const GALGAS_extractObjectInExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression_14337, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 377)) ;
  const GALGAS_extractObjectInExpressionForGeneration temp_1 = this ;
  const GALGAS_extractObjectInExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 385)).add_operation (var_receiverExpression_14337, inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 386)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 387)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 388)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) COMMA_SOURCE_FILE ("expression-is-as.galgas", 389)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_4837 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 120)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4837 COMMA_SOURCE_FILE ("expression-option.galgas", 121)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_5135 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_5194 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_5239 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_5284 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_5331 ;
  const GALGAS_optionExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionComponentIsPredefined_5135, var_boolOptionMap_5194, var_uintOptionMap_5239, var_stringOptionMap_5284, var_stringListOptionMap_5331, inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 123)) ;
  const GALGAS_optionExpressionAST temp_2 = this ;
  GALGAS_bool var_found_5367 = var_boolOptionMap_5194.getter_hasKey (temp_2.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 131)) ;
  GALGAS_unifiedTypeMapEntry var_returnedType_5455 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_found_5367.operator_not (SOURCE_FILE ("expression-option.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_optionExpressionAST temp_4 = this ;
      var_found_5367 = var_uintOptionMap_5239.getter_hasKey (temp_4.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 134)) ;
      var_returnedType_5455 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType () ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_found_5367.operator_not (SOURCE_FILE ("expression-option.galgas", 137)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_optionExpressionAST temp_6 = this ;
      var_found_5367 = var_stringOptionMap_5284.getter_hasKey (temp_6.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 138)) ;
      var_returnedType_5455 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_found_5367.operator_not (SOURCE_FILE ("expression-option.galgas", 141)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_optionExpressionAST temp_8 = this ;
      var_found_5367 = var_stringListOptionMap_5331.getter_hasKey (temp_8.readProperty_mOptionEntryName ().readProperty_string () COMMA_SOURCE_FILE ("expression-option.galgas", 142)) ;
      var_returnedType_5455 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType () ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_found_5367.boolEnum () ;
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_optionExpressionAST temp_11 = this ;
        test_10 = GALGAS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("value"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_optionExpressionAST temp_12 = this ;
          const GALGAS_optionExpressionAST temp_13 = this ;
          const GALGAS_optionExpressionAST temp_14 = this ;
          outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::init_21__21__21__21__21_ (var_returnedType_5455, temp_12.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5135, temp_13.readProperty_mOptionComponentName ().readProperty_string (), temp_14.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          const GALGAS_optionExpressionAST temp_16 = this ;
          test_15 = GALGAS_bool (ComparisonKind::equal, temp_16.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("char"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_optionExpressionAST temp_17 = this ;
            const GALGAS_optionExpressionAST temp_18 = this ;
            const GALGAS_optionExpressionAST temp_19 = this ;
            outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mCharType (), temp_17.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5135, temp_18.readProperty_mOptionComponentName ().readProperty_string (), temp_19.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            const GALGAS_optionExpressionAST temp_21 = this ;
            test_20 = GALGAS_bool (ComparisonKind::equal, temp_21.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              const GALGAS_optionExpressionAST temp_22 = this ;
              const GALGAS_optionExpressionAST temp_23 = this ;
              const GALGAS_optionExpressionAST temp_24 = this ;
              outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5135, temp_23.readProperty_mOptionComponentName ().readProperty_string (), temp_24.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
            }
          }
          if (kBoolFalse == test_20) {
            enumGalgasBool test_25 = kBoolTrue ;
            if (kBoolTrue == test_25) {
              const GALGAS_optionExpressionAST temp_26 = this ;
              test_25 = GALGAS_bool (ComparisonKind::equal, temp_26.readProperty_mOptionGetterName ().readProperty_string ().objectCompare (GALGAS_string ("comment"))).boolEnum () ;
              if (kBoolTrue == test_25) {
                const GALGAS_optionExpressionAST temp_27 = this ;
                const GALGAS_optionExpressionAST temp_28 = this ;
                const GALGAS_optionExpressionAST temp_29 = this ;
                outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_27.readProperty_mOptionComponentName ().readProperty_location (), var_optionComponentIsPredefined_5135, temp_28.readProperty_mOptionComponentName ().readProperty_string (), temp_29.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_HERE) ;
              }
            }
            if (kBoolFalse == test_25) {
              const GALGAS_optionExpressionAST temp_30 = this ;
              TC_Array <FixItDescription> fixItArray31 ;
              inCompiler->emitSemanticError (temp_30.readProperty_mOptionGetterName ().readProperty_location (), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray31  COMMA_SOURCE_FILE ("expression-option.galgas", 175)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_stringlist var_s_7485 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
    cEnumerator_commandLineOptionMap enumerator_7512 (var_boolOptionMap_5194, EnumerationOrder::up) ;
    while (enumerator_7512.hasCurrentObject ()) {
      var_s_7485.addAssign_operation (enumerator_7512.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 180)) ;
      enumerator_7512.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7580 (var_uintOptionMap_5239, EnumerationOrder::up) ;
    while (enumerator_7580.hasCurrentObject ()) {
      var_s_7485.addAssign_operation (enumerator_7580.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 183)) ;
      enumerator_7580.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_7648 (var_stringOptionMap_5284, EnumerationOrder::up) ;
    while (enumerator_7648.hasCurrentObject ()) {
      var_s_7485.addAssign_operation (enumerator_7648.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("expression-option.galgas", 186)) ;
      enumerator_7648.gotoNextObject () ;
    }
    const GALGAS_optionExpressionAST temp_32 = this ;
    const GALGAS_optionExpressionAST temp_33 = this ;
    const GALGAS_optionExpressionAST temp_34 = this ;
    TC_Array <FixItDescription> fixItArray35 ;
    appendFixItActions (fixItArray35, kFixItReplace, var_s_7485) ;
    inCompiler->emitSemanticError (temp_32.readProperty_mOptionEntryName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_33.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)).add_operation (temp_34.readProperty_mOptionEntryName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 189)), fixItArray35  COMMA_SOURCE_FILE ("expression-option.galgas", 188)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionValueExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionValueExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 213)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionValueExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 214))  COMMA_SOURCE_FILE ("expression-option.galgas", 214)) ;
    }
  }
  const GALGAS_optionValueExpressionForGeneration temp_3 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_4 = this ;
  const GALGAS_optionValueExpressionForGeneration temp_5 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (temp_4.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 216)).add_operation (temp_5.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)).add_operation (GALGAS_string (".readProperty_value ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 217)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCharExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCharExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 236)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCharExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 237))  COMMA_SOURCE_FILE ("expression-option.galgas", 237)) ;
    }
  }
  const GALGAS_optionCharExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCharExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 239)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 239)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)).add_operation (GALGAS_string (".readProperty_char ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 240)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionStringExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionStringExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 259)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionStringExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 260))  COMMA_SOURCE_FILE ("expression-option.galgas", 260)) ;
    }
  }
  const GALGAS_optionStringExpressionForGeneration temp_3 = this ;
  const GALGAS_optionStringExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 262)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 262)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 263)).add_operation (GALGAS_string (".readProperty_string ())"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 263)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionCommentExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionCommentExpressionForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOptionComponentIsPredefined ().operator_not (SOURCE_FILE ("expression-option.galgas", 274)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionCommentExpressionForGeneration temp_2 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-option.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 275))  COMMA_SOURCE_FILE ("expression-option.galgas", 275)) ;
    }
  }
  const GALGAS_optionCommentExpressionForGeneration temp_3 = this ;
  const GALGAS_optionCommentExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (temp_3.readProperty_mOptionComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 277)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 277)).add_operation (temp_4.readProperty_mOptionEntryName ().getter_identifierRepresentation (SOURCE_FILE ("expression-option.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 278)).add_operation (GALGAS_string (".readProperty_comment ()"), inCompiler COMMA_SOURCE_FILE ("expression-option.galgas", 278)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3787 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 91)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3787 COMMA_SOURCE_FILE ("expression-lexique.galgas", 92)) ;
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_1 = this ;
  GALGAS_bool joker_4105_7 ; // Joker input parameter
  GALGAS_terminalMap joker_4105_6 ; // Joker input parameter
  GALGAS_indexingListAST joker_4105_5 ; // Joker input parameter
  GALGAS_terminalDeclarationListAST joker_4105_4 ; // Joker input parameter
  GALGAS_lexicalAttributeListAST joker_4105_3 ; // Joker input parameter
  GALGAS_lexicalStyleListAST joker_4105_2 ; // Joker input parameter
  GALGAS_lexicalListDeclarationListAST joker_4105_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueComponentName (), joker_4105_7, joker_4105_6, joker_4105_5, joker_4105_4, joker_4105_3, joker_4105_2, joker_4105_1, inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 94)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_lexiqueIntrospectionExpressionAST temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mLexiqueGetterName ().readProperty_string ().objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_lexiqueIntrospectionExpressionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mLexiqueGetterName ().readProperty_location (), GALGAS_string ("unknown getter"), fixItArray5  COMMA_SOURCE_FILE ("expression-lexique.galgas", 100)) ;
    }
  }
  const GALGAS_lexiqueIntrospectionExpressionAST temp_6 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_7 = this ;
  const GALGAS_lexiqueIntrospectionExpressionAST temp_8 = this ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("expression-lexique.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 104)), temp_6.readProperty_mLexiqueComponentName ().readProperty_location (), temp_7.readProperty_mLexiqueComponentName ().readProperty_string (), temp_8.readProperty_mLexiqueGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueIntrospectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexiqueIntrospectionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-lexique.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 128))  COMMA_SOURCE_FILE ("expression-lexique.galgas", 128)) ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_1 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_2 = this ;
  const GALGAS_lexiqueIntrospectionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("Lexique_").add_operation (temp_1.readProperty_mLexiqueComponentName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (temp_2.readProperty_mLexiqueGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-lexique.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 129)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 130)).add_operation (extensionGetter_sourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-lexique.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_5431 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 142)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5431 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 143)) ;
  }
  GALGAS_lstring var_filewrapperPath_5753 ;
  GALGAS_bool var_isInternal_5792 ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_1 = this ;
  GALGAS_lstringlist joker_5773_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_5773_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_5773_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_5773_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), var_filewrapperPath_5753, joker_5773_4, joker_5773_3, joker_5773_2, joker_5773_1, var_isInternal_5792, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 145)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5792.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_3 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_5856 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_3.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 153)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)).objectCompare (var_filewrapperDeclarationLocation_5856.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 154)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_5856.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)), fixItArray7  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 155)) ;
        }
      }
    }
  }
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_8 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_9 = this ;
  const GALGAS_filewrapperObjectInstanciationInExpressionAST temp_10 = this ;
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("filewrapper"), temp_8.readProperty_mFilewrapperName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 160)), temp_9.readProperty_mFilewrapperName ().readProperty_location (), temp_10.readProperty_mFilewrapperName ().readProperty_string (), var_filewrapperPath_5753.readProperty_string (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_6713 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_6713.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_6713.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 172)) ;
    enumerator_6713.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionAST temp_0 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_1 = this ;
  GALGAS_lstring var_usefulnessName_7382 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), temp_1.readProperty_mFilewrapperTemplateName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 187)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_7382 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 188)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_7722 ;
  GALGAS_bool var_isInternal_7761 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_2 = this ;
  GALGAS_lstring joker_7684_4 ; // Joker input parameter
  GALGAS_lstringlist joker_7684_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_7684_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_7684_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_2.readProperty_mFilewrapperName (), joker_7684_4, joker_7684_3, joker_7684_2, joker_7684_1, var_filewrapperTemplateMap_7722, var_isInternal_7761, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 190)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_isInternal_7761.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_4 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_7826 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_4.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 198)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperTemplateInExpressionAST temp_6 = this ;
        test_5 = GALGAS_bool (ComparisonKind::notEqual, temp_6.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)).objectCompare (var_filewrapperDeclarationLocation_7826.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 199)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_filewrapperTemplateInExpressionAST temp_7 = this ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_7826.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 200)) ;
        }
      }
    }
  }
  GALGAS_functionSignature var_templateSignature_8280 ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_9 = this ;
  GALGAS_lstring joker_8298 ; // Joker input parameter
  var_filewrapperTemplateMap_7722.method_searchKey (temp_9.readProperty_mFilewrapperTemplateName (), var_templateSignature_8280, joker_8298, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 204)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_8369 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_filewrapperTemplateInExpressionAST temp_11 = this ;
    test_10 = GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)).objectCompare (var_templateSignature_8280.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 207)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperTemplateInExpressionAST temp_12 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_13 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_14 = this ;
      const GALGAS_filewrapperTemplateInExpressionAST temp_15 = this ;
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mFilewrapperTemplateName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_13.readProperty_mFilewrapperTemplateName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (var_templateSignature_8280.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 210)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 209)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (temp_15.readProperty_mExpressions ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 211)).getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 210)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 211)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 208)) ;
      var_effectiveParameterList_8369.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    var_effectiveParameterList_8369 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GALGAS_filewrapperTemplateInExpressionAST temp_17 = this ;
    cEnumerator_actualOutputArgumentList enumerator_8868 (temp_17.readProperty_mExpressions (), EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_8954 (var_templateSignature_8280, EnumerationOrder::up) ;
    while (enumerator_8868.hasCurrentObject () && enumerator_8954.hasCurrentObject ()) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8954.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8868.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_18) {
          GALGAS_string temp_19 ;
          const enumGalgasBool test_20 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8954.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_20) {
            temp_19 = enumerator_8954.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          }else if (kBoolFalse == test_20) {
            temp_19 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_9064 = GALGAS_string ("!").add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 217)) ;
          TC_Array <FixItDescription> fixItArray21 ;
          appendFixItActions (fixItArray21, kFixItReplace, var_s_9064) ;
          inCompiler->emitSemanticError (enumerator_8868.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9064, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)), fixItArray21  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 218)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_exp_9551 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_8868.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_8954.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9551, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 220)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8954.current_mFormalArgumentType (HERE), var_exp_9551.readProperty_mResultType (), enumerator_8868.current_mEndOfExpressionLocation (HERE), var_exp_9551, inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 229)) ;
      }
      var_effectiveParameterList_8369.addAssign_operation (var_exp_9551  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 230)) ;
      enumerator_8868.gotoNextObject () ;
      enumerator_8954.gotoNextObject () ;
    }
  }
  const GALGAS_filewrapperTemplateInExpressionAST temp_22 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_23 = this ;
  const GALGAS_filewrapperTemplateInExpressionAST temp_24 = this ;
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::init_21__21__21__21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType (), temp_22.readProperty_mFilewrapperName ().readProperty_location (), temp_23.readProperty_mFilewrapperName ().readProperty_string (), temp_24.readProperty_mFilewrapperTemplateName ().readProperty_string (), var_effectiveParameterList_8369, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_10788 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 260)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_10788 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 261)) ;
  }
  GALGAS_stringlist var_directoryList_10996 ;
  GALGAS_string var_fileName_11024 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_filewrapperInExpressionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mFilewrapperPath ().readProperty_string ().getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 265)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_filewrapperInExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("path is empty"), fixItArray4  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 266)) ;
      var_directoryList_10996.drop () ; // Release error dropped variable
      var_fileName_11024.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_6 = this ;
      test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("expression-filewrapper.galgas", 267)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_filewrapperInExpressionAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the path should not begin with '/'"), fixItArray8  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 268)) ;
        var_directoryList_10996.drop () ; // Release error dropped variable
        var_fileName_11024.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_filewrapperInExpressionAST temp_9 = this ;
      var_directoryList_10996 = temp_9.readProperty_mFilewrapperPath ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 270)) ;
      {
      var_directoryList_10996.setter_popLast (var_fileName_11024, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 271)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_11604 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_11653 ;
  GALGAS_bool var_isInternal_11699 ;
  const GALGAS_filewrapperInExpressionAST temp_10 = this ;
  GALGAS_lstring joker_11569 ; // Joker input parameter
  GALGAS_lstringlist joker_11576 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_11681 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().method_searchKey (temp_10.readProperty_mFilewrapperName (), joker_11569, joker_11576, var_filewrapperFileMap_11604, var_filewrapperDirectoryMap_11653, joker_11681, var_isInternal_11699, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 274)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_isInternal_11699.boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_filewrapperInExpressionAST temp_12 = this ;
      GALGAS_location var_filewrapperDeclarationLocation_11763 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFilewrapperMap ().getter_locationForKey (temp_12.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 285)) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_filewrapperInExpressionAST temp_14 = this ;
        test_13 = GALGAS_bool (ComparisonKind::notEqual, temp_14.readProperty_mFilewrapperName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)).objectCompare (var_filewrapperDeclarationLocation_11763.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 286)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_filewrapperInExpressionAST temp_15 = this ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mFilewrapperName ().readProperty_location (), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_11763.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)), fixItArray16  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 287)) ;
        }
      }
    }
  }
  GALGAS_string var_builtPath_12156 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_11653.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).isValid ()) {
    uint32_t variant_12173 = var_filewrapperDirectoryMap_11653.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 292)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 292)).uintValue () ;
    bool loop_12173 = true ;
    while (loop_12173) {
      loop_12173 = GALGAS_bool (ComparisonKind::greaterThan, var_directoryList_10996.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_12173) {
        loop_12173 = GALGAS_bool (ComparisonKind::greaterThan, var_directoryList_10996.getter_count (SOURCE_FILE ("expression-filewrapper.galgas", 293)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_12173 && (0 == variant_12173)) {
        loop_12173 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-filewrapper.galgas", 292)) ;
      }
      if (loop_12173) {
        variant_12173 -- ;
        GALGAS_string var_directoryName_12288 ;
        {
        var_directoryList_10996.setter_popFirst (var_directoryName_12288, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 294)) ;
        }
        var_builtPath_12156.plusAssign_operation(var_directoryName_12288.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 295)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = var_filewrapperDirectoryMap_11653.getter_hasKey (var_directoryName_12288 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 296)).boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_uint joker_12561 ; // Joker input parameter
            var_filewrapperDirectoryMap_11653.method_searchKey (GALGAS_lstring::init_21__21_ (var_directoryName_12288, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 298)), inCompiler COMMA_HERE), var_filewrapperFileMap_11604, var_filewrapperDirectoryMap_11653, joker_12561, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 297)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_filewrapperInExpressionAST temp_18 = this ;
          const GALGAS_filewrapperInExpressionAST temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_builtPath_12156, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (temp_19.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)), fixItArray20  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 304)) ;
          var_filewrapperFileMap_11604.drop () ; // Release error dropped variable
          var_directoryList_10996 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_12819 ;
  GALGAS_bool var_isTextFile_12841 ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = var_filewrapperFileMap_11604.getter_hasKey (var_fileName_11024 COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_string joker_12972 ; // Joker input parameter
      GALGAS_uint joker_12987 ; // Joker input parameter
      var_filewrapperFileMap_11604.method_searchKey (GALGAS_lstring::init_21__21_ (var_fileName_11024, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)), inCompiler COMMA_HERE), joker_12972, var_isTextFile_12841, joker_12987, var_fileIndex_12819, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 311)) ;
    }
  }
  if (kBoolFalse == test_21) {
    const GALGAS_filewrapperInExpressionAST temp_22 = this ;
    const GALGAS_filewrapperInExpressionAST temp_23 = this ;
    TC_Array <FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("the '").add_operation (var_fileName_11024, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (var_builtPath_12156, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (temp_23.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 314)), fixItArray24  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 313)) ;
    var_fileIndex_12819.drop () ; // Release error dropped variable
    var_isTextFile_12841.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMapEntry temp_25 ;
  const enumGalgasBool test_26 = var_isTextFile_12841.boolEnum () ;
  if (kBoolTrue == test_26) {
    temp_25 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  }else if (kBoolFalse == test_26) {
    temp_25 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("data"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 321)) ;
  }
  const GALGAS_filewrapperInExpressionAST temp_27 = this ;
  const GALGAS_filewrapperInExpressionAST temp_28 = this ;
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::init_21__21__21__21__21_ (temp_25, temp_27.readProperty_mFilewrapperName ().readProperty_location (), temp_28.readProperty_mFilewrapperName ().readProperty_string (), var_fileIndex_12819, var_isTextFile_12841, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 346)) ;
  const GALGAS_filewrapperInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (temp_1.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 347)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperTemplateInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 367)) ;
  GALGAS_stringlist var_parameterList_15289 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_15327 (temp_1.readProperty_mActualOutputParameterList (), EnumerationOrder::up) ;
  while (enumerator_15327.hasCurrentObject ()) {
    GALGAS_string var_parameter_15540 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_15327.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_15540, inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 370)) ;
    var_parameterList_15289.addAssign_operation (var_parameter_15540  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 377)) ;
    enumerator_15327.gotoNextObject () ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_2 = this ;
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (temp_2.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (temp_3.readProperty_mFilewrapperTemplateName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 379)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 380)) ;
  cEnumerator_stringlist enumerator_15822 (var_parameterList_15289, EnumerationOrder::up) ;
  while (enumerator_15822.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_15822.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 382)) ;
    enumerator_15822.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 384)) ;
  }
  const GALGAS_filewrapperTemplateInExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 385)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperStaticPathInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperStaticPathInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_filewrapperStaticPathInExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405))  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 405)) ;
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
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (gWrapperFileContent_").add_operation (temp_4.readProperty_mFilewrapperFileIndex ().getter_string (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (temp_5.readProperty_mFilewrapperName ().getter_identifierRepresentation (SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 407)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 63)) ;
  const GALGAS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 64)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_getterCallExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiver ().ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_getterCallExpressionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 79)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_receiverExpression_4270 ;
  const GALGAS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 85)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_4270, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 82)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_4324 = var_receiverExpression_4270.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_getterCallExpressionAST temp_5 = this ;
    GALGAS_methodKind var_kind_4531 ;
    GALGAS_functionSignature var_getterFormalArgumentTypeList_4549 ;
    GALGAS_location var_unused_0_4587 ;
    GALGAS_bool var_hasCompilerArgument_4608 ;
    GALGAS_unifiedTypeMapEntry var_returnedType_4662 ;
    GALGAS_methodQualifier var_unused_0_4684 ;
    GALGAS_string var_replacementGetter_4699 ;
    const bool optionalResult4475 = extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 93)).readProperty_getterMap ().optional_searchKey (temp_5.readProperty_mGetterName ().readProperty_string (), var_kind_4531, var_getterFormalArgumentTypeList_4549, var_unused_0_4587, var_hasCompilerArgument_4608, var_returnedType_4662, var_unused_0_4684, var_replacementGetter_4699) ;
    if (!optionalResult4475) {
      test_4 = kBoolFalse ;
    }
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        GALGAS_bool test_7 = GALGAS_bool (ComparisonKind::notEqual, var_replacementGetter_4699.objectCompare (GALGAS_string::makeEmptyString ())) ;
        if (kBoolTrue == test_7.boolEnum ()) {
          test_7 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
        }
        test_6 = test_7.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_getterCallExpressionAST temp_8 = this ;
          TC_Array <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_replacementGetter_4699) ;
          inCompiler->emitSemanticError (temp_8.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray9  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 103)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_getterCallExpressionAST temp_11 = this ;
        GALGAS_bool test_12 = temp_11.readProperty_errorOnGetterCallInsteadOfPropertyRead () ;
        if (kBoolTrue == test_12.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_13 = this ;
          test_12 = extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)).readProperty_propertyMap ().getter_hasKey (temp_13.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 106)) ;
        }
        GALGAS_bool test_14 = test_12 ;
        if (kBoolTrue == test_14.boolEnum ()) {
          const GALGAS_getterCallExpressionAST temp_15 = this ;
          test_14 = GALGAS_bool (ComparisonKind::equal, temp_15.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 107)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        }
        test_10 = test_14.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_getterCallExpressionAST temp_16 = this ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray17  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 108)) ;
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        const GALGAS_getterCallExpressionAST temp_19 = this ;
        test_18 = GALGAS_bool (ComparisonKind::notEqual, temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 111)).objectCompare (var_getterFormalArgumentTypeList_4549.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 111)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GALGAS_getterCallExpressionAST temp_20 = this ;
          const GALGAS_getterCallExpressionAST temp_21 = this ;
          const GALGAS_getterCallExpressionAST temp_22 = this ;
          TC_Array <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_21.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (var_getterFormalArgumentTypeList_4549.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 113)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 113)).add_operation (temp_22.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 114)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 113)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 114)), fixItArray23  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 112)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5719 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
        const GALGAS_getterCallExpressionAST temp_24 = this ;
        cEnumerator_actualOutputArgumentList enumerator_5799 (temp_24.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
        cEnumerator_functionSignature enumerator_5904 (var_getterFormalArgumentTypeList_4549, EnumerationOrder::up) ;
        while (enumerator_5799.hasCurrentObject () && enumerator_5904.hasCurrentObject ()) {
          GALGAS_semanticExpressionForGeneration var_exp_6274 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5799.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_5904.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_6274, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 119)) ;
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5904.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5799.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_25) {
              GALGAS_string temp_26 ;
              const enumGalgasBool test_27 = GALGAS_bool (ComparisonKind::notEqual, enumerator_5904.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_27) {
                temp_26 = enumerator_5904.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 129)) ;
              }else if (kBoolFalse == test_27) {
                temp_26 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_6381 = GALGAS_string ("!").add_operation (temp_26, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 129)) ;
              TC_Array <FixItDescription> fixItArray28 ;
              appendFixItActions (fixItArray28, kFixItReplace, var_s_6381) ;
              inCompiler->emitSemanticError (enumerator_5799.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_6381, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)), fixItArray28  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 130)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_5904.current_mFormalArgumentType (HERE), var_exp_6274.readProperty_mResultType (), enumerator_5799.current_mEndOfExpressionLocation (HERE), var_exp_6274, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 132)) ;
          }
          var_constructorEffectiveParameterList_5719.addAssign_operation (var_exp_6274  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 133)) ;
          enumerator_5799.gotoNextObject () ;
          enumerator_5904.gotoNextObject () ;
        }
        const GALGAS_getterCallExpressionAST temp_29 = this ;
        GALGAS_string temp_30 ;
        const enumGalgasBool test_31 = GALGAS_bool (ComparisonKind::equal, var_replacementGetter_4699.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_31) {
          const GALGAS_getterCallExpressionAST temp_32 = this ;
          temp_30 = temp_32.readProperty_mGetterName ().readProperty_string () ;
        }else if (kBoolFalse == test_31) {
          temp_30 = var_replacementGetter_4699 ;
        }
        outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4662, temp_29.readProperty_mGetterName ().readProperty_location (), var_kind_4531, var_receiverExpression_4270, GALGAS_stringlist::init (inCompiler COMMA_HERE), temp_30, var_constructorEffectiveParameterList_5719, var_hasCompilerArgument_4608, inCompiler COMMA_HERE) ;
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          GALGAS_bool test_34 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_galgas_34_ () ;
          if (kBoolTrue == test_34.boolEnum ()) {
            const GALGAS_getterCallExpressionAST temp_35 = this ;
            test_34 = GALGAS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 146)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
          }
          GALGAS_bool test_36 = test_34 ;
          if (kBoolTrue == test_36.boolEnum ()) {
            test_36 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOnGetterCallWithNoArgument.readProperty_value ()) ;
          }
          test_33 = test_36.boolEnum () ;
          if (kBoolTrue == test_33) {
            const GALGAS_getterCallExpressionAST temp_37 = this ;
            TC_Array <FixItDescription> fixItArray38 ;
            fixItArray38.appendObject (FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GALGAS_string ("getter with no argument, remove parenthesis"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 148)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      const GALGAS_getterCallExpressionAST temp_40 = this ;
      test_39 = GALGAS_bool (ComparisonKind::equal, temp_40.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_39) {
        const GALGAS_getterCallExpressionAST temp_41 = this ;
        GALGAS_AccessControl var_accessControl_7663 ;
        GALGAS_bool var_unused_0_7678 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_7685 ;
        const bool optionalResult7623 = extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 152)).readProperty_propertyMap ().optional_searchKey (temp_41.readProperty_mGetterName ().readProperty_string (), var_accessControl_7663, var_unused_0_7678, var_propertyType_7685) ;
        if (!optionalResult7623) {
          test_39 = kBoolFalse ;
        }
        if (kBoolTrue == test_39) {
          const GALGAS_getterCallExpressionAST temp_42 = this ;
          extensionMethod_checkGetAccess (var_accessControl_7663, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_42.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 153)) ;
          const GALGAS_getterCallExpressionAST temp_43 = this ;
          const GALGAS_getterCallExpressionAST temp_44 = this ;
          outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::init_21__21__21__21_ (var_propertyType_7685, temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4270, temp_44.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE) ;
          enumGalgasBool test_45 = kBoolTrue ;
          if (kBoolTrue == test_45) {
            const GALGAS_getterCallExpressionAST temp_46 = this ;
            test_45 = temp_46.readProperty_errorOnGetterCallInsteadOfPropertyRead ().boolEnum () ;
            if (kBoolTrue == test_45) {
              const GALGAS_getterCallExpressionAST temp_47 = this ;
              TC_Array <FixItDescription> fixItArray48 ;
              inCompiler->emitSemanticError (temp_47.readProperty_mExpressionLocation (), GALGAS_string ("property getter call (due to '--error-property-getter-call' option)"), fixItArray48  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 161)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_39) {
      GALGAS_uint var_matchingReaderCount_8330 = GALGAS_uint (uint32_t (0U)) ;
      enumGalgasBool test_49 = kBoolTrue ;
      if (kBoolTrue == test_49) {
        test_49 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 166)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas", 166)))).boolEnum () ;
        if (kBoolTrue == test_49) {
          GALGAS_functionSignature var_getterFormalArgumentTypeList_8449 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
          GALGAS_bool var_hasCompilerArgument_8495 = GALGAS_bool (true) ;
          GALGAS_unifiedTypeMapEntry var_returnedType_8534 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas", 169)) ;
          GALGAS_methodKind var_kind_8587 = GALGAS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas", 170)) ;
          GALGAS_stringlist var_fieldList_8649 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
          GALGAS_string var_obsoletedByGetter_8676 = GALGAS_string::makeEmptyString () ;
          cEnumerator_typedPropertyList enumerator_8744 (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 173)).readProperty_currentTypedPropertyList (), EnumerationOrder::up) ;
          while (enumerator_8744.hasCurrentObject ()) {
            GALGAS_unifiedTypeMapEntry var_propertyType_8818 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (extensionGetter_definition (enumerator_8744.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 174)).readProperty_typeName ().readProperty_string (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 174)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 174)) ;
            GALGAS_getterMap var_aMap_8943 = extensionGetter_definition (var_propertyType_8818, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 175)).readProperty_getterMap () ;
            const GALGAS_getterCallExpressionAST temp_50 = this ;
            const cMapElement_getterMap * objectArray_8996 = (const cMapElement_getterMap *) var_aMap_8943.readAccessForWithInstruction (temp_50.readProperty_mGetterName ().readProperty_string ()) ;
            if (nullptr != objectArray_8996) {
                macroValidSharedObject (objectArray_8996, cMapElement_getterMap) ;
              enumGalgasBool test_51 = kBoolTrue ;
              if (kBoolTrue == test_51) {
                test_51 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_propertyType_8818, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 177)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_8744.current_name (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_51) {
                  var_matchingReaderCount_8330.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 178)) ;
                  var_getterFormalArgumentTypeList_8449 = objectArray_8996->mProperty_mArgumentTypeList ;
                  var_hasCompilerArgument_8495 = objectArray_8996->mProperty_mHasCompilerArgument ;
                  var_returnedType_8534 = objectArray_8996->mProperty_mReturnedType ;
                  const GALGAS_getterCallExpressionAST temp_52 = this ;
                  var_receiverExpression_4270 = GALGAS_structPropertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_8534, temp_52.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_4270, enumerator_8744.current_name (HERE).readProperty_string (), inCompiler COMMA_HERE) ;
                  var_kind_8587 = objectArray_8996->mProperty_mKind ;
                  var_obsoletedByGetter_8676 = objectArray_8996->mProperty_mGetterNameThatObsoletesInvokationName ;
                }
              }
            }
            enumerator_8744.gotoNextObject () ;
          }
          enumGalgasBool test_53 = kBoolTrue ;
          if (kBoolTrue == test_53) {
            test_53 = GALGAS_bool (ComparisonKind::equal, var_matchingReaderCount_8330.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_53) {
              const GALGAS_getterCallExpressionAST temp_54 = this ;
              const GALGAS_getterCallExpressionAST temp_55 = this ;
              TC_Array <FixItDescription> fixItArray56 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 195)), fixItArray56  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 194)) ;
              var_getterFormalArgumentTypeList_8449.drop () ; // Release error dropped variable
              var_hasCompilerArgument_8495.drop () ; // Release error dropped variable
              var_returnedType_8534.drop () ; // Release error dropped variable
              var_kind_8587.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_53) {
            enumGalgasBool test_57 = kBoolTrue ;
            if (kBoolTrue == test_57) {
              test_57 = GALGAS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_8330.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_57) {
                GALGAS_string var_s_10118 = GALGAS_string::makeEmptyString () ;
                cEnumerator_stringlist enumerator_10140 (var_fieldList_8649, EnumerationOrder::up) ;
                while (enumerator_10140.hasCurrentObject ()) {
                  var_s_10118.plusAssign_operation(enumerator_10140.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 201)) ;
                  if (enumerator_10140.hasNextObject ()) {
                    var_s_10118.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 202)) ;
                  }
                  enumerator_10140.gotoNextObject () ;
                }
                const GALGAS_getterCallExpressionAST temp_58 = this ;
                const GALGAS_getterCallExpressionAST temp_59 = this ;
                TC_Array <FixItDescription> fixItArray60 ;
                inCompiler->emitSemanticError (temp_58.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (temp_59.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 205)).add_operation (var_s_10118, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 206)), fixItArray60  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 204)) ;
                var_getterFormalArgumentTypeList_8449.drop () ; // Release error dropped variable
                var_hasCompilerArgument_8495.drop () ; // Release error dropped variable
                var_returnedType_8534.drop () ; // Release error dropped variable
                var_kind_8587.drop () ; // Release error dropped variable
              }
            }
          }
          enumGalgasBool test_61 = kBoolTrue ;
          if (kBoolTrue == test_61) {
            const GALGAS_getterCallExpressionAST temp_62 = this ;
            test_61 = GALGAS_bool (ComparisonKind::notEqual, temp_62.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 210)).objectCompare (var_getterFormalArgumentTypeList_8449.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 210)))).boolEnum () ;
            if (kBoolTrue == test_61) {
              const GALGAS_getterCallExpressionAST temp_63 = this ;
              const GALGAS_getterCallExpressionAST temp_64 = this ;
              const GALGAS_getterCallExpressionAST temp_65 = this ;
              TC_Array <FixItDescription> fixItArray66 ;
              inCompiler->emitSemanticError (temp_63.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("calling the '").add_operation (temp_64.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (var_getterFormalArgumentTypeList_8449.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 212)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).add_operation (temp_65.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 213)).getter_string (SOURCE_FILE ("expression-getter-call.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 212)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 213)), fixItArray66  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 211)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_61) {
            GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_11114 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
            const GALGAS_getterCallExpressionAST temp_67 = this ;
            cEnumerator_actualOutputArgumentList enumerator_11196 (temp_67.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
            cEnumerator_functionSignature enumerator_11303 (var_getterFormalArgumentTypeList_8449, EnumerationOrder::up) ;
            while (enumerator_11196.hasCurrentObject () && enumerator_11303.hasCurrentObject ()) {
              GALGAS_semanticExpressionForGeneration var_exp_11689 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_11196.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_11303.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11689, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 218)) ;
              enumGalgasBool test_68 = kBoolTrue ;
              if (kBoolTrue == test_68) {
                test_68 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11303.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_11196.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_68) {
                  GALGAS_string temp_69 ;
                  const enumGalgasBool test_70 = GALGAS_bool (ComparisonKind::notEqual, enumerator_11303.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_70) {
                    temp_69 = enumerator_11303.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
                  }else if (kBoolFalse == test_70) {
                    temp_69 = GALGAS_string::makeEmptyString () ;
                  }
                  GALGAS_string var_s_11802 = GALGAS_string ("!").add_operation (temp_69, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 228)) ;
                  TC_Array <FixItDescription> fixItArray71 ;
                  appendFixItActions (fixItArray71, kFixItReplace, var_s_11802) ;
                  inCompiler->emitSemanticError (enumerator_11196.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11802, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)), fixItArray71  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 229)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_11303.current_mFormalArgumentType (HERE), var_exp_11689.readProperty_mResultType (), enumerator_11196.current_mEndOfExpressionLocation (HERE), var_exp_11689, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 231)) ;
              }
              var_constructorEffectiveParameterList_11114.addAssign_operation (var_exp_11689  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 232)) ;
              enumerator_11196.gotoNextObject () ;
              enumerator_11303.gotoNextObject () ;
            }
            enumGalgasBool test_72 = kBoolTrue ;
            if (kBoolTrue == test_72) {
              GALGAS_bool test_73 = GALGAS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_8676.objectCompare (GALGAS_string::makeEmptyString ())) ;
              if (kBoolTrue == test_73.boolEnum ()) {
                test_73 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorObsoleteGetterCall.readProperty_value ()) ;
              }
              test_72 = test_73.boolEnum () ;
              if (kBoolTrue == test_72) {
                const GALGAS_getterCallExpressionAST temp_74 = this ;
                TC_Array <FixItDescription> fixItArray75 ;
                appendFixItActions (fixItArray75, kFixItReplace, var_obsoletedByGetter_8676) ;
                inCompiler->emitSemanticError (temp_74.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("obsolete getter"), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 235)) ;
              }
            }
            const GALGAS_getterCallExpressionAST temp_76 = this ;
            GALGAS_string temp_77 ;
            const enumGalgasBool test_78 = GALGAS_bool (ComparisonKind::equal, var_obsoletedByGetter_8676.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_78) {
              const GALGAS_getterCallExpressionAST temp_79 = this ;
              temp_77 = temp_79.readProperty_mGetterName ().readProperty_string () ;
            }else if (kBoolFalse == test_78) {
              temp_77 = var_obsoletedByGetter_8676 ;
            }
            outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_8534, temp_76.readProperty_mGetterName ().readProperty_location (), var_kind_8587, var_receiverExpression_4270, var_fieldList_8649, temp_77, var_constructorEffectiveParameterList_11114, var_hasCompilerArgument_8495, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (kBoolFalse == test_49) {
        enumGalgasBool test_80 = kBoolTrue ;
        if (kBoolTrue == test_80) {
          test_80 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 248)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas", 248)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_80) {
            const GALGAS_getterCallExpressionAST temp_81 = this ;
            TC_Array <FixItDescription> fixItArray82 ;
            inCompiler->emitSemanticError (temp_81.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 250)), fixItArray82  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 249)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_80) {
          const GALGAS_getterCallExpressionAST temp_83 = this ;
          const GALGAS_getterCallExpressionAST temp_84 = this ;
          TC_Array <FixItDescription> fixItArray85 ;
          appendFixItActions (fixItArray85, kFixItReplace, extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 256)).readProperty_getterMap ().getter_keyList (SOURCE_FILE ("expression-getter-call.galgas", 256))) ;
          inCompiler->emitSemanticError (temp_83.readProperty_mGetterName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_4324, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).add_operation (temp_84.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 254)), fixItArray85  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 253)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@getterCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 287)) ;
  GALGAS_string var_receiverCppName_14607 ;
  const GALGAS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_14607, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 289)) ;
  GALGAS_stringlist var_getterArgumentCppNameList_14672 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_getterCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_14712 (temp_2.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_14712.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_14930 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_14712.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_14930, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 299)) ;
    var_getterArgumentCppNameList_14672.addAssign_operation (var_argumentCppName_14930  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 306)) ;
    enumerator_14712.gotoNextObject () ;
  }
  const GALGAS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_getterCallExpressionForGeneration temp_4 = this ;
      GALGAS_unifiedTypeMapEntry var_baseType_15125 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_15125, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 312)) ;
      GALGAS_bool var_searching_15240 = GALGAS_bool (true) ;
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 314)).isValid ()) {
        uint32_t variant_15263 = GALGAS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas", 314)).uintValue () ;
        bool loop_15263 = true ;
        while (loop_15263) {
          loop_15263 = var_searching_15240.isValid () ;
          if (loop_15263) {
            loop_15263 = var_searching_15240.boolValue () ;
          }
          if (loop_15263 && (0 == variant_15263)) {
            loop_15263 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas", 314)) ;
          }
          if (loop_15263) {
            variant_15263 -- ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_15125, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 315)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas", 315)).operator_not (SOURCE_FILE ("expression-getter-call.galgas", 315)).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  const GALGAS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_15125, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 316)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 316)).readProperty_getterMap ().getter_hasKey (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas", 316)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    var_baseType_15125 = extensionGetter_definition (var_baseType_15125, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 317)).readProperty_superType () ;
                  }
                }
                if (kBoolFalse == test_6) {
                  var_searching_15240 = GALGAS_bool (false) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              var_searching_15240 = GALGAS_bool (false) ;
            }
          }
        }
      }
      const GALGAS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (extensionGetter_definition (var_baseType_15125, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325))  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 325)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_14607 COMMA_SOURCE_FILE ("expression-getter-call.galgas", 326)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 327)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas", 327)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_getterCallExpressionForGeneration temp_11 = this ;
          const GALGAS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GALGAS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 328)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (var_receiverCppName_14607, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 329)) ;
        }
      }
      if (kBoolFalse == test_9) {
        const GALGAS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 331)) ;
        const GALGAS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GALGAS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).add_operation (var_receiverCppName_14607, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 332)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_14607 ;
      const GALGAS_getterCallExpressionForGeneration temp_15 = this ;
      cEnumerator_stringlist enumerator_16477 (temp_15.readProperty_mFieldList (), EnumerationOrder::up) ;
      while (enumerator_16477.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".readProperty_").add_operation (enumerator_16477.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 337)) ;
        enumerator_16477.gotoNextObject () ;
      }
      const GALGAS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 339)) ;
      const GALGAS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 340)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_16774 (var_getterArgumentCppNameList_14672, EnumerationOrder::up) ;
  while (enumerator_16774.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_16774.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 343)) ;
    if (enumerator_16774.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 344)) ;
    }
    enumerator_16774.gotoNextObject () ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_14672.getter_count (SOURCE_FILE ("expression-getter-call.galgas", 346)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_18) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 348)) ;
          }
          outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 349)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 352)) COMMA_SOURCE_FILE ("expression-getter-call.galgas", 352)) ;
        }
        outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 353)) ;
      }
    }
    if (kBoolFalse == test_21) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 355)) ;
    }
  }
  const GALGAS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 357)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 357)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 357)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_initializerCallAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_initializerCallAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_6553 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_6553, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 187)) ;
      }
    }
  }
  const GALGAS_initializerCallAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 189)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_instanciedType_7573 ;
  GALGAS_lstring var_initializerName_7608 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_7672 ;
  {
  const GALGAS_initializerCallAST temp_0 = this ;
  const GALGAS_initializerCallAST temp_1 = this ;
  const GALGAS_initializerCallAST temp_2 = this ;
  routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mExpressions (), temp_2.readProperty_mEndOfExpressions (), var_instanciedType_7573, var_initializerName_7608, var_constructorEffectiveParameterList_7672, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 202)) ;
  }
  const GALGAS_initializerCallAST temp_3 = this ;
  outArgument_outExpression = GALGAS_initializerCallForGeneration::init_21__21__21__21_ (var_instanciedType_7573, temp_3.readProperty_mEndOfExpressions (), var_initializerName_7608.readProperty_string (), var_constructorEffectiveParameterList_7672, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInitializerInvocation?&??&&???!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInitializerInvocation_3F__26__3F__3F__26__26__3F__3F__3F__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                           const GALGAS_lstring constinArgument_inTypeName,
                                                                                           const GALGAS_actualOutputArgumentList constinArgument_inInvocationArguments,
                                                                                           const GALGAS_location constinArgument_inEndOfExpressions,
                                                                                           GALGAS_unifiedTypeMapEntry & outArgument_outInstanciedType,
                                                                                           GALGAS_lstring & outArgument_outInitializerName,
                                                                                           GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanciedType.drop () ; // Release 'out' argument
  outArgument_outInitializerName.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outInstanciedType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstanciedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 251)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outInstanciedType.getter_isNull (SOURCE_FILE ("expression-initializer.galgas", 253)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-initializer.galgas", 254)) ;
      outArgument_outInstanciedType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outInitializerName.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_unifiedTypeDefinition var_instanciedTypeDefinition_9514 = extensionGetter_definition (outArgument_outInstanciedType, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 258)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_instanciedTypeDefinition_9514.readProperty_isConcrete ().operator_not (SOURCE_FILE ("expression-initializer.galgas", 259)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot instanciate an abstract class"), fixItArray4  COMMA_SOURCE_FILE ("expression-initializer.galgas", 260)) ;
        outArgument_outInstanciedType.drop () ; // Release error dropped variable
        outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
        outArgument_outInitializerName.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      outArgument_outInitializerName = GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (constinArgument_inInvocationArguments, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 265)), constinArgument_inEndOfExpressions, inCompiler COMMA_HERE) ;
      GALGAS_initializerMap var_initializerMap_9926 = var_instanciedTypeDefinition_9514.readProperty_initializerMap () ;
      GALGAS_functionSignature var_formalSignature_10012 ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_initializerMap_9926.getter_hasKey (outArgument_outInitializerName.readProperty_string () COMMA_SOURCE_FILE ("expression-initializer.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_initializerMap_9926.method_searchKey (outArgument_outInitializerName, var_formalSignature_10012, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 269)) ;
        }
      }
      if (kBoolFalse == test_5) {
        GALGAS_string var_s_10181 = GALGAS_string ("@").add_operation (var_instanciedTypeDefinition_9514.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 271)).add_operation (GALGAS_string (".init("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 271)) ;
        cEnumerator_actualOutputArgumentList enumerator_10261 (constinArgument_inInvocationArguments, EnumerationOrder::up) ;
        while (enumerator_10261.hasCurrentObject ()) {
          var_s_10181.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 274)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10261.current (HERE).readProperty_mActualSelector ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_s_10181.plusAssign_operation(enumerator_10261.current (HERE).readProperty_mActualSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 276)) ;
            }
          }
          if (enumerator_10261.hasNextObject ()) {
            var_s_10181.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 279)) ;
          }
          enumerator_10261.gotoNextObject () ;
        }
        var_s_10181.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 281)) ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (outArgument_outInitializerName.readProperty_location (), GALGAS_string ("the ").add_operation (var_s_10181, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 283)).add_operation (GALGAS_string (" initializer is not declared"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 283)), fixItArray7  COMMA_SOURCE_FILE ("expression-initializer.galgas", 282)) ;
        var_formalSignature_10012.drop () ; // Release error dropped variable
      }
      outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      cEnumerator_actualOutputArgumentList enumerator_10735 (constinArgument_inInvocationArguments, EnumerationOrder::up) ;
      cEnumerator_functionSignature enumerator_10781 (var_formalSignature_10012, EnumerationOrder::up) ;
      while (enumerator_10735.hasCurrentObject () && enumerator_10781.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_exp_11145 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10735.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10781.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_11145, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 290)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10781.current (HERE).readProperty_mFormalArgumentType (), var_exp_11145.readProperty_mResultType (), enumerator_10735.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_11145, inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 299)) ;
        }
        outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_11145  COMMA_SOURCE_FILE ("expression-initializer.galgas", 305)) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10781.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10735.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_string temp_9 ;
            const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10781.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              temp_9 = enumerator_10781.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 308)) ;
            }else if (kBoolFalse == test_10) {
              temp_9 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_11529 = GALGAS_string ("!").add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 307)) ;
            TC_Array <FixItDescription> fixItArray11 ;
            appendFixItActions (fixItArray11, kFixItReplace, var_s_11529) ;
            inCompiler->emitSemanticError (enumerator_10735.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11529, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 312)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 312)), fixItArray11  COMMA_SOURCE_FILE ("expression-initializer.galgas", 311)) ;
          }
        }
        enumerator_10735.gotoNextObject () ;
        enumerator_10781.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@initializerCallForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_initializerCallForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_initializerCallForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 334)) ;
  GALGAS_stringlist var_parameterList_12752 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_initializerCallForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12780 (temp_1.readProperty_mEffectiveParameterList (), EnumerationOrder::up) ;
  while (enumerator_12780.hasCurrentObject ()) {
    GALGAS_string var_parameter_13010 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12780.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13010, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 337)) ;
    var_parameterList_12752.addAssign_operation (var_parameter_13010  COMMA_SOURCE_FILE ("expression-initializer.galgas", 344)) ;
    enumerator_12780.gotoNextObject () ;
  }
  const GALGAS_initializerCallForGeneration temp_2 = this ;
  const GALGAS_initializerCallForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 346)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 346)).add_operation (temp_3.readProperty_initializerName ().getter_identifierRepresentation (SOURCE_FILE ("expression-initializer.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 347)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 347)) ;
  cEnumerator_stringlist enumerator_13265 (var_parameterList_12752, EnumerationOrder::up) ;
  while (enumerator_13265.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_13265.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 350)) ;
    enumerator_13265.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 352)) COMMA_SOURCE_FILE ("expression-initializer.galgas", 352)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 353)), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 353)) ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" COMMA_HERE)"), inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 354)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classFuncExpressionAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_classFuncExpressionAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_4604 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), joker_4604, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 125)) ;
      }
    }
  }
  const GALGAS_classFuncExpressionAST temp_3 = this ;
  extensionMethod_enterInSemanticContext (temp_3.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 127)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_returnedType_5545 ;
  GALGAS_unifiedTypeMapEntry var_constructorType_5590 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_5654 ;
  GALGAS_bool var_hasCompilerArgument_5705 ;
  {
  const GALGAS_classFuncExpressionAST temp_0 = this ;
  const GALGAS_classFuncExpressionAST temp_1 = this ;
  const GALGAS_classFuncExpressionAST temp_2 = this ;
  const GALGAS_classFuncExpressionAST temp_3 = this ;
  routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, temp_0.readProperty_mTypeName (), temp_1.readProperty_mConstructorName (), temp_2.readProperty_mExpressions (), temp_3.readProperty_locationForOldStyleCollectionInitializerError (), var_returnedType_5545, var_constructorType_5590, var_constructorEffectiveParameterList_5654, var_hasCompilerArgument_5705, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 141)) ;
  }
  const GALGAS_classFuncExpressionAST temp_4 = this ;
  GALGAS_lstring var_constructorTypeUsefulnessName_5739 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (extensionGetter_definition (var_constructorType_5590, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 157)).readProperty_typeName ().readProperty_string (), temp_4.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 157)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_5739 COMMA_SOURCE_FILE ("expression-constructor.galgas", 158)) ;
  }
  const GALGAS_classFuncExpressionAST temp_5 = this ;
  GALGAS_lstring var_returnedTypeUsefulnessName_5981 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (extensionGetter_definition (var_returnedType_5545, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 159)).readProperty_typeName ().readProperty_string (), temp_5.readProperty_mTypeName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 159)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_5981 COMMA_SOURCE_FILE ("expression-constructor.galgas", 160)) ;
  }
  const GALGAS_classFuncExpressionAST temp_6 = this ;
  const GALGAS_classFuncExpressionAST temp_7 = this ;
  outArgument_outExpression = GALGAS_classFuncExpressionForGeneration::init_21__21__21__21__21__21_ (var_returnedType_5545, temp_6.readProperty_mConstructorName ().readProperty_location (), var_constructorType_5590, temp_7.readProperty_mConstructorName ().readProperty_string (), var_constructorEffectiveParameterList_5654, var_hasCompilerArgument_5705, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeConstructorInvocation?&??&&????!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeConstructorInvocation_3F__26__3F__3F__26__26__3F__3F__3F__3F__21__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   const GALGAS_lstring constinArgument_inTypeName,
                                                                                                   const GALGAS_lstring constinArgument_inConstructorName,
                                                                                                   const GALGAS_actualOutputArgumentList constinArgument_inInitializerEffectiveParameterExpressions,
                                                                                                   const GALGAS_location constinArgument_inLocationForOldStyleCollectionInitializerError,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                                   GALGAS_unifiedTypeMapEntry & outArgument_outConstructorType,
                                                                                                   GALGAS_semanticExpressionListForGeneration & outArgument_outConstructorEffectiveParameterList,
                                                                                                   GALGAS_bool & outArgument_outHasCompilerArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outConstructorType.drop () ; // Release 'out' argument
  outArgument_outConstructorEffectiveParameterList.drop () ; // Release 'out' argument
  outArgument_outHasCompilerArgument.drop () ; // Release 'out' argument
  outArgument_outConstructorType = constinArgument_inType ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outConstructorType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 194)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outConstructorType.getter_isNull (SOURCE_FILE ("expression-constructor.galgas", 196)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("expression-constructor.galgas", 197)) ;
      outArgument_outReturnedType.drop () ; // Release error dropped variable
      outArgument_outConstructorType.drop () ; // Release error dropped variable
      outArgument_outConstructorEffectiveParameterList.drop () ; // Release error dropped variable
      outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_classFunctionMap var_classFunctionMap_8000 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 202)).readProperty_classFunctionMap () ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      GALGAS_bool test_4 = GALGAS_bool (ComparisonKind::equal, constinArgument_inConstructorName.readProperty_string ().objectCompare (GALGAS_string ("new"))) ;
      if (kBoolTrue == test_4.boolEnum ()) {
        test_4 = GALGAS_bool (ComparisonKind::equal, extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 204)).readProperty_typeKind ().objectCompare (GALGAS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-constructor.galgas", 204)))) ;
      }
      test_3 = test_4.boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_initializerSignature_8213 = extensionGetter_initializerSignature (constinArgument_inInitializerEffectiveParameterExpressions, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 205)) ;
        GALGAS_initializerMap var_initializerMap_8312 = extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 206)).readProperty_initializerMap () ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = var_initializerMap_8312.getter_hasKey (var_initializerSignature_8213 COMMA_SOURCE_FILE ("expression-constructor.galgas", 207)).operator_not (SOURCE_FILE ("expression-constructor.galgas", 207)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticWarning (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("initializer @").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 209)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 209)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 209)).add_operation (var_initializerSignature_8213, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 210)).add_operation (GALGAS_string (" does not exist"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 210)), fixItArray6  COMMA_SOURCE_FILE ("expression-constructor.galgas", 208)) ;
          }
        }
      }
    }
    GALGAS_functionSignature var_constructorFormalArgumentTypeList_8670 ;
    const cMapElement_classFunctionMap * objectArray_8708 = (const cMapElement_classFunctionMap *) var_classFunctionMap_8000.readAccessForWithInstruction (constinArgument_inConstructorName.readProperty_string ()) ;
    if (nullptr != objectArray_8708) {
        macroValidSharedObject (objectArray_8708, cMapElement_classFunctionMap) ;
      var_constructorFormalArgumentTypeList_8670 = objectArray_8708->mProperty_mArgumentTypeList ;
      outArgument_outHasCompilerArgument = objectArray_8708->mProperty_mHasCompilerArgument ;
      outArgument_outReturnedType = objectArray_8708->mProperty_mReturnedType ;
    }else{
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (ComparisonKind::equal, var_classFunctionMap_8000.getter_count (SOURCE_FILE ("expression-constructor.galgas", 220)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 222)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 222)).add_operation (GALGAS_string ("' type does not define any constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 222)), fixItArray8  COMMA_SOURCE_FILE ("expression-constructor.galgas", 221)) ;
          var_constructorFormalArgumentTypeList_8670.drop () ; // Release error dropped variable
          outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
          outArgument_outReturnedType.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <FixItDescription> fixItArray9 ;
        appendFixItActions (fixItArray9, kFixItReplace, var_classFunctionMap_8000.getter_keyList (SOURCE_FILE ("expression-constructor.galgas", 230))) ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 227)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 227)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 227)).add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 228)).add_operation (GALGAS_string ("' constructor"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 228)), fixItArray9  COMMA_SOURCE_FILE ("expression-constructor.galgas", 226)) ;
        var_constructorFormalArgumentTypeList_8670.drop () ; // Release error dropped variable
        outArgument_outHasCompilerArgument.drop () ; // Release error dropped variable
        outArgument_outReturnedType.drop () ; // Release error dropped variable
      }
    }
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 234)).objectCompare (var_constructorFormalArgumentTypeList_8670.getter_count (SOURCE_FILE ("expression-constructor.galgas", 234)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inConstructorName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 236)).add_operation (GALGAS_string ("' constructor of '@"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 236)).add_operation (extensionGetter_definition (outArgument_outConstructorType, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 237)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 236)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 237)).add_operation (var_constructorFormalArgumentTypeList_8670.getter_count (SOURCE_FILE ("expression-constructor.galgas", 238)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 237)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 238)).add_operation (constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 239)).getter_string (SOURCE_FILE ("expression-constructor.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 238)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 239)), fixItArray11  COMMA_SOURCE_FILE ("expression-constructor.galgas", 235)) ;
      }
    }
    outArgument_outConstructorEffectiveParameterList = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    cEnumerator_actualOutputArgumentList enumerator_10121 (constinArgument_inInitializerEffectiveParameterExpressions, EnumerationOrder::up) ;
    cEnumerator_functionSignature enumerator_10186 (var_constructorFormalArgumentTypeList_8670, EnumerationOrder::up) ;
    while (enumerator_10121.hasCurrentObject () && enumerator_10186.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_10552 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10121.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10186.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_10552, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 244)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_10186.current (HERE).readProperty_mFormalArgumentType (), var_exp_10552.readProperty_mResultType (), enumerator_10121.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_10552, inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 253)) ;
      }
      outArgument_outConstructorEffectiveParameterList.addAssign_operation (var_exp_10552  COMMA_SOURCE_FILE ("expression-constructor.galgas", 259)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10186.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_10121.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (ComparisonKind::notEqual, enumerator_10186.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = enumerator_10186.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 262)) ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_10916 = GALGAS_string ("!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 261)) ;
          TC_Array <FixItDescription> fixItArray15 ;
          appendFixItActions (fixItArray15, kFixItReplace, var_s_10916) ;
          inCompiler->emitSemanticError (enumerator_10121.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_10916, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 266)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 266)), fixItArray15  COMMA_SOURCE_FILE ("expression-constructor.galgas", 265)) ;
        }
      }
      enumerator_10121.gotoNextObject () ;
      enumerator_10186.gotoNextObject () ;
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    GALGAS_bool test_17 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorOldStyleCollectionInitializer.readProperty_value ()) ;
    if (kBoolTrue == test_17.boolEnum ()) {
      test_17 = GALGAS_bool (ComparisonKind::equal, constinArgument_inInitializerEffectiveParameterExpressions.getter_count (SOURCE_FILE ("expression-constructor.galgas", 272)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    }
    test_16 = test_17.boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_stringset temp_18 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 273)) ;
      temp_18.enterElement (GALGAS_string ("emptyList"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 273)) ;
      temp_18.enterElement (GALGAS_string ("emptyMap"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 273)) ;
      temp_18.enterElement (GALGAS_string ("emptySortedList"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 273)) ;
      temp_18.enterElement (GALGAS_string ("emptyDict"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 273)) ;
      GALGAS_stringset var_oldCollectionInitializers_11351 = temp_18 ;
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_oldCollectionInitializers_11351.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-constructor.galgas", 274)).boolEnum () ;
        if (kBoolTrue == test_19) {
          TC_Array <FixItDescription> fixItArray20 ;
          appendFixItActions (fixItArray20, kFixItReplace, GALGAS_string (" ()")) ;
          inCompiler->emitSemanticError (constinArgument_inLocationForOldStyleCollectionInitializerError, GALGAS_string ("old style collection initializer call (due to '--error-old-syle-collection-initializer' option)"), fixItArray20  COMMA_SOURCE_FILE ("expression-constructor.galgas", 275)) ;
        }
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorUsingNewInsteadOfInit.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_21) {
      GALGAS_stringset temp_22 = GALGAS_stringset::init (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 281)) ;
      temp_22.enterElement (GALGAS_string ("emptyGraph"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 281)) ;
      temp_22.enterElement (GALGAS_string ("new"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 281)) ;
      GALGAS_stringset var_oldInitializers_11811 = temp_22 ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        test_23 = var_oldInitializers_11811.getter_hasKey (constinArgument_inConstructorName.readProperty_string () COMMA_SOURCE_FILE ("expression-constructor.galgas", 282)).boolEnum () ;
        if (kBoolTrue == test_23) {
          TC_Array <FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (constinArgument_inConstructorName.readProperty_location (), GALGAS_string ("old style constructor, use initializer '.init (...)'"), fixItArray24  COMMA_SOURCE_FILE ("expression-constructor.galgas", 283)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classFuncExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       GALGAS_string & outArgument_outCppExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classFuncExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 307)) ;
  GALGAS_stringlist var_parameterList_12929 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_classFuncExpressionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_12957 (temp_1.readProperty_mEffectiveParameterList (), EnumerationOrder::up) ;
  while (enumerator_12957.hasCurrentObject ()) {
    GALGAS_string var_parameter_13187 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12957.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_13187, inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 310)) ;
    var_parameterList_12929.addAssign_operation (var_parameter_13187  COMMA_SOURCE_FILE ("expression-constructor.galgas", 317)) ;
    enumerator_12957.gotoNextObject () ;
  }
  const GALGAS_classFuncExpressionForGeneration temp_2 = this ;
  const GALGAS_classFuncExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mConstructorType (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 319)).add_operation (GALGAS_string ("::class_func_"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 319)).add_operation (temp_3.readProperty_mConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("expression-constructor.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 320)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 320)) ;
  cEnumerator_stringlist enumerator_13459 (var_parameterList_12929, EnumerationOrder::up) ;
  while (enumerator_13459.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_13459.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 323)) ;
    if (enumerator_13459.hasNextObject ()) {
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 324)) ;
    }
    enumerator_13459.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma_13581 = GALGAS_bool (ComparisonKind::greaterThan, var_parameterList_12929.getter_count (SOURCE_FILE ("expression-constructor.galgas", 326)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classFuncExpressionForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needsComma_13581.boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outCppExpression.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 329)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 331)) COMMA_SOURCE_FILE ("expression-constructor.galgas", 331)) ;
      }
      outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 332)) ;
      var_needsComma_13581 = GALGAS_bool (true) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_needsComma_13581.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_classFuncExpressionForGeneration temp_8 = this ;
      outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 336)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 336)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_classFuncExpressionForGeneration temp_9 = this ;
    outArgument_outCppExpression.plusAssign_operation(extensionGetter_sourceFile (temp_9.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 338)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-constructor.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 338)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  cEnumerator_actualOutputArgumentList enumerator_4491 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_4491.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4491.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 110)) ;
    enumerator_4491.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_5154 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 125)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_5154 COMMA_SOURCE_FILE ("expression-function-call.galgas", 126)) ;
  }
  GALGAS_functionSignature var_functionSignature_5454 ;
  GALGAS_unifiedTypeMapEntry var_resultType_5502 ;
  GALGAS_bool var_isInternal_5528 ;
  const GALGAS_functionCallExpressionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().method_searchKey (temp_1.readProperty_mFunctionName (), var_functionSignature_5454, var_resultType_5502, var_isInternal_5528, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 128)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_5528.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_functionCallExpressionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_5592 = constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mFunctionMap ().getter_locationForKey (temp_3.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 136)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_functionCallExpressionAST temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::notEqual, temp_5.readProperty_mFunctionName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)).objectCompare (var_procDeclarationLocation_5592.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 137)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_functionCallExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_5592.getter_file (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)), fixItArray7  COMMA_SOURCE_FILE ("expression-function-call.galgas", 138)) ;
        }
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_functionCallExpressionAST temp_9 = this ;
    test_8 = GALGAS_bool (ComparisonKind::notEqual, var_functionSignature_5454.getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)).objectCompare (temp_9.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 142)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_functionCallExpressionAST temp_10 = this ;
      const GALGAS_functionCallExpressionAST temp_11 = this ;
      const GALGAS_functionCallExpressionAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_11.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (var_functionSignature_5454.getter_count (SOURCE_FILE ("expression-function-call.galgas", 144)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 144)).add_operation (temp_12.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("expression-function-call.galgas", 145)).getter_string (SOURCE_FILE ("expression-function-call.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 145)), fixItArray13  COMMA_SOURCE_FILE ("expression-function-call.galgas", 143)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_8) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_6314 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
    const GALGAS_functionCallExpressionAST temp_14 = this ;
    cEnumerator_functionSignature enumerator_6413 (var_functionSignature_5454, EnumerationOrder::up) ;
    cEnumerator_actualOutputArgumentList enumerator_6450 (temp_14.readProperty_mExpressionList (), EnumerationOrder::up) ;
    while (enumerator_6413.hasCurrentObject () && enumerator_6450.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_6789 ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_6450.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_6413.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_6789, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 151)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_6413.current (HERE).readProperty_mFormalArgumentType (), var_expression_6789.readProperty_mResultType (), enumerator_6450.current (HERE).readProperty_mEndOfExpressionLocation (), var_expression_6789, inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 160)) ;
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_6413.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_6450.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_6413.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = enumerator_6413.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 168)) ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_7105 = GALGAS_string ("!").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 167)) ;
          TC_Array <FixItDescription> fixItArray18 ;
          appendFixItActions (fixItArray18, kFixItReplace, var_s_7105) ;
          inCompiler->emitSemanticError (enumerator_6450.current (HERE).readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7105, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)), fixItArray18  COMMA_SOURCE_FILE ("expression-function-call.galgas", 171)) ;
        }
      }
      var_semanticExpressionListForGeneration_6314.addAssign_operation (var_expression_6789  COMMA_SOURCE_FILE ("expression-function-call.galgas", 174)) ;
      enumerator_6413.gotoNextObject () ;
      enumerator_6450.gotoNextObject () ;
    }
    const GALGAS_functionCallExpressionAST temp_19 = this ;
    const GALGAS_functionCallExpressionAST temp_20 = this ;
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::init_21__21__21__21_ (var_resultType_5502, temp_19.readProperty_mFunctionName ().readProperty_location (), temp_20.readProperty_mFunctionName ().readProperty_string (), var_semanticExpressionListForGeneration_6314, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionCallExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_functionCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 201)) ;
  const GALGAS_functionCallExpressionForGeneration temp_1 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (temp_1.readProperty_mFunctionName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-function-call.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 203))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 203)) ;
  GALGAS_stringlist var_parameterList_8679 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_functionCallExpressionForGeneration temp_2 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_8719 (temp_2.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_8719.hasCurrentObject ()) {
    GALGAS_string var_parameter_8890 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_8719.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_8890, inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 207)) ;
    var_parameterList_8679.addAssign_operation (var_parameter_8890  COMMA_SOURCE_FILE ("expression-function-call.galgas", 208)) ;
    enumerator_8719.gotoNextObject () ;
  }
  const GALGAS_functionCallExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (temp_3.readProperty_mFunctionName ().getter_identifierRepresentation (SOURCE_FILE ("expression-function-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 210)) ;
  cEnumerator_stringlist enumerator_9042 (var_parameterList_8679, EnumerationOrder::up) ;
  while (enumerator_9042.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssign_operation(enumerator_9042.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 212)) ;
    enumerator_9042.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) COMMA_SOURCE_FILE ("expression-function-call.galgas", 214)) ;
  }
  outArgument_outCppExpression.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 215)) ;
  const GALGAS_functionCallExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression.plusAssign_operation(extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)), inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 216)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_3093 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mLiteralTypeName (), joker_3093, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3676 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 83)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3676 COMMA_SOURCE_FILE ("expression-literal-type.galgas", 84)) ;
  }
  const GALGAS_literalTypeInExpressionAST temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_type_3842 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_1.readProperty_mLiteralTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 86)) ;
  const GALGAS_literalTypeInExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::init_21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("type"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 88)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 88)), temp_2.readProperty_mLiteralTypeName ().readProperty_location (), var_type_3842, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalTypeInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::method_generateExpression (GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_literalTypeInExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLiteralType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 111)) ;
  const GALGAS_literalTypeInExpressionForGeneration temp_1 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (extensionGetter_definition (temp_1.readProperty_mLiteralType (), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 113)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("expression-literal-type.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 112)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-literal-type.galgas", 113)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_collectionValueAST temp_0 = this ;
  cEnumerator_collectionValueElementList enumerator_3533 (temp_0.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_3533.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3533.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 93)) ;
    enumerator_3533.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@collectionValueAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_4400 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_collectionValueAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_targetType_4400 = constinArgument_inType ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_collectionValueAST temp_2 = this ;
    var_targetType_4400 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 111)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::equal, var_targetType_4400.objectCompare (GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-collection-value.galgas", 114)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_collectionValueAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("Cannot infer type"), fixItArray5  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 115)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = extensionGetter_definition (var_targetType_4400, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 116)).readProperty_supportCollectionValue ().operator_not (SOURCE_FILE ("expression-collection-value.galgas", 116)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_collectionValueAST temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (extensionGetter_definition (var_targetType_4400, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 118)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 118)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 118)), fixItArray8  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 117)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_initializerMap var_initializerMap_4901 = extensionGetter_definition (var_targetType_4400, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 121)).readProperty_initializerMap () ;
      GALGAS_functionSignature var_emptyArgumentList_4986 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_initializerMap_4901.getter_hasKey (extensionGetter_initializerSignature (var_emptyArgumentList_4986, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 123)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 123)).operator_not (SOURCE_FILE ("expression-collection-value.galgas", 123)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_collectionValueAST temp_10 = this ;
          const GALGAS_collectionValueAST temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_11.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 124)).add_operation (GALGAS_string (" has no init () initializer"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 124)), fixItArray12  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 124)) ;
        }
      }
      GALGAS_unifiedTypeMapEntry var_elementType_5201 = extensionGetter_definition (var_targetType_4400, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 126)).readProperty_typeForEnumeratedElement () ;
      GALGAS_collectionValueElementListForGeneration var_expressionListForGeneration_5315 = GALGAS_collectionValueElementListForGeneration::init (inCompiler COMMA_HERE) ;
      const GALGAS_collectionValueAST temp_13 = this ;
      cEnumerator_collectionValueElementList enumerator_5370 (temp_13.readProperty_mExpressionList (), EnumerationOrder::up) ;
      while (enumerator_5370.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expressionForGeneration_5685 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5370.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_elementType_5201, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionForGeneration_5685, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 129)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_elementType_5201, var_expressionForGeneration_5685.readProperty_mResultType (), enumerator_5370.current_location (HERE), var_expressionForGeneration_5685, inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 139)) ;
        }
        var_expressionListForGeneration_5315.addAssign_operation (var_expressionForGeneration_5685, enumerator_5370.current_location (HERE)  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 145)) ;
        enumerator_5370.gotoNextObject () ;
      }
      const GALGAS_collectionValueAST temp_14 = this ;
      outArgument_outExpression = GALGAS_expressionCollectionForGeneration::init_21__21__21_ (var_targetType_4400, temp_14.readProperty_mEndOfCollectionValue (), var_expressionListForGeneration_5315, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@expressionCollectionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_expressionCollectionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 180)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-collection-value.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 182)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 183)) ;
  const GALGAS_expressionCollectionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 185)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 185)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 185)) ;
  const GALGAS_expressionCollectionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 186)) ;
  const GALGAS_expressionCollectionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("::init (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 187)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 187)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 187)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 188)) COMMA_SOURCE_FILE ("expression-collection-value.galgas", 188)) ;
  }
  const GALGAS_expressionCollectionForGeneration temp_4 = this ;
  cEnumerator_collectionValueElementListForGeneration enumerator_7910 (temp_4.readProperty_expressionList (), EnumerationOrder::up) ;
  while (enumerator_7910.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName_8119 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_7910.current_expression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_8119, inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 191)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outCppExpression.add_operation (GALGAS_string (".enterElement ("), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 198)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(var_argumentCppName_8119.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 199)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 200)).add_operation (extensionGetter_commaSourceFile (enumerator_7910.current_location (HERE), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 200)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-collection-value.galgas", 200)), inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 200)) ;
    enumerator_7910.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_3544 ;
    GALGAS_selfMutability var_unused_0_3555 ;
    const bool optionalResult3523 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_3544, var_unused_0_3555) ;
    if (!optionalResult3523) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_string var_selfCppName_3579 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      const GALGAS_selfInExpressionAST temp_1 = this ;
      outArgument_outExpression = GALGAS_selfInExpressionForGeneration::init_21__21__21_ (var_selfType_3544, temp_1.readProperty_mSelfLocation (), var_selfCppName_3579, inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfInExpressionAST temp_2 = this ;
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (temp_2.readProperty_mSelfLocation (), GALGAS_string ("'self' not available in this context"), fixItArray3  COMMA_SOURCE_FILE ("expression-self.galgas", 84)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfInExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-self.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 104)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 105)) ;
  const GALGAS_selfInExpressionForGeneration temp_0 = this ;
  const GALGAS_selfInExpressionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_0.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (temp_1.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-self.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 106)) ;
  {
  const GALGAS_selfInExpressionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("expression-self.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_5293 ;
  const GALGAS_structPropertyAccessExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-property-access.galgas", 126)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5293, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 123)) ;
  GALGAS_unifiedTypeMapEntry var_expressionType_5372 = var_expression_5293.readProperty_mResultType () ;
  GALGAS_propertyMap var_propertyMap_5418 = extensionGetter_definition (var_expressionType_5372, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 134)).readProperty_propertyMap () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_structPropertyAccessExpressionAST temp_2 = this ;
    GALGAS_AccessControl var_accessControl_5529 ;
    GALGAS_bool var_unused_0_5544 ;
    GALGAS_unifiedTypeMapEntry var_type_5551 ;
    const bool optionalResult5494 = var_propertyMap_5418.optional_searchKey (temp_2.readProperty_mPropertyName ().readProperty_string (), var_accessControl_5529, var_unused_0_5544, var_type_5551) ;
    if (!optionalResult5494) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      GALGAS_typeKindEnum var_typeKind_5570 = extensionGetter_definition (var_expressionType_5372, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 136)).readProperty_typeKind () ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_typeKind_5570.getter_isStructType (SOURCE_FILE ("expression-property-access.galgas", 137)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 137)).operator_and (var_typeKind_5570.getter_isClassType (SOURCE_FILE ("expression-property-access.galgas", 137)).operator_not (SOURCE_FILE ("expression-property-access.galgas", 137)) COMMA_SOURCE_FILE ("expression-property-access.galgas", 137)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_structPropertyAccessExpressionAST temp_4 = this ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray5  COMMA_SOURCE_FILE ("expression-property-access.galgas", 138)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionForGeneration *> (var_expression_5293.ptr ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          const GALGAS_structPropertyAccessExpressionAST temp_7 = this ;
          const GALGAS_structPropertyAccessExpressionAST temp_8 = this ;
          GALGAS_unifiedTypeMapEntry joker_5966_3 ; // Joker input parameter
          GALGAS_string joker_5966_2 ; // Joker input parameter
          GALGAS_string joker_5966_1 ; // Joker input parameter
          extensionSetter_searchForReadAccess (ioArgument_ioVariableMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("self.").add_operation (temp_7.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 142)), temp_8.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_5966_3, joker_5966_2, joker_5966_1, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 141)) ;
          }
        }
      }
      const GALGAS_structPropertyAccessExpressionAST temp_9 = this ;
      extensionMethod_checkGetAccess (var_accessControl_5529, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_9.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 145)) ;
      const GALGAS_structPropertyAccessExpressionAST temp_10 = this ;
      const GALGAS_structPropertyAccessExpressionAST temp_11 = this ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::init_21__21__21__21_ (var_type_5551, temp_10.readProperty_mOperatorLocation (), var_expression_5293, temp_11.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_getterMap var_getterMap_6285 = extensionGetter_definition (var_expressionType_5372, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 154)).readProperty_getterMap () ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_structPropertyAccessExpressionAST temp_13 = this ;
      GALGAS_methodKind var_kind_6408 ;
      GALGAS_functionSignature var_getterFormalArgumentTypeList_6426 ;
      GALGAS_location var_unused_0_6464 ;
      GALGAS_bool var_hasCompilerArgument_6479 ;
      GALGAS_unifiedTypeMapEntry var_returnedType_6512 ;
      GALGAS_methodQualifier var_unused_0_6534 ;
      GALGAS_string var_actualGetterNameString_6549 ;
      const bool optionalResult6357 = var_getterMap_6285.optional_searchKey (temp_13.readProperty_mPropertyName ().readProperty_string (), var_kind_6408, var_getterFormalArgumentTypeList_6426, var_unused_0_6464, var_hasCompilerArgument_6479, var_returnedType_6512, var_unused_0_6534, var_actualGetterNameString_6549) ;
      if (!optionalResult6357) {
        test_12 = kBoolFalse ;
      }
      if (kBoolTrue == test_12) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (ComparisonKind::notEqual, var_getterFormalArgumentTypeList_6426.getter_count (SOURCE_FILE ("expression-property-access.galgas", 165)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            const GALGAS_structPropertyAccessExpressionAST temp_15 = this ;
            TC_Array <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (temp_15.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("for being called as a property read, the getter should have no formal argument (has ").add_operation (var_getterFormalArgumentTypeList_6426.getter_count (SOURCE_FILE ("expression-property-access.galgas", 168)).getter_string (SOURCE_FILE ("expression-property-access.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 167)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 168)), fixItArray16  COMMA_SOURCE_FILE ("expression-property-access.galgas", 166)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_14) {
          const GALGAS_structPropertyAccessExpressionAST temp_17 = this ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::equal, var_actualGetterNameString_6549.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_structPropertyAccessExpressionAST temp_20 = this ;
            temp_18 = temp_20.readProperty_mPropertyName ().readProperty_string () ;
          }else if (kBoolFalse == test_19) {
            temp_18 = var_actualGetterNameString_6549 ;
          }
          outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_6512, temp_17.readProperty_mPropertyName ().readProperty_location (), var_kind_6408, var_expression_5293, GALGAS_stringlist::init (inCompiler COMMA_HERE), temp_18, GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_6479, inCompiler COMMA_HERE) ;
        }
      }
    }
    if (kBoolFalse == test_12) {
      const GALGAS_structPropertyAccessExpressionAST temp_21 = this ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("undefined property, undefined getter"), fixItArray22  COMMA_SOURCE_FILE ("expression-property-access.galgas", 183)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structPropertyAccessExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structPropertyAccessExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 424)) ;
  GALGAS_string var_operand_19915 ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_19915, inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 426)) ;
  const GALGAS_structPropertyAccessExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_19915.add_operation (GALGAS_string (".readProperty_"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 434)).add_operation (temp_2.readProperty_mStructFieldName ().getter_identifierRepresentation (SOURCE_FILE ("expression-property-access.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 434)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-property-access.galgas", 434)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4015 ;
  const GALGAS_notExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-not.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4015, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 86)) ;
  GALGAS_unifiedTypeMapEntry var_type_4090 = var_expression_4015.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (var_expression_4015.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_notExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_falseExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_2.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (var_expression_4015.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_notExpressionAST temp_4 = this ;
        outArgument_outExpression = GALGAS_trueExpressionForGeneration::init_21__21_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mBoolType (), temp_4.readProperty_mOperatorLocation (), inCompiler COMMA_HERE) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = extensionGetter_definition (var_type_4090, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 101)).readProperty_features ().getter_prefixNotOperator (SOURCE_FILE ("expression-not.galgas", 101)).operator_not (SOURCE_FILE ("expression-not.galgas", 101)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_notExpressionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4090, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 103)), fixItArray7  COMMA_SOURCE_FILE ("expression-not.galgas", 102)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_notExpressionAST temp_8 = this ;
        outArgument_outExpression = GALGAS_notExpressionForGeneration::init_21__21__21_ (var_type_4090, temp_8.readProperty_mOperatorLocation (), var_expression_4015, inCompiler COMMA_HERE) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@notExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_notExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 131)) ;
  GALGAS_string var_operand_5779 ;
  const GALGAS_notExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5779, inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 133)) ;
  const GALGAS_notExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5779.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-not.galgas", 135)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4054 ;
  const GALGAS_tildeExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-tilde.galgas", 90)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4054, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 87)) ;
  GALGAS_unifiedTypeMapEntry var_type_4129 = var_expression_4054.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration var_exp_4168 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_4054.ptr ())) ;
    if (nullptr == var_exp_4168.ptr ()) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::init_21__21__21_ (var_exp_4168.readProperty_mResultType (), var_exp_4168.readProperty_mLocation (), var_exp_4168.readProperty_mValue ().operator_tilde (SOURCE_FILE ("expression-tilde.galgas", 102)), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = extensionGetter_definition (var_type_4129, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 104)).readProperty_features ().getter_prefixTildeOperator (SOURCE_FILE ("expression-tilde.galgas", 104)).operator_not (SOURCE_FILE ("expression-tilde.galgas", 104)).boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_tildeExpressionAST temp_3 = this ;
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4129, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 106)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 106)), fixItArray4  COMMA_SOURCE_FILE ("expression-tilde.galgas", 105)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_tildeExpressionAST temp_5 = this ;
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::init_21__21__21_ (var_type_4129, temp_5.readProperty_mOperatorLocation (), var_expression_4054, inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@tildeExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_tildeExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 134)) ;
  GALGAS_string var_operand_5669 ;
  const GALGAS_tildeExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5669, inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 136)) ;
  const GALGAS_tildeExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5669.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)).add_operation (extensionGetter_sourceFile (temp_2.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-tilde.galgas", 138)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 75)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4084 ;
  const GALGAS_bangExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-bang.galgas", 93)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4084, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 90)) ;
  GALGAS_unifiedTypeMapEntry var_type_4159 = var_expression_4084.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapEntry var_classIndex_4264 ;
    const bool optionalResult4226 = extensionGetter_definition (var_type_4159, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 101)).readProperty_typeKind ().optional_weakReferenceType (var_classIndex_4264) ;
    if (!optionalResult4226) {
      test_1 = kBoolFalse ;
    }
    if (kBoolTrue == test_1) {
      const GALGAS_bangExpressionAST temp_2 = this ;
      outArgument_outExpression = GALGAS_bangExpressionForGeneration::init_21__21__21__21_ (var_classIndex_4264, temp_2.readProperty_mOperatorLocation (), var_expression_4084, extensionGetter_definition (var_type_4159, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 106)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_bangExpressionAST temp_3 = this ;
    TC_Array <FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (temp_3.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4159, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)).add_operation (GALGAS_string ("' and does not support the '°' operator"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 110)), fixItArray4  COMMA_SOURCE_FILE ("expression-bang.galgas", 109)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bangExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_bangExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 131)) ;
  GALGAS_string var_operand_5845 ;
  const GALGAS_bangExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5845, inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 133)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 141)) COMMA_SOURCE_FILE ("expression-bang.galgas", 141)) ;
  }
  const GALGAS_bangExpressionForGeneration temp_2 = this ;
  outArgument_outCppExpression = var_operand_5845.add_operation (GALGAS_string (".bang_"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)).add_operation (temp_2.readProperty_mReceiverTypeName ().getter_identifierRepresentation (SOURCE_FILE ("expression-bang.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 142)) ;
  const GALGAS_bangExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression.plusAssign_operation(GALGAS_string (" (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-bang.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("expression-bang.galgas", 143)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMapEntry /* constinArgument_inType */,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4088 ;
  const GALGAS_unaryWrappingMinusExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4088, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 86)) ;
  GALGAS_unifiedTypeMapEntry var_type_4163 = var_expression_4088.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_definition (var_type_4163, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).readProperty_features ().getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).operator_not (SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 97)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_unaryWrappingMinusExpressionAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOperatorLocation (), GALGAS_string ("operand type is '@").add_operation (extensionGetter_definition (var_type_4163, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 99)), fixItArray3  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 98)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_unaryWrappingMinusExpressionAST temp_4 = this ;
    outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionForGeneration::init_21__21__21_ (var_type_4163, temp_4.readProperty_mOperatorLocation (), var_expression_4088, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@unaryWrappingMinusExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 126)) ;
  GALGAS_string var_operand_5579 ;
  const GALGAS_unaryWrappingMinusExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand_5579, inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 128)) ;
  outArgument_outCppExpression = var_operand_5579.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 136)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 163)) ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7881 ;
  const GALGAS_orExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7881, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 178)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_8217 ;
  const GALGAS_orExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7881.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_8217, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 188)) ;
  {
  const GALGAS_orExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7881.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 199)).readProperty_features ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 199)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7881, var_rightExpression_8217, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 198)) ;
  }
  const GALGAS_orExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_7881.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7881, GALGAS_binaryOperator::class_func_operator_5F_or (SOURCE_FILE ("expression-or.galgas", 209)), var_rightExpression_8217, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 219)) ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 220)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_9842 ;
  const GALGAS_orShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_9842, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 234)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_10178 ;
  const GALGAS_orShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_9842.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_10178, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 244)) ;
  {
  const GALGAS_orShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_9842.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 255)).readProperty_features ().getter_infixOrOperator (SOURCE_FILE ("expression-or.galgas", 255)), GALGAS_string ("|"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_9842, var_rightExpression_10178, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 254)) ;
  }
  const GALGAS_orShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_9842.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_9842, var_rightExpression_10178, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 274)) ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 275)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_11792 ;
  const GALGAS_xorExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_11792, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 289)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12128 ;
  const GALGAS_xorExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_11792.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_12128, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 299)) ;
  {
  const GALGAS_xorExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_11792.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 310)).readProperty_features ().getter_infixXorOperator (SOURCE_FILE ("expression-or.galgas", 310)), GALGAS_string ("^"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_11792, var_rightExpression_12128, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 309)) ;
  }
  const GALGAS_xorExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_11792.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_11792, GALGAS_binaryOperator::class_func_operator_5F_xor (SOURCE_FILE ("expression-or.galgas", 321)), var_rightExpression_12128, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 331)) ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 332)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_13823 ;
  const GALGAS_closedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_13823, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 347)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_14180 ;
  const GALGAS_closedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_14180, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 357)) ;
  GALGAS_unifiedTypeMapEntry var_leftType_14260 = var_leftExpression_13823.readProperty_mResultType () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_leftType_14260, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 368)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (var_leftExpression_13823.readProperty_mLocation (), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("expression-or.galgas", 369)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_rightType_14482 = var_rightExpression_14180.readProperty_mResultType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_rightType_14482, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 372)).readProperty_typeName ().readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_rightExpression_14180.readProperty_mLocation (), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray5  COMMA_SOURCE_FILE ("expression-or.galgas", 373)) ;
    }
  }
  const GALGAS_closedSliceExpressionAST temp_6 = this ;
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("range"), var_leftExpression_13823.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 377)), temp_6.readProperty_mOperatorLocation (), var_leftExpression_13823, var_rightExpression_14180, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 389)) ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 390)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_unifiedTypeMapEntry /* constinArgument_inInferenceType */,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_16434 ;
  const GALGAS_openedSliceExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_16434, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 404)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_16791 ;
  const GALGAS_openedSliceExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_16791, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 414)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_leftExpression_16434.readProperty_mResultType (), var_leftExpression_16434.readProperty_mLocation (), var_leftExpression_16434, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 424)) ;
  }
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), var_rightExpression_16791.readProperty_mResultType (), var_rightExpression_16791.readProperty_mLocation (), var_rightExpression_16791, inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 434)) ;
  }
  const GALGAS_openedSliceExpressionAST temp_2 = this ;
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::init_21__21__21__21_ (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("range"), var_leftExpression_16434.readProperty_mLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 446)), temp_2.readProperty_mOperatorLocation (), var_leftExpression_16434, var_rightExpression_16791, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_orShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 484)) ;
  GALGAS_string var_leftTemporaryOperand_19607 ;
  const GALGAS_orShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_19607, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 486)) ;
  GALGAS_string var_testVar_19663 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-or.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 494)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 495)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_19663, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (var_leftTemporaryOperand_19607, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 496)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar_19663, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 497)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 499)) ;
  }
  GALGAS_string var_rightTemporaryOperand_20135 ;
  const GALGAS_orShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_20135, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 500)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_19663.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (var_rightTemporaryOperand_20135, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 507)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 508)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 509)) ;
  outArgument_outCppExpression = var_testVar_19663 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@closedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_closedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 521)) ;
  GALGAS_string var_leftTemporaryOperand_20935 ;
  const GALGAS_closedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_20935, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 523)) ;
  GALGAS_string var_rightTemporaryOperand_21139 ;
  const GALGAS_closedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_21139, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 531)) ;
  const GALGAS_closedSliceExpressionForGeneration temp_3 = this ;
  const GALGAS_closedSliceExpressionForGeneration temp_4 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_20935, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (var_rightTemporaryOperand_21139, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 540)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (var_leftTemporaryOperand_20935, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 541)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@openedSliceExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_openedSliceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 553)) ;
  GALGAS_string var_leftTemporaryOperand_22112 ;
  const GALGAS_openedSliceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_22112, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 555)) ;
  GALGAS_string var_rightTemporaryOperand_22316 ;
  const GALGAS_openedSliceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_22316, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 563)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 571)) COMMA_SOURCE_FILE ("expression-or.galgas", 571)) ;
  }
  const GALGAS_openedSliceExpressionForGeneration temp_3 = this ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand_22112, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (var_rightTemporaryOperand_22316, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 573)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (var_leftTemporaryOperand_22112, inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 574)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("expression-or.galgas", 575)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 103)) ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_5455 ;
  const GALGAS_andExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_5455, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 118)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_5790 ;
  const GALGAS_andExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_5455.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_5790, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 128)) ;
  {
  const GALGAS_andExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_5455.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 139)).readProperty_features ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 139)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_5455, var_rightExpression_5790, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 138)) ;
  }
  const GALGAS_andExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::init_21__21__21__21__21_ (var_leftExpression_5455.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_5455, GALGAS_binaryOperator::class_func_operator_5F_and (SOURCE_FILE ("expression-and.galgas", 150)), var_rightExpression_5790, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_enterExpressionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 160)) ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 161)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::method_analyzeSemanticExpression (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_unifiedTypeMapEntry constinArgument_inInferenceType,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_leftExpression_7443 ;
  const GALGAS_andShortExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_leftExpression_7443, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 175)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_7778 ;
  const GALGAS_andShortExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_7443.readProperty_mResultType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_rightExpression_7778, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 185)) ;
  {
  const GALGAS_andShortExpressionAST temp_2 = this ;
  routine_checkDiadicOperator_3F__3F__3F__26__26_ (extensionGetter_definition (var_leftExpression_7443.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 196)).readProperty_features ().getter_infixAndOperator (SOURCE_FILE ("expression-and.galgas", 196)), GALGAS_string ("&"), temp_2.readProperty_mOperatorLocation (), var_leftExpression_7443, var_rightExpression_7778, inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 195)) ;
  }
  const GALGAS_andShortExpressionAST temp_3 = this ;
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::init_21__21__21__21_ (var_leftExpression_7443.readProperty_mResultType (), temp_3.readProperty_mOperatorLocation (), var_leftExpression_7443, var_rightExpression_7778, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andShortExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::method_generateExpression (GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_andShortExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mLeftExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 227)) ;
  GALGAS_string var_leftTemporaryOperand_9230 ;
  const GALGAS_andShortExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mLeftExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand_9230, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 229)) ;
  GALGAS_string var_testVar_9286 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("expression-and.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 237)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_bool ").add_operation (var_testVar_9286, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (var_leftTemporaryOperand_9230, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_9286, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 239)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 241)) ;
  }
  GALGAS_string var_rightTemporaryOperand_9758 ;
  const GALGAS_andShortExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mRightExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand_9758, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_9286.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (var_rightTemporaryOperand_9758, inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 249)), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 249)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("expression-and.galgas", 250)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 251)) ;
  outArgument_outCppExpression = var_testVar_9286 ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                               const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                               const GALGAS_location constinArgument_inErrorLocation,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_sourceType_3308 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_3346 = GALGAS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3308)) ;
  if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).isValid ()) {
    uint32_t variant_3380 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).uintValue () ;
    bool loop_3380 = true ;
    while (loop_3380) {
      loop_3380 = var_ok_3346.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).operator_and (extensionGetter_definition (var_sourceType_3308, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).isValid () ;
      if (loop_3380) {
        loop_3380 = var_ok_3346.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).operator_and (extensionGetter_definition (var_sourceType_3308, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)).boolValue () ;
      }
      if (loop_3380 && (0 == variant_3380)) {
        loop_3380 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)) ;
      }
      if (loop_3380) {
        variant_3380 -- ;
        var_sourceType_3308 = extensionGetter_definition (var_sourceType_3308, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 85)).readProperty_superType () ;
        var_ok_3346 = GALGAS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3308)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_3346.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapEntry var_targetType_3650 ;
      const bool optionalResult3612 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 88)).readProperty_typeKind ().optional_weakReferenceType (var_targetType_3650) ;
      if (!optionalResult3612) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_3308 = constinArgument_inSourceType ;
        var_ok_3346 = GALGAS_bool (ComparisonKind::equal, var_targetType_3650.objectCompare (var_sourceType_3308)) ;
        if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).isValid ()) {
          uint32_t variant_3735 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).uintValue () ;
          bool loop_3735 = true ;
          while (loop_3735) {
            loop_3735 = var_ok_3346.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).operator_and (extensionGetter_definition (var_sourceType_3308, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).isValid () ;
            if (loop_3735) {
              loop_3735 = var_ok_3346.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).operator_and (extensionGetter_definition (var_sourceType_3308, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)).boolValue () ;
            }
            if (loop_3735 && (0 == variant_3735)) {
              loop_3735 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)) ;
            }
            if (loop_3735) {
              variant_3735 -- ;
              var_sourceType_3308 = extensionGetter_definition (var_sourceType_3308, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)).readProperty_superType () ;
              var_ok_3346 = GALGAS_bool (ComparisonKind::equal, var_targetType_3650.objectCompare (var_sourceType_3308)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_3346.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 96)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 98)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 97)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const GALGAS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                        const GALGAS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_handled_4607 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_4632 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_4632.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("uint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_bigint var_bigIntValue_4773 = var_bigIntSource_4632.readProperty_mValue () ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_4773.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_4773.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 112)).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_4773.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 113)) ;
            }
          }
          ioArgument_ioExpression = GALGAS_literalUIntExpressionForGeneration::init_21__21__21_ (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_4773.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)), inCompiler COMMA_HERE) ;
          var_handled_4607 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("sint").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 117)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_bigint var_bigIntValue_5188 = var_bigIntSource_4632.readProperty_mValue () ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_5188.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5188.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 119)).boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_5188.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
              }
            }
            ioArgument_ioExpression = GALGAS_literalSIntExpressionForGeneration::init_21__21__21_ (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5188.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 122)), inCompiler COMMA_HERE) ;
            var_handled_4607 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_bigint var_bigIntValue_5614 = var_bigIntSource_4632.readProperty_mValue () ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_5614.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5614.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 126)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <FixItDescription> fixItArray9 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_5614.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 127)) ;
                }
              }
              ioArgument_ioExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5614.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 129)), inCompiler COMMA_HERE) ;
              var_handled_4607 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 131)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_bigint var_bigIntValue_6037 = var_bigIntSource_4632.readProperty_mValue () ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_6037.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 133)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6037.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 133)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 133)).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_6037.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 134)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 134)), fixItArray12  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 134)) ;
                  }
                }
                ioArgument_ioExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (constinArgument_inTargetType, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6037.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 136)), inCompiler COMMA_HERE) ;
                var_handled_4607 = GALGAS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_handled_4607.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_unifiedTypeMapEntry var_sourceType_6462 = constinArgument_inSourceType ;
      GALGAS_bool var_ok_6502 = GALGAS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)))) ;
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).isValid ()) {
        uint32_t variant_6562 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).uintValue () ;
        bool loop_6562 = true ;
        while (loop_6562) {
          loop_6562 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).operator_and (extensionGetter_definition (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).isValid () ;
          if (loop_6562) {
            loop_6562 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).operator_and (extensionGetter_definition (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)).boolValue () ;
          }
          if (loop_6562 && (0 == variant_6562)) {
            loop_6562 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 143)) ;
          }
          if (loop_6562) {
            variant_6562 -- ;
            var_sourceType_6462 = extensionGetter_definition (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 144)).readProperty_superType () ;
            var_ok_6502 = GALGAS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_6462)) ;
          }
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_unifiedTypeMapEntry var_targetType_6840 ;
          const bool optionalResult6802 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).readProperty_typeKind ().optional_weakReferenceType (var_targetType_6840) ;
          if (!optionalResult6802) {
            test_14 = kBoolFalse ;
          }
          if (kBoolTrue == test_14) {
            var_sourceType_6462 = constinArgument_inSourceType ;
            var_ok_6502 = GALGAS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetType_6840, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)).objectCompare (extensionGetter_typeName (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)))) ;
            if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).isValid ()) {
              uint32_t variant_6953 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).uintValue () ;
              bool loop_6953 = true ;
              while (loop_6953) {
                loop_6953 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).operator_and (extensionGetter_definition (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).isValid () ;
                if (loop_6953) {
                  loop_6953 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).operator_and (extensionGetter_definition (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).boolValue () ;
                }
                if (loop_6953 && (0 == variant_6953)) {
                  loop_6953 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)) ;
                }
                if (loop_6953) {
                  variant_6953 -- ;
                  var_sourceType_6462 = extensionGetter_definition (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 151)).readProperty_superType () ;
                  var_ok_6502 = GALGAS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetType_6840, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)).objectCompare (extensionGetter_typeName (var_sourceType_6462, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)))) ;
                }
              }
            }
          }
        }
      }
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).boolEnum () ;
        if (kBoolTrue == test_15) {
          GALGAS_AccessControl var_accessControl_7357 ;
          GALGAS_bool var_unused_0_7372 ;
          GALGAS_unifiedTypeMapEntry var_propertyType_7379 ;
          const bool optionalResult7299 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).readProperty_propertyMap ().optional_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 156)).readProperty_typeName ().readProperty_string (), var_accessControl_7357, var_unused_0_7372, var_propertyType_7379) ;
          if (!optionalResult7299) {
            test_15 = kBoolFalse ;
          }
          if (kBoolTrue == test_15) {
            extensionMethod_checkSetAccess (var_accessControl_7357, GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 157)) ;
            GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_7599 = GALGAS_structPropertyAccessExpressionForGeneration::init_21__21__21__21_ (var_propertyType_7379, constinArgument_inErrorLocation, ioArgument_ioExpression, extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 165)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_7599 ;
            var_ok_6502 = GALGAS_bool (ComparisonKind::equal, var_propertyType_7379.objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          GALGAS_bool test_17 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)) ;
          if (kBoolTrue == test_17.boolEnum ()) {
            test_17 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)).readProperty_getterMap ().getter_hasKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 169)) ;
          }
          test_16 = test_17.boolEnum () ;
          if (kBoolTrue == test_16) {
            GALGAS_methodKind var_kind_8104 ;
            GALGAS_functionSignature var_argumentTypeList_8141 ;
            GALGAS_bool var_hasCompilerArgument_8182 ;
            GALGAS_unifiedTypeMapEntry var_returnedType_8215 ;
            GALGAS_location joker_8166 ; // Joker input parameter
            GALGAS_methodQualifier joker_8236_2 ; // Joker input parameter
            GALGAS_string joker_8236_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 170)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 171)).readProperty_typeName (), var_kind_8104, var_argumentTypeList_8141, joker_8166, var_hasCompilerArgument_8182, var_returnedType_8215, joker_8236_2, joker_8236_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 170)) ;
            var_ok_6502 = GALGAS_bool (ComparisonKind::equal, var_argumentTypeList_8141.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 179)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::equal, var_returnedType_8215.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 179)) ;
            GALGAS_getterCallExpressionForGeneration var_conversionExpression_8368 = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_8104, ioArgument_ioExpression, GALGAS_stringlist::init (inCompiler COMMA_HERE), extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 187)).readProperty_typeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_8182, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8368 ;
          }
        }
      }
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_6502.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 193)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 195)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 196)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)).add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 197)), fixItArray19  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 194)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F__3F__3F__26__26_ (const GALGAS_bool constinArgument_inOperandIsHandled,
                                                      const GALGAS_string constinArgument_inOperatorNameForErrorMessage,
                                                      const GALGAS_location constinArgument_inErrorLocation,
                                                      GALGAS_semanticExpressionForGeneration & ioArgument_ioLeftExpression,
                                                      GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_leftResultType_9543 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_rightResultType_9596 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 211)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 213)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 213)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 213)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 213)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 214)).add_operation (extensionGetter_definition (var_rightResultType_9596, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 215)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 215)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 215)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 212)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapEntry var_rightType_9983 = var_rightResultType_9596 ;
    GALGAS_bool var_ok_10025 = GALGAS_bool (ComparisonKind::equal, var_leftResultType_9543.objectCompare (var_rightType_9983)) ;
    if (GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).isValid ()) {
      uint32_t variant_10062 = GALGAS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).uintValue () ;
      bool loop_10062 = true ;
      while (loop_10062) {
        loop_10062 = var_ok_10025.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).operator_and (extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).isValid () ;
        if (loop_10062) {
          loop_10062 = var_ok_10025.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).operator_and (extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)).boolValue () ;
        }
        if (loop_10062 && (0 == variant_10062)) {
          loop_10062 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 219)) ;
        }
        if (loop_10062) {
          variant_10062 -- ;
          var_rightType_9983 = extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 220)).readProperty_superType () ;
          var_ok_10025 = GALGAS_bool (ComparisonKind::equal, var_leftResultType_9543.objectCompare (var_rightType_9983)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_ok_10025.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 224)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_10295 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_10295.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("uint").objectCompare (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 225)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_bigint var_bigIntValue_10447 = var_bigIntSource_10295.readProperty_mValue () ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_10447.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 227)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_10447.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 227)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 227)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_10447.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 228)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 228)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 228)) ;
                }
              }
              ioArgument_ioRightExpression = GALGAS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_9543, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10447.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 230)), inCompiler COMMA_HERE) ;
              var_ok_10025 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_6 = kBoolTrue ;
            if (kBoolTrue == test_6) {
              test_6 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("sint").objectCompare (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 232)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_6) {
                GALGAS_bigint var_bigIntValue_10890 = var_bigIntSource_10295.readProperty_mValue () ;
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  test_7 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_10890.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 234)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_10890.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 234)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 234)).boolEnum () ;
                  if (kBoolTrue == test_7) {
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_10890.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 235)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 235)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 235)) ;
                  }
                }
                ioArgument_ioRightExpression = GALGAS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_9543, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_10890.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 237)), inCompiler COMMA_HERE) ;
                var_ok_10025 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_6) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 239)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_bigint var_bigIntValue_11344 = var_bigIntSource_10295.readProperty_mValue () ;
                  enumGalgasBool test_10 = kBoolTrue ;
                  if (kBoolTrue == test_10) {
                    test_10 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_11344.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 241)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11344.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 241)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 241)).boolEnum () ;
                    if (kBoolTrue == test_10) {
                      TC_Array <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_11344.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 242)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 242)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 242)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_9543, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11344.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 244)), inCompiler COMMA_HERE) ;
                  var_ok_10025 = GALGAS_bool (true) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 246)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    GALGAS_bigint var_bigIntValue_11795 = var_bigIntSource_10295.readProperty_mValue () ;
                    enumGalgasBool test_13 = kBoolTrue ;
                    if (kBoolTrue == test_13) {
                      test_13 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_11795.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 248)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11795.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 248)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 248)).boolEnum () ;
                      if (kBoolTrue == test_13) {
                        TC_Array <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_11795.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 249)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 249)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 249)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_9543, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11795.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 251)), inCompiler COMMA_HERE) ;
                    var_ok_10025 = GALGAS_bool (true) ;
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
      test_15 = var_ok_10025.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 256)).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_literalBigIntExpressionForGeneration var_bigIntSource_12244 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_12244.ptr ()) {
          test_15 = kBoolFalse ;
        }
        if (kBoolTrue == test_15) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 257)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_16) {
              GALGAS_bigint var_bigIntValue_12390 = var_bigIntSource_12244.readProperty_mValue () ;
              enumGalgasBool test_17 = kBoolTrue ;
              if (kBoolTrue == test_17) {
                test_17 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_12390.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 259)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12390.objectCompare (GALGAS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 259)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 259)).boolEnum () ;
                if (kBoolTrue == test_17) {
                  TC_Array <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_12390.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 260)).add_operation (GALGAS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 260)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 260)) ;
                }
              }
              ioArgument_ioLeftExpression = GALGAS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_9983, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12390.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 262)), inCompiler COMMA_HERE) ;
              var_ok_10025 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_16) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 264)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                GALGAS_bigint var_bigIntValue_12820 = var_bigIntSource_12244.readProperty_mValue () ;
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_12820.objectCompare (GALGAS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12820.objectCompare (GALGAS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 266)).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    TC_Array <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_12820.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 267)).add_operation (GALGAS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 267)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 267)) ;
                  }
                }
                ioArgument_ioLeftExpression = GALGAS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_9983, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_12820.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 269)), inCompiler COMMA_HERE) ;
                var_ok_10025 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_19) {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                test_22 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("uint64").objectCompare (extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 271)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (kBoolTrue == test_22) {
                  GALGAS_bigint var_bigIntValue_13261 = var_bigIntSource_12244.readProperty_mValue () ;
                  enumGalgasBool test_23 = kBoolTrue ;
                  if (kBoolTrue == test_23) {
                    test_23 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_13261.objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13261.objectCompare (GALGAS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 273)).boolEnum () ;
                    if (kBoolTrue == test_23) {
                      TC_Array <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_13261.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 274)).add_operation (GALGAS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 274)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 274)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_9983, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13261.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 276)), inCompiler COMMA_HERE) ;
                  var_ok_10025 = GALGAS_bool (true) ;
                }
              }
              if (kBoolFalse == test_22) {
                enumGalgasBool test_25 = kBoolTrue ;
                if (kBoolTrue == test_25) {
                  test_25 = GALGAS_bool (ComparisonKind::equal, GALGAS_string ("sint64").objectCompare (extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 278)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_25) {
                    GALGAS_bigint var_bigIntValue_13699 = var_bigIntSource_12244.readProperty_mValue () ;
                    enumGalgasBool test_26 = kBoolTrue ;
                    if (kBoolTrue == test_26) {
                      test_26 = GALGAS_bool (ComparisonKind::lowerThan, var_bigIntValue_13699.objectCompare (GALGAS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)))).operator_or (GALGAS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13699.objectCompare (GALGAS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 280)).boolEnum () ;
                      if (kBoolTrue == test_26) {
                        TC_Array <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GALGAS_string ("literal value (").add_operation (var_bigIntValue_13699.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 281)).add_operation (GALGAS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 281)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 281)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_9983, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13699.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 283)), inCompiler COMMA_HERE) ;
                    var_ok_10025 = GALGAS_bool (true) ;
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
      test_28 = var_ok_10025.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 288)).boolEnum () ;
      if (kBoolTrue == test_28) {
        GALGAS_AccessControl var_accessControl_14275 ;
        GALGAS_bool var_unused_0_14290 ;
        GALGAS_unifiedTypeMapEntry var_propertyType_14297 ;
        const bool optionalResult14215 = extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 288)).readProperty_propertyMap ().optional_searchKey (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 288)).readProperty_typeName ().readProperty_string (), var_accessControl_14275, var_unused_0_14290, var_propertyType_14297) ;
        if (!optionalResult14215) {
          test_28 = kBoolFalse ;
        }
        if (kBoolTrue == test_28) {
          extensionMethod_checkSetAccess (var_accessControl_14275, GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 289)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 289)) ;
          GALGAS_structPropertyAccessExpressionForGeneration var_conversionExpression_14387 = GALGAS_structPropertyAccessExpressionForGeneration::init_21__21__21__21_ (var_propertyType_14297, constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 294)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_14387 ;
          var_ok_10025 = GALGAS_bool (ComparisonKind::equal, var_propertyType_14297.objectCompare (var_leftResultType_9543)) ;
        }
      }
    }
    if (kBoolFalse == test_28) {
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        GALGAS_bool test_30 = var_ok_10025.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)) ;
        if (kBoolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)).readProperty_getterMap ().getter_hasKey (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 298)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (kBoolTrue == test_29) {
          GALGAS_methodKind var_kind_14904 ;
          GALGAS_functionSignature var_argumentTypeList_14941 ;
          GALGAS_bool var_hasCompilerArgument_14982 ;
          GALGAS_unifiedTypeMapEntry var_returnedType_15015 ;
          GALGAS_location joker_14966 ; // Joker input parameter
          GALGAS_methodQualifier joker_15036_2 ; // Joker input parameter
          GALGAS_string joker_15036_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 299)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 300)).readProperty_typeName (), var_kind_14904, var_argumentTypeList_14941, joker_14966, var_hasCompilerArgument_14982, var_returnedType_15015, joker_15036_2, joker_15036_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 299)) ;
          var_ok_10025 = GALGAS_bool (ComparisonKind::equal, var_argumentTypeList_14941.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 308)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::equal, var_returnedType_15015.objectCompare (var_leftResultType_9543)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 308)) ;
          GALGAS_getterCallExpressionForGeneration var_conversionExpression_15170 = GALGAS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_9543, constinArgument_inErrorLocation, var_kind_14904, ioArgument_ioRightExpression, GALGAS_stringlist::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 316)).readProperty_typeName ().readProperty_string (), GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_14982, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15170 ;
        }
      }
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_ok_10025.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 322)).boolEnum () ;
      if (kBoolTrue == test_31) {
        TC_Array <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 324)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 324)).add_operation (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 324)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 324)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 324)).add_operation (extensionGetter_definition (var_rightType_9983, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 325)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 325)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 325)).add_operation (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 326)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)).add_operation (extensionGetter_definition (var_leftResultType_9543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 327)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 323)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_assignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPropertyAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 179)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_receiverType_7220 ;
  {
  const GALGAS_assignmentInstructionAST temp_0 = this ;
  GALGAS_string joker_7237 ; // Joker input parameter
  GALGAS_string joker_7244 ; // Joker input parameter
  extensionSetter_neutralAccess (ioArgument_ioVariableMap, temp_0.readProperty_mTargetVariableName (), var_receiverType_7220, joker_7237, joker_7244, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 195)) ;
  }
  GALGAS_unifiedTypeMapEntry var_targetType_7257 = var_receiverType_7220 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_assignmentInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyMap var_propertyMap_7337 = extensionGetter_definition (var_targetType_7257, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 203)).readProperty_propertyMap () ;
      GALGAS_AccessControl var_accessControl_7443 ;
      GALGAS_bool var_isConstant_7462 ;
      const GALGAS_assignmentInstructionAST temp_3 = this ;
      var_propertyMap_7337.method_searchKey (temp_3.readProperty_mOptionalProperty (), var_accessControl_7443, var_isConstant_7462, var_targetType_7257, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 204)) ;
      const GALGAS_assignmentInstructionAST temp_4 = this ;
      extensionMethod_checkSetAccess (var_accessControl_7443, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_4.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 205)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_7462.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_assignmentInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 207)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_7997 ;
  const GALGAS_assignmentInstructionAST temp_8 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_8.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_7257, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_7997, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 211)) ;
  {
  const GALGAS_assignmentInstructionAST temp_9 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_7257, var_expression_7997.readProperty_mResultType (), temp_9.readProperty_mInstructionLocation (), var_expression_7997, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 221)) ;
  }
  GALGAS_string var_targetVariableCppName_8234 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_8270 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_assignmentInstructionAST temp_11 = this ;
    test_10 = GALGAS_bool (ComparisonKind::equal, temp_11.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      const GALGAS_assignmentInstructionAST temp_12 = this ;
      GALGAS_unifiedTypeMapEntry joker_8432 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_12.readProperty_mTargetVariableName (), joker_8432, var_targetVariableCppName_8234, var_nameForCheckingFormalParameterUsing_8270, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 231)) ;
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_assignmentInstructionAST temp_13 = this ;
    GALGAS_unifiedTypeMapEntry joker_8604 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mTargetVariableName (), joker_8604, var_targetVariableCppName_8234, var_nameForCheckingFormalParameterUsing_8270, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 238)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_14 = this ;
  const GALGAS_assignmentInstructionAST temp_15 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_receiverType_7220, var_targetType_7257, var_targetVariableCppName_8234, var_nameForCheckingFormalParameterUsing_8270, temp_14.readProperty_mOptionalProperty ().readProperty_string (), var_expression_7997, temp_15.readProperty_mTargetVariableName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 246)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPropertyAssignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_9637 ;
    GALGAS_selfMutability var_selfMutability_9667 ;
    const bool optionalResult9616 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_9637, var_selfMutability_9667) ;
    if (!optionalResult9616) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_propertiesAreMutable (var_selfMutability_9667, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 267)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' property not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 268)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_9844 = extensionGetter_definition (var_selfType_9637, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 270)).readProperty_propertyMap () ;
      GALGAS_bool var_isConstant_9957 ;
      GALGAS_unifiedTypeMapEntry var_targetType_9973 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = this ;
      GALGAS_AccessControl joker_9949 ; // Joker input parameter
      var_propertyMap_9844.method_searchKey (temp_4.readProperty_mTargetSelfPropertyName (), joker_9949, var_isConstant_9957, var_targetType_9973, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 271)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isConstant_9957.operator_and (var_selfMutability_9667.getter_isInitializer (SOURCE_FILE ("instruction-assignment.galgas", 272)).operator_not (SOURCE_FILE ("instruction-assignment.galgas", 272)) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 272)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetSelfPropertyName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 273)) ;
        }
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_8 = this ;
      GALGAS_string var_targetVariableCppName_10145 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 275)).add_operation (temp_8.readProperty_mTargetSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 276)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = this ;
        test_9 = GALGAS_bool (ComparisonKind::notEqual, temp_10.readProperty_mOptionalProperty ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_propertyMap var_propertyMap_10403 = extensionGetter_definition (var_targetType_9973, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 279)).readProperty_propertyMap () ;
          GALGAS_AccessControl var_accessControl_10511 ;
          GALGAS_bool var_isConstant_10530 ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_11 = this ;
          var_propertyMap_10403.method_searchKey (temp_11.readProperty_mOptionalProperty (), var_accessControl_10511, var_isConstant_10530, var_targetType_9973, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 280)) ;
          const GALGAS_selfPropertyAssignmentInstructionAST temp_12 = this ;
          extensionMethod_checkSetAccess (var_accessControl_10511, constinArgument_inAnalysisContext.readProperty_selfAvailability (), temp_12.readProperty_mOptionalProperty ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 281)) ;
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            test_13 = var_isConstant_10530.boolEnum () ;
            if (kBoolTrue == test_13) {
              const GALGAS_selfPropertyAssignmentInstructionAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mOptionalProperty ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray15  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 283)) ;
            }
          }
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_11102 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_16.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9973, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11102, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 287)) ;
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_17 = this ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_18 = this ;
      GALGAS_unifiedTypeMapEntry joker_11254_3 ; // Joker input parameter
      GALGAS_string joker_11254_2 ; // Joker input parameter
      GALGAS_string joker_11254_1 ; // Joker input parameter
      extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, GALGAS_lstring::init_21__21_ (GALGAS_string ("self.").add_operation (temp_17.readProperty_mTargetSelfPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 298)), temp_18.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE), joker_11254_3, joker_11254_2, joker_11254_1, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 297)) ;
      }
      {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_19 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_9973, var_expression_11102.readProperty_mResultType (), temp_19.readProperty_mInstructionLocation (), var_expression_11102, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 301)) ;
      }
      const GALGAS_selfPropertyAssignmentInstructionAST temp_20 = this ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_21 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::init_21__21__21__21__21__21__21_ (var_selfType_9637, var_targetType_9973, var_targetVariableCppName_10145, constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), temp_20.readProperty_mOptionalProperty ().readProperty_string (), var_expression_11102, temp_21.readProperty_mTargetSelfPropertyName ().readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 303)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_22 = this ;
    TC_Array <FixItDescription> fixItArray23 ;
    inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray23  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 313)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_13126 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13126, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 337)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 344)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 346)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::equal, temp_4.readProperty_mOptionalProperty ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.readProperty_mTargetCppName ().add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)).add_operation (var_sourceVar_13126, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 348)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_assignmentInstructionForGeneration temp_7 = this ;
      test_6 = extensionGetter_definition (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 349)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-assignment.galgas", 349)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_assignmentInstructionForGeneration temp_8 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_8.readProperty_mTargetCppName ().add_operation (GALGAS_string (".setProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 350)) ;
        const GALGAS_assignmentInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_9.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 351)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_13126, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 352)) ;
      }
    }
    if (kBoolFalse == test_6) {
      const GALGAS_assignmentInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_10.readProperty_mTargetCppName ().add_operation (GALGAS_string (".mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 354)) ;
      const GALGAS_assignmentInstructionForGeneration temp_11 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_11.readProperty_mOptionalProperty ().getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 355)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = ").add_operation (var_sourceVar_13126, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 356)) ;
    }
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_12 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_12.readProperty_mTargetCppName () COMMA_SOURCE_FILE ("instruction-assignment.galgas", 358)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 140)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mElseInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 141)) ;
  const GALGAS_structuredCastInstructionAST temp_2 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_5745 (temp_2.readProperty_mCastInstructionBranchList (), EnumerationOrder::up) ;
  while (enumerator_5745.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_5745.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 143)) ;
    enumerator_5745.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_castExpression_6727 ;
  const GALGAS_structuredCastInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mCastExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-cast.galgas", 162)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_castExpression_6727, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 159)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_6867 = GALGAS_castInstructionBranchListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_structuredCastInstructionAST temp_1 = this ;
  cEnumerator_castInstructionBranchListAST enumerator_6998 (temp_1.readProperty_mCastInstructionBranchList (), EnumerationOrder::up) ;
  while (enumerator_6998.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_7086 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6998.current_mTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 174)) ;
    GALGAS_unifiedTypeMapEntry var_t_7222 = var_type_7086 ;
    GALGAS_bool var_found_7245 = GALGAS_bool (ComparisonKind::equal, var_t_7222.objectCompare (var_castExpression_6727.readProperty_mResultType ())) ;
    if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 178)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).isValid ()) {
      uint32_t variant_7289 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-cast.galgas", 178)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 178)).uintValue () ;
      bool loop_7289 = true ;
      while (loop_7289) {
        loop_7289 = var_found_7245.operator_not (SOURCE_FILE ("instruction-cast.galgas", 179)).operator_and (extensionGetter_definition (var_t_7222, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 179)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 179)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 179)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 179)).isValid () ;
        if (loop_7289) {
          loop_7289 = var_found_7245.operator_not (SOURCE_FILE ("instruction-cast.galgas", 179)).operator_and (extensionGetter_definition (var_t_7222, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 179)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 179)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 179)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 179)).boolValue () ;
        }
        if (loop_7289 && (0 == variant_7289)) {
          loop_7289 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 178)) ;
        }
        if (loop_7289) {
          variant_7289 -- ;
          var_t_7222 = extensionGetter_definition (var_t_7222, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 180)).readProperty_superType () ;
          var_found_7245 = GALGAS_bool (ComparisonKind::equal, var_t_7222.objectCompare (var_castExpression_6727.readProperty_mResultType ())) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_7245.operator_not (SOURCE_FILE ("instruction-cast.galgas", 183)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6998.current_mTypeName (HERE).readProperty_location (), GALGAS_string ("the '@").add_operation (enumerator_6998.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 185)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 185)).add_operation (extensionGetter_definition (var_castExpression_6727.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 185)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 185)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 185)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 184)) ;
      }
    }
    GALGAS_string var_localConstantName_7730 ;
    GALGAS_localConstantList var_localConstantList_7756 = GALGAS_localConstantList::init (inCompiler COMMA_HERE) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_6998.current_mConstantVarName (HERE).readProperty_string ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 190)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_7730 = GALGAS_string ("cast_").add_operation (enumerator_6998.current_mConstantVarName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 191)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 191)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 191)).add_operation (enumerator_6998.current_mConstantVarName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 191)) ;
        var_localConstantList_7756.addAssign_operation (var_type_7086, enumerator_6998.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_7730  COMMA_SOURCE_FILE ("instruction-cast.galgas", 192)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_7730 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8554 ;
    {
    routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_7756, GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), enumerator_6998.current_mInstructionList (HERE), enumerator_6998.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_8554, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 201)) ;
    }
    var_castBranchList_6867.addAssign_operation (enumerator_6998.current_mTypeComparisonKind (HERE), var_type_7086, var_localConstantName_7730, var_instructionList_8554  COMMA_SOURCE_FILE ("instruction-cast.galgas", 214)) ;
    enumerator_6998.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_9062 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = this ;
  const GALGAS_structuredCastInstructionAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_5.readProperty_mElseInstructionList (), temp_6.readProperty_mEndOfCastInstruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_9062, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 217)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_7.readProperty_mEndOfCastInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 231)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::init_21__21__21_ (var_castExpression_6727, var_castBranchList_6867, var_else_5F_instructionList_9062, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-cast.galgas", 233)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@structuredCastInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_castCppVarName_10926 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_10926, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_10926, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 278)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = this ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_11107 (temp_1.readProperty_mCastBranchList (), EnumerationOrder::up) ;
  while (enumerator_11107.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11107.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
    switch (enumerator_11107.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_10926, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (extensionGetter_identifierRepresentation (enumerator_11107.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 284)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != dynamic_cast <const cPtr_").add_operation (extensionGetter_identifierRepresentation (enumerator_11107.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 287)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 288)).add_operation (var_castCppVarName_10926, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 289)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 289)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 287)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_10926, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 291)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 291)).add_operation (extensionGetter_identifierRepresentation (enumerator_11107.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 292)).add_operation (GALGAS_string (") && (nullptr != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)).add_operation (extensionGetter_identifierRepresentation (enumerator_11107.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 294)).add_operation (var_castCppVarName_10926, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 295)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 291)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_11107.current_mCastedVarCppName (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 297)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11107.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 299)).add_operation (enumerator_11107.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)).add_operation (extensionGetter_identifierRepresentation (enumerator_11107.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 300)).add_operation (var_castCppVarName_10926, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 301)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 301)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 298)) ;
      }
    }
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11107.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 303)) ;
    }
    if (enumerator_11107.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 311)) ;
    }
    enumerator_11107.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_structuredCastInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("instruction-cast.galgas", 314)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 315)) ;
      {
      const GALGAS_structuredCastInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 316)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 326)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 327)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 328)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 306)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_minusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 312)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 318)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 324)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 330)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_13605 ;
  GALGAS_string var_targetVariableCppName_13630 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_13666 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_13801 ;
        GALGAS_selfMutability var_selfMutability_13831 ;
        const bool optionalResult13780 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_13801, var_selfMutability_13831) ;
        if (!optionalResult13780) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = extensionGetter_propertiesAreMutable (var_selfMutability_13831, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 351)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 351)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 352)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_14009 = extensionGetter_definition (var_selfType_13801, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 354)).readProperty_propertyMap () ;
          GALGAS_bool var_isConstant_14114 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_14106 ; // Joker input parameter
          var_propertyMap_14009.method_searchKey (temp_6.readProperty_mReceiverName (), joker_14106, var_isConstant_14114, var_targetType_13605, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 355)) ;
          var_nameForCheckingFormalParameterUsing_13666 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_13630 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 357)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 358)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_14114.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 360)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 363)) ;
        var_targetType_13605.drop () ; // Release error dropped variable
        var_targetVariableCppName_13630.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_13666.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_13605, var_targetVariableCppName_13630, var_nameForCheckingFormalParameterUsing_13666, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 367)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_14 = this ;
  cEnumerator_lstringlist enumerator_14857 (temp_14.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_14857.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_14904 = extensionGetter_definition (var_targetType_13605, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 375)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_14993 ;
    GALGAS_bool var_isConstant_15012 ;
    var_propertyMap_14904.method_searchKey (enumerator_14857.current_mValue (HERE), var_accessControl_14993, var_isConstant_15012, var_targetType_13605, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 376)) ;
    extensionMethod_checkSetAccess (var_accessControl_14993, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_14857.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 377)) ;
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_isConstant_15012.boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_14857.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 382)) ;
      }
    }
    enumerator_14857.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = extensionGetter_definition (var_targetType_13605, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 386)).readProperty_features ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 386)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 386)).boolEnum () ;
    if (kBoolTrue == test_17) {
      const GALGAS_plusEqualExpressionInstructionAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_13605, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 388)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15952 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_20 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_20.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_13605, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_15952, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 391)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_21 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_13605, var_expression_15952.readProperty_mResultType (), temp_21.readProperty_mInstructionLocation (), var_expression_15952, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 401)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_22 = this ;
  const GALGAS_plusEqualExpressionInstructionAST temp_23 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_22.readProperty_mInstructionLocation (), var_targetType_13605, var_targetVariableCppName_13630, var_nameForCheckingFormalParameterUsing_13666, temp_23.readProperty_mStructAttributeList (), var_expression_15952, GALGAS_string ("plusAssign_operation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 403)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_16989 ;
  GALGAS_string var_targetVariableCppName_17014 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_17050 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_17185 ;
        GALGAS_selfMutability var_selfMutability_17215 ;
        const bool optionalResult17164 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_17185, var_selfMutability_17215) ;
        if (!optionalResult17164) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = extensionGetter_selfIsMutable (var_selfMutability_17215, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 430)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 430)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 431)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_17384 = extensionGetter_definition (var_selfType_17185, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)).readProperty_propertyMap () ;
          GALGAS_bool var_isConstant_17489 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_17481 ; // Joker input parameter
          var_propertyMap_17384.method_searchKey (temp_6.readProperty_mReceiverName (), joker_17481, var_isConstant_17489, var_targetType_16989, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 434)) ;
          var_nameForCheckingFormalParameterUsing_17050 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_17014 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 437)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_17489.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfMutability_17215, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 441)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 441)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 442)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 445)) ;
        var_targetType_16989.drop () ; // Release error dropped variable
        var_targetVariableCppName_17014.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_17050.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_16989, var_targetVariableCppName_17014, var_nameForCheckingFormalParameterUsing_17050, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 449)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_18379 (temp_17.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_18379.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_18426 = extensionGetter_definition (var_targetType_16989, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_18515 ;
    GALGAS_bool var_isConstant_18534 ;
    var_propertyMap_18426.method_searchKey (enumerator_18379.current_mValue (HERE), var_accessControl_18515, var_isConstant_18534, var_targetType_16989, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 458)) ;
    extensionMethod_checkSetAccess (var_accessControl_18515, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_18379.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 459)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_18534.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_18379.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)) ;
      }
    }
    enumerator_18379.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_16989, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 468)).readProperty_features ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 468)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 468)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_minusEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_16989, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 470)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 470)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 470)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 469)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_19475 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_16989, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_19475, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 473)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_16989, var_expression_19475.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_19475, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 483)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), var_targetType_16989, var_targetVariableCppName_17014, var_nameForCheckingFormalParameterUsing_17050, temp_26.readProperty_mStructAttributeList (), var_expression_19475, GALGAS_string ("minusAssign_operation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 485)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_20511 ;
  GALGAS_string var_targetVariableCppName_20536 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_20572 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_20707 ;
        GALGAS_selfMutability var_selfMutability_20737 ;
        const bool optionalResult20686 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_20707, var_selfMutability_20737) ;
        if (!optionalResult20686) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = extensionGetter_selfIsMutable (var_selfMutability_20737, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 512)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 513)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_20906 = extensionGetter_definition (var_selfType_20707, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)).readProperty_propertyMap () ;
          GALGAS_bool var_isConstant_21011 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_21003 ; // Joker input parameter
          var_propertyMap_20906.method_searchKey (temp_6.readProperty_mReceiverName (), joker_21003, var_isConstant_21011, var_targetType_20511, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 516)) ;
          var_nameForCheckingFormalParameterUsing_20572 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_20536 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 518)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 519)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_21011.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 521)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfMutability_20737, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 523)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 523)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 524)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 527)) ;
        var_targetType_20511.drop () ; // Release error dropped variable
        var_targetVariableCppName_20536.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_20572.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_20511, var_targetVariableCppName_20536, var_nameForCheckingFormalParameterUsing_20572, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 531)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_21928 (temp_17.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_21928.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21975 = extensionGetter_definition (var_targetType_20511, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_22064 ;
    GALGAS_bool var_isConstant_22083 ;
    var_propertyMap_21975.method_searchKey (enumerator_21928.current_mValue (HERE), var_accessControl_22064, var_isConstant_22083, var_targetType_20511, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)) ;
    extensionMethod_checkSetAccess (var_accessControl_22064, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_21928.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 542)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_22083.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_21928.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 547)) ;
      }
    }
    enumerator_21928.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_20511, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 551)).readProperty_features ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 551)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_mulEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_20511, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 553)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 553)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 553)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 552)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_23018 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_20511, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_23018, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 556)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_20511, var_expression_23018.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_23018, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 566)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), var_targetType_20511, var_targetVariableCppName_20536, var_nameForCheckingFormalParameterUsing_20572, temp_26.readProperty_mStructAttributeList (), var_expression_23018, GALGAS_string ("mulAssign_operation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 568)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_24052 ;
  GALGAS_string var_targetVariableCppName_24077 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_24113 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_24248 ;
        GALGAS_selfMutability var_selfMutability_24278 ;
        const bool optionalResult24227 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_24248, var_selfMutability_24278) ;
        if (!optionalResult24227) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = extensionGetter_selfIsMutable (var_selfMutability_24278, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 595)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 595)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 596)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_24447 = extensionGetter_definition (var_selfType_24248, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 598)).readProperty_propertyMap () ;
          GALGAS_bool var_isConstant_24552 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_24544 ; // Joker input parameter
          var_propertyMap_24447.method_searchKey (temp_6.readProperty_mReceiverName (), joker_24544, var_isConstant_24552, var_targetType_24052, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 599)) ;
          var_nameForCheckingFormalParameterUsing_24113 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_24077 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 601)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 602)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_24552.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 604)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfMutability_24278, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 606)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 606)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 607)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 610)) ;
        var_targetType_24052.drop () ; // Release error dropped variable
        var_targetVariableCppName_24077.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_24113.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_24052, var_targetVariableCppName_24077, var_nameForCheckingFormalParameterUsing_24113, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 614)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_25469 (temp_17.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_25469.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_25516 = extensionGetter_definition (var_targetType_24052, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 623)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_25605 ;
    GALGAS_bool var_isConstant_25624 ;
    var_propertyMap_25516.method_searchKey (enumerator_25469.current_mValue (HERE), var_accessControl_25605, var_isConstant_25624, var_targetType_24052, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 624)) ;
    extensionMethod_checkSetAccess (var_accessControl_25605, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_25469.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_25624.boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_divEqualExpressionInstructionAST temp_19 = this ;
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas", 630)) ;
      }
    }
    enumerator_25469.gotoNextObject () ;
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = extensionGetter_definition (var_targetType_24052, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 634)).readProperty_features ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 634)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_divEqualExpressionInstructionAST temp_22 = this ;
      TC_Array <FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_24052, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 636)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 636)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 636)), fixItArray23  COMMA_SOURCE_FILE ("instruction-concat.galgas", 635)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_26572 ;
  const GALGAS_divEqualExpressionInstructionAST temp_24 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_24.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_24052, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_26572, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 639)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_25 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_24052, var_expression_26572.readProperty_mResultType (), temp_25.readProperty_mInstructionLocation (), var_expression_26572, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 649)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_26 = this ;
  const GALGAS_divEqualExpressionInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_26.readProperty_mInstructionLocation (), var_targetType_24052, var_targetVariableCppName_24077, var_nameForCheckingFormalParameterUsing_24113, temp_27.readProperty_mStructAttributeList (), var_expression_26572, GALGAS_string ("divAssign_operation"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 651)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_27617 ;
  GALGAS_string var_targetVariableCppName_27642 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_27678 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_27813 ;
        GALGAS_selfMutability var_selfMutability_27843 ;
        const bool optionalResult27792 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_27813, var_selfMutability_27843) ;
        if (!optionalResult27792) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          GALGAS_propertyMap var_propertyMap_27874 = extensionGetter_definition (var_selfType_27813, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).readProperty_propertyMap () ;
          GALGAS_bool var_isConstant_27979 ;
          const GALGAS_plusEqualElementsInstructionAST temp_3 = this ;
          GALGAS_AccessControl joker_27971 ; // Joker input parameter
          var_propertyMap_27874.method_searchKey (temp_3.readProperty_mReceiverName (), joker_27971, var_isConstant_27979, var_targetType_27617, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 679)) ;
          var_nameForCheckingFormalParameterUsing_27678 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
          const GALGAS_plusEqualElementsInstructionAST temp_4 = this ;
          var_targetVariableCppName_27642 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 681)).add_operation (temp_4.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 682)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_isConstant_27979.boolEnum () ;
            if (kBoolTrue == test_5) {
              const GALGAS_plusEqualElementsInstructionAST temp_6 = this ;
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (temp_6.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 684)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = extensionGetter_propertiesAreMutable (var_selfMutability_27843, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 686)).boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 687)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray12  COMMA_SOURCE_FILE ("instruction-concat.galgas", 690)) ;
        var_targetType_27617.drop () ; // Release error dropped variable
        var_targetVariableCppName_27642.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_27678.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_13 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_13.readProperty_mReceiverName (), var_targetType_27617, var_targetVariableCppName_27642, var_nameForCheckingFormalParameterUsing_27678, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 694)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_14 = this ;
  cEnumerator_lstringlist enumerator_28899 (temp_14.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_28899.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_28946 = extensionGetter_definition (var_targetType_27617, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 703)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_29076 ;
    GALGAS_bool var_isConstant_29095 ;
    var_propertyMap_28946.method_searchKey (enumerator_28899.current_mValue (HERE), var_accessControl_29076, var_isConstant_29095, var_targetType_27617, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 705)) ;
    extensionMethod_checkSetAccess (var_accessControl_29076, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_28899.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 706)) ;
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = var_isConstant_29095.boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_28899.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 718)) ;
      }
    }
    enumerator_28899.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_29725 = extensionGetter_definition (var_targetType_27617, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 722)).readProperty_addAssignOperatorArguments () ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (ComparisonKind::equal, var_addAssignOperatorArguments_29725.getter_count (SOURCE_FILE ("instruction-concat.galgas", 723)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      const GALGAS_plusEqualElementsInstructionAST temp_18 = this ;
      TC_Array <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_27617, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 725)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 725)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 725)), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 724)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GALGAS_plusEqualElementsInstructionAST temp_21 = this ;
      test_20 = GALGAS_bool (ComparisonKind::notEqual, temp_21.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 727)).objectCompare (var_addAssignOperatorArguments_29725.getter_count (SOURCE_FILE ("instruction-concat.galgas", 727)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_plusEqualElementsInstructionAST temp_22 = this ;
        const GALGAS_plusEqualElementsInstructionAST temp_23 = this ;
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_27617, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 729)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 729)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 729)).add_operation (var_addAssignOperatorArguments_29725.getter_count (SOURCE_FILE ("instruction-concat.galgas", 730)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 729)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 730)).add_operation (temp_23.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 731)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 730)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 731)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 728)) ;
      }
    }
    if (kBoolFalse == test_20) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_30534 = GALGAS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GALGAS_plusEqualElementsInstructionAST temp_25 = this ;
      cEnumerator_actualOutputArgumentList enumerator_30599 (temp_25.readProperty_mExpressions (), EnumerationOrder::up) ;
      cEnumerator_functionSignature enumerator_30685 (var_addAssignOperatorArguments_29725, EnumerationOrder::up) ;
      while (enumerator_30599.hasCurrentObject () && enumerator_30685.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_31021 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_30599.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_30685.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_31021, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 735)) ;
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (ComparisonKind::notEqual, enumerator_30685.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_30599.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_26) {
            GALGAS_string temp_27 ;
            const enumGalgasBool test_28 = GALGAS_bool (ComparisonKind::notEqual, enumerator_30685.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_28) {
              temp_27 = enumerator_30685.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)) ;
            }else if (kBoolFalse == test_28) {
              temp_27 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_31123 = GALGAS_string ("!").add_operation (temp_27, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)) ;
            TC_Array <FixItDescription> fixItArray29 ;
            appendFixItActions (fixItArray29, kFixItReplace, var_s_31123) ;
            inCompiler->emitSemanticError (enumerator_30599.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_31123, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 746)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 746)), fixItArray29  COMMA_SOURCE_FILE ("instruction-concat.galgas", 746)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_30685.current_mFormalArgumentType (HERE), var_expression_31021.readProperty_mResultType (), enumerator_30599.current_mEndOfExpressionLocation (HERE), var_expression_31021, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 750)) ;
        }
        var_effectiveParameterList_30534.addAssign_operation (var_expression_31021  COMMA_SOURCE_FILE ("instruction-concat.galgas", 751)) ;
        enumerator_30599.gotoNextObject () ;
        enumerator_30685.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_30 = this ;
      const GALGAS_plusEqualElementsInstructionAST temp_31 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::init_21__21__21__21__21__21_ (var_targetVariableCppName_27642, var_targetType_27617, var_nameForCheckingFormalParameterUsing_27678, temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mStructAttributeList (), var_effectiveParameterList_30534, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-concat.galgas", 754)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualnstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualnstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 786)) ;
  GALGAS_stringlist var_parameterList_33016 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_33054 (temp_1.readProperty_mExpressionList (), EnumerationOrder::up) ;
  while (enumerator_33054.hasCurrentObject ()) {
    GALGAS_string var_parameter_33264 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_33054.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_33264, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 789)) ;
    var_parameterList_33016.addAssign_operation (var_parameter_33264  COMMA_SOURCE_FILE ("instruction-concat.galgas", 796)) ;
    enumerator_33054.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 799)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_33468 (temp_4.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_33468.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_33468.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) ;
    enumerator_33468.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 805)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 806)) ;
  }
  cEnumerator_stringlist enumerator_33748 (var_parameterList_33016, EnumerationOrder::up) ;
  while (enumerator_33748.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33748.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)) ;
    if (enumerator_33748.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 809)) ;
    }
    enumerator_33748.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 811)).readProperty_features ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 811)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 813)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 813)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 815)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opEqualInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_opEqualInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 838)) ;
  GALGAS_string var_sourceVar_35317 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_35317, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 839)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 846)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 847)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_35473 (temp_4.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_35473.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_35473.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 849)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 849)) ;
    enumerator_35473.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)).add_operation (var_sourceVar_35317, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 854)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 854)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 855)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dropInstructionAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4071 (temp_0.readProperty_mDropList (), EnumerationOrder::up) ;
  while (enumerator_4071.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_4071.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 95)) ;
    }
    enumerator_4071.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 210)) ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)) ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeErrorOrWarningInstruction?&?&?????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                   const GALGAS_semanticExpressionAST constinArgument_inLocationExpression,
                                                                                                   const GALGAS_semanticExpressionAST constinArgument_inMessageExpression,
                                                                                                   const GALGAS_fixitListAST constinArgument_inFixitListAST,
                                                                                                   const GALGAS_location constinArgument_inErrorLocation,
                                                                                                   const GALGAS_string constinArgument_inErrorOrWarningString,
                                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outLocationExpression,
                                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outMessageExpression,
                                                                                                   GALGAS_fixitListForGeneration & outArgument_outFixitListForGeneration,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLocationExpression.drop () ; // Release 'out' argument
  outArgument_outMessageExpression.drop () ; // Release 'out' argument
  outArgument_outFixitListForGeneration.drop () ; // Release 'out' argument
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 266)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 276)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-error.galgas", 286)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 283)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::init (inCompiler COMMA_HERE) ;
  cEnumerator_fixitListAST enumerator_10719 (constinArgument_inFixitListAST, EnumerationOrder::up) ;
  while (enumerator_10719.hasCurrentObject ()) {
    switch (enumerator_10719.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 297))  COMMA_SOURCE_FILE ("instruction-error.galgas", 297)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_11811 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_10719.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10863_exp = extractPtr_11811->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10867_errorLocation = extractPtr_11811->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11177 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10863_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11177, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (ComparisonKind::notEqual, var_expression_11177.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (ComparisonKind::notEqual, var_expression_11177.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (ComparisonKind::notEqual, var_expression_11177.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (ComparisonKind::notEqual, var_expression_11177.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_10867_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11177.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 312)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 312)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItReplace (var_expression_11177  COMMA_SOURCE_FILE ("instruction-error.galgas", 315))  COMMA_SOURCE_FILE ("instruction-error.galgas", 315)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_12794 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_10719.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11841_exp = extractPtr_12794->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11845_errorLocation = extractPtr_12794->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_12155 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11841_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12155, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 317)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (ComparisonKind::notEqual, var_expression_12155.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (ComparisonKind::notEqual, var_expression_12155.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (ComparisonKind::notEqual, var_expression_12155.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (ComparisonKind::notEqual, var_expression_12155.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_11845_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_12155.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 330)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 330)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItInsertBefore (var_expression_12155  COMMA_SOURCE_FILE ("instruction-error.galgas", 333))  COMMA_SOURCE_FILE ("instruction-error.galgas", 333)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_13775 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_10719.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12823_exp = extractPtr_13775->mAssociatedValue0 ;
        const GALGAS_location extractedValue_12827_errorLocation = extractPtr_13775->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_13137 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_12823_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13137, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 335)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (ComparisonKind::notEqual, var_expression_13137.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (ComparisonKind::notEqual, var_expression_13137.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (ComparisonKind::notEqual, var_expression_13137.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (ComparisonKind::notEqual, var_expression_13137.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_12827_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_13137.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 348)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 348)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItInsertAfter (var_expression_13137  COMMA_SOURCE_FILE ("instruction-error.galgas", 351))  COMMA_SOURCE_FILE ("instruction-error.galgas", 351)) ;
      }
      break ;
    }
    enumerator_10719.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 357)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 356)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_14935 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_14963 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_14990 ;
  {
  const GALGAS_errorInstructionAST temp_0 = this ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  const GALGAS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_14935, var_messageExpression_14963, var_fixitListForGeneration_14990, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 373)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_15053 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_errorInstructionAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_15102 (temp_4.readProperty_mBuiltVariableList (), EnumerationOrder::up) ;
  while (enumerator_15102.hasCurrentObject ()) {
    GALGAS_string var_varCppName_15198 ;
    {
    GALGAS_unifiedTypeMapEntry joker_15190 ; // Joker input parameter
    GALGAS_string joker_15209 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_15102.current_mValue (HERE), joker_15190, var_varCppName_15198, joker_15209, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 391)) ;
    }
    var_builtVariableCppNameList_15053.addAssign_operation (var_varCppName_15198  COMMA_SOURCE_FILE ("instruction-error.galgas", 392)) ;
    enumerator_15102.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_locationExpression_14935, var_messageExpression_14963, var_builtVariableCppNameList_15053, var_fixitListForGeneration_14990, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-error.galgas", 395)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_18565 ;
  const GALGAS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_18565, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
  GALGAS_string var_messageCppVarName_18773 ;
  const GALGAS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_18773, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 482)) ;
  GALGAS_string var_fixItArrayCppName_19030 ;
  const GALGAS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_19030, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 490)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) COMMA_SOURCE_FILE ("instruction-error.galgas", 499)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (var_receiverCppVarName_18565, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (var_messageCppVarName_18773, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (var_fixItArrayCppName_19030, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 503)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 500)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = this ;
  cEnumerator_stringlist enumerator_19404 (temp_4.readProperty_mBuiltVariableCppNameList (), EnumerationOrder::up) ;
  while (enumerator_19404.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_19404.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 507)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_19404.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 508)) ;
    enumerator_19404.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 514)) ;
  const GALGAS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 516)) ;
  const GALGAS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 517)) ;
  const GALGAS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 518)) ;
  const GALGAS_forInstructionAST temp_5 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_18054 (temp_5.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
  while (enumerator_18054.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_18054.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 520)) ;
    enumerator_18054.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 531)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 537)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 543)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                              GALGAS_string & outArgument_outEnumeratorCppName,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 576)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 583)).getter_string (SOURCE_FILE ("instruction-for.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 583)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_20976 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 584)).readProperty_enumerationDescriptorList () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, var_enumerationDescriptorList_20976.getter_count (SOURCE_FILE ("instruction-for.galgas", 585)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 586)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 586)) ;
    }
  }
  GALGAS_string var_suggestion_21327 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_21367 (var_enumerationDescriptorList_20976, EnumerationOrder::up) ;
  while (enumerator_21367.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = this ;
    var_suggestion_21327.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_21367.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 592)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = this ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = this ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_21367.current_mEnumeratedType (HERE), GALGAS_lstring::init_21__21_ (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_21367.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 595)), temp_7.readProperty_mEndOfAnonymousEnumeration (), inCompiler COMMA_HERE), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597)).add_operation (enumerator_21367.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 597))  COMMA_SOURCE_FILE ("instruction-for.galgas", 593)) ;
    if (enumerator_21367.hasNextObject ()) {
      var_suggestion_21327.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 599)) ;
    }
    enumerator_21367.gotoNextObject () ;
  }
  var_suggestion_21327.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_21327) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 603)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GALGAS_string & outArgument_outEnumeratorCppName,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 624)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 621)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)).getter_string (SOURCE_FILE ("instruction-for.galgas", 631)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_23080 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 632)).readProperty_enumerationDescriptorList () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 633)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 634)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = this ;
      test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 637)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 637)) COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_23494 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)).readProperty_enumerationDescriptorList () ;
        cEnumerator_enumerationDescriptorList enumerator_23625 (var_currentTypedAttributeList_23494, EnumerationOrder::up) ;
        while (enumerator_23625.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GALGAS_lstring::init_21__21_ (enumerator_23625.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression (), inCompiler COMMA_HERE), enumerator_23625.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)).add_operation (enumerator_23625.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 643)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)).add_operation (enumerator_23625.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)) ;
          }
          enumerator_23625.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = this ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = this ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 647)).operator_and (GALGAS_bool (ComparisonKind::notEqual, temp_11.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 647)).objectCompare (var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 647)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 647)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 651)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = this ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 650)).getter_string (SOURCE_FILE ("instruction-for.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 651)).add_operation (temp_15.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 653)).getter_string (SOURCE_FILE ("instruction-for.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 648)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = this ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = this ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (ComparisonKind::greaterThan, temp_19.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 654)).objectCompare (var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 654)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 654)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = this ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 658)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = this ;
            TC_Array <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 657)).getter_string (SOURCE_FILE ("instruction-for.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 657)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 658)).add_operation (temp_23.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 660)).getter_string (SOURCE_FILE ("instruction-for.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = this ;
              test_26 = GALGAS_bool (ComparisonKind::greaterThan, var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 662)).objectCompare (temp_27.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 662)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = this ;
              GALGAS_uint var_missingArgumentCount_25194 = var_enumerationDescriptorList_23080.getter_count (SOURCE_FILE ("instruction-for.galgas", 663)).substract_operation (temp_28.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = this ;
              TC_Array <FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (ComparisonKind::equal, var_missingArgumentCount_25194.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_25194.getter_string (SOURCE_FILE ("instruction-for.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 666)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 664)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = this ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_25589 (temp_33.readProperty_mElementList (), EnumerationOrder::up) ;
          cEnumerator_enumerationDescriptorList enumerator_25651 (var_enumerationDescriptorList_23080, EnumerationOrder::up) ;
          while (enumerator_25589.hasCurrentObject () && enumerator_25651.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25589.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25589.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMapEntry var_foundType_25841 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_25589.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 671)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (ComparisonKind::notEqual, var_foundType_25841.objectCompare (enumerator_25651.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_25589.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_25841, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (extensionGetter_definition (enumerator_25651.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 673)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_25651.current_mEnumeratedType (HERE), enumerator_25589.current_mOptionalConstantName (HERE), enumerator_25589.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)).add_operation (enumerator_25651.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680))  COMMA_SOURCE_FILE ("instruction-for.galgas", 676)) ;
              }
            }
            enumerator_25589.gotoNextObject () ;
            enumerator_25651.gotoNextObject () ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GALGAS_string & outArgument_outEnumeratorCppName,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 702)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)).getter_string (SOURCE_FILE ("instruction-for.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)) ;
  GALGAS_unifiedTypeMapEntry var_enumeratedElementType_27462 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)).readProperty_typeForEnumeratedElement () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_27462.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 711)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 712)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 712)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GALGAS_bool (ComparisonKind::notEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_27462, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 714))  COMMA_SOURCE_FILE ("instruction-for.galgas", 714)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GALGAS_bool (ComparisonKind::notEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GALGAS_unifiedTypeMapEntry var_explicitType_28045 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 718)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (var_enumeratedElementType_27462, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 719)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_28045, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 719)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = this ;
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_27462, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 720)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 737)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 738)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 740)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_29445 ;
  {
  const GALGAS_forInstructionAST temp_0 = this ;
  const GALGAS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_29445, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 741)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 754)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 756)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_29972 ;
  {
  const GALGAS_forInstructionAST temp_3 = this ;
  const GALGAS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_29972, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 757)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 770)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 772)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_30533 ;
  {
  const GALGAS_forInstructionAST temp_6 = this ;
  const GALGAS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_30533, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 773)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 786)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_30676 = GALGAS_localConstantList::init (inCompiler COMMA_HERE) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_30765 = GALGAS_forInstructionEnumeratedObjectListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_forInstructionAST temp_9 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_30804 (temp_9.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
  while (enumerator_30804.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_31093 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_31155 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_30804.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_30676, var_enumeratorCppName_31093, var_enumerationExpression_31155, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 791)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_30804.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("up") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("down") ;
    }
    var_enumerationList_30765.addAssign_operation (temp_10, var_enumerationExpression_31155, var_enumeratorCppName_31093  COMMA_SOURCE_FILE ("instruction-for.galgas", 802)) ;
    enumerator_30804.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 808)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 809)) ;
  }
  cEnumerator_localConstantList enumerator_31472 (var_localConstantListForDoBranch_30676, EnumerationOrder::up) ;
  while (enumerator_31472.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_31472.current (HERE).readProperty_mName (), enumerator_31472.current (HERE).readProperty_mType (), enumerator_31472.current (HERE).readProperty_mCppName (), enumerator_31472.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 812)) ;
    }
    enumerator_31472.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_31962 ;
  const GALGAS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 823)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_31962, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 820)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_32149 ;
  {
  const GALGAS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_31962, var_whileExpression_32149, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 829)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 836)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 837)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 839)) ;
  }
  GALGAS_string var_indexCppName_32379 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = this ;
    test_16 = GALGAS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = this ;
      var_indexCppName_32379 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)).getter_string (SOURCE_FILE ("instruction-for.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
      const GALGAS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_30676.addAssign_operation (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_32379  COMMA_SOURCE_FILE ("instruction-for.galgas", 843)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_33118 ;
  {
  const GALGAS_forInstructionAST temp_20 = this ;
  const GALGAS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_30676, GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_33118, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 850)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 864)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 866)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 867)) ;
  }
  const GALGAS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::init_21__21__21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), var_enumerationList_30765, var_indexCppName_32379, var_whileExpression_32149, var_before_5F_instructionList_29445, var_between_5F_instructionList_29972, var_do_5F_instructionList_33118, var_after_5F_instructionList_30533, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 869)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_enumerationVarCppNameList_35386 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_forInstructionForGeneration temp_0 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35448 (temp_0.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
  while (enumerator_35448.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_35656 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_35448.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_35656, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)) ;
    var_enumerationVarCppNameList_35386.addAssign_operation (var_enumerationVar_35656  COMMA_SOURCE_FILE ("instruction-for.galgas", 924)) ;
    enumerator_35448.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35779 (temp_1.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
  cEnumerator_stringlist enumerator_35831 (var_enumerationVarCppNameList_35386, EnumerationOrder::up) ;
  while (enumerator_35779.hasCurrentObject () && enumerator_35831.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (enumerator_35779.current_mEnumeratedExpression (HERE).readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)).add_operation (enumerator_35779.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (enumerator_35831.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (GALGAS_string (", EnumerationOrder::"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 928)).add_operation (enumerator_35779.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 927)) ;
    enumerator_35779.gotoNextObject () ;
    enumerator_35831.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = this ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_36126 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 932)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = this ;
    const GALGAS_forInstructionForGeneration temp_5 = this ;
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 934)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 934)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_36126.operator_not (SOURCE_FILE ("instruction-for.galgas", 934)) COMMA_SOURCE_FILE ("instruction-for.galgas", 934)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = this ;
        test_6 = GALGAS_bool (ComparisonKind::notEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 937)).add_operation (GALGAS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 937)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 937)) ;
        }
      }
      GALGAS_string var_boolVarCppName_36573 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 939)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 940)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_36126.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_36573, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 942)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 942)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_36934 ;
        const GALGAS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_36934, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 944)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_36573, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)).add_operation (var_whileVar_36934, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 945)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 945)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 947)) ;
      const GALGAS_forInstructionForGeneration temp_11 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37091 (temp_11.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
      while (enumerator_37091.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37091.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 949)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 949)) ;
        enumerator_37091.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_36573.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 951)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 951)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 952)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 960)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 961)) ;
      const GALGAS_forInstructionForGeneration temp_13 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37596 (temp_13.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
      while (enumerator_37596.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37596.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 963)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 963)) ;
        enumerator_37596.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_36573.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 965)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 965)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 967)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38079 (temp_15.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
      while (enumerator_38079.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_38079.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 977)) ;
        enumerator_38079.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = this ;
        test_16 = GALGAS_bool (ComparisonKind::notEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 980)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 980)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 980)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_36126.operator_not (SOURCE_FILE ("instruction-for.galgas", 983)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 984)) ;
          const GALGAS_forInstructionForGeneration temp_20 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38480 (temp_20.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
          while (enumerator_38480.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38480.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 986)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 986)) ;
            if (enumerator_38480.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 987)) ;
            }
            enumerator_38480.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 989)) ;
          GALGAS_string var_whileVar_38870 ;
          const GALGAS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_38870, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 990)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_36573, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)).add_operation (var_whileVar_38870, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 997)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 998)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = this ;
        test_22 = GALGAS_bool (ComparisonKind::greaterThan, temp_23.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 1001)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1002)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1003)) ;
          const GALGAS_forInstructionForGeneration temp_24 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39205 (temp_24.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
          while (enumerator_39205.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_39205.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1005)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1005)) ;
            enumerator_39205.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_36573.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1007)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1007)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1008)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1016)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1017)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1020)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1022)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1023)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1031)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = this ;
      test_27 = GALGAS_bool (ComparisonKind::notEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)).add_operation (GALGAS_string (" (uint32_t (0)) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1036)) ;
    const GALGAS_forInstructionForGeneration temp_30 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_40402 (temp_30.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
    while (enumerator_40402.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_40402.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1038)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1038)) ;
      if (enumerator_40402.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1039)) ;
      }
      enumerator_40402.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1041)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = this ;
      test_32 = GALGAS_bool (ComparisonKind::greaterThan, temp_33.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 1052)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1054)) ;
        const GALGAS_forInstructionForGeneration temp_34 = this ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_41049 (temp_34.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
        while (enumerator_41049.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_41049.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1056)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1056)) ;
          if (enumerator_41049.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1057)) ;
          }
          enumerator_41049.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1059)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = this ;
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1060)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1068)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1069)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_41637 (temp_36.readProperty_mEnumeratedObjectList (), EnumerationOrder::up) ;
    while (enumerator_41637.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_41637.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1073)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1073)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1073)) ;
      enumerator_41637.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = this ;
      test_37 = GALGAS_bool (ComparisonKind::notEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1076)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1076)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = this ;
        const GALGAS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1078)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1077)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1080)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 366)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_16668 (temp_1.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_16668.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_16668.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 368)) ;
    enumerator_16668.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 377)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_17102 (temp_1.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_17102.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_17102.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 379)) ;
    enumerator_17102.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_17828 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 395)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_17828 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 396)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_18142 ;
  GALGAS_bool var_hasTranslateFeature_18180 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  GALGAS_bool joker_18162 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_18142, joker_18162, var_hasTranslateFeature_18180, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 398)) ;
  GALGAS_formalParameterSignature var_labelSignature_18307 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_18142.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_18307, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 405)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_18749 ;
  const GALGAS_grammarInFileInstructionAST temp_3 = this ;
  const GALGAS_grammarInFileInstructionAST temp_4 = this ;
  const GALGAS_grammarInFileInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 416)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 416)), var_labelSignature_18307, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_18749, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 410)) ;
  GALGAS_semanticExpressionForGeneration var_sourceExpression_19104 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 426)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_19104, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_sourceExpression_19104.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_19104.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 436)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 436)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 434)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_19573 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 439)) ;
  GALGAS_stringlist var_assignementList_19714 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_18180, var_syntaxDirectedTranslationResultVarName_19573, var_assignementList_19714, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 441)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = this ;
  const GALGAS_grammarInFileInstructionAST temp_13 = this ;
  const GALGAS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::init_21__21__21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_19104, var_actualParameterListForGeneration_18749, var_hasTranslateFeature_18180, var_assignementList_19714, var_syntaxDirectedTranslationResultVarName_19573, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 450)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  GALGAS_lstring var_grammarUsefulnessName_20870 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 472)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_20870 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 473)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_21198 ;
  GALGAS_bool var_hasTranslateFeature_21236 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  GALGAS_bool joker_21218 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_grammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21198, joker_21218, var_hasTranslateFeature_21236, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 475)) ;
  GALGAS_formalParameterSignature var_labelSignature_21363 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_21198.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_21363, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 482)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_21805 ;
  const GALGAS_grammarInStringInstructionAST temp_3 = this ;
  const GALGAS_grammarInStringInstructionAST temp_4 = this ;
  const GALGAS_grammarInStringInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 493)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 493)), var_labelSignature_21363, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_21805, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 487)) ;
  GALGAS_semanticExpressionForGeneration var_sourceExpression_22160 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 503)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_22160, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_sourceExpression_22160.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22160.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 513)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 511)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_22832 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 519)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_22832, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 516)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::notEqual, var_nameExpression_22832.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_22160.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 528)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 529)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 527)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_23242 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 532)) ;
  GALGAS_stringlist var_assignementList_23383 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_21236, var_syntaxDirectedTranslationResultVarName_23242, var_assignementList_23383, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 534)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = this ;
  const GALGAS_grammarInStringInstructionAST temp_17 = this ;
  const GALGAS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::init_21__21__21__21__21__21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_22160, var_nameExpression_22832, var_actualParameterListForGeneration_21805, var_hasTranslateFeature_21236, var_assignementList_23383, var_syntaxDirectedTranslationResultVarName_23242, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 543)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 580)) ;
  GALGAS_string var_sourceVar_25489 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_25489, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 582)) ;
  GALGAS_stringlist var_parameterCppNameList_25531 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_25577 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_inputVariableList_25631 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_25675 (temp_2.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_25675.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_25984 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_25675.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_25577, var_inputVariableList_25631, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_25984, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 594)) ;
    var_parameterCppNameList_25531.addAssign_operation (var_parameterCppName_25984  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 603)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_25675.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_25984.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)) ;
      }
    }
    enumerator_25675.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 612)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 613)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)).add_operation (var_sourceVar_25489, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)) ;
  cEnumerator_stringlist enumerator_26774 (var_parameterCppNameList_25531, EnumerationOrder::up) ;
  while (enumerator_26774.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_26774.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 618)) ;
    enumerator_26774.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 620)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 621)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  cEnumerator_stringlist enumerator_27022 (temp_14.readProperty_mAssignementList (), EnumerationOrder::up) ;
  while (enumerator_27022.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27022.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)) ;
    enumerator_27022.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 651))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 651)) ;
  GALGAS_string var_sourceVar_28612 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_28612, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 653)) ;
  GALGAS_string var_nameVar_28832 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_28832, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 661)) ;
  GALGAS_stringlist var_parameterCppNameList_28872 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_28918 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  GALGAS_stringlist var_inputVariableList_28972 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_29016 (temp_3.readProperty_mActualParameterList (), EnumerationOrder::up) ;
  while (enumerator_29016.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_29332 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_29016.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_28918, var_inputVariableList_28972, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_29332, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 673)) ;
    var_parameterCppNameList_28872.addAssign_operation (var_parameterCppName_29332  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 682)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_29016.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_29332.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)) ;
      }
    }
    enumerator_29016.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 690)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 692)).add_operation (var_sourceVar_28612, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 694)).add_operation (var_nameVar_28832, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)) ;
  cEnumerator_stringlist enumerator_30141 (var_parameterCppNameList_28872, EnumerationOrder::up) ;
  while (enumerator_30141.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_30141.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 697)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 697)) ;
    enumerator_30141.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 699)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 700)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  cEnumerator_stringlist enumerator_30389 (temp_15.readProperty_mAssignementList (), EnumerationOrder::up) ;
  while (enumerator_30389.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30389.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 702)) ;
    enumerator_30389.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_7470 ;
  GALGAS_string var_targetVariableCppName_7495 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_7667 ;
        GALGAS_selfMutability var_selfMutability_7697 ;
        const bool optionalResult7646 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_7667, var_selfMutability_7697) ;
        if (!optionalResult7646) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = extensionGetter_selfIsMutable (var_selfMutability_7697, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 209)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 209)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = this ;
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_7866 = extensionGetter_definition (var_selfType_7667, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 212)).readProperty_propertyMap () ;
          GALGAS_bool var_isConstant_7971 ;
          const GALGAS_incDecInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_7963 ; // Joker input parameter
          var_propertyMap_7866.method_searchKey (temp_6.readProperty_mReceiverName (), joker_7963, var_isConstant_7971, var_targetType_7470, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 213)) ;
          const GALGAS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_7495 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 215)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 216)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_7971.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = this ;
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = extensionGetter_propertiesAreMutable (var_selfMutability_7697, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 220)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 220)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = this ;
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 221)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 224)) ;
        var_targetType_7470.drop () ; // Release error dropped variable
        var_targetVariableCppName_7495.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = this ;
    GALGAS_string joker_8815 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_7470, var_targetVariableCppName_7495, joker_8815, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 228)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_8880 (temp_17.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_8880.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8927 = extensionGetter_definition (var_targetType_7470, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 237)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_9016 ;
    GALGAS_bool var_isConstant_9035 ;
    var_propertyMap_8927.method_searchKey (enumerator_8880.current_mValue (HERE), var_accessControl_9016, var_isConstant_9035, var_targetType_7470, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 238)) ;
    extensionMethod_checkSetAccess (var_accessControl_9016, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_8880.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_9035.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8880.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 244)) ;
      }
    }
    enumerator_8880.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_7470, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)).readProperty_features ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 248)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 248)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_incDecInstructionAST temp_21 = this ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_7470, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 250)), fixItArray22  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 249)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_23 = this ;
  const GALGAS_incDecInstructionAST temp_24 = this ;
  const GALGAS_incDecInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::init_21__21__21__21__21_ (temp_23.readProperty_mInstructionLocation (), var_targetVariableCppName_7495, var_targetType_7470, temp_24.readProperty_mStructAttributeList (), temp_25.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 253)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_10452 ;
  GALGAS_string var_targetVariableCppName_10544 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = this ;
  GALGAS_string joker_10566 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_10452, var_targetVariableCppName_10544, joker_10566, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 274)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_10577 (temp_1.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_10577.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10624 = extensionGetter_definition (var_targetType_10452, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 276)).readProperty_propertyMap () ;
    GALGAS_AccessControl var_accessControl_10713 ;
    GALGAS_bool var_isConstant_10732 ;
    var_propertyMap_10624.method_searchKey (enumerator_10577.current_mValue (HERE), var_accessControl_10713, var_isConstant_10732, var_targetType_10452, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 277)) ;
    extensionMethod_checkSetAccess (var_accessControl_10713, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_10577.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isConstant_10732.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10577.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 283)) ;
      }
    }
    enumerator_10577.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_targetType_10452, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)).readProperty_features ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 287)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 287)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10452, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 289)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 288)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::init_21__21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), var_targetVariableCppName_10544, var_targetType_10452, temp_8.readProperty_mStructAttributeList (), temp_9.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 292)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_12179 ;
    GALGAS_selfMutability var_selfMutability_12209 ;
    const bool optionalResult12158 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_12179, var_selfMutability_12209) ;
    if (!optionalResult12158) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_12209, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 312)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 312)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12179, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 316)).readProperty_features ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 316)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 316)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12179, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 317)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::init_21__21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfType_12179, GALGAS_lstringlist::init (inCompiler COMMA_HERE), temp_8.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 321)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    TC_Array <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 329)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_13585 ;
    GALGAS_selfMutability var_selfMutability_13615 ;
    const bool optionalResult13564 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().optional_available (var_selfType_13585, var_selfMutability_13615) ;
    if (!optionalResult13564) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = extensionGetter_selfIsMutable (var_selfMutability_13615, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 344)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 344)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = this ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 345)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_13585, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)).readProperty_features ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 348)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 348)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = this ;
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_13585, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 350)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 349)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::init_21__21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_selfObjectCppName (), var_selfType_13585, GALGAS_lstringlist::init (inCompiler COMMA_HERE), temp_8.readProperty_mKind (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 353)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = this ;
    TC_Array <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 361)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 397)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_15812 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_15859 (temp_2.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_15859.hasCurrentObject ()) {
    var_receiverCppName_15812.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15859.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)) ;
    enumerator_15859.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15812.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 407)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15812.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 409)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) ;
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecNoOVFInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 425)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_17048 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_17095 (temp_2.readProperty_mStructAttributeList (), EnumerationOrder::up) ;
  while (enumerator_17095.hasCurrentObject ()) {
    var_receiverCppName_17048.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_17095.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)) ;
    enumerator_17095.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_17048.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 433)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_17048.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 435)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_14910 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_14910.hasCurrentObject ()) {
    switch (enumerator_14910.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_15053 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_14910.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14989_exp = extractPtr_15053->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14989_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 417)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_15199 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_14910.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_15074_exp = extractPtr_15199->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_15089_typeName = extractPtr_15199->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_15074_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 419)) ;
        {
        GALGAS_unifiedTypeMapEntry joker_15197 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_15089_typeName, joker_15197, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 420)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_15639 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_14910.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_15230_receiverExpression = extractPtr_15639->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_15251_parameters = extractPtr_15639->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_15230_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 422)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_15350 (extractedValue_15251_parameters, EnumerationOrder::up) ;
        while (enumerator_15350.hasCurrentObject ()) {
          switch (enumerator_15350.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_15512 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_15350.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_15430_expression = extractPtr_15512->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_15430_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 426)) ;
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
          enumerator_15350.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_14910.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 434)) ;
  const GALGAS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 435)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration var_testListForGeneration_17078 = GALGAS_ifTestListForGeneration::init (inCompiler COMMA_HERE) ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_17112 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_17112.hasCurrentObject ()) {
    switch (enumerator_17112.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_17793 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_17112.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_17191_exp = extractPtr_17793->mAssociatedValue0 ;
        const GALGAS_location extractedValue_17195_endOfExpression = extractPtr_17793->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_17463 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_17191_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 480)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_17463, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_17624 ;
        {
        routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, extractedValue_17195_endOfExpression, var_analyzed_5F_if_5F_expression_17463, var_if_5F_expression_17624, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 486)) ;
        }
        var_testListForGeneration_17078.addAssign_operation (GALGAS_ifTestForGeneration::class_func_regular (var_if_5F_expression_17624  COMMA_SOURCE_FILE ("instruction-if.galgas", 492))  COMMA_SOURCE_FILE ("instruction-if.galgas", 492)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 493)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 494)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_21379 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_17112.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_17812_constantName = extractPtr_21379->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_17825_exp = extractPtr_21379->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_17840_typeName = extractPtr_21379->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_18101 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_17825_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 499)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_18101, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)) ;
        GALGAS_unifiedTypeMapEntry var_castType_18168 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 506)) ;
        GALGAS_unifiedTypeMapEntry var_testType_18215 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 507)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = extensionGetter_definition (var_analyzedExpression_18101.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 509)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 509)).boolEnum () ;
          if (kBoolTrue == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (ComparisonKind::equal, extractedValue_17840_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <FixItDescription> fixItArray3 ;
                inCompiler->emitSemanticError (extractedValue_17840_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 511)) ;
                var_castType_18168.drop () ; // Release error dropped variable
                var_testType_18215.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_2) {
              var_castType_18168 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_17840_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 513)) ;
              var_testType_18215 = var_castType_18168 ;
              GALGAS_unifiedTypeMapEntry var_t_18714 = var_castType_18168 ;
              GALGAS_bool var_found_18747 = GALGAS_bool (ComparisonKind::equal, var_t_18714.objectCompare (var_analyzedExpression_18101.readProperty_mResultType ())) ;
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 518)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 518)).isValid ()) {
                uint32_t variant_18801 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 518)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 518)).uintValue () ;
                bool loop_18801 = true ;
                while (loop_18801) {
                  loop_18801 = var_found_18747.operator_not (SOURCE_FILE ("instruction-if.galgas", 519)).operator_and (extensionGetter_definition (var_t_18714, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 519)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 519)).operator_not (SOURCE_FILE ("instruction-if.galgas", 519)) COMMA_SOURCE_FILE ("instruction-if.galgas", 519)).isValid () ;
                  if (loop_18801) {
                    loop_18801 = var_found_18747.operator_not (SOURCE_FILE ("instruction-if.galgas", 519)).operator_and (extensionGetter_definition (var_t_18714, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 519)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 519)).operator_not (SOURCE_FILE ("instruction-if.galgas", 519)) COMMA_SOURCE_FILE ("instruction-if.galgas", 519)).boolValue () ;
                  }
                  if (loop_18801 && (0 == variant_18801)) {
                    loop_18801 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 518)) ;
                  }
                  if (loop_18801) {
                    variant_18801 -- ;
                    var_t_18714 = extensionGetter_definition (var_t_18714, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)).readProperty_superType () ;
                    var_found_18747 = GALGAS_bool (ComparisonKind::equal, var_t_18714.objectCompare (var_analyzedExpression_18101.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_found_18747.operator_not (SOURCE_FILE ("instruction-if.galgas", 523)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (extractedValue_17840_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_17840_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 525)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 525)).add_operation (extensionGetter_definition (var_analyzedExpression_18101.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 525)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 525)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 525)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 524)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            GALGAS_unifiedTypeMapEntry var_classType_19386 ;
            const bool optionalResult19348 = extensionGetter_definition (var_analyzedExpression_18101.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 529)).readProperty_typeKind ().optional_weakReferenceType (var_classType_19386) ;
            if (!optionalResult19348) {
              test_6 = kBoolFalse ;
            }
            if (kBoolTrue == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (ComparisonKind::equal, extractedValue_17840_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_castType_18168 = var_classType_19386 ;
                }
              }
              if (kBoolFalse == test_7) {
                var_castType_18168 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_17840_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 533)) ;
              }
              var_testType_18215 = var_castType_18168 ;
              GALGAS_unifiedTypeMapEntry var_t_19620 = var_castType_18168 ;
              GALGAS_bool var_found_19651 = GALGAS_bool (ComparisonKind::equal, var_t_19620.objectCompare (var_analyzedExpression_18101.readProperty_mResultType ())) ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_found_19651.boolEnum () ;
                if (kBoolTrue == test_8) {
                  extensionGetter_definition (var_castType_18168, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 539)).readProperty_typeKind ().method_weakReferenceType (var_testType_18215, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 539)) ;
                }
              }
              if (kBoolFalse == test_8) {
                enumGalgasBool test_9 = kBoolTrue ;
                if (kBoolTrue == test_9) {
                  test_9 = GALGAS_bool (ComparisonKind::equal, var_t_19620.objectCompare (var_classType_19386)).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    var_found_19651 = GALGAS_bool (true) ;
                  }
                }
              }
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 543)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 543)).isValid ()) {
                uint32_t variant_19880 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 543)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 543)).uintValue () ;
                bool loop_19880 = true ;
                while (loop_19880) {
                  loop_19880 = var_found_19651.operator_not (SOURCE_FILE ("instruction-if.galgas", 544)).operator_and (extensionGetter_definition (var_t_19620, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 544)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 544)).operator_not (SOURCE_FILE ("instruction-if.galgas", 544)) COMMA_SOURCE_FILE ("instruction-if.galgas", 544)).isValid () ;
                  if (loop_19880) {
                    loop_19880 = var_found_19651.operator_not (SOURCE_FILE ("instruction-if.galgas", 544)).operator_and (extensionGetter_definition (var_t_19620, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 544)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 544)).operator_not (SOURCE_FILE ("instruction-if.galgas", 544)) COMMA_SOURCE_FILE ("instruction-if.galgas", 544)).boolValue () ;
                  }
                  if (loop_19880 && (0 == variant_19880)) {
                    loop_19880 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 543)) ;
                  }
                  if (loop_19880) {
                    variant_19880 -- ;
                    var_t_19620 = extensionGetter_definition (var_t_19620, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 545)).readProperty_superType () ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = GALGAS_bool (ComparisonKind::equal, var_t_19620.objectCompare (var_analyzedExpression_18101.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        var_found_19651 = GALGAS_bool (true) ;
                        extensionGetter_definition (var_castType_18168, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 548)).readProperty_typeKind ().method_weakReferenceType (var_testType_18215, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 548)) ;
                      }
                    }
                    if (kBoolFalse == test_10) {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = GALGAS_bool (ComparisonKind::equal, var_t_19620.objectCompare (var_classType_19386)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          var_found_19651 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_found_19651.operator_not (SOURCE_FILE ("instruction-if.galgas", 553)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_17840_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_castType_18168, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)).add_operation (extensionGetter_definition (var_analyzedExpression_18101.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 555)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 554)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_6) {
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (var_analyzedExpression_18101.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_18101.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 559)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 558)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 559)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 558)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 561)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 562)) ;
        }
        GALGAS_string var_targetVariableCppName_20829 = GALGAS_string ("var_").add_operation (extractedValue_17812_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 563)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 563)).add_operation (extractedValue_17812_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 564)).getter_string (SOURCE_FILE ("instruction-if.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 564)) ;
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_17812_constantName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_15) {
            {
            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_17812_constantName, var_castType_18168, var_targetVariableCppName_20829, var_targetVariableCppName_20829, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)) ;
            }
          }
        }
        var_testListForGeneration_17078.addAssign_operation (GALGAS_ifTestForGeneration::class_func_letExp (var_targetVariableCppName_20829, var_analyzedExpression_18101, var_castType_18168, var_testType_18215  COMMA_SOURCE_FILE ("instruction-if.galgas", 573))  COMMA_SOURCE_FILE ("instruction-if.galgas", 573)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_21796 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_17112.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_21410_receiverExpression = extractPtr_21796->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_21429_optionalMethodName = extractPtr_21796->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_21448_parameters = extractPtr_21796->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall_3F__26__3F__26__26__3F_receiverExp_3F_optionalMethodName_3F_parameters_26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, extractedValue_21410_receiverExpression, extractedValue_21429_optionalMethodName, extractedValue_21448_parameters, var_testListForGeneration_17078, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 580)) ;
        }
      }
      break ;
    }
    enumerator_17112.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_22179 ;
  {
  const GALGAS_ifInstructionAST temp_16 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_16.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_22179, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 594)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = this ;
  GALGAS_ifExpressionList var_expressions_22210 = temp_17.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_22267 ; // Joker input parameter
  var_expressions_22210.setter_popLast (joker_22267, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 607)) ;
  }
  cEnumerator_ifExpressionList enumerator_22278 (var_expressions_22210, EnumerationOrder::up) ;
  while (enumerator_22278.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_18 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_18.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_19 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)) ;
    }
    enumerator_22278.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_20 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 612)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_22868 ;
  {
  const GALGAS_ifInstructionAST temp_21 = this ;
  const GALGAS_ifInstructionAST temp_22 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), GALGAS_localInitializedVariableList::init (inCompiler COMMA_HERE), temp_21.readProperty_m_5F_else_5F_instructionList (), temp_22.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_22868, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 614)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_23 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 627)) ;
  }
  const GALGAS_ifInstructionAST temp_24 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::init_21__21__21__21_ (temp_24.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_17078, var_then_5F_instructionList_22179, var_else_5F_instructionList_22868, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-if.galgas", 629)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOptionalMethodCall?&?&&?receiverExp?optionalMethodName?parameters&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOptionalMethodCall_3F__26__3F__26__26__3F_receiverExp_3F_optionalMethodName_3F_parameters_26_ (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                   const GALGAS_semanticExpressionAST constinArgument_inReceiverExpression,
                                                                                                                   const GALGAS_lstring constinArgument_inOptionalMethodName,
                                                                                                                   const GALGAS_optionalMethodActualArgumentList constinArgument_inActualParameters,
                                                                                                                   GALGAS_ifTestListForGeneration & ioArgument_ioTestListForGeneration,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_24486 ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 654)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_24486, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_24643 = var_receiverExpression_24486.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_24714 = extensionGetter_definition (var_receiverType_24643, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).readProperty_optionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_24837 ;
  const cMapElement_optionalMethodMap * objectArray_24863 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_24714.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (nullptr != objectArray_24863) {
      macroValidSharedObject (objectArray_24863, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_24837 = objectArray_24863->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_24983 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_25068 (var_optionalMethodMap_24714, EnumerationOrder::up) ;
    while (enumerator_25068.hasCurrentObject ()) {
      var_s_24983.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_25068.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 672)) ;
      enumerator_25068.gotoNextObject () ;
    }
    TC_Array <FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_24983, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 674)) ;
    var_optionalMethodSignature_24837.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 677)).objectCompare (var_optionalMethodSignature_24837.getter_count (SOURCE_FILE ("instruction-if.galgas", 677)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (extensionGetter_definition (var_receiverType_24643, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (var_optionalMethodSignature_24837.getter_count (SOURCE_FILE ("instruction-if.galgas", 680)).getter_string (SOURCE_FILE ("instruction-if.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 679)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)).add_operation (constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 681)).getter_string (SOURCE_FILE ("instruction-if.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 681)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 678)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_25692 = GALGAS_optionalMethodActualArgumentListForGeneration::init (inCompiler COMMA_HERE) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_25741 (constinArgument_inActualParameters, EnumerationOrder::up) ;
    cEnumerator_optionalMethodSignature enumerator_25818 (var_optionalMethodSignature_24837, EnumerationOrder::up) ;
    while (enumerator_25741.hasCurrentObject () && enumerator_25818.hasCurrentObject ()) {
      switch (enumerator_25741.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_26681 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_25741.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_25905_expression = extractPtr_26681->mAssociatedValue0 ;
          const GALGAS_location extractedValue_25916_location = extractPtr_26681->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_26234 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_25905_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_25818.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_26234, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 688)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25741.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 698)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26333 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 698)) ;
              TC_Array <FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_26333) ;
              inCompiler->emitSemanticError (enumerator_25741.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26333, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 699)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 699)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 699)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_25818.current_mFormalArgumentType (HERE), var_exp_26234.readProperty_mResultType (), extractedValue_25916_location, var_exp_26234, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 701)) ;
          }
          var_actualParameterList_25692.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualOutput (var_exp_26234  COMMA_SOURCE_FILE ("instruction-if.galgas", 702))  COMMA_SOURCE_FILE ("instruction-if.galgas", 702)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_27820 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_25741.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_26719_actualTypeName = extractPtr_27820->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_26743_constantName = extractPtr_27820->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_26719_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 704)).readProperty_typeName ().readProperty_string ().objectCompare (extractedValue_26719_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 707))) ;
              inCompiler->emitSemanticError (extractedValue_26719_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 706)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 705)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_27102 = GALGAS_string ("var_").add_operation (extractedValue_26743_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 709)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 709)).add_operation (extractedValue_26743_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 710)).getter_string (SOURCE_FILE ("instruction-if.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 710)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_26743_constantName, enumerator_25818.current_mFormalArgumentType (HERE), var_targetVariableCppName_27102, var_targetVariableCppName_27102, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 711)) ;
          }
          var_actualParameterList_25692.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualLetInput (extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 717)).readProperty_typeName ().readProperty_string (), var_targetVariableCppName_27102  COMMA_SOURCE_FILE ("instruction-if.galgas", 717))  COMMA_SOURCE_FILE ("instruction-if.galgas", 717)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25741.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 719)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27636 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 719)) ;
              TC_Array <FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_27636) ;
              inCompiler->emitSemanticError (enumerator_25741.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27636, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 720)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 720)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 720)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_28997 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_25741.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_27860_actualTypeName = extractPtr_28997->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_27884_variableName = extractPtr_28997->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (ComparisonKind::notEqual, extractedValue_27860_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 723)).readProperty_typeName ().readProperty_string ().objectCompare (extractedValue_27860_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 726)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 726))) ;
              inCompiler->emitSemanticError (extractedValue_27860_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 725)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 724)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_28244 = GALGAS_string ("var_").add_operation (extractedValue_27884_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 728)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 728)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 728)).add_operation (extractedValue_27884_variableName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 729)).getter_string (SOURCE_FILE ("instruction-if.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 729)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_27884_variableName, GALGAS_bool (true), enumerator_25818.current_mFormalArgumentType (HERE), var_targetVariableCppName_28244, var_targetVariableCppName_28244, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 730)) ;
          }
          var_actualParameterList_25692.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 737)).readProperty_typeName ().readProperty_string (), var_targetVariableCppName_28244  COMMA_SOURCE_FILE ("instruction-if.galgas", 737))  COMMA_SOURCE_FILE ("instruction-if.galgas", 737)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25741.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 739)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_28813 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 739)) ;
              TC_Array <FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_28813) ;
              inCompiler->emitSemanticError (enumerator_25741.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28813, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 740)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 740)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 740)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_29580 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_25741.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_29030_checkSelector = extractPtr_29580->mAssociatedValue0 ;
          const GALGAS_location extractedValue_29044_location = extractPtr_29580->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_29053_idx = extractPtr_29580->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_29072 = GALGAS_string ("var_unused_").add_operation (extractedValue_29053_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)).add_operation (extractedValue_29044_location.getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)).getter_string (SOURCE_FILE ("instruction-if.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 743)) ;
          var_actualParameterList_25692.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_25818.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 744)).readProperty_typeName ().readProperty_string (), var_targetVariableCppName_29072  COMMA_SOURCE_FILE ("instruction-if.galgas", 744))  COMMA_SOURCE_FILE ("instruction-if.galgas", 744)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_29030_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_25741.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (ComparisonKind::notEqual, enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_25818.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 746)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_29396 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 746)) ;
              TC_Array <FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_29396) ;
              inCompiler->emitSemanticError (enumerator_25741.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_29396, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 747)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 747)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 747)) ;
            }
          }
        }
        break ;
      }
      enumerator_25741.gotoNextObject () ;
      enumerator_25818.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::class_func_optionalMethodCall (var_receiverExpression_24486, constinArgument_inOptionalMethodName, var_actualParameterList_25692  COMMA_SOURCE_FILE ("instruction-if.galgas", 751))  COMMA_SOURCE_FILE ("instruction-if.galgas", 751)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_testVar_32603 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 832)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_32603, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 833)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 833)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 833)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_32766 (temp_0.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_32766.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_32603, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 835)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)) ;
    }
    switch (enumerator_32766.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_33195 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_32766.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32947_exp = extractPtr_33195->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_33120 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32947_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_33120, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 839)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_32603.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)).add_operation (var_cppVarName_33120, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 846)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_33940 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_32766.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_33231_targetVarCppName = extractPtr_33940->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_33248_exp = extractPtr_33940->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_33252_targetType = extractPtr_33940->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_33263_testType = extractPtr_33940->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_33285 = extensionGetter_identifierRepresentation (extractedValue_33252_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 848)) ;
        GALGAS_string var_testTypeName_33350 = extensionGetter_identifierRepresentation (extractedValue_33263_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 849)) ;
        GALGAS_string var_cppVarName_33567 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_33248_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_33567, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 850)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_33285, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)).add_operation (extractedValue_33231_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 857)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_33350, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)).add_operation (var_cppVarName_33567, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 858)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr == ").add_operation (extractedValue_33231_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 859)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 859)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 859)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_32603, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 860)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 860)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 860)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 861)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_35676 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_32766.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_33975_receiverExpression = extractPtr_35676->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_33994_optionalMethodName = extractPtr_35676->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_34013_parameters = extractPtr_35676->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_34208 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_33975_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_34208, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 863)) ;
        GALGAS_stringlist var_actualParameterNameList_34249 = GALGAS_stringlist::init (inCompiler COMMA_HERE) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_34289 (extractedValue_34013_parameters, EnumerationOrder::up) ;
        while (enumerator_34289.hasCurrentObject ()) {
          switch (enumerator_34289.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_34646 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_34289.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_34369_expression = extractPtr_34646->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_34580 ;
              callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_34369_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_34580, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 874)) ;
              var_actualParameterNameList_34249.addAssign_operation (var_argumentCppName_34580  COMMA_SOURCE_FILE ("instruction-if.galgas", 881)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_34867 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_34289.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_34691_typeName = extractPtr_34867->mAssociatedValue0 ;
              const GALGAS_string extractedValue_34700_constantName = extractPtr_34867->mAssociatedValue1 ;
              var_actualParameterNameList_34249.addAssign_operation (extractedValue_34700_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 883)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_34691_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 884)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)).add_operation (extractedValue_34700_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 884)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 884)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_35079 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_34289.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_34903_typeName = extractPtr_35079->mAssociatedValue0 ;
              const GALGAS_string extractedValue_34912_variableName = extractPtr_35079->mAssociatedValue1 ;
              var_actualParameterNameList_34249.addAssign_operation (extractedValue_34912_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 886)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_34903_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 887)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)).add_operation (extractedValue_34912_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 887)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 887)) ;
            }
            break ;
          }
          enumerator_34289.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_35118 = GALGAS_string ("optionalResult").add_operation (extractedValue_33994_optionalMethodName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 890)).getter_string (SOURCE_FILE ("instruction-if.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 890)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_35118, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 891)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 891)).add_operation (var_cppVarName_34208, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 891)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 891)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_33994_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 892)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 892)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 892)) ;
        cEnumerator_stringlist enumerator_35348 (var_actualParameterNameList_34249, EnumerationOrder::up) ;
        while (enumerator_35348.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35348.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 895)) ;
          if (enumerator_35348.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 897)) ;
          }
          enumerator_35348.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 899)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_35118, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 900)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 900)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 900)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_32603, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 901)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 901)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 901)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 902)) ;
      }
      break ;
    }
    enumerator_32766.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_32603, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 906)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 906)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 906)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 907)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 915)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_36027 (temp_2.readProperty_mExpressions (), EnumerationOrder::up) ;
  while (enumerator_36027.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 917)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 918)) ;
    enumerator_36027.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas", 921)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_32603, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 922)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 922)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 922)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 923)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 931)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 155)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_6388 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6388, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 163)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 165)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_7297 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 179)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_7372 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 180)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7297, var_targetVariableCppName_7372, var_targetVariableCppName_7372, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 182)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::init_21__21_ (var_targetType_7297, var_targetVariableCppName_7372, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 189)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8781 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas", 208)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8781, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 205)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8829 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 215)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)).getter_string (SOURCE_FILE ("instruction-let.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 216)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8781.readProperty_mResultType (), var_targetVariableCppName_8829, var_targetVariableCppName_8829, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 217)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_expression_8781.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_8829, var_expression_8781, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 224)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_10038 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 240)) ;
  GALGAS_semanticExpressionForGeneration var_expression_10408 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10038, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10408, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 242)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_10456 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 252)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)).getter_string (SOURCE_FILE ("instruction-let.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 253)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_10038, var_targetVariableCppName_10456, var_targetVariableCppName_10456, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 255)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_10038, var_targetVariableCppName_10456, var_targetVariableCppName_10456, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 262)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10038, var_expression_10408.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10408, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 271)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (var_targetType_10038, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10456, var_expression_10408, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-let.galgas", 273)) ;
}
