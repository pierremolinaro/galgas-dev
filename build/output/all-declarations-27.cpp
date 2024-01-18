#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

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
  GALGAS_unifiedTypeMapEntry var_targetType_16853 ;
  GALGAS_string var_targetVariableCppName_16878 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_16914 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_17041 ;
        GALGAS_bool var_selfIsMutable_17064 ;
        GALGAS_bool var_mutableProperties_17102 ;
        const bool optionalResult17020 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_17041, var_selfIsMutable_17064, var_mutableProperties_17102) ;
        if (!optionalResult17020) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_17064.operator_not (SOURCE_FILE ("instruction-concat.galgas", 426)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 427)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_17257 = extensionGetter_definition (var_selfType_17041, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 429)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_17363 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_17355 ; // Joker input parameter
          var_propertyMap_17257.method_searchKey (temp_6.readProperty_mReceiverName (), joker_17355, var_isConstant_17363, var_targetType_16853, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 430)) ;
          var_nameForCheckingFormalParameterUsing_16914 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_16878 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 432)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_17363.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 435)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_17102.operator_not (SOURCE_FILE ("instruction-concat.galgas", 437)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 438)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 441)) ;
        var_targetType_16853.drop () ; // Release error dropped variable
        var_targetVariableCppName_16878.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_16914.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_16853, var_targetVariableCppName_16878, var_nameForCheckingFormalParameterUsing_16914, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 445)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_18235 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18235.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_18282 = extensionGetter_definition (var_targetType_16853, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 453)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_18372 ;
    GALGAS_bool var_isConstant_18391 ;
    var_propertyMap_18282.method_searchKey (enumerator_18235.current_mValue (HERE), var_accessControl_18372, var_isConstant_18391, var_targetType_16853, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) ;
    extensionMethod_checkSetAccess (var_accessControl_18372, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_18235.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 455)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_18391.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_18235.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 460)) ;
      }
    }
    enumerator_18235.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_16853, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 464)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 464)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_minusEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_16853, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 465)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_19310 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_16853, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_19310, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 469)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_16853, var_expression_19310.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_19310, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 479)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_25.readProperty_mInstructionLocation (), var_targetType_16853, var_targetVariableCppName_16878, var_nameForCheckingFormalParameterUsing_16914, temp_26.readProperty_mStructAttributeList (), var_expression_19310, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 481))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 481)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_20368 ;
  GALGAS_string var_targetVariableCppName_20393 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_20429 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_20556 ;
        GALGAS_bool var_selfIsMutable_20579 ;
        GALGAS_bool var_mutableProperties_20617 ;
        const bool optionalResult20535 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_20556, var_selfIsMutable_20579, var_mutableProperties_20617) ;
        if (!optionalResult20535) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_20579.operator_not (SOURCE_FILE ("instruction-concat.galgas", 508)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_20772 = extensionGetter_definition (var_selfType_20556, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 511)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_20878 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_20870 ; // Joker input parameter
          var_propertyMap_20772.method_searchKey (temp_6.readProperty_mReceiverName (), joker_20870, var_isConstant_20878, var_targetType_20368, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)) ;
          var_nameForCheckingFormalParameterUsing_20429 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_20393 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 514)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_20878.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 517)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_20617.operator_not (SOURCE_FILE ("instruction-concat.galgas", 519)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 520)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 523)) ;
        var_targetType_20368.drop () ; // Release error dropped variable
        var_targetVariableCppName_20393.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_20429.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_20368, var_targetVariableCppName_20393, var_nameForCheckingFormalParameterUsing_20429, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 527)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_21777 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_21777.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21824 = extensionGetter_definition (var_targetType_20368, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 536)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_21914 ;
    GALGAS_bool var_isConstant_21933 ;
    var_propertyMap_21824.method_searchKey (enumerator_21777.current_mValue (HERE), var_accessControl_21914, var_isConstant_21933, var_targetType_20368, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 537)) ;
    extensionMethod_checkSetAccess (var_accessControl_21914, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_21777.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_21933.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_21777.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 543)) ;
      }
    }
    enumerator_21777.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_20368, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 547)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 547)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_mulEqualExpressionInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_20368, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 549)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 549)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 549)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 548)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_22846 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_23 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_23.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_20368, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_22846, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 552)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_24 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_20368, var_expression_22846.readProperty_mResultType (), temp_24.readProperty_mInstructionLocation (), var_expression_22846, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 562)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = this ;
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_25.readProperty_mInstructionLocation (), var_targetType_20368, var_targetVariableCppName_20393, var_nameForCheckingFormalParameterUsing_20429, temp_26.readProperty_mStructAttributeList (), var_expression_22846, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 564))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 564)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_23902 ;
  GALGAS_string var_targetVariableCppName_23927 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_23963 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_24090 ;
        GALGAS_bool var_selfIsMutable_24113 ;
        GALGAS_bool var_mutableProperties_24151 ;
        const bool optionalResult24069 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_24090, var_selfIsMutable_24113, var_mutableProperties_24151) ;
        if (!optionalResult24069) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_24113.operator_not (SOURCE_FILE ("instruction-concat.galgas", 591)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 592)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_24306 = extensionGetter_definition (var_selfType_24090, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 594)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_24412 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_24404 ; // Joker input parameter
          var_propertyMap_24306.method_searchKey (temp_6.readProperty_mReceiverName (), joker_24404, var_isConstant_24412, var_targetType_23902, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 595)) ;
          var_nameForCheckingFormalParameterUsing_23963 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_23927 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 597)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 598)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_24412.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 600)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_24151.operator_not (SOURCE_FILE ("instruction-concat.galgas", 602)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 603)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 606)) ;
        var_targetType_23902.drop () ; // Release error dropped variable
        var_targetVariableCppName_23927.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_23963.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_23902, var_targetVariableCppName_23927, var_nameForCheckingFormalParameterUsing_23963, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 610)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_25311 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25311.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_25358 = extensionGetter_definition (var_targetType_23902, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 619)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_25448 ;
    GALGAS_bool var_isConstant_25467 ;
    var_propertyMap_25358.method_searchKey (enumerator_25311.current_mValue (HERE), var_accessControl_25448, var_isConstant_25467, var_targetType_23902, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 620)) ;
    extensionMethod_checkSetAccess (var_accessControl_25448, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_25311.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 621)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_25467.boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_divEqualExpressionInstructionAST temp_19 = this ;
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (temp_19.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray20  COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) ;
      }
    }
    enumerator_25311.gotoNextObject () ;
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = extensionGetter_definition (var_targetType_23902, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 630)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 630)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_divEqualExpressionInstructionAST temp_22 = this ;
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (temp_22.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_23902, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 632)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 632)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 632)), fixItArray23  COMMA_SOURCE_FILE ("instruction-concat.galgas", 631)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_26393 ;
  const GALGAS_divEqualExpressionInstructionAST temp_24 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_24.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_23902, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_26393, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 635)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_25 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_23902, var_expression_26393.readProperty_mResultType (), temp_25.readProperty_mInstructionLocation (), var_expression_26393, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 645)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_26 = this ;
  const GALGAS_divEqualExpressionInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_26.readProperty_mInstructionLocation (), var_targetType_23902, var_targetVariableCppName_23927, var_nameForCheckingFormalParameterUsing_23963, temp_27.readProperty_mStructAttributeList (), var_expression_26393, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 647))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 647)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_27442 ;
  GALGAS_string var_targetVariableCppName_27467 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_27503 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_27630 ;
        GALGAS_bool var_unused_0_27649 ;
        GALGAS_bool var_mutableProperties_27675 ;
        const bool optionalResult27609 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_27630, var_unused_0_27649, var_mutableProperties_27675) ;
        if (!optionalResult27609) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_27675.operator_not (SOURCE_FILE ("instruction-concat.galgas", 674)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualElementsInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 675)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_27834 = extensionGetter_definition (var_selfType_27630, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_27940 ;
          const GALGAS_plusEqualElementsInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_27932 ; // Joker input parameter
          var_propertyMap_27834.method_searchKey (temp_6.readProperty_mReceiverName (), joker_27932, var_isConstant_27940, var_targetType_27442, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)) ;
          var_nameForCheckingFormalParameterUsing_27503 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualElementsInstructionAST temp_7 = this ;
          var_targetVariableCppName_27467 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 680)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 681)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_27940.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 683)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_27675.operator_not (SOURCE_FILE ("instruction-concat.galgas", 685)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualElementsInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 686)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 689)) ;
        var_targetType_27442.drop () ; // Release error dropped variable
        var_targetVariableCppName_27467.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_27503.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_27442, var_targetVariableCppName_27467, var_nameForCheckingFormalParameterUsing_27503, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 693)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_28842 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_28842.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_28889 = extensionGetter_definition (var_targetType_27442, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 702)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_29020 ;
    GALGAS_bool var_isConstant_29039 ;
    var_propertyMap_28889.method_searchKey (enumerator_28842.current_mValue (HERE), var_accessControl_29020, var_isConstant_29039, var_targetType_27442, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 704)) ;
    extensionMethod_checkSetAccess (var_accessControl_29020, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_28842.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 705)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_29039.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_28842.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 717)) ;
      }
    }
    enumerator_28842.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_29661 = extensionGetter_definition (var_targetType_27442, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 721)).readProperty_mAddAssignOperatorArguments () ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_29661.getter_count (SOURCE_FILE ("instruction-concat.galgas", 722)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_plusEqualElementsInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_27442, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 724)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 724)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 724)), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 723)) ;
    }
  }
  if (kBoolFalse == test_20) {
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_plusEqualElementsInstructionAST temp_24 = this ;
      test_23 = GALGAS_bool (kIsNotEqual, temp_24.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 726)).objectCompare (var_addAssignOperatorArguments_29661.getter_count (SOURCE_FILE ("instruction-concat.galgas", 726)))).boolEnum () ;
      if (kBoolTrue == test_23) {
        const GALGAS_plusEqualElementsInstructionAST temp_25 = this ;
        const GALGAS_plusEqualElementsInstructionAST temp_26 = this ;
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_25.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_27442, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 728)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 728)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 728)).add_operation (var_addAssignOperatorArguments_29661.getter_count (SOURCE_FILE ("instruction-concat.galgas", 729)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 728)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 729)).add_operation (temp_26.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-concat.galgas", 730)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 729)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 730)), fixItArray27  COMMA_SOURCE_FILE ("instruction-concat.galgas", 727)) ;
      }
    }
    if (kBoolFalse == test_23) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_30473 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-concat.galgas", 732)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_28 = this ;
      cEnumerator_actualOutputExpressionList enumerator_30538 (temp_28.readProperty_mExpressions (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_30623 (var_addAssignOperatorArguments_29661, kENUMERATION_UP) ;
      while (enumerator_30538.hasCurrentObject () && enumerator_30623.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_30931 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_30538.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_30623.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_30931, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 734)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = GALGAS_bool (kIsNotEqual, enumerator_30623.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_30538.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_29) {
            GALGAS_string temp_30 ;
            const enumGalgasBool test_31 = GALGAS_bool (kIsNotEqual, enumerator_30623.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_31) {
              temp_30 = enumerator_30623.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)) ;
            }else if (kBoolFalse == test_31) {
              temp_30 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_31033 = GALGAS_string ("!").add_operation (temp_30, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)) ;
            TC_Array <C_FixItDescription> fixItArray32 ;
            appendFixItActions (fixItArray32, kFixItReplace, var_s_31033) ;
            inCompiler->emitSemanticError (enumerator_30538.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_31033, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)), fixItArray32  COMMA_SOURCE_FILE ("instruction-concat.galgas", 745)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_30623.current_mFormalArgumentType (HERE), var_expression_30931.readProperty_mResultType (), enumerator_30538.current_mEndOfExpressionLocation (HERE), var_expression_30931, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 749)) ;
        }
        var_effectiveParameterList_30473.addAssign_operation (var_expression_30931  COMMA_SOURCE_FILE ("instruction-concat.galgas", 750)) ;
        enumerator_30538.gotoNextObject () ;
        enumerator_30623.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_33 = this ;
      const GALGAS_plusEqualElementsInstructionAST temp_34 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::class_func_new (var_targetVariableCppName_27467, var_targetType_27442, var_nameForCheckingFormalParameterUsing_27503, temp_33.readProperty_mInstructionLocation (), temp_34.readProperty_mStructAttributeList (), var_effectiveParameterList_30473  COMMA_SOURCE_FILE ("instruction-concat.galgas", 753))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 753)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 785)) ;
  GALGAS_stringlist var_parameterList_32966 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-concat.galgas", 786)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_33004 (temp_1.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_33004.hasCurrentObject ()) {
    GALGAS_string var_parameter_33214 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_33004.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_33214, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 788)) ;
    var_parameterList_32966.addAssign_operation (var_parameter_33214  COMMA_SOURCE_FILE ("instruction-concat.galgas", 795)) ;
    enumerator_33004.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 798)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 799)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_33418 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_33418.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_33418.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 801)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)) ;
    enumerator_33418.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 804)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 805)) ;
  }
  cEnumerator_stringlist enumerator_33698 (var_parameterList_32966, kENUMERATION_UP) ;
  while (enumerator_33698.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33698.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 807)) ;
    if (enumerator_33698.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 808)) ;
    }
    enumerator_33698.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 810)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 810)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 811)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 812)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 814)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 814)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 837)) ;
  GALGAS_string var_sourceVar_35280 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_35280, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 838)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 845)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 846)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_35436 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_35436.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_35436.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 848)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 848)) ;
    enumerator_35436.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 850)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 850)).add_operation (var_sourceVar_35280, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 850)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 850)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 851)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 852)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 853)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 854)) ;
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
  cEnumerator_lstringlist enumerator_4312 (temp_0.readProperty_mDropList (), kENUMERATION_UP) ;
  while (enumerator_4312.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_4312.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 95)) ;
    }
    enumerator_4312.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 208)) ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 209)) ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 210)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 264)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 274)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-error.galgas", 284)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 281)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-error.galgas", 291)) ;
  cEnumerator_fixitListAST enumerator_10722 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_10722.hasCurrentObject ()) {
    switch (enumerator_10722.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 295))  COMMA_SOURCE_FILE ("instruction-error.galgas", 295)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_11792 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_10722.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10866_exp = extractPtr_11792->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10870_errorLocation = extractPtr_11792->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11153 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10866_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_11153, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 297)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_11153.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_11153.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_11153.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_11153.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_10870_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11153.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 310)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 310)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 310)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 310)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItReplace (var_expression_11153  COMMA_SOURCE_FILE ("instruction-error.galgas", 313))  COMMA_SOURCE_FILE ("instruction-error.galgas", 313)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_12753 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_10722.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11822_exp = extractPtr_12753->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11826_errorLocation = extractPtr_12753->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_12109 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11822_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12109, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 315)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_12109.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_12109.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_12109.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_12109.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_11826_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_12109.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 328)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 328)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 328)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 328)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItInsertBefore (var_expression_12109  COMMA_SOURCE_FILE ("instruction-error.galgas", 331))  COMMA_SOURCE_FILE ("instruction-error.galgas", 331)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_13712 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_10722.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12782_exp = extractPtr_13712->mAssociatedValue0 ;
        const GALGAS_location extractedValue_12786_errorLocation = extractPtr_13712->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_13069 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_12782_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_13069, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 333)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_13069.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_13069.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_13069.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_13069.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_12786_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_13069.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 346)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 346)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::class_func_fixItInsertAfter (var_expression_13069  COMMA_SOURCE_FILE ("instruction-error.galgas", 349))  COMMA_SOURCE_FILE ("instruction-error.galgas", 349)) ;
      }
      break ;
    }
    enumerator_10722.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 355)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 355)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 355)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 355)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 355)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 354)) ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_14874 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_14902 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_14929 ;
  {
  const GALGAS_errorInstructionAST temp_0 = this ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  const GALGAS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_14874, var_messageExpression_14902, var_fixitListForGeneration_14929, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 371)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_14992 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-error.galgas", 387)) ;
  const GALGAS_errorInstructionAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_15041 (temp_4.readProperty_mBuiltVariableList (), kENUMERATION_UP) ;
  while (enumerator_15041.hasCurrentObject ()) {
    GALGAS_string var_varCppName_15137 ;
    {
    GALGAS_unifiedTypeMapEntry joker_15129 ; // Joker input parameter
    GALGAS_string joker_15148 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_15041.current_mValue (HERE), joker_15129, var_varCppName_15137, joker_15148, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 389)) ;
    }
    var_builtVariableCppNameList_14992.addAssign_operation (var_varCppName_15137  COMMA_SOURCE_FILE ("instruction-error.galgas", 390)) ;
    enumerator_15041.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::class_func_new (temp_5.readProperty_mInstructionLocation (), var_locationExpression_14874, var_messageExpression_14902, var_builtVariableCppNameList_14992, var_fixitListForGeneration_14929  COMMA_SOURCE_FILE ("instruction-error.galgas", 393))  COMMA_SOURCE_FILE ("instruction-error.galgas", 393)) ;
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
  GALGAS_string var_receiverCppVarName_18566 ;
  const GALGAS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_18566, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 472)) ;
  GALGAS_string var_messageCppVarName_18774 ;
  const GALGAS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_18774, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 480)) ;
  GALGAS_string var_fixItArrayCppName_19031 ;
  const GALGAS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_19031, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 488)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 497)) COMMA_SOURCE_FILE ("instruction-error.galgas", 497)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 498)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 498)).add_operation (var_receiverCppVarName_18566, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 498)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)).add_operation (var_messageCppVarName_18774, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 499)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (var_fixItArrayCppName_19031, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 500)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 501)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 502)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 498)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = this ;
  cEnumerator_stringlist enumerator_19405 (temp_4.readProperty_mBuiltVariableCppNameList (), kENUMERATION_UP) ;
  while (enumerator_19405.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_19405.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 505)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_19405.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 506)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 506)) ;
    enumerator_19405.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 504)) ;
  const GALGAS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 505)) ;
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 506)) ;
  const GALGAS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 507)) ;
  const GALGAS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 508)) ;
  const GALGAS_forInstructionAST temp_5 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_17422 (temp_5.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_17422.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_17422.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 510)) ;
    enumerator_17422.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 533)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 566)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 563)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)).getter_string (SOURCE_FILE ("instruction-for.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_20352 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 574)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_20352.getter_count (SOURCE_FILE ("instruction-for.galgas", 575)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 576)) ;
    }
  }
  GALGAS_string var_suggestion_20701 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_20741 (var_enumerationDescriptorList_20352, kENUMERATION_UP) ;
  while (enumerator_20741.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = this ;
    var_suggestion_20701.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_20741.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 582)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = this ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = this ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_20741.current_mEnumeratedType (HERE), GALGAS_lstring::class_func_new (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_20741.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 585)), temp_7.readProperty_mEndOfAnonymousEnumeration (), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 585)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 587)).add_operation (enumerator_20741.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 587)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 587))  COMMA_SOURCE_FILE ("instruction-for.galgas", 583)) ;
    if (enumerator_20741.hasNextObject ()) {
      var_suggestion_20701.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 589)) ;
    }
    enumerator_20741.gotoNextObject () ;
  }
  var_suggestion_20701.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 591)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_20701) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 593)) ;
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 614)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 611)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 621)).getter_string (SOURCE_FILE ("instruction-for.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 621)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_22430 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 623)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 624)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 624)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 627)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 627)) COMMA_SOURCE_FILE ("instruction-for.galgas", 627)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_22842 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).readProperty_mEnumerationDescriptor () ;
        cEnumerator_enumerationDescriptorList enumerator_22970 (var_currentTypedAttributeList_22842, kENUMERATION_UP) ;
        while (enumerator_22970.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GALGAS_lstring::class_func_new (enumerator_22970.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 631)), enumerator_22970.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).add_operation (enumerator_22970.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 633)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 633)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).add_operation (enumerator_22970.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 634)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)) ;
          }
          enumerator_22970.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = this ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = this ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 637)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 637)).objectCompare (var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 637)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 641)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 639)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 639)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 639)).add_operation (var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 640)).getter_string (SOURCE_FILE ("instruction-for.galgas", 640)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 639)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 640)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 641)).add_operation (temp_15.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 643)).getter_string (SOURCE_FILE ("instruction-for.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 642)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 638)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = this ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = this ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (kIsStrictSup, temp_19.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 644)).objectCompare (var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 644)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 644)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = this ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 648)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = this ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 646)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 646)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 646)).add_operation (var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 647)).getter_string (SOURCE_FILE ("instruction-for.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 646)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 647)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 647)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 648)).add_operation (temp_23.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 650)).getter_string (SOURCE_FILE ("instruction-for.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 649)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 645)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = this ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 652)).objectCompare (temp_27.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 652)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = this ;
              GALGAS_uint var_missingArgumentCount_24545 = var_enumerationDescriptorList_22430.getter_count (SOURCE_FILE ("instruction-for.galgas", 653)).substract_operation (temp_28.readProperty_mElementList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 653)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = this ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_24545.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_24545.getter_string (SOURCE_FILE ("instruction-for.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 656)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 654)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = this ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_24940 (temp_33.readProperty_mElementList (), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_25002 (var_enumerationDescriptorList_22430, kENUMERATION_UP) ;
          while (enumerator_24940.hasCurrentObject () && enumerator_25002.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_24940.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_24940.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMapEntry var_foundType_25192 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_24940.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 661)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_25192.objectCompare (enumerator_25002.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_24940.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_25192, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (extensionGetter_definition (enumerator_25002.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 663)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_25002.current_mEnumeratedType (HERE), enumerator_24940.current_mOptionalConstantName (HERE), enumerator_24940.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).add_operation (enumerator_25002.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 670))  COMMA_SOURCE_FILE ("instruction-for.galgas", 666)) ;
              }
            }
            enumerator_24940.gotoNextObject () ;
            enumerator_25002.gotoNextObject () ;
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 692)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)).getter_string (SOURCE_FILE ("instruction-for.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
  GALGAS_unifiedTypeMapEntry var_enumeratedElementType_26787 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 700)).readProperty_mTypeForEnumeratedElement () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_26787.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 701)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 702)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 702)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 702)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 702)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_26787, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 704))  COMMA_SOURCE_FILE ("instruction-for.galgas", 704)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GALGAS_unifiedTypeMapEntry var_explicitType_27372 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 708)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_enumeratedElementType_26787, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_27372, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 709)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_26787, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 710)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 710)) ;
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
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 727)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 728)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 730)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_28775 ;
  {
  const GALGAS_forInstructionAST temp_0 = this ;
  const GALGAS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 736)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 737)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 738)), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_28775, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 731)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 744)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 746)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_29302 ;
  {
  const GALGAS_forInstructionAST temp_3 = this ;
  const GALGAS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 752)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 753)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 754)), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_29302, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 747)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 760)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 762)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_29863 ;
  {
  const GALGAS_forInstructionAST temp_6 = this ;
  const GALGAS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 768)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 769)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 770)), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_29863, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 763)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 776)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_30006 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 778)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_30095 = GALGAS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 779)) ;
  const GALGAS_forInstructionAST temp_9 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_30134 (temp_9.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_30134.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_30423 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_30485 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_30134.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_localConstantListForDoBranch_30006, var_enumeratorCppName_30423, var_enumerationExpression_30485, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 781)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_30134.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_30095.addAssign_operation (temp_10, var_enumerationExpression_30485, var_enumeratorCppName_30423  COMMA_SOURCE_FILE ("instruction-for.galgas", 792)) ;
    enumerator_30134.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 798)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 799)) ;
  }
  cEnumerator_localConstantList enumerator_30802 (var_localConstantListForDoBranch_30006, kENUMERATION_UP) ;
  while (enumerator_30802.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_30802.current (HERE).readProperty_mName (), enumerator_30802.current (HERE).readProperty_mType (), enumerator_30802.current (HERE).readProperty_mCppName (), enumerator_30802.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 802)) ;
    }
    enumerator_30802.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_31264 ;
  const GALGAS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-for.galgas", 813)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_uncheckedWhileExpression_31264, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_31451 ;
  {
  const GALGAS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_31264, var_whileExpression_31451, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 819)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 826)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 827)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 829)) ;
  }
  GALGAS_string var_indexCppName_31681 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = this ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = this ;
      var_indexCppName_31681 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 832)).getter_string (SOURCE_FILE ("instruction-for.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 832)) ;
      const GALGAS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_30006.addAssign_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_31681  COMMA_SOURCE_FILE ("instruction-for.galgas", 833)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_32421 ;
  {
  const GALGAS_forInstructionAST temp_20 = this ;
  const GALGAS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_30006, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 846)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 847)), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_32421, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 840)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 854)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 856)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 857)) ;
  }
  const GALGAS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::class_func_new (temp_25.readProperty_mInstructionLocation (), var_enumerationList_30095, var_indexCppName_31681, var_whileExpression_31451, var_before_5F_instructionList_28775, var_between_5F_instructionList_29302, var_do_5F_instructionList_32421, var_after_5F_instructionList_29863  COMMA_SOURCE_FILE ("instruction-for.galgas", 859))  COMMA_SOURCE_FILE ("instruction-for.galgas", 859)) ;
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
  GALGAS_stringlist var_enumerationVarCppNameList_34765 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-for.galgas", 905)) ;
  const GALGAS_forInstructionForGeneration temp_0 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_34827 (temp_0.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_34827.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_35035 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_34827.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_35035, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)) ;
    var_enumerationVarCppNameList_34765.addAssign_operation (var_enumerationVar_35035  COMMA_SOURCE_FILE ("instruction-for.galgas", 914)) ;
    enumerator_34827.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35158 (temp_1.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_35210 (var_enumerationVarCppNameList_34765, kENUMERATION_UP) ;
  while (enumerator_35158.hasCurrentObject () && enumerator_35210.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (enumerator_35158.current_mEnumeratedExpression (HERE).readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)).add_operation (enumerator_35158.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)).add_operation (enumerator_35210.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 918)).add_operation (enumerator_35158.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 919)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 919)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 917)) ;
    enumerator_35158.gotoNextObject () ;
    enumerator_35210.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = this ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_35500 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 922)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = this ;
    const GALGAS_forInstructionForGeneration temp_5 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 924)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 924)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 924)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_35500.operator_not (SOURCE_FILE ("instruction-for.galgas", 924)) COMMA_SOURCE_FILE ("instruction-for.galgas", 924)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = this ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 927)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 927)) ;
        }
      }
      GALGAS_string var_boolVarCppName_35947 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 929)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 929)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 930)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_35500.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_35947, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 932)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 932)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 932)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_36308 ;
        const GALGAS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_36308, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 934)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_35947, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)).add_operation (var_whileVar_36308, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 935)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 937)) ;
      const GALGAS_forInstructionForGeneration temp_11 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36465 (temp_11.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_36465.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36465.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 939)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 939)) ;
        enumerator_36465.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_35947.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 941)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 941)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 950)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 951)) ;
      const GALGAS_forInstructionForGeneration temp_13 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36970 (temp_13.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_36970.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36970.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 953)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 953)) ;
        enumerator_36970.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_35947.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 955)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 955)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 957)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37453 (temp_15.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_37453.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_37453.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 967)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 967)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 967)) ;
        enumerator_37453.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = this ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 970)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 970)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 970)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_35500.operator_not (SOURCE_FILE ("instruction-for.galgas", 973)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 974)) ;
          const GALGAS_forInstructionForGeneration temp_20 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37854 (temp_20.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_37854.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37854.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 976)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 976)) ;
            if (enumerator_37854.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 977)) ;
            }
            enumerator_37854.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 979)) ;
          GALGAS_string var_whileVar_38244 ;
          const GALGAS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_38244, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 980)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_35947, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 987)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 987)).add_operation (var_whileVar_38244, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 987)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 987)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 987)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 988)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = this ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 991)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 992)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 993)) ;
          const GALGAS_forInstructionForGeneration temp_24 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38579 (temp_24.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_38579.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38579.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 995)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 995)) ;
            enumerator_38579.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_35947.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 997)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 998)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1006)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1007)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1010)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1012)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1013)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1021)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = this ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1024)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1024)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1024)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1026)) ;
    const GALGAS_forInstructionForGeneration temp_30 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39776 (temp_30.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_39776.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_39776.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1028)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1028)) ;
      if (enumerator_39776.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1029)) ;
      }
      enumerator_39776.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1031)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1033)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = this ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("instruction-for.galgas", 1042)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1044)) ;
        const GALGAS_forInstructionForGeneration temp_34 = this ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_40423 (temp_34.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
        while (enumerator_40423.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_40423.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1046)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1046)) ;
          if (enumerator_40423.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1047)) ;
          }
          enumerator_40423.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1049)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = this ;
        routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1050)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1058)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1059)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_41011 (temp_36.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_41011.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_41011.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1063)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1063)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1063)) ;
      enumerator_41011.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = this ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1066)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1066)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = this ;
        const GALGAS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1067)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1067)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1067)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1067)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1067)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1068)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1068)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1068)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1067)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1070)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 362)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_16470 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_16470.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_16470.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 364)) ;
    enumerator_16470.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 373)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_16922 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_16922.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_16922.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 375)) ;
    enumerator_16922.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_17684 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 391)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_17684 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_18000 ;
  GALGAS_bool var_hasTranslateFeature_18038 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  GALGAS_bool joker_18020 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_18000, joker_18020, var_hasTranslateFeature_18038, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 394)) ;
  GALGAS_formalParameterSignature var_labelSignature_18165 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_18000.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_18165, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_18607 ;
  const GALGAS_grammarInFileInstructionAST temp_3 = this ;
  const GALGAS_grammarInFileInstructionAST temp_4 = this ;
  const GALGAS_grammarInFileInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 412)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 412)), var_labelSignature_18165, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_18607, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 406)) ;
  GALGAS_semanticExpressionForGeneration var_sourceExpression_18934 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 422)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_18934, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 419)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_18934.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_18934.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 432)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 432)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_19405 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 435)) ;
  GALGAS_stringlist var_assignementList_19546 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 436)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_18038, var_syntaxDirectedTranslationResultVarName_19405, var_assignementList_19546, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 437)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = this ;
  const GALGAS_grammarInFileInstructionAST temp_13 = this ;
  const GALGAS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::class_func_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_18934, var_actualParameterListForGeneration_18607, var_hasTranslateFeature_18038, var_assignementList_19546, var_syntaxDirectedTranslationResultVarName_19405  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 446))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 446)) ;
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
  GALGAS_lstring var_grammarUsefulnessName_20706 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 468)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_20706 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 469)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_21036 ;
  GALGAS_bool var_hasTranslateFeature_21074 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  GALGAS_bool joker_21056 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_21036, joker_21056, var_hasTranslateFeature_21074, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
  GALGAS_formalParameterSignature var_labelSignature_21201 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_21036.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_21201, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 478)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_21643 ;
  const GALGAS_grammarInStringInstructionAST temp_3 = this ;
  const GALGAS_grammarInStringInstructionAST temp_4 = this ;
  const GALGAS_grammarInStringInstructionAST temp_5 = this ;
  extensionMethod_analyzeRoutineArguments (temp_3.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_4.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 489)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 489)), var_labelSignature_21201, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_21643, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)) ;
  GALGAS_semanticExpressionForGeneration var_sourceExpression_21970 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 499)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_sourceExpression_21970, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 496)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_21970.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_21970.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 508)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_22616 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-grammar.galgas", 515)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_nameExpression_22616, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_22616.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_21970.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 525)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 524)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 525)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 523)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_23028 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 528)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 528)) ;
  GALGAS_stringlist var_assignementList_23169 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 529)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_hasTranslateFeature_21074, var_syntaxDirectedTranslationResultVarName_23028, var_assignementList_23169, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 530)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = this ;
  const GALGAS_grammarInStringInstructionAST temp_17 = this ;
  const GALGAS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::class_func_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_21970, var_nameExpression_22616, var_actualParameterListForGeneration_21643, var_hasTranslateFeature_21074, var_assignementList_23169, var_syntaxDirectedTranslationResultVarName_23028  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 539))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 539)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 576)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 576))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 576)) ;
  GALGAS_string var_sourceVar_25333 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_25333, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 578)) ;
  GALGAS_stringlist var_parameterCppNameList_25375 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 586)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_25421 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 587)) ;
  GALGAS_stringlist var_inputVariableList_25475 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 588)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_25519 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_25519.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_25828 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_25519.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_25421, var_inputVariableList_25475, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_25828, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)) ;
    var_parameterCppNameList_25375.addAssign_operation (var_parameterCppName_25828  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 599)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_25519.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_25828.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 601)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 601)) ;
      }
    }
    enumerator_25519.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 605)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 607)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 607)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 608)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 609)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 610)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 610)).add_operation (var_sourceVar_25333, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 611)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 607)) ;
  cEnumerator_stringlist enumerator_26618 (var_parameterCppNameList_25375, kENUMERATION_UP) ;
  while (enumerator_26618.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_26618.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 614)) ;
    enumerator_26618.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 616)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 617)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 617)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  cEnumerator_stringlist enumerator_26866 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_26866.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_26866.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 619)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 619)) ;
    enumerator_26866.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 647))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 647)) ;
  GALGAS_string var_sourceVar_28510 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_28510, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 649)) ;
  GALGAS_string var_nameVar_28730 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_28730, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 657)) ;
  GALGAS_stringlist var_parameterCppNameList_28770 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 665)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_28816 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 666)) ;
  GALGAS_stringlist var_inputVariableList_28870 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 667)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_28914 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_28914.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_29230 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_28914.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_28816, var_inputVariableList_28870, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_29230, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)) ;
    var_parameterCppNameList_28770.addAssign_operation (var_parameterCppName_29230  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 678)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_28914.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_29230.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 680)) ;
      }
    }
    enumerator_28914.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 684)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 689)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 686)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 686)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 687)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 687)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 688)).add_operation (var_sourceVar_28510, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 689)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 690)).add_operation (var_nameVar_28730, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 686)) ;
  cEnumerator_stringlist enumerator_30039 (var_parameterCppNameList_28770, kENUMERATION_UP) ;
  while (enumerator_30039.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_30039.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 693)) ;
    enumerator_30039.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 695)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 696)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 696)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  cEnumerator_stringlist enumerator_30287 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_30287.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30287.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 698)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 698)) ;
    enumerator_30287.gotoNextObject () ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_7333 ;
  GALGAS_string var_targetVariableCppName_7358 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_7522 ;
        GALGAS_bool var_selfIsMutable_7545 ;
        GALGAS_bool var_mutableProperties_7583 ;
        const bool optionalResult7501 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_7522, var_selfIsMutable_7545, var_mutableProperties_7583) ;
        if (!optionalResult7501) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_7545.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 204)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 205)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_7738 = extensionGetter_definition (var_selfType_7522, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 207)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_7844 ;
          const GALGAS_incDecInstructionAST temp_6 = this ;
          GALGAS_AccessControl joker_7836 ; // Joker input parameter
          var_propertyMap_7738.method_searchKey (temp_6.readProperty_mReceiverName (), joker_7836, var_isConstant_7844, var_targetType_7333, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 208)) ;
          const GALGAS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_7358 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 211)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_7844.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 213)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_7583.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 215)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 216)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)) ;
        var_targetType_7333.drop () ; // Release error dropped variable
        var_targetVariableCppName_7358.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = this ;
    GALGAS_string joker_8670 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_7333, var_targetVariableCppName_7358, joker_8670, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 223)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_8735 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_8735.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8782 = extensionGetter_definition (var_targetType_7333, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 232)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_8872 ;
    GALGAS_bool var_isConstant_8891 ;
    var_propertyMap_8782.method_searchKey (enumerator_8735.current_mValue (HERE), var_accessControl_8872, var_isConstant_8891, var_targetType_7333, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 233)) ;
    extensionMethod_checkSetAccess (var_accessControl_8872, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_8735.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 234)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isConstant_8891.boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8735.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 239)) ;
      }
    }
    enumerator_8735.gotoNextObject () ;
  }
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = extensionGetter_definition (var_targetType_7333, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 243)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 243)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 243)).boolEnum () ;
    if (kBoolTrue == test_20) {
      const GALGAS_incDecInstructionAST temp_21 = this ;
      TC_Array <C_FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_7333, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)), fixItArray22  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 244)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_23 = this ;
  const GALGAS_incDecInstructionAST temp_24 = this ;
  const GALGAS_incDecInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::class_func_new (temp_23.readProperty_mInstructionLocation (), var_targetVariableCppName_7358, var_targetType_7333, temp_24.readProperty_mStructAttributeList (), temp_25.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_10318 ;
  GALGAS_string var_targetVariableCppName_10410 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = this ;
  GALGAS_string joker_10432 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_10318, var_targetVariableCppName_10410, joker_10432, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 269)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_10443 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10443.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10490 = extensionGetter_definition (var_targetType_10318, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 271)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_10580 ;
    GALGAS_bool var_isConstant_10599 ;
    var_propertyMap_10490.method_searchKey (enumerator_10443.current_mValue (HERE), var_accessControl_10580, var_isConstant_10599, var_targetType_10318, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 272)) ;
    extensionMethod_checkSetAccess (var_accessControl_10580, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_10443.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 273)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isConstant_10599.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10443.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 278)) ;
      }
    }
    enumerator_10443.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_definition (var_targetType_10318, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 282)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 282)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 282)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10318, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 284)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 284)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 284)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 283)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), var_targetVariableCppName_10410, var_targetType_10318, temp_8.readProperty_mStructAttributeList (), temp_9.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_12048 ;
    GALGAS_bool var_selfIsMutable_12071 ;
    GALGAS_bool var_unused_0_12105 ;
    const bool optionalResult12027 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12048, var_selfIsMutable_12071, var_unused_0_12105) ;
    if (!optionalResult12027) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12071.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 307)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 308)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12048, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 311)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 311)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 311)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12048, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 313)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 312)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_12048, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 320)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 316))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 316)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 324)) ;
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
    GALGAS_unifiedTypeMapEntry var_selfType_13462 ;
    GALGAS_bool var_selfIsMutable_13485 ;
    GALGAS_bool var_unused_0_13519 ;
    const bool optionalResult13441 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_13462, var_selfIsMutable_13485, var_unused_0_13519) ;
    if (!optionalResult13441) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_13485.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 339)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 340)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_13462, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 343)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 343)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 343)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_13462, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 345)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 345)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 345)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 344)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_13462, GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 352)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 356)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 392)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_15741 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_15788 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_15788.hasCurrentObject ()) {
    var_receiverCppName_15741.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15788.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)) ;
    enumerator_15788.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15741.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 401)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_15741.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 404)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 404)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 404)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 404)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 406)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 420)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_16977 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_17024 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_17024.hasCurrentObject ()) {
    var_receiverCppName_16977.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_17024.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 423)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 423)) ;
    enumerator_17024.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16977.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 428)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16977.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 430)) ;
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
  cEnumerator_ifExpressionList enumerator_13939 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_13939.hasCurrentObject ()) {
    switch (enumerator_13939.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_14082 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_13939.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14018_exp = extractPtr_14082->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14018_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 374)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_14228 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_13939.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14103_exp = extractPtr_14228->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_14118_typeName = extractPtr_14228->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14103_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 376)) ;
        {
        GALGAS_unifiedTypeMapEntry joker_14226 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_14118_typeName, joker_14226, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 377)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_14668 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_13939.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_14259_receiverExpression = extractPtr_14668->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_14280_parameters = extractPtr_14668->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14259_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 379)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_14379 (extractedValue_14280_parameters, kENUMERATION_UP) ;
        while (enumerator_14379.hasCurrentObject ()) {
          switch (enumerator_14379.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_14541 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_14379.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_14459_expression = extractPtr_14541->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_14459_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 383)) ;
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
          enumerator_14379.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_13939.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 391)) ;
  const GALGAS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 392)) ;
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
  GALGAS_ifTestListForGeneration var_testListForGeneration_16161 = GALGAS_ifTestListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 430)) ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_16195 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_16195.hasCurrentObject ()) {
    switch (enumerator_16195.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_16848 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_16195.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_16274_exp = extractPtr_16848->mAssociatedValue0 ;
        const GALGAS_location extractedValue_16278_endOfExpression = extractPtr_16848->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_16518 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_16274_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 437)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_16518, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 434)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_16679 ;
        {
        routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, extractedValue_16278_endOfExpression, var_analyzed_5F_if_5F_expression_16518, var_if_5F_expression_16679, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 443)) ;
        }
        var_testListForGeneration_16161.addAssign_operation (GALGAS_ifTestForGeneration::class_func_regular (var_if_5F_expression_16679  COMMA_SOURCE_FILE ("instruction-if.galgas", 449))  COMMA_SOURCE_FILE ("instruction-if.galgas", 449)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 450)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 451)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_20434 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_16195.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_16867_constantName = extractPtr_20434->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_16880_exp = extractPtr_20434->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_16895_typeName = extractPtr_20434->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_17128 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_16880_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 456)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_17128, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 453)) ;
        GALGAS_unifiedTypeMapEntry var_castType_17195 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 463)) ;
        GALGAS_unifiedTypeMapEntry var_testType_17242 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 464)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = extensionGetter_definition (var_analyzedExpression_17128.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 466)).boolEnum () ;
          if (kBoolTrue == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (kIsEqual, extractedValue_16895_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_2) {
                TC_Array <C_FixItDescription> fixItArray3 ;
                inCompiler->emitSemanticError (extractedValue_16895_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray3  COMMA_SOURCE_FILE ("instruction-if.galgas", 468)) ;
                var_castType_17195.drop () ; // Release error dropped variable
                var_testType_17242.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_2) {
              var_castType_17195 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_16895_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 470)) ;
              var_testType_17242 = var_castType_17195 ;
              GALGAS_unifiedTypeMapEntry var_t_17746 = var_castType_17195 ;
              GALGAS_bool var_found_17779 = GALGAS_bool (kIsEqual, var_t_17746.objectCompare (var_analyzedExpression_17128.readProperty_mResultType ())) ;
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 475)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 475)).isValid ()) {
                uint32_t variant_17833 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 475)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 475)).uintValue () ;
                bool loop_17833 = true ;
                while (loop_17833) {
                  loop_17833 = var_found_17779.operator_not (SOURCE_FILE ("instruction-if.galgas", 476)).operator_and (extensionGetter_definition (var_t_17746, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 476)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 476)).operator_not (SOURCE_FILE ("instruction-if.galgas", 476)) COMMA_SOURCE_FILE ("instruction-if.galgas", 476)).isValid () ;
                  if (loop_17833) {
                    loop_17833 = var_found_17779.operator_not (SOURCE_FILE ("instruction-if.galgas", 476)).operator_and (extensionGetter_definition (var_t_17746, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 476)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 476)).operator_not (SOURCE_FILE ("instruction-if.galgas", 476)) COMMA_SOURCE_FILE ("instruction-if.galgas", 476)).boolValue () ;
                  }
                  if (loop_17833 && (0 == variant_17833)) {
                    loop_17833 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 475)) ;
                  }
                  if (loop_17833) {
                    variant_17833 -- ;
                    var_t_17746 = extensionGetter_definition (var_t_17746, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)).readProperty_mSuperType () ;
                    var_found_17779 = GALGAS_bool (kIsEqual, var_t_17746.objectCompare (var_analyzedExpression_17128.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_found_17779.operator_not (SOURCE_FILE ("instruction-if.galgas", 480)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  TC_Array <C_FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (extractedValue_16895_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_16895_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 482)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 482)).add_operation (extensionGetter_definition (var_analyzedExpression_17128.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 482)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 482)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 482)), fixItArray5  COMMA_SOURCE_FILE ("instruction-if.galgas", 481)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            GALGAS_unifiedTypeMapEntry var_classType_18426 ;
            const bool optionalResult18388 = extensionGetter_definition (var_analyzedExpression_17128.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 486)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classType_18426) ;
            if (!optionalResult18388) {
              test_6 = kBoolFalse ;
            }
            if (kBoolTrue == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (kIsEqual, extractedValue_16895_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_castType_17195 = var_classType_18426 ;
                }
              }
              if (kBoolFalse == test_7) {
                var_castType_17195 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_16895_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 490)) ;
              }
              var_testType_17242 = var_castType_17195 ;
              GALGAS_unifiedTypeMapEntry var_t_18660 = var_castType_17195 ;
              GALGAS_bool var_found_18691 = GALGAS_bool (kIsEqual, var_t_18660.objectCompare (var_analyzedExpression_17128.readProperty_mResultType ())) ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_found_18691.boolEnum () ;
                if (kBoolTrue == test_8) {
                  extensionGetter_definition (var_castType_17195, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_17242, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)) ;
                }
              }
              if (kBoolFalse == test_8) {
                enumGalgasBool test_9 = kBoolTrue ;
                if (kBoolTrue == test_9) {
                  test_9 = GALGAS_bool (kIsEqual, var_t_18660.objectCompare (var_classType_18426)).boolEnum () ;
                  if (kBoolTrue == test_9) {
                    var_found_18691 = GALGAS_bool (true) ;
                  }
                }
              }
              if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 500)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 500)).isValid ()) {
                uint32_t variant_18925 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-if.galgas", 500)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 500)).uintValue () ;
                bool loop_18925 = true ;
                while (loop_18925) {
                  loop_18925 = var_found_18691.operator_not (SOURCE_FILE ("instruction-if.galgas", 501)).operator_and (extensionGetter_definition (var_t_18660, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 501)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 501)).operator_not (SOURCE_FILE ("instruction-if.galgas", 501)) COMMA_SOURCE_FILE ("instruction-if.galgas", 501)).isValid () ;
                  if (loop_18925) {
                    loop_18925 = var_found_18691.operator_not (SOURCE_FILE ("instruction-if.galgas", 501)).operator_and (extensionGetter_definition (var_t_18660, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 501)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 501)).operator_not (SOURCE_FILE ("instruction-if.galgas", 501)) COMMA_SOURCE_FILE ("instruction-if.galgas", 501)).boolValue () ;
                  }
                  if (loop_18925 && (0 == variant_18925)) {
                    loop_18925 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 500)) ;
                  }
                  if (loop_18925) {
                    variant_18925 -- ;
                    var_t_18660 = extensionGetter_definition (var_t_18660, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 502)).readProperty_mSuperType () ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = GALGAS_bool (kIsEqual, var_t_18660.objectCompare (var_analyzedExpression_17128.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        var_found_18691 = GALGAS_bool (true) ;
                        extensionGetter_definition (var_castType_17195, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_17242, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 505)) ;
                      }
                    }
                    if (kBoolFalse == test_10) {
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = GALGAS_bool (kIsEqual, var_t_18660.objectCompare (var_classType_18426)).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          var_found_18691 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_found_18691.operator_not (SOURCE_FILE ("instruction-if.galgas", 510)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_16895_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_castType_17195, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)).add_operation (extensionGetter_definition (var_analyzedExpression_17128.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 511)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (var_analyzedExpression_17128.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_17128.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 516)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 515)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 516)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 515)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 518)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 519)) ;
        }
        GALGAS_string var_targetVariableCppName_19884 = GALGAS_string ("var_").add_operation (extractedValue_16867_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)).add_operation (extractedValue_16867_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 521)).getter_string (SOURCE_FILE ("instruction-if.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 521)) ;
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsNotEqual, extractedValue_16867_constantName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_15) {
            {
            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_16867_constantName, var_castType_17195, var_targetVariableCppName_19884, var_targetVariableCppName_19884, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 523)) ;
            }
          }
        }
        var_testListForGeneration_16161.addAssign_operation (GALGAS_ifTestForGeneration::class_func_letExp (var_targetVariableCppName_19884, var_analyzedExpression_17128, var_castType_17195, var_testType_17242  COMMA_SOURCE_FILE ("instruction-if.galgas", 530))  COMMA_SOURCE_FILE ("instruction-if.galgas", 530)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_20851 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_16195.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_20465_receiverExpression = extractPtr_20851->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_20484_optionalMethodName = extractPtr_20851->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_20503_parameters = extractPtr_20851->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall_3F__26__3F__26__26__3F_receiverExp_3F_optionalMethodName_3F_parameters_26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, extractedValue_20465_receiverExpression, extractedValue_20484_optionalMethodName, extractedValue_20503_parameters, var_testListForGeneration_16161, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 537)) ;
        }
      }
      break ;
    }
    enumerator_16195.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_21234 ;
  {
  const GALGAS_ifInstructionAST temp_16 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 556)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 557)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 558)), temp_16.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_21234, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 551)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = this ;
  GALGAS_ifExpressionList var_expressions_21265 = temp_17.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_21322 ; // Joker input parameter
  var_expressions_21265.setter_popLast (joker_21322, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 564)) ;
  }
  cEnumerator_ifExpressionList enumerator_21333 (var_expressions_21265, kENUMERATION_UP) ;
  while (enumerator_21333.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_18 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_18.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 566)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_19 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 567)) ;
    }
    enumerator_21333.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_20 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 569)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_21923 ;
  {
  const GALGAS_ifInstructionAST temp_21 = this ;
  const GALGAS_ifInstructionAST temp_22 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 576)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 577)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 578)), temp_21.readProperty_m_5F_else_5F_instructionList (), temp_22.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_21923, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 571)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_23 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 584)) ;
  }
  const GALGAS_ifInstructionAST temp_24 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::class_func_new (temp_24.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_16161, var_then_5F_instructionList_21234, var_else_5F_instructionList_21923  COMMA_SOURCE_FILE ("instruction-if.galgas", 586))  COMMA_SOURCE_FILE ("instruction-if.galgas", 586)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_23553 ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-if.galgas", 611)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_23553, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 608)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 617)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 618)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_23710 = var_receiverExpression_23553.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_23781 = extensionGetter_definition (var_receiverType_23710, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 621)).readProperty_mOptionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_23905 ;
  const cMapElement_optionalMethodMap * objectArray_23931 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_23781.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (nullptr != objectArray_23931) {
      macroValidSharedObject (objectArray_23931, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_23905 = objectArray_23931->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_24051 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_24136 (var_optionalMethodMap_23781, kENUMERATION_UP) ;
    while (enumerator_24136.hasCurrentObject ()) {
      var_s_24051.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_24136.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 629)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 629)) ;
      enumerator_24136.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_24051, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 631)) ;
    var_optionalMethodSignature_23905.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 634)).objectCompare (var_optionalMethodSignature_23905.getter_count (SOURCE_FILE ("instruction-if.galgas", 634)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)).add_operation (extensionGetter_definition (var_receiverType_23710, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)).add_operation (var_optionalMethodSignature_23905.getter_count (SOURCE_FILE ("instruction-if.galgas", 637)).getter_string (SOURCE_FILE ("instruction-if.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 637)).add_operation (constinArgument_inActualParameters.getter_count (SOURCE_FILE ("instruction-if.galgas", 638)).getter_string (SOURCE_FILE ("instruction-if.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 637)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 638)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 635)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_24761 = GALGAS_optionalMethodActualArgumentListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 640)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_24810 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_24887 (var_optionalMethodSignature_23905, kENUMERATION_UP) ;
    while (enumerator_24810.hasCurrentObject () && enumerator_24887.hasCurrentObject ()) {
      switch (enumerator_24810.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_25722 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_24810.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_24974_expression = extractPtr_25722->mAssociatedValue0 ;
          const GALGAS_location extractedValue_24985_location = extractPtr_25722->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_25275 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_24974_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_24887.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_25275, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 645)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_24810.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 655)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_25374 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 655)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_25374) ;
              inCompiler->emitSemanticError (enumerator_24810.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25374, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 656)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 656)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_24887.current_mFormalArgumentType (HERE), var_exp_25275.readProperty_mResultType (), extractedValue_24985_location, var_exp_25275, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 658)) ;
          }
          var_actualParameterList_24761.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualOutput (var_exp_25275  COMMA_SOURCE_FILE ("instruction-if.galgas", 659))  COMMA_SOURCE_FILE ("instruction-if.galgas", 659)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_26865 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_24810.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_25760_actualTypeName = extractPtr_26865->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_25784_constantName = extractPtr_26865->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_25760_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_25760_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664))) ;
              inCompiler->emitSemanticError (extractedValue_25760_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 663)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 663)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 663)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 662)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_26146 = GALGAS_string ("var_").add_operation (extractedValue_25784_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 666)).add_operation (extractedValue_25784_constantName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)).getter_string (SOURCE_FILE ("instruction-if.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_25784_constantName, enumerator_24887.current_mFormalArgumentType (HERE), var_targetVariableCppName_26146, var_targetVariableCppName_26146, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 668)) ;
          }
          var_actualParameterList_24761.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualLetInput (extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 674)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26146  COMMA_SOURCE_FILE ("instruction-if.galgas", 674))  COMMA_SOURCE_FILE ("instruction-if.galgas", 674)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_24810.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26681 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 676)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_26681) ;
              inCompiler->emitSemanticError (enumerator_24810.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26681, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 677)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_28046 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_24810.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_26905_actualTypeName = extractPtr_28046->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_26929_variableName = extractPtr_28046->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_26905_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 680)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_26905_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683))) ;
              inCompiler->emitSemanticError (extractedValue_26905_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 682)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 682)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 682)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 681)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_27292 = GALGAS_string ("var_").add_operation (extractedValue_26929_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 685)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 685)).add_operation (extractedValue_26929_variableName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 686)).getter_string (SOURCE_FILE ("instruction-if.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 686)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_26929_variableName, GALGAS_bool (true), enumerator_24887.current_mFormalArgumentType (HERE), var_targetVariableCppName_27292, var_targetVariableCppName_27292, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)) ;
          }
          var_actualParameterList_24761.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 694)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_27292  COMMA_SOURCE_FILE ("instruction-if.galgas", 694))  COMMA_SOURCE_FILE ("instruction-if.galgas", 694)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_24810.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 696)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27862 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 696)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_27862) ;
              inCompiler->emitSemanticError (enumerator_24810.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27862, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 697)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 697)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 697)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_28630 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_24810.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_28079_checkSelector = extractPtr_28630->mAssociatedValue0 ;
          const GALGAS_location extractedValue_28093_location = extractPtr_28630->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_28102_idx = extractPtr_28630->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_28121 = GALGAS_string ("var_unused_").add_operation (extractedValue_28102_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 700)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 700)).add_operation (extractedValue_28093_location.getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 700)).getter_string (SOURCE_FILE ("instruction-if.galgas", 700)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 700)) ;
          var_actualParameterList_24761.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::class_func_actualVarInput (extensionGetter_definition (enumerator_24887.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 701)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_28121  COMMA_SOURCE_FILE ("instruction-if.galgas", 701))  COMMA_SOURCE_FILE ("instruction-if.galgas", 701)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_28079_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_24810.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_24887.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 703)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_28446 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 703)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_28446) ;
              inCompiler->emitSemanticError (enumerator_24810.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28446, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 704)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 704)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 704)) ;
            }
          }
        }
        break ;
      }
      enumerator_24810.gotoNextObject () ;
      enumerator_24887.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::class_func_optionalMethodCall (var_receiverExpression_23553, constinArgument_inOptionalMethodName, var_actualParameterList_24761  COMMA_SOURCE_FILE ("instruction-if.galgas", 708))  COMMA_SOURCE_FILE ("instruction-if.galgas", 708)) ;
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
  GALGAS_string var_testVar_31707 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 788)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 789)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_31707, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 790)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 790)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_31870 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_31870.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_31707, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 792)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 792)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 792)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 793)) ;
    }
    switch (enumerator_31870.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_32299 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_31870.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32051_exp = extractPtr_32299->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_32224 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32051_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_32224, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 796)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_31707.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 803)).add_operation (var_cppVarName_32224, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 803)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 803)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 803)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_33044 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_31870.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_32335_targetVarCppName = extractPtr_33044->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_32352_exp = extractPtr_33044->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_32356_targetType = extractPtr_33044->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_32367_testType = extractPtr_33044->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_32389 = extensionGetter_identifierRepresentation (extractedValue_32356_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 805)) ;
        GALGAS_string var_testTypeName_32454 = extensionGetter_identifierRepresentation (extractedValue_32367_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 806)) ;
        GALGAS_string var_cppVarName_32671 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32352_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_32671, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 807)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_32389, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 814)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 814)).add_operation (extractedValue_32335_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 814)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 814)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_32454, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 815)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 815)).add_operation (var_cppVarName_32671, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 815)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 815)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr == ").add_operation (extractedValue_32335_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 816)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 816)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_31707, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 817)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 817)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 817)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 818)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_34780 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_31870.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_33079_receiverExpression = extractPtr_34780->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_33098_optionalMethodName = extractPtr_34780->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_33117_parameters = extractPtr_34780->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_33312 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_33079_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_33312, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 820)) ;
        GALGAS_stringlist var_actualParameterNameList_33353 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-if.galgas", 827)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_33393 (extractedValue_33117_parameters, kENUMERATION_UP) ;
        while (enumerator_33393.hasCurrentObject ()) {
          switch (enumerator_33393.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_33750 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_33393.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_33473_expression = extractPtr_33750->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_33684 ;
              callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_33473_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_33684, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)) ;
              var_actualParameterNameList_33353.addAssign_operation (var_argumentCppName_33684  COMMA_SOURCE_FILE ("instruction-if.galgas", 838)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_33971 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_33393.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_33795_typeName = extractPtr_33971->mAssociatedValue0 ;
              const GALGAS_string extractedValue_33804_constantName = extractPtr_33971->mAssociatedValue1 ;
              var_actualParameterNameList_33353.addAssign_operation (extractedValue_33804_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 840)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_33795_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)).add_operation (extractedValue_33804_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 841)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 841)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_34183 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_33393.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_34007_typeName = extractPtr_34183->mAssociatedValue0 ;
              const GALGAS_string extractedValue_34016_variableName = extractPtr_34183->mAssociatedValue1 ;
              var_actualParameterNameList_33353.addAssign_operation (extractedValue_34016_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 843)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_34007_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 844)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 844)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 844)).add_operation (extractedValue_34016_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 844)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 844)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 844)) ;
            }
            break ;
          }
          enumerator_33393.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_34222 = GALGAS_string ("optionalResult").add_operation (extractedValue_33098_optionalMethodName.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 847)).getter_string (SOURCE_FILE ("instruction-if.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 847)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_34222, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 848)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 848)).add_operation (var_cppVarName_33312, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 848)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 848)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_33098_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 849)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 849)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 849)) ;
        cEnumerator_stringlist enumerator_34452 (var_actualParameterNameList_33353, kENUMERATION_UP) ;
        while (enumerator_34452.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_34452.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 852)) ;
          if (enumerator_34452.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 854)) ;
          }
          enumerator_34452.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 856)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_34222, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 857)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 857)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_31707, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 858)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 858)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 859)) ;
      }
      break ;
    }
    enumerator_31870.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_31707, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 863)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 863)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 863)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 864)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 872)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_35131 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_35131.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 874)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 875)) ;
    enumerator_35131.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_count (SOURCE_FILE ("instruction-if.galgas", 878)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_31707, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 879)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 879)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 879)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 880)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 888)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 160)) ;
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
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_6846 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_6846, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_7791 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 184)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_7866 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 186)).getter_string (SOURCE_FILE ("instruction-let.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 186)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_7791, var_targetVariableCppName_7866, var_targetVariableCppName_7866, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 187)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::class_func_new (var_targetType_7791, var_targetVariableCppName_7866  COMMA_SOURCE_FILE ("instruction-let.galgas", 194))  COMMA_SOURCE_FILE ("instruction-let.galgas", 194)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_9251 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-let.galgas", 213)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_9251, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 210)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_9299 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 220)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 220)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 221)).getter_string (SOURCE_FILE ("instruction-let.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 221)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_9251.readProperty_mResultType (), var_targetVariableCppName_9299, var_targetVariableCppName_9299, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 222)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_expression_9251.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_9299, var_expression_9251  COMMA_SOURCE_FILE ("instruction-let.galgas", 229))  COMMA_SOURCE_FILE ("instruction-let.galgas", 229)) ;
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
  GALGAS_unifiedTypeMapEntry var_targetType_10512 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 245)) ;
  GALGAS_semanticExpressionForGeneration var_expression_10854 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10512, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_10854, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 247)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_10902 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 257)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 257)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 258)).getter_string (SOURCE_FILE ("instruction-let.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 258)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_10512, var_targetVariableCppName_10902, var_targetVariableCppName_10902, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 260)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_10512, var_targetVariableCppName_10902, var_targetVariableCppName_10902, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 267)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_targetType_10512, var_expression_10854.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_10854, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 276)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_targetType_10512, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_10902, var_expression_10854  COMMA_SOURCE_FILE ("instruction-let.galgas", 278))  COMMA_SOURCE_FILE ("instruction-let.galgas", 278)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 313)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 314)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 325)) ;
  GALGAS_string var_sourceVar_14200 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_14200, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 326)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 333)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 333)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 333)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 333)).add_operation (var_sourceVar_14200, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 333)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 333)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_4787 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_4787.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_4787.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
    enumerator_4787.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_5531 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_5531.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_5836 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_5531.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-log.galgas", 146)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5836, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 143)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::class_func_new (enumerator_5531.current_mLogMessage (HERE), var_expression_5836  COMMA_SOURCE_FILE ("instruction-log.galgas", 153))  COMMA_SOURCE_FILE ("instruction-log.galgas", 153)) ;
    enumerator_5531.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_logVar_6981 ;
  const GALGAS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_6981, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 178)) ;
  const GALGAS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_6981.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 185)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 185)) ;
  const GALGAS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 186)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 186)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 131)) ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 132)) ;
  const GALGAS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 133)) ;
  const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 134)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variantExpression_6717 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variantExpression_6717, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 149)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_variantExpression_6717.readProperty_mResultType (), var_variantExpression_6717.readProperty_mLocation (), var_variantExpression_6717, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 159)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_7579 ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 173)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_7579, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 170)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_7579.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)).add_operation (extensionGetter_definition (var_loopExpression_7579.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 182)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 181)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 185)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_8466 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_5 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 192)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 193)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 194)), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_8466, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 187)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_8880 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_7 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 206)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 207)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 208)), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8880, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 201)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 215)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::class_func_new (temp_10.readProperty_mInstructionLocation (), var_variantExpression_6717, var_first_5F_instructionList_8466, var_loopExpression_7579, var_second_5F_instructionList_8880  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 217))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 217)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_variantCppVarName_10467 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_10467, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_10467, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GALGAS_string var_variantVar_10612 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 256)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_10612, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)).add_operation (var_variantCppVarName_10467, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 257)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GALGAS_string var_loopVar_10804 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 258)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_10804, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)).add_operation (var_loopVar_10804, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 261)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 262)) ;
  }
  GALGAS_string var_loopExpressionVar_11379 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_11379, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10804.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (var_loopExpressionVar_11379, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (var_loopVar_10804, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_loopVar_10804, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (var_loopExpressionVar_11379, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_10804, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (var_variantVar_10612, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (GALGAS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)).add_operation (var_loopVar_10804, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)).add_operation (GALGAS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 277)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)).add_operation (GALGAS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 278)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 279)).add_operation (var_loopVar_10804, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 280)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 276)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_10612, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 281)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 281)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 282)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 290)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 291)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 292)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 293)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 294)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 113)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 114)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_loopExpression_6138 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 133)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_loopExpression_6138, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 130)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression_6138.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (extensionGetter_definition (var_loopExpression_6138.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 142)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 141)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 145)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7025 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 152)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 153)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 154)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7025, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 147)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_7439 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 166)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 167)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 168)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_7439, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 161)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 175)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_7025, var_loopExpression_6138, var_second_5F_instructionList_7439  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 177))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 177)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GALGAS_string var_loopVar_9079 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 203)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9079, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 204)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_9079, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 205)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 206)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 207)) ;
  }
  GALGAS_string var_loopExpressionVar_9680 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_9680, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9079.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (var_loopExpressionVar_9680, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)).add_operation (var_loopVar_9079, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 223)).add_operation (var_loopVar_9079, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (var_loopExpressionVar_9680, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 222)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_9079, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 226)) ;
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 227)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 235)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 236)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 237)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_4357 ;
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-message.galgas", 89)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4357, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 86)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_4357.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_4357.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 98)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 97)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::class_func_new (var_expression_4357, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-message.galgas", 101))  COMMA_SOURCE_FILE ("instruction-message.galgas", 101)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_messageCppVarName_5860 ;
  const GALGAS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5860, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 125)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 133)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 133)).add_operation (var_messageCppVarName_5860, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 133)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 134)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 135)) COMMA_SOURCE_FILE ("instruction-message.galgas", 135)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 104)) ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_4505 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_4505.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_4505.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 106)) ;
    enumerator_4505.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_5528 ;
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-method-call.galgas", 126)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_5528, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 123)) ;
  GALGAS_methodKind var_kind_5689 ;
  GALGAS_formalParameterSignature var_routineSignature_5703 ;
  GALGAS_bool var_hasCompilerArgument_5736 ;
  GALGAS_string var_errorMessage_5772 ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  GALGAS_location joker_5724 ; // Joker input parameter
  GALGAS_methodQualifier joker_5760 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_5528.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 133)).readProperty_mInstanceMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_kind_5689, var_routineSignature_5703, joker_5724, var_hasCompilerArgument_5736, joker_5760, var_errorMessage_5772, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 133)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_5772.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), var_errorMessage_5772, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 143)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_6289 ;
  const GALGAS_methodCallInstructionAST temp_5 = this ;
  const GALGAS_methodCallInstructionAST temp_6 = this ;
  const GALGAS_methodCallInstructionAST temp_7 = this ;
  extensionMethod_analyzeRoutineArguments (temp_5.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_6.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_7.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 152)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 152)), var_routineSignature_5703, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6289, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  GALGAS_unifiedTypeMapEntry var_baseType_6379 = var_receiverExpression_5528.readProperty_mResultType () ;
  GALGAS_bool var_searching_6427 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 161)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 162)).isValid ()) {
        uint32_t variant_6480 = GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-method-call.galgas", 162)).uintValue () ;
        bool loop_6480 = true ;
        while (loop_6480) {
          loop_6480 = var_searching_6427.isValid () ;
          if (loop_6480) {
            loop_6480 = var_searching_6427.boolValue () ;
          }
          if (loop_6480 && (0 == variant_6480)) {
            loop_6480 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
          }
          if (loop_6480) {
            variant_6480 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extensionGetter_definition (var_baseType_6379, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 163)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_6427 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = this ;
                test_10 = extensionGetter_definition (extensionGetter_definition (var_baseType_6379, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 166)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 166)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_11.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 166)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_6379 = extensionGetter_definition (var_baseType_6379, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 167)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_6427 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = this ;
  const GALGAS_methodCallInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::class_func_new (temp_12.readProperty_mInstructionLocation (), var_receiverExpression_5528.readProperty_mResultType (), var_receiverExpression_5528, temp_13.readProperty_mMethodName ().readProperty_string (), var_kind_5689, var_actualParameterListForGeneration_6289, var_hasCompilerArgument_5736, var_baseType_6379  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 175)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppName_8466 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_8466, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 211)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_8466 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_8554 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 214)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_8598 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 215)) ;
  GALGAS_stringlist var_inputVariableList_8650 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 216)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_8692 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_8692.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_8935 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_8692.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_8598, var_inputVariableList_8650, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_8935, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
    var_parameterCppNameList_8554.addAssign_operation (var_parameterCppName_8935  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 219)) ;
    enumerator_8692.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = this ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 224)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 225)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 225)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = this ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 227)).add_operation (var_receiverCppName_8466, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 226)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)).add_operation (var_receiverCppName_8466, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 231)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 230)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_8466.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 234)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_9874 (var_parameterCppNameList_8554, kENUMERATION_UP) ;
  while (enumerator_9874.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_9874.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 237)) ;
    if (enumerator_9874.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 238)) ;
    }
    enumerator_9874.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_8554.getter_count (SOURCE_FILE ("instruction-method-call.galgas", 240)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 242)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 242)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 243)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 244)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_11) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_methodCallInstructionForGeneration temp_15 = this ;
      test_14 = temp_15.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (kBoolTrue == test_14) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 247)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 247)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 248)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 249)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 251)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 253)) ;
  const GALGAS_methodCallInstructionForGeneration temp_17 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_10559 (temp_17.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_10559.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_10559.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 256)) ;
    enumerator_10559.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_3351 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_3351.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3351.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 74)) ;
    enumerator_3351.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_routineSignature_4348 ;
  GALGAS_bool var_isFilePrivate_4398 ;
  GALGAS_lstring var_routineMangledName_4444 ;
  const GALGAS_procCallInstructionAST temp_0 = this ;
  const GALGAS_procCallInstructionAST temp_1 = this ;
  extensionMethod_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap (), temp_0.readProperty_mRoutineName (), temp_1.readProperty_mActualParameterList (), var_routineSignature_4348, var_isFilePrivate_4398, var_routineMangledName_4444, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)) ;
  GALGAS_lstring var_usefulnessName_4496 = function_procedureNameForUsefulEntitiesGraph (var_routineMangledName_4444, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 95)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_4496 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 96)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isFilePrivate_4398.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_4713 = extensionGetter_locationForKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap (), temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 99)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)).objectCompare (var_procDeclarationLocation_4713.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 100)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_4713.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 101)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5478 ;
  const GALGAS_procCallInstructionAST temp_8 = this ;
  const GALGAS_procCallInstructionAST temp_9 = this ;
  extensionMethod_analyzeRoutineArguments (temp_8.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_9.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (var_routineMangledName_4444.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 111)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 111)), var_routineSignature_4348, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5478, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::class_func_new (var_routineMangledName_4444, var_actualParameterListForGeneration_5478  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_routineMangledName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 143)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
  GALGAS_stringlist var_parameterCppNameList_6960 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 146)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_7006 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 147)) ;
  GALGAS_stringlist var_inputVariableList_7060 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 148)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7092 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7092.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7391 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_7092.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_7006, var_inputVariableList_7060, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7391, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 150)) ;
    var_parameterCppNameList_6960.addAssign_operation (var_parameterCppName_7391  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 159)) ;
    enumerator_7092.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_routineMangledName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 162)) ;
  cEnumerator_stringlist enumerator_7610 (var_parameterCppNameList_6960, kENUMERATION_UP) ;
  while (enumerator_7610.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7610.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 164)) ;
    enumerator_7610.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 166)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 166)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_routineMangledName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 167)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 168)) ;
  const GALGAS_procCallInstructionForGeneration temp_4 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7941 (temp_4.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7941.hasCurrentObject ()) {
    callExtensionMethod_generatePoisonedVariables ((cPtr_actualParameterForGeneration *) enumerator_7941.current_mActualParameter (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioUnusedVariableCppNameSet, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 171)) ;
    enumerator_7941.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 80)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_4288 ;
    GALGAS_bool var_selfIsMutable_4311 ;
    GALGAS_bool var_unused_0_4345 ;
    const bool optionalResult4267 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_4288, var_selfIsMutable_4311, var_unused_0_4345) ;
    if (!optionalResult4267) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_4311.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 96)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 97)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_4757 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_4288, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_4757, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 100)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_4288, var_expression_4757.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_4757, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 110)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::class_func_new (var_selfType_4288, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 116)).readProperty_string (), var_expression_4757, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 112))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 112)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = this ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 121)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 214)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 220)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 226)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 232)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 238)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_10864 ;
    GALGAS_bool var_selfIsMutable_10893 ;
    GALGAS_bool var_unused_0_10933 ;
    const bool optionalResult10837 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_10864, var_selfIsMutable_10893, var_unused_0_10933) ;
    if (!optionalResult10837) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_10893.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 259)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 260)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_11427 = extensionGetter_definition (var_selfType_10864, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 270)).readProperty_mAddAssignOperatorArguments () ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_11427.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 271)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_10864, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 273)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 272)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 275)).objectCompare (var_addAssignOperatorArguments_11427.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 275)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfType_10864, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).add_operation (var_addAssignOperatorArguments_11427.getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 278)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 277)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)).add_operation (temp_10.readProperty_mExpressions ().getter_count (SOURCE_FILE ("instruction-self-concat.galgas", 279)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 279)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_12218 = GALGAS_semanticExpressionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 281)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          cEnumerator_actualOutputExpressionList enumerator_12322 (temp_12.readProperty_mExpressions (), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_12407 (var_addAssignOperatorArguments_11427, kENUMERATION_UP) ;
          while (enumerator_12322.hasCurrentObject () && enumerator_12407.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_12731 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_12322.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_12407.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_12731, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 283)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_12407.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_12322.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_12407.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_12407.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 293)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_12839 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 293)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_12839) ;
                inCompiler->emitSemanticError (enumerator_12322.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12839, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 294)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_12407.current_mFormalArgumentType (HERE), var_expression_12731.readProperty_mResultType (), enumerator_12322.current_mEndOfExpressionLocation (HERE), var_expression_12731, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 296)) ;
            }
            var_effectiveParameterList_12218.addAssign_operation (var_expression_12731  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 297)) ;
            enumerator_12322.gotoNextObject () ;
            enumerator_12407.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_10864, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 305)), var_effectiveParameterList_12218  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 300))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 300)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 310)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_14300 ;
    GALGAS_bool var_selfIsMutable_14329 ;
    GALGAS_bool var_unused_0_14369 ;
    const bool optionalResult14273 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14300, var_selfIsMutable_14329, var_unused_0_14369) ;
    if (!optionalResult14273) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14329.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 330)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 331)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_14300, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 341)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 341)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 341)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_14300, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 343)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 343)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 343)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 342)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_15422 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_14300, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_15422, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_14300, var_expression_15422.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_15422, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 356)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_14300, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 363)), var_expression_15422, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 358))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 358)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_16661 ;
    GALGAS_bool var_selfIsMutable_16690 ;
    GALGAS_bool var_unused_0_16730 ;
    const bool optionalResult16634 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16661, var_selfIsMutable_16690, var_unused_0_16730) ;
    if (!optionalResult16634) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16690.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 388)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 389)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_16661, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 399)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 399)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 399)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_16661, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 401)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 401)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 401)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 400)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_17784 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_16661, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_17784, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 404)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_16661, var_expression_17784.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_17784, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 414)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_16661, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 421)), var_expression_17784, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 416))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 416)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 426)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_19022 ;
    GALGAS_bool var_selfIsMutable_19051 ;
    GALGAS_bool var_unused_0_19091 ;
    const bool optionalResult18995 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_19022, var_selfIsMutable_19051, var_unused_0_19091) ;
    if (!optionalResult18995) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_19051.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 446)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 447)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_19022, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 457)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 457)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_19022, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 459)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 459)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 459)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 458)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_20139 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_19022, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_20139, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 462)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_19022, var_expression_20139.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_20139, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 472)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_19022, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 479)), var_expression_20139, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 474))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 474)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_21375 ;
    GALGAS_bool var_selfIsMutable_21404 ;
    GALGAS_bool var_unused_0_21444 ;
    const bool optionalResult21348 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21375, var_selfIsMutable_21404, var_unused_0_21444) ;
    if (!optionalResult21348) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_21404.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 504)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 505)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_21375, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 515)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 515)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_21375, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 517)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 517)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 517)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 516)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_22492 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_21375, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_22492, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 520)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_selfType_21375, var_expression_22492.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_22492, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 530)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::class_func_new (temp_9.readProperty_mInstructionLocation (), var_selfType_21375, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 537)), var_expression_22492, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 532))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 532)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 542)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_setterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_7727 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7727.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_7727.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 221)) ;
    enumerator_7727.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfSetterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_8093 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_8093.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_8093.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 231)) ;
    enumerator_8093.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_receiverType_9089 ;
  GALGAS_string var_targetVariableCppName_9116 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_9152 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_9299 ;
        GALGAS_bool var_selfIsMutable_9342 ;
        GALGAS_bool var_unused_0_9396 ;
        const bool optionalResult9258 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9299, var_selfIsMutable_9342, var_unused_0_9396) ;
        if (!optionalResult9258) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_bool var_isReference_9482 ;
            const bool optionalResult9454 = extensionGetter_definition (var_selfType_9299, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 253)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_9482) ;
            if (!optionalResult9454) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              test_3 = var_isReference_9482.boolEnum () ;
              if (kBoolTrue == test_3) {
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_selfIsMutable_9342.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 254)).boolEnum () ;
              if (kBoolTrue == test_4) {
                const GALGAS_setterCallInstructionAST temp_5 = this ;
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 255)) ;
              }
            }
          }
          GALGAS_propertyMap var_propertyMap_9638 = extensionGetter_definition (var_selfType_9299, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 257)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_9744 ;
          const GALGAS_setterCallInstructionAST temp_7 = this ;
          GALGAS_AccessControl joker_9736 ; // Joker input parameter
          var_propertyMap_9638.method_searchKey (temp_7.readProperty_mReceiverName (), joker_9736, var_isConstant_9744, var_receiverType_9089, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 258)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_9744.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_setterCallInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 260)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_9152 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_9116 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 263)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 264)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 266)) ;
        var_receiverType_9089.drop () ; // Release error dropped variable
        var_targetVariableCppName_9116.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_9152.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_9089, var_targetVariableCppName_9116, var_nameForCheckingFormalParameterUsing_9152, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 271)) ;
    }
  }
  GALGAS_bool var_ok_10524 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_15 = this ;
  GALGAS_location var_errorLocation_10540 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GALGAS_setterCallInstructionAST temp_16 = this ;
  cEnumerator_lstringlist enumerator_10591 (temp_16.readProperty_mReceiverStructProperties (), kENUMERATION_UP) ;
  bool bool_17 = var_ok_10524.isValidAndTrue () ;
  if (enumerator_10591.hasCurrentObject () && bool_17) {
    while (enumerator_10591.hasCurrentObject () && bool_17) {
      var_ok_10524 = extensionGetter_definition (var_receiverType_9089, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 282)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 282)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_10524.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 283)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_10540, GALGAS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 284)) ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_propertyMap var_propertyMap_10815 = extensionGetter_definition (var_receiverType_9089, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 286)).readProperty_mPropertyMap () ;
        GALGAS_AccessControl var_accessControl_10909 ;
        GALGAS_bool var_isConstant_10928 ;
        var_propertyMap_10815.method_searchKey (enumerator_10591.current_mValue (HERE), var_accessControl_10909, var_isConstant_10928, var_receiverType_9089, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 287)) ;
        extensionMethod_checkSetAccess (var_accessControl_10909, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_10591.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 288)) ;
        var_errorLocation_10540 = enumerator_10591.current_mValue (HERE).readProperty_location () ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_isConstant_10928.boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_10591.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 294)) ;
          }
        }
      }
      enumerator_10591.gotoNextObject () ;
      if (enumerator_10591.hasCurrentObject ()) {
        bool_17 = var_ok_10524.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_castType_11348 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    const GALGAS_setterCallInstructionAST temp_23 = this ;
    test_22 = GALGAS_bool (kIsNotEqual, temp_23.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_setterCallInstructionAST temp_24 = this ;
      var_castType_11348 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_24.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 301)) ;
      {
      const GALGAS_setterCallInstructionAST temp_25 = this ;
      routine_checkAssignmentTypes_3F__3F__3F_ (var_receiverType_9089, var_castType_11348, temp_25.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 302)) ;
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_castType_11348 = var_receiverType_9089 ;
  }
  GALGAS_methodKind var_kind_11708 ;
  GALGAS_formalParameterSignature var_routineSignature_11722 ;
  GALGAS_bool var_hasCompilerArgument_11748 ;
  GALGAS_string var_setterErrorMessage_11784 ;
  const GALGAS_setterCallInstructionAST temp_26 = this ;
  GALGAS_methodQualifier joker_11772 ; // Joker input parameter
  extensionGetter_definition (var_castType_11348, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)).readProperty_mSetterMap ().method_searchKey (temp_26.readProperty_mSetterName (), var_kind_11708, var_routineSignature_11722, var_hasCompilerArgument_11748, joker_11772, var_setterErrorMessage_11784, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 307)) ;
  enumGalgasBool test_27 = kBoolTrue ;
  if (kBoolTrue == test_27) {
    test_27 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_11784.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_27) {
      const GALGAS_setterCallInstructionAST temp_28 = this ;
      TC_Array <C_FixItDescription> fixItArray29 ;
      inCompiler->emitSemanticError (temp_28.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_11784, fixItArray29  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 316)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12310 ;
  const GALGAS_setterCallInstructionAST temp_30 = this ;
  const GALGAS_setterCallInstructionAST temp_31 = this ;
  const GALGAS_setterCallInstructionAST temp_32 = this ;
  extensionMethod_analyzeRoutineArguments (temp_30.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_31.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_32.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 325)), var_routineSignature_11722, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12310, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 319)) ;
  GALGAS_unifiedTypeMapEntry var_baseType_12400 = var_castType_11348 ;
  GALGAS_bool var_searching_12426 = GALGAS_bool (true) ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 334)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 335)).isValid ()) {
        uint32_t variant_12479 = GALGAS_uint::class_func_max (SOURCE_FILE ("instruction-setter-call.galgas", 335)).uintValue () ;
        bool loop_12479 = true ;
        while (loop_12479) {
          loop_12479 = var_searching_12426.isValid () ;
          if (loop_12479) {
            loop_12479 = var_searching_12426.boolValue () ;
          }
          if (loop_12479 && (0 == variant_12479)) {
            loop_12479 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 335)) ;
          }
          if (loop_12479) {
            variant_12479 -- ;
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = extensionGetter_definition (var_baseType_12400, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 336)).boolEnum () ;
              if (kBoolTrue == test_34) {
                var_searching_12426 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_34) {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_setterCallInstructionAST temp_36 = this ;
                test_35 = extensionGetter_definition (extensionGetter_definition (var_baseType_12400, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).readProperty_mSetterMap ().getter_hasKey (temp_36.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 339)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_baseType_12400 = extensionGetter_definition (var_baseType_12400, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_35) {
                var_searching_12426 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_setterCallInstructionAST temp_37 = this ;
  const GALGAS_setterCallInstructionAST temp_38 = this ;
  const GALGAS_setterCallInstructionAST temp_39 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::class_func_new (temp_37.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_9116, var_nameForCheckingFormalParameterUsing_9152, temp_38.readProperty_mReceiverStructProperties (), var_castType_11348, var_receiverType_9089, temp_39.readProperty_mSetterName (), var_kind_11708, var_actualParameterListForGeneration_12310, var_hasCompilerArgument_11748, var_baseType_12400  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 348)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_13843 ;
    GALGAS_bool var_selfIsMutable_13872 ;
    GALGAS_bool var_unused_0_13912 ;
    const bool optionalResult13816 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_13843, var_selfIsMutable_13872, var_unused_0_13912) ;
    if (!optionalResult13816) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_13872.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 377)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfSetterCallInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 378)) ;
        }
      }
      GALGAS_methodKind var_kind_14125 ;
      GALGAS_formalParameterSignature var_routineSignature_14135 ;
      GALGAS_bool var_hasCompilerArgument_14157 ;
      const GALGAS_selfSetterCallInstructionAST temp_4 = this ;
      GALGAS_methodQualifier joker_14177 ; // Joker input parameter
      GALGAS_string joker_14180 ; // Joker input parameter
      extensionGetter_definition (var_selfType_13843, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 381)).readProperty_mSetterMap ().method_searchKey (temp_4.readProperty_mSetterName (), var_kind_14125, var_routineSignature_14135, var_hasCompilerArgument_14157, joker_14177, joker_14180, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 381)) ;
      GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_14622 ;
      const GALGAS_selfSetterCallInstructionAST temp_5 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_6 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_7 = this ;
      extensionMethod_analyzeRoutineArguments (temp_5.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_6.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_7.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 389)), var_routineSignature_14135, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_14622, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)) ;
      const GALGAS_selfSetterCallInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::class_func_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_13843, temp_8.readProperty_mSetterName (), var_kind_14125, var_actualParameterListForGeneration_14622, var_hasCompilerArgument_14157  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 396))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 396)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfSetterCallInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 405)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 446)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_16759 = temp_0.readProperty_mReceiverCppName () ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_16806 (temp_1.readProperty_mReceiverStructAttributes (), kENUMERATION_UP) ;
  while (enumerator_16806.hasCurrentObject ()) {
    var_receiverCppName_16759.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_16806.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 449)) ;
    enumerator_16806.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 451)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_17038 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 453)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_17082 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 454)) ;
  GALGAS_stringlist var_inputVariableList_17134 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 455)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_17164 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_17164.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_17449 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_17164.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_17082, var_inputVariableList_17134, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_17449, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)) ;
    var_parameterCppNameList_17038.addAssign_operation (var_parameterCppName_17449  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)) ;
    enumerator_17164.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = this ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 471)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 472)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GALGAS_bool (kIsStrictSup, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 473)).readProperty_mAllTypedPropertyList ().getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 473)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16759.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 474)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = this ;
          GALGAS_string var_pointerUniqueName_18039 = GALGAS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 476)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 476)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)).add_operation (var_pointerUniqueName_18039, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 477)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (var_receiverCppName_16759, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 478)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = this ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 479)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 480)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((nullptr != ").add_operation (var_pointerUniqueName_18039, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)).add_operation (var_pointerUniqueName_18039, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 482)).add_operation (GALGAS_string (") == nullptr)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 481)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = this ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 486)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 486)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 486)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 485)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_18039, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)).add_operation (GALGAS_string (" = nullptr ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 487)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 488)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = this ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (var_pointerUniqueName_18039, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)).add_operation (var_receiverCppName_16759, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 493)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 496)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_16759.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 497)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 497)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 497)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_19790 (var_parameterCppNameList_17038, kENUMERATION_UP) ;
  while (enumerator_19790.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_19790.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 500)) ;
    if (enumerator_19790.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 501)) ;
    }
    enumerator_19790.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_17038.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 504)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 508)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 509)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_17038.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 510)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 515)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 526)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 527)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_20912 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 529)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_20956 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 530)) ;
  GALGAS_stringlist var_inputVariableList_21008 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 531)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_21050 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_21050.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_21343 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_21050.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_20956, var_inputVariableList_21008, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_21343, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 533)) ;
    var_parameterCppNameList_20912.addAssign_operation (var_parameterCppName_21343  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 541)) ;
    enumerator_21050.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 546)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 547)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 547)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 548)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 550)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 553)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 553)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mSelfCppName ().add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 554)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mSelfCppName ().add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 556)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_22333 (var_parameterCppNameList_20912, kENUMERATION_UP) ;
  while (enumerator_22333.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_22333.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 560)) ;
    if (enumerator_22333.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 561)) ;
    }
    enumerator_22333.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_20912.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 564)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 565)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 567)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 567)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 568)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 569)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_20912.getter_count (SOURCE_FILE ("instruction-setter-call.galgas", 570)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 571)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 573)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 573)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 574)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 230)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchBranchesAST enumerator_8164 (temp_1.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_8164.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_8164.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 232)) ;
    enumerator_8164.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_switchExpression_9143 ;
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-switch.galgas", 252)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_switchExpression_9143, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 249)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_9143.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 259)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::class_func_enumType (SOURCE_FILE ("instruction-switch.galgas", 259)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfSwitchExpression (), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_9143.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 262)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 260)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_9578 = extensionGetter_definition (var_switchExpression_9143.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 265)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_9672 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("instruction-switch.galgas", 266)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_9815 = GALGAS_switchBranchesForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 269)) ;
  const GALGAS_switchInstructionAST temp_4 = this ;
  cEnumerator_switchBranchesAST enumerator_9917 (temp_4.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_9917.hasCurrentObject ()) {
    {
    extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 271)) ;
    }
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_10033 = GALGAS_extractedAssociatedValuesForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 272)) ;
    GALGAS_bool var_firstConstant_10091 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_10121 (enumerator_9917.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_10121.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_9578.getter_hasKey (enumerator_10121.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_9672.getter_hasKey (enumerator_10121.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_10121.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_10121.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_9672.addAssign_operation (enumerator_10121.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_10541 ;
          GALGAS_uint joker_10508 ; // Joker input parameter
          var_enumConstantMap_9578.method_searchKey (enumerator_10121.current_mValue (HERE), joker_10508, var_associatedTypeList_10541, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 281)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_10541.getter_count (SOURCE_FILE ("instruction-switch.galgas", 282)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_9917.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 282)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_10121.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_10121.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 284)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_10541.getter_count (SOURCE_FILE ("instruction-switch.galgas", 285)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_9917.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 285)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 285)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_10121.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_10121.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 287)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_10541.getter_count (SOURCE_FILE ("instruction-switch.galgas", 288)).objectCompare (enumerator_9917.current_mAssociatedValuesExtraction (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 288)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_10541.getter_count (SOURCE_FILE ("instruction-switch.galgas", 291)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_10121.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_10121.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (var_associatedTypeList_10541.getter_count (SOURCE_FILE ("instruction-switch.galgas", 290)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_bigint var_associatedValueIndex_11265 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_11305 (var_associatedTypeList_10541, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_11380 (enumerator_9917.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_11305.hasCurrentObject () && enumerator_11380.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_11380.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_11305.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 296)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_11380.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_11380.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_11305.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_10091.operator_and (GALGAS_bool (kIsNotEqual, enumerator_11380.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_11839 = GALGAS_string ("extractedValue_").add_operation (enumerator_11380.current_mExtractedValueName (HERE).readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)).add_operation (enumerator_11380.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
                      var_extractedAssociatedValuesForGeneration_10033.addAssign_operation (enumerator_11305.current_mEntry (HERE), var_cppName_11839, var_associatedValueIndex_11265.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 302))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 302)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_11380.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_11380.current_mExtractedValueName (HERE), enumerator_11305.current_mEntry (HERE), var_cppName_11839, var_cppName_11839, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_11380.current_mExtractedValueName (HERE), enumerator_11305.current_mEntry (HERE), var_cppName_11839, var_cppName_11839, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_11265.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)) ;
                  enumerator_11305.gotoNextObject () ;
                  enumerator_11380.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_10121.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10121.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 314)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 314)).add_operation (extensionGetter_definition (var_switchExpression_9143.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 314)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 314)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 314)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 313)) ;
      }
      var_firstConstant_10091 = GALGAS_bool (false) ;
      enumerator_10121.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_13021 ;
    {
    routine_analyzeSemanticInstructionListWithoutBranch_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 323)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 324)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-switch.galgas", 325)), enumerator_9917.current_mInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_13021, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 318)) ;
    }
    {
    extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9917.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 330)) ;
    }
    var_switchBranchesForGeneration_9815.addAssign_operation (enumerator_9917.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_10033, enumerator_9917.current_mEndOfBranch (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 331)), var_instructionList_13021  COMMA_SOURCE_FILE ("instruction-switch.galgas", 331)) ;
    enumerator_9917.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 333)) ;
  }
  GALGAS_stringset var_forgottenConstants_13358 = var_enumConstantMap_9578.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 335)).substract_operation (var_constantsNamedInSwitchInstruction_9672, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 335)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_13358.getter_count (SOURCE_FILE ("instruction-switch.galgas", 336)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_13497 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_13513 (var_forgottenConstants_13358, kENUMERATION_UP) ;
      while (enumerator_13513.hasCurrentObject ()) {
        var_s_13497.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_13513.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 339)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 339)) ;
        enumerator_13513.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mEndOf_5F_switch_5F_instruction (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_13497, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 342)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 341)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::class_func_new (var_switchExpression_9143.readProperty_mResultType (), var_switchExpression_9143, var_switchBranchesForGeneration_9815  COMMA_SOURCE_FILE ("instruction-switch.galgas", 345))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 345)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_switchVar_15661 ;
  const GALGAS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_15661, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_15661, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 395)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 395)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 397)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = this ;
  cEnumerator_switchBranchesForGeneration enumerator_15989 (temp_2.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_15989.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_16034 (enumerator_15989.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_16034.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)).add_operation (enumerator_16034.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)) ;
      enumerator_16034.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 402)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_15989.current_mExtractedAssociatedValuesForGeneration (HERE).getter_count (SOURCE_FILE ("instruction-switch.galgas", 404)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = this ;
        GALGAS_string var_type_16389 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 405)).add_operation (enumerator_15989.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 406)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 406)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 406)) ;
        GALGAS_string var_varPtr_16549 = GALGAS_string ("extractPtr_").add_operation (enumerator_15989.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 407)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_16389, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (var_varPtr_16549, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (var_type_16389, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (var_switchVar_15661, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 408)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_16741 (enumerator_15989.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_16741.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16741.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (enumerator_16741.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)).add_operation (var_varPtr_16549, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (enumerator_16741.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 410)) ;
          enumerator_16741.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_15989.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 414)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 422)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 423)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 424)) ;
    }
    enumerator_15989.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 426)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_3934 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_3934.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_3934.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 85)) ;
    enumerator_3934.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_type_4735 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 101)) ;
  GALGAS_formalParameterSignature var_routineSignature_4891 ;
  GALGAS_bool var_hasCompilerArgument_4913 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_4735, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)).readProperty_mClassMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_4891, var_hasCompilerArgument_4913, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 103)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_5351 ;
  const GALGAS_typeMethodCallInstructionAST temp_2 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = this ;
  extensionMethod_analyzeRoutineArguments (temp_2.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_4.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 111)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 111)), var_routineSignature_4891, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_5351, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  const GALGAS_typeMethodCallInstructionAST temp_5 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::class_func_new (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_5351, var_hasCompilerArgument_4913  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 118))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 144)) ;
  GALGAS_stringlist var_parameterCppNameList_6569 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_6613 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 147)) ;
  GALGAS_stringlist var_inputVariableList_6665 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 148)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_6707 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6707.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7000 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_6707.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6613, var_inputVariableList_6665, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7000, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 150)) ;
    var_parameterCppNameList_6569.addAssign_operation (var_parameterCppName_7000  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 158)) ;
    enumerator_6707.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 161)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 161)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 162)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 161)) ;
  cEnumerator_stringlist enumerator_7283 (var_parameterCppNameList_6569, kENUMERATION_UP) ;
  while (enumerator_7283.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7283.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 164)) ;
    if (enumerator_7283.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 165)) ;
    }
    enumerator_7283.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 168)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 168)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_6569.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 169)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 170)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 172)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_6569.getter_count (SOURCE_FILE ("instruction-type-method-call.galgas", 174)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 174)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 175)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 177)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 177)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 178)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 170)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8093 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-var-declaration.galgas", 189)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8093, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 186)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8141 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 196)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 196)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 196)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 196)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GALGAS_bool (true), var_expression_8093.readProperty_mResultType (), var_targetVariableCppName_8141, var_targetVariableCppName_8141, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 197)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::class_func_new (var_expression_8093.readProperty_mResultType (), GALGAS_bool (false), var_targetVariableCppName_8141, var_expression_8093  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 205))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 205)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationNoAssignmentAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_9111 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_9111, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 218)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationNoAssignmentAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_9817 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 234)) ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_9884 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 235)) ;
  {
  const GALGAS_localVariableDeclarationNoAssignmentAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_9817, var_targetVariableCppName_9884, var_targetVariableCppName_9884, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 236)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::class_func_new (var_targetType_9817, var_targetVariableCppName_9884  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 243))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 243)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 267)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = this ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 268)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_warningInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 88)) ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 89)) ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 90)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_5076 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_5104 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_5131 ;
  {
  const GALGAS_warningInstructionAST temp_0 = this ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  const GALGAS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction_3F__26__3F__26__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_5076, var_messageExpression_5104, var_fixitListForGeneration_5131, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::class_func_new (temp_4.readProperty_mInstructionLocation (), var_locationExpression_5076, var_messageExpression_5104, var_fixitListForGeneration_5131  COMMA_SOURCE_FILE ("instruction-warning.galgas", 121))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 121)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_6492 ;
  const GALGAS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_6492, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 150)) ;
  GALGAS_string var_messageCppVarName_6699 ;
  const GALGAS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_6699, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 152)) ;
  GALGAS_string var_fixItArrayCppName_6948 ;
  const GALGAS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_6948, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 160)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 169)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (var_receiverCppVarName_6492, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (var_messageCppVarName_6699, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 171)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (var_fixItArrayCppName_6948, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 172)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 173)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 170)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 375)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 376)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mDoBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 377)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mElseBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 378)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 386)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_do_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 387)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 388)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_15239 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 406)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_15239, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 403)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_15268 = var_receiverExpression_15239.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_15416 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_15457 (extensionGetter_definition (var_receiverType_15268, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 416)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_3 = var_found_15416.operator_not (SOURCE_FILE ("instruction-with.galgas", 416)).isValidAndTrue () ;
      if (enumerator_15457.hasCurrentObject () && bool_3) {
        while (enumerator_15457.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = this ;
          var_found_15416 = GALGAS_bool (kIsEqual, enumerator_15457.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_4.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_15457.gotoNextObject () ;
          if (enumerator_15457.hasCurrentObject ()) {
            bool_3 = var_found_15416.operator_not (SOURCE_FILE ("instruction-with.galgas", 416)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_15416.operator_not (SOURCE_FILE ("instruction-with.galgas", 419)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = this ;
          const GALGAS_readAccessWithInstructionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_7.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 420)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 420)).add_operation (extensionGetter_definition (var_receiverType_15268, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 421)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 420)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_16164 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 428)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_16164, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 425)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readAccessWithInstructionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_16164.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readAccessWithInstructionAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_16164.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 437)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_16164.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 440)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        const GALGAS_readAccessWithInstructionAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_16164.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 441)) ;
      }
    }
  }
  const GALGAS_readAccessWithInstructionAST temp_18 = this ;
  GALGAS_string var_objectArrayCppName_16805 = GALGAS_string ("objectArray_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)).getter_string (SOURCE_FILE ("instruction-with.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = extensionGetter_definition (var_receiverType_15268, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 447)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 447)).operator_not (SOURCE_FILE ("instruction-with.galgas", 447)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_readAccessWithInstructionAST temp_20 = this ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_15268, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 448)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 448)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 448)), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 448)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 451)) ;
  }
  GALGAS_localConstantList var_localConstantList_17295 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 453)) ;
  cEnumerator_typedPropertyList enumerator_17378 (extensionGetter_definition (var_receiverType_15268, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_17378.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_22 = this ;
    const GALGAS_readAccessWithInstructionAST temp_23 = this ;
    var_localConstantList_17295.addAssign_operation (enumerator_17378.current_mPropertyTypeEntry (HERE), GALGAS_lstring::class_func_new (temp_22.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_17378.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 457)), temp_23.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 457)), GALGAS_bool (true), var_objectArrayCppName_16805.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459)).add_operation (enumerator_17378.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 459))  COMMA_SOURCE_FILE ("instruction-with.galgas", 455)) ;
    enumerator_17378.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_24 = this ;
  const GALGAS_readAccessWithInstructionAST temp_25 = this ;
  var_localConstantList_17295.addAssign_operation (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 463)), GALGAS_lstring::class_func_new (temp_24.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 464)), temp_25.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 464)), GALGAS_bool (true), var_objectArrayCppName_16805.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 466))  COMMA_SOURCE_FILE ("instruction-with.galgas", 462)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_18405 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_26 = this ;
  const GALGAS_readAccessWithInstructionAST temp_27 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_17295, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 473)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 474)), temp_26.readProperty_mDoBranchInstructions (), temp_27.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_18405, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 467)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_18856 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_28 = this ;
  const GALGAS_readAccessWithInstructionAST temp_29 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 486)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 487)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 488)), temp_28.readProperty_mElseBranchInstructions (), temp_29.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_18856, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 481)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_30 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_30.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 494)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_31 = this ;
  const GALGAS_readAccessWithInstructionAST temp_32 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::class_func_new (temp_31.readProperty_mInstructionLocation (), var_receiverExpression_15239, var_objectArrayCppName_16805, var_keyExpression_16164, temp_32.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_18405, var_else_5F_instructionList_18856  COMMA_SOURCE_FILE ("instruction-with.galgas", 496))  COMMA_SOURCE_FILE ("instruction-with.galgas", 496)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_keyExpression_20202 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-with.galgas", 520)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_keyExpression_20202, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 517)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_20202.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 528)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_20202.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 530)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 530)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 530)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 529)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_20202.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 532)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_20202.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 534)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 534)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 534)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 533)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = this ;
  GALGAS_string var_objectArrayCppName_20843 = GALGAS_string ("objectArray_").add_operation (temp_9.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 537)).getter_string (SOURCE_FILE ("instruction-with.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 537)) ;
  GALGAS_unifiedTypeMapEntry var_targetType_20999 ;
  GALGAS_string var_receiverVariableCppName_21024 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readWriteAccessWithInstructionAST temp_11 = this ;
    test_10 = temp_11.readProperty_mReceiverIsPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        GALGAS_unifiedTypeMapEntry var_selfType_21174 ;
        GALGAS_bool var_unused_0_21217 ;
        GALGAS_bool var_propertiesAreMutable_21267 ;
        const bool optionalResult21128 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21174, var_unused_0_21217, var_propertiesAreMutable_21267) ;
        if (!optionalResult21128) {
          test_12 = kBoolFalse ;
        }
        if (kBoolTrue == test_12) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            const GALGAS_readWriteAccessWithInstructionAST temp_14 = this ;
            test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              var_receiverVariableCppName_21024 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
              var_targetType_20999 = var_selfType_21174 ;
            }
          }
          if (kBoolFalse == test_13) {
            GALGAS_propertyMap var_propertyMap_21464 = extensionGetter_definition (var_selfType_21174, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 550)).readProperty_mPropertyMap () ;
            GALGAS_bool var_isConstant_21572 ;
            const GALGAS_readWriteAccessWithInstructionAST temp_15 = this ;
            GALGAS_AccessControl joker_21564 ; // Joker input parameter
            var_propertyMap_21464.method_searchKey (temp_15.readProperty_mReceiverName (), joker_21564, var_isConstant_21572, var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 551)) ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = var_isConstant_21572.boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_readWriteAccessWithInstructionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray18  COMMA_SOURCE_FILE ("instruction-with.galgas", 553)) ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = var_propertiesAreMutable_21267.operator_not (SOURCE_FILE ("instruction-with.galgas", 554)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  const GALGAS_readWriteAccessWithInstructionAST temp_20 = this ;
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (temp_20.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be modified in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 555)) ;
                }
              }
            }
            const GALGAS_readWriteAccessWithInstructionAST temp_22 = this ;
            var_receiverVariableCppName_21024 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 557)).add_operation (temp_22.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 558)) ;
          }
        }
      }
      if (kBoolFalse == test_12) {
        const GALGAS_readWriteAccessWithInstructionAST temp_23 = this ;
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' cannot be used in this context"), fixItArray24  COMMA_SOURCE_FILE ("instruction-with.galgas", 561)) ;
        var_targetType_20999.drop () ; // Release error dropped variable
        var_receiverVariableCppName_21024.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_25 = this ;
    GALGAS_string joker_22285 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_25.readProperty_mReceiverName (), var_targetType_20999, var_receiverVariableCppName_21024, joker_22285, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 564)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_22307 (temp_26.readProperty_mFieldList (), kENUMERATION_UP) ;
  while (enumerator_22307.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22344 = extensionGetter_definition (var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 572)).readProperty_mPropertyMap () ;
    GALGAS_AccessControl var_accessControl_22434 ;
    GALGAS_bool var_isConstant_22453 ;
    var_propertyMap_22344.method_searchKey (enumerator_22307.current_mValue (HERE), var_accessControl_22434, var_isConstant_22453, var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 573)) ;
    extensionMethod_checkSetAccess (var_accessControl_22434, constinArgument_inAnalysisContext.readProperty_selfType (), enumerator_22307.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 574)) ;
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_isConstant_22453.boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_22307.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray28  COMMA_SOURCE_FILE ("instruction-with.galgas", 579)) ;
      }
    }
    enumerator_22307.gotoNextObject () ;
  }
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = extensionGetter_definition (var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 583)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 583)).operator_not (SOURCE_FILE ("instruction-with.galgas", 583)).boolEnum () ;
    if (kBoolTrue == test_29) {
      const GALGAS_readWriteAccessWithInstructionAST temp_30 = this ;
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_30.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 584)), fixItArray31  COMMA_SOURCE_FILE ("instruction-with.galgas", 584)) ;
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_readWriteAccessWithInstructionAST temp_33 = this ;
    test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_bool var_found_23137 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_23178 (extensionGetter_definition (var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 589)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_34 = var_found_23137.operator_not (SOURCE_FILE ("instruction-with.galgas", 589)).isValidAndTrue () ;
      if (enumerator_23178.hasCurrentObject () && bool_34) {
        while (enumerator_23178.hasCurrentObject () && bool_34) {
          const GALGAS_readWriteAccessWithInstructionAST temp_35 = this ;
          var_found_23137 = GALGAS_bool (kIsEqual, enumerator_23178.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_35.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_23178.gotoNextObject () ;
          if (enumerator_23178.hasCurrentObject ()) {
            bool_34 = var_found_23137.operator_not (SOURCE_FILE ("instruction-with.galgas", 589)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_36 = kBoolTrue ;
      if (kBoolTrue == test_36) {
        test_36 = var_found_23137.operator_not (SOURCE_FILE ("instruction-with.galgas", 592)).boolEnum () ;
        if (kBoolTrue == test_36) {
          const GALGAS_readWriteAccessWithInstructionAST temp_37 = this ;
          const GALGAS_readWriteAccessWithInstructionAST temp_38 = this ;
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_38.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593)).add_operation (extensionGetter_definition (var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593)), fixItArray39  COMMA_SOURCE_FILE ("instruction-with.galgas", 593)) ;
        }
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 597)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_23714 = GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 599)) ;
  cEnumerator_typedPropertyList enumerator_23789 (extensionGetter_definition (var_targetType_20999, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 600)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_23789.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_40 = this ;
    const GALGAS_readWriteAccessWithInstructionAST temp_41 = this ;
    var_localInitializedVariableList_23714.addAssign_operation (enumerator_23789.current_mPropertyTypeEntry (HERE), GALGAS_lstring::class_func_new (temp_40.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_23789.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 603)), temp_41.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 603)), var_objectArrayCppName_20843.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 604)).add_operation (enumerator_23789.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 604))  COMMA_SOURCE_FILE ("instruction-with.galgas", 601)) ;
    enumerator_23789.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_42 = GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 610)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_43 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_44 = this ;
  temp_42.addAssign_operation (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 607)), GALGAS_lstring::class_func_new (temp_43.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 608)), temp_44.readProperty_mEndOfReceiverExpression (), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 608)), GALGAS_bool (true), var_objectArrayCppName_20843.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 610))  COMMA_SOURCE_FILE ("instruction-with.galgas", 610)) ;
  GALGAS_localConstantList var_localConstantList_24098 = temp_42 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_24805 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_24098, GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 618)), var_localInitializedVariableList_23714, temp_45.readProperty_m_5F_do_5F_Instructions (), temp_46.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_24805, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 612)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_25214 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_48 = this ;
  routine_analyzeSemanticInstructionList_3F__26__3F__26__3F_localConstantList_3F_localInitializedVariableListWarnsIfNotMutated_3F_localInitializedVariableListNoWarnsIfNotMutated_3F__3F__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 631)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 632)), GALGAS_localInitializedVariableList::class_func_emptyList (SOURCE_FILE ("instruction-with.galgas", 633)), temp_47.readProperty_m_5F_else_5F_Instructions (), temp_48.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_25214, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 626)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_49 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_49.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 639)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_50 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_51 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_52 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::class_func_new (temp_50.readProperty_mInstructionLocation (), var_receiverVariableCppName_21024, var_targetType_20999, temp_51.readProperty_mFieldList (), var_objectArrayCppName_20843, var_keyExpression_20202, temp_52.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_24805, var_else_5F_instructionList_25214  COMMA_SOURCE_FILE ("instruction-with.galgas", 641))  COMMA_SOURCE_FILE ("instruction-with.galgas", 641)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverVarCppName_27837 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_27837, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 693)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_receiverType_27866 = temp_1.readProperty_mReceiverExpression ().readProperty_mResultType () ;
  GALGAS_string var_keyVarCppName_28104 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_28104, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (extensionGetter_identifierRepresentation (var_receiverType_27866, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)).add_operation (temp_3.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27866, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 712)).add_operation (var_receiverVarCppName_27837, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 710)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = this ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_28104, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 715)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = this ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_28104, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 717)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 718)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 718)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27866, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 719)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 720)).add_operation (temp_6.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 720)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 720)).add_operation (extensionGetter_commaSourceFile (temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 721)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 721)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 717)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 722)) COMMA_SOURCE_FILE ("instruction-with.galgas", 722)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = this ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nullptr != ").add_operation (temp_8.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 724)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 724)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 724)).add_operation (temp_9.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 725)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 725)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_27866, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 726)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 726)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 724)) ;
  {
  const GALGAS_readOnlyWithInstructionForGeneration temp_10 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_10.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 727)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_12 = this ;
    test_11 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 735)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 736)) ;
      {
      const GALGAS_readOnlyWithInstructionForGeneration temp_13 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_13.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 737)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 746)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteWithInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_30187 = temp_0.readProperty_mReceiverVariableCppName () ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_30242 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30242.hasCurrentObject ()) {
    var_receiverCppName_30187.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_30242.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 760)) ;
    enumerator_30242.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_30554 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_30554, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 763)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 771)) COMMA_SOURCE_FILE ("instruction-with.galgas", 771)) ;
  }
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mReceiverVariableCppName () COMMA_SOURCE_FILE ("instruction-with.galgas", 772)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_4 = this ;
  extensionMethod_addHeaderFileName (temp_4.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_5 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_6 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (temp_6.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)).add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 775)).add_operation (var_receiverCppName_30187, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 776)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 774)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)).add_operation (var_keyVarCppName_30554, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 778)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 780)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 780)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 780)).add_operation (var_keyVarCppName_30554, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 780)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 780)) ;
    const GALGAS_readWriteWithInstructionForGeneration temp_10 = this ;
    const GALGAS_readWriteWithInstructionForGeneration temp_11 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (extensionGetter_identifierRepresentation (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 781)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 781)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 781)).add_operation (temp_11.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 781)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 781)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_12 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_13 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_14 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_15 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 783)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 783)).add_operation (GALGAS_string ("if (nullptr != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 783)).add_operation (temp_13.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 784)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 784)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 784)).add_operation (temp_14.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 785)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 785)).add_operation (extensionGetter_identifierRepresentation (temp_15.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 785)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 785)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 783)) ;
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_16 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_16.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 786)) ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_readWriteWithInstructionForGeneration temp_18 = this ;
    test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mElseBranchInstructions ().getter_count (SOURCE_FILE ("instruction-with.galgas", 794)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 795)) ;
      {
      const GALGAS_readWriteWithInstructionForGeneration temp_19 = this ;
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_19.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 796)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 805)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_nonTerminalSymbolIndex_5514 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_5537 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5514, joker_5537, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 117)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = this ;
  const GALGAS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_5514  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 118))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                       const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                       const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                       const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GALGAS_string /* constinArgument_inComponentName */,
                                                                       const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap var_labelMap_7006 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_7006, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 140)) ;
  GALGAS_formalParameterSignature var_signature_7050 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mLabelName ().readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_7050 = GALGAS_formalParameterSignature::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 143)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = this ;
    GALGAS_formalParameterListForGeneration joker_7179 ; // Joker input parameter
    GALGAS_location joker_7193 ; // Joker input parameter
    var_labelMap_7006.method_searchKey (temp_3.readProperty_mLabelName (), joker_7179, var_signature_7050, joker_7193, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 145)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_7646 ;
  const GALGAS_nonterminalCallInstruction temp_4 = this ;
  const GALGAS_nonterminalCallInstruction temp_5 = this ;
  const GALGAS_nonterminalCallInstruction temp_6 = this ;
  extensionMethod_analyzeRoutineArguments (temp_4.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_5.readProperty_mNonterminalName (), GALGAS_string ("'<").add_operation (temp_6.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 154)), var_signature_7050, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7646, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 148)) ;
  const GALGAS_nonterminalCallInstruction temp_7 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 161)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = this ;
  const GALGAS_nonterminalCallInstruction temp_9 = this ;
  const GALGAS_nonterminalCallInstruction temp_10 = this ;
  const GALGAS_nonterminalCallInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::class_func_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mNonterminalName ().readProperty_string (), temp_10.readProperty_mLabelName ().readProperty_string (), var_actualParameterListForGeneration_7646, temp_11.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ()  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 168)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 204)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (SOURCE_FILE ("instruction-non-terminal.galgas", 205))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 200))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 200)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_nonterminalInstructionForGeneration var_si_10095 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_10095.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_10095.readProperty_mNonterminalName ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 218)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_10095.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 220)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 219)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_10436 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10436.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_10436.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 224)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 223)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_nonterminalInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 227)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 230)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_nonterminalInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 231)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_parameterCppNameList_11426 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 248)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_11470 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 249)) ;
  GALGAS_stringlist var_inputVariableList_11522 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 250)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_11564 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_11564.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_11857 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_11564.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_11470, var_inputVariableList_11522, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_11857, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 252)) ;
    var_parameterCppNameList_11426.addAssign_operation (var_parameterCppName_11857  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 261)) ;
    enumerator_11564.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  GALGAS_string var_sdtResultVarName_11964 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 264)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("String ").add_operation (var_sdtResultVarName_11964, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 266)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 268)) ;
  cEnumerator_stringlist enumerator_12329 (var_parameterCppNameList_11426, kENUMERATION_UP) ;
  while (enumerator_12329.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12329.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)) ;
    enumerator_12329.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_11964.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 273)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 275)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 276)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_11964, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 277)) ;
  cEnumerator_stringlist enumerator_12866 (var_jokerParametersToReleaseList_11470, kENUMERATION_UP) ;
  while (enumerator_12866.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12866.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 285)) ;
    enumerator_12866.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_4986 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 110)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_5072 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 112)) ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_5072, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 113)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_5398 = GALGAS_branchListForGrammarAnalysis::class_func_listWithValue (var_repeatedInstructionList_5072  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 120)) ;
  const GALGAS_repeatInstruction temp_1 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5518 (temp_1.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_5518.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_5558 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 123)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_5518.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_5558, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 124)) ;
    }
    var_repeatBranchList_5398.addAssign_operation (var_syntaxInstructionList_5558  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 131)) ;
    enumerator_5518.gotoNextObject () ;
  }
  const GALGAS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::class_func_new (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_5398, var_addedNonTerminalIndex_4986  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 134))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 134)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                              const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                              const GALGAS_string constinArgument_inLexiqueName,
                                                              const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GALGAS_string constinArgument_inComponentName,
                                                              const GALGAS_stringset constinArgument_inIndexNameSet,
                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_6951 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 161)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 163)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7501 ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  const GALGAS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_7501, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 165)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7600 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 183)) ;
  const GALGAS_repeatInstruction temp_2 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_7678 (temp_2.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_7678.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_8130 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_7678.current_mSyntaxInstructionList (HERE), enumerator_7678.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_8130, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 185)) ;
    }
    var_listOfSemanticInstructionListForGeneration_7600.addAssign_operation (var_instructionList_8130, enumerator_7678.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 202)) ;
    enumerator_7678.gotoNextObject () ;
  }
  {
  const GALGAS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 205)) ;
  }
  const GALGAS_repeatInstruction temp_4 = this ;
  const GALGAS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::class_func_new (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6951, var_repeated_5F_instructionList_7501, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_7600  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 207))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 207)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_9670 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 237)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9781 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 238)) ;
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9897 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_9897.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9781.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9897.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 241)), enumerator_9897.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240)) ;
    enumerator_9897.gotoNextObject () ;
  }
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  const GALGAS_repeatInstructionForGeneration temp_4 = this ;
  const GALGAS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_9670, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9781  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 245))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 245)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_repeatInstructionForGeneration var_si_10842 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_10842.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10842.readProperty_m_5F_repeated_5F_instructionList (), var_si_10842.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 264)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 265)).objectCompare (var_si_10842.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 265)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 265)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_repeatInstructionForGeneration temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10842.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 268)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 267)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 268)).add_operation (var_si_10842.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 270)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 266)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_repeatInstructionForGeneration temp_6 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11633 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11712 (var_si_10842.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_11633.hasCurrentObject () && enumerator_11712.hasCurrentObject () && bool_7) {
        while (enumerator_11633.hasCurrentObject () && enumerator_11712.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_11633.current_mInstructionList (HERE), enumerator_11712.current_mInstructionList (HERE), enumerator_11712.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 274)) ;
          enumerator_11633.gotoNextObject () ;
          enumerator_11712.gotoNextObject () ;
          if (enumerator_11633.hasCurrentObject () && enumerator_11712.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_syntaxInstructionForGeneration var_si_11939 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_11939.ptr ()) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11939.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 278)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_repeatInstructionForGeneration temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 282)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 285)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_repeatInstructionForGeneration temp_13 = this ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 286)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_repeatFlagCppName_12926 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 302)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 303)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_12926, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 304)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_12926, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 305)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 305)) ;
  {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 306)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 314)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas", 315)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 316)) ;
      const GALGAS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)).add_operation (GALGAS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 317)) ;
      const GALGAS_repeatInstructionForGeneration temp_5 = this ;
      GALGAS_semanticInstructionListForGeneration var_instructionList_13690 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_mInstructionListAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 318)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_13690, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 319)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12926, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 329)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 331)) ;
    const GALGAS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 332)) ;
    const GALGAS_repeatInstructionForGeneration temp_8 = this ;
    cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14361 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
    GALGAS_uint index_14339 ((uint32_t) 0) ;
    while (enumerator_14361.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_14339.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 334)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_14361.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 335)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 343)) ;
      enumerator_14361.gotoNextObject () ;
      index_14339.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 333)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 345)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12926, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 346)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 346)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 347)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 348)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 350)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 351)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_4657 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 104)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_4743 = GALGAS_branchListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 106)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4825 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_4825.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4865 = GALGAS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 108)) ;
    {
    routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4825.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4865, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 109)) ;
    }
    var_selectBranchList_4743.addAssign_operation (var_syntaxInstructionList_4865  COMMA_SOURCE_FILE ("instruction-select.galgas", 116)) ;
    enumerator_4825.gotoNextObject () ;
  }
  const GALGAS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::class_func_new (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_4743, var_addedNonTerminalIndex_4657  COMMA_SOURCE_FILE ("instruction-select.galgas", 119))  COMMA_SOURCE_FILE ("instruction-select.galgas", 119)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                              const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                              const GALGAS_string constinArgument_inLexiqueName,
                                                              const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GALGAS_string constinArgument_inComponentName,
                                                              const GALGAS_stringset constinArgument_inIndexNameSet,
                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                              GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_6259 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 145)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 147)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6407 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 149)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_6529 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_6529.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_6981 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6529.current_mSyntaxInstructionList (HERE), enumerator_6529.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6981, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 151)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6407.addAssign_operation (var_instructionList_6981, enumerator_6529.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 168)) ;
    enumerator_6529.gotoNextObject () ;
  }
  {
  const GALGAS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 171)) ;
  }
  const GALGAS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6259, var_listOfSemanticInstructionListForGeneration_6407  COMMA_SOURCE_FILE ("instruction-select.galgas", 172))  COMMA_SOURCE_FILE ("instruction-select.galgas", 172)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_8317 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-select.galgas", 197)) ;
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8433 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8433.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_8317.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8433.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 200)), enumerator_8433.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 199)) ;
    enumerator_8433.gotoNextObject () ;
  }
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  const GALGAS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_8317  COMMA_SOURCE_FILE ("instruction-select.galgas", 203))  COMMA_SOURCE_FILE ("instruction-select.galgas", 203)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_selectInstructionForGeneration var_si_9308 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9308.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bool (true) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 221)).objectCompare (var_si_9308.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 221)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 221)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selectInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9308.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 224)).getter_string (SOURCE_FILE ("instruction-select.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 223)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 224)).add_operation (var_si_9308.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas", 226)).getter_string (SOURCE_FILE ("instruction-select.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 225)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 222)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_selectInstructionForGeneration temp_5 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9908 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9995 (var_si_9308.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9908.hasCurrentObject () && enumerator_9995.hasCurrentObject () && bool_6) {
        while (enumerator_9908.hasCurrentObject () && enumerator_9995.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9908.current_mInstructionList (HERE), enumerator_9995.current_mInstructionList (HERE), enumerator_9995.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 231)) ;
          enumerator_9908.gotoNextObject () ;
          enumerator_9995.gotoNextObject () ;
          if (enumerator_9908.hasCurrentObject () && enumerator_9995.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      GALGAS_syntaxInstructionForGeneration var_si_10222 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_10222.ptr ()) {
        test_7 = kBoolFalse ;
      }
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_10222.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 234)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_selectInstructionForGeneration temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas", 238)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas", 241)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_selectInstructionForGeneration temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas", 242)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
  }
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 259)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 259)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 259)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 259)) ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11541 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  GALGAS_uint index_11519 ((uint32_t) 0) ;
  while (enumerator_11541.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_11519.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 261)).getter_string (SOURCE_FILE ("instruction-select.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 261)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 261)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11541.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 262)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 270)) ;
    enumerator_11541.gotoNextObject () ;
    index_11519.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 274)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                    const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                    GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                    GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_terminalSymbolIndex_7276 ;
  const GALGAS_terminalCheckInstructionAST temp_0 = this ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_7300 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (temp_0.readProperty_mTerminalName ().readProperty_string ()) ;
  if (nullptr != objectArray_7300) {
      macroValidSharedObject (objectArray_7300, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_7276 = objectArray_7300->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_7276 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 158)) ;
    {
    const GALGAS_terminalCheckInstructionAST temp_1 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_1.readProperty_mTerminalName (), var_terminalSymbolIndex_7276, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 159)) ;
    }
  }
  const GALGAS_terminalCheckInstructionAST temp_2 = this ;
  const GALGAS_terminalCheckInstructionAST temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mTerminalName (), var_terminalSymbolIndex_7276  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 161))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 161)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_analyzeSyntaxInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                        const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                        const GALGAS_string constinArgument_inLexiqueName,
                                                                        const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                        const GALGAS_string /* constinArgument_inComponentName */,
                                                                        const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList var_sentAttributeList_8599 ;
  const GALGAS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_8599, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)).objectCompare (var_sentAttributeList_8599.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 186)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_terminalCheckInstructionAST temp_3 = this ;
      const GALGAS_terminalCheckInstructionAST temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_8599.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 189)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_terminalCheckInstructionAST temp_7 = this ;
      const GALGAS_terminalCheckInstructionAST temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 192)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GALGAS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (var_sentAttributeList_8599.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 188)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 188)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 189)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas", 191)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 191)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 187)) ;
    }
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_9142 = GALGAS_terminalCheckAssignementList::class_func_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 195)) ;
  const GALGAS_terminalCheckInstructionAST temp_12 = this ;
  cEnumerator_actualInputParameterListAST enumerator_9231 (temp_12.readProperty_mActualInputParameterList (), kENUMERATION_UP) ;
  cEnumerator_lexicalSentValueList enumerator_9329 (var_sentAttributeList_8599, kENUMERATION_UP) ;
  while (enumerator_9231.hasCurrentObject () && enumerator_9329.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_9231.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_9329.current_mLexicalType (HERE), enumerator_9329.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_9142, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 197)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsNotEqual, enumerator_9329.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9231.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_9329.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_9231.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_9329.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 206)) ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_9329.current_mLexicalFormalSelector (HERE).readProperty_location (), GALGAS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 207)) ;
      }
    }
    enumerator_9231.gotoNextObject () ;
    enumerator_9329.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionAST temp_18 = this ;
  cEnumerator__32_lstringlist enumerator_9935 (temp_18.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_9935.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9935.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 212)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 212)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, kFixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9935.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9935.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 213)) ;
      }
    }
    enumerator_9935.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionAST temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 217)) ;
  const GALGAS_terminalCheckInstructionAST temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 223)) ;
  const GALGAS_terminalCheckInstructionAST temp_23 = this ;
  const GALGAS_terminalCheckInstructionAST temp_24 = this ;
  const GALGAS_terminalCheckInstructionAST temp_25 = this ;
  const GALGAS_terminalCheckInstructionAST temp_26 = this ;
  const GALGAS_terminalCheckInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::class_func_new (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_9142, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ()  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 230))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 230)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GALGAS_rowList & ioArgument_ioRowList,
                                                                                      const GALGAS_uint constinArgument_inRow,
                                                                                      GALGAS_uint & ioArgument_ioColumn,
                                                                                      GALGAS_string & ioArgument_ioCurrentNode,
                                                                                      GALGAS_string & ioArgument_ioArrowShape,
                                                                                      GALGAS_string & ioArgument_ioArrows,
                                                                                      GALGAS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                      const GALGAS_bool /* constinArgument_inDebug */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_nodeName_12451 ;
  {
  const GALGAS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)).add_operation (GALGAS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 264)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12451, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 263)) ;
  }
  ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (var_nodeName_12451, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 269)) ;
  ioArgument_ioCurrentNode = var_nodeName_12451 ;
  ioArgument_ioArrowShape = GALGAS_string ("--") ;
  ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 272)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_terminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string /* constinArgument_inPosfix */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GALGAS_terminalCheckAssignementList::class_func_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 310)), temp_3.readProperty_mIndexingKeyList (), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (SOURCE_FILE ("instruction-terminal.galgas", 312)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (SOURCE_FILE ("instruction-terminal.galgas", 313))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 306))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 306)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_terminalCheckInstructionForGeneration var_si_15000 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_15000.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_15000.readProperty_mTerminalName ().readProperty_string ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_15000.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 327)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 326)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_15340 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_15340.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_15340.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 330)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 334)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_terminalCheckInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 338)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  cEnumerator_terminalCheckAssignementList enumerator_16380 (temp_0.readProperty_mTerminalCheckAssignementList (), kENUMERATION_UP) ;
  while (enumerator_16380.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_16380.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_16380.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 356)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16380.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 359)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16380.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 360)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 360)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 361)) ;
    enumerator_16380.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  cEnumerator__32_lstringlist enumerator_16819 (temp_2.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_16819.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 365)) ;
    const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 366)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_16819.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 367)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_16819.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 368)) ;
    enumerator_16819.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 371)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 377)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 384)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 384)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)).add_operation (GALGAS_string ("->acceptTerminal (Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 385)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.readProperty_mLexiqueIdentifier ().add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 386)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 387)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                             GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_parseLoopInstruction temp_0 = this ;
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mDoInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 111)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                 const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                 const GALGAS_string constinArgument_inLexiqueName,
                                                                 const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                 const GALGAS_string constinArgument_inComponentName,
                                                                 const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_6273 ;
  const GALGAS_parseLoopInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 142)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_variant_5F_expression_6273, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 139)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_6273.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_parseLoopInstruction temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6273.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 150)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 151)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_6902 ;
  const GALGAS_parseLoopInstruction temp_4 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-loop.galgas", 157)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_while_5F_expression_6902, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 154)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_6902.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_parseLoopInstruction temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfWhileExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_6273.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 165)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)), fixItArray7  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 164)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 170)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_7758 ;
  {
  const GALGAS_parseLoopInstruction temp_8 = this ;
  const GALGAS_parseLoopInstruction temp_9 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_8.readProperty_mDoInstructionList (), temp_9.readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7758, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 172)) ;
  }
  {
  const GALGAS_parseLoopInstruction temp_10 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_10.readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 190)) ;
  }
  const GALGAS_parseLoopInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::class_func_new (temp_11.readProperty_mInstructionLocation (), var_variant_5F_expression_6273, var_while_5F_expression_6902, var_instructionList_7758  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 192)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 217)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) ;
  }
  GALGAS_string var_variantVarCppName_9870 ;
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_9870, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_9870, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 236)) ;
  }
  GALGAS_string var_variantVar_10031 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_10031, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (var_variantVarCppName_9870, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)) ;
  GALGAS_string var_loopVar_10243 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 241)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_10243, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_10243, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10243.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)) ;
  GALGAS_string var_whileVarCppName_10661 ;
  const GALGAS_parseLoopInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_10661, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_10661, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 248)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 249)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_10243.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 250)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_10031.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 252)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_2.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 253)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 262)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 263)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 264)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 265)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 266)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 269)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_3 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), temp_3.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 272)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 270)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 278)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                               GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                               GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList var_syntaxInstructionList_4679 ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  GALGAS_location joker_4701 ; // Joker input parameter
  temp_0.readProperty_mParseRewindBranchList ().method_first (var_syntaxInstructionList_4679, joker_4701, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 105)) ;
  {
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (var_syntaxInstructionList_4679, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                   const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                   const GALGAS_string constinArgument_inLexiqueName,
                                                                   const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                   const GALGAS_string constinArgument_inComponentName,
                                                                   const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5828 = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 136)) ;
  GALGAS_uint var_referenceSelectMethodCount_5932 = ioArgument_ioSelectMethodCount ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_6011 (temp_0.readProperty_mParseRewindBranchList (), kENUMERATION_UP) ;
  while (enumerator_6011.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_5932 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_6127 = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 140)) ;
    cEnumerator_syntaxInstructionList enumerator_6195 (enumerator_6011.current_mSyntaxInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6195.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_6195.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_6127, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 142)) ;
      enumerator_6195.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_5828.addAssign_operation (var_instructionList_6127, enumerator_6011.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 158)) ;
    enumerator_6011.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_6832 = var_listOfSemanticInstructionListForGeneration_5828 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_6934 ;
  {
  GALGAS_location joker_6950 ; // Joker input parameter
  var_tempListOfBranches_6832.setter_popFirst (var_instructionList_6934, joker_6950, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 162)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_6998 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_6934, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 163)) ;
  GALGAS_bool var_ok_7092 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7126 (var_tempListOfBranches_6832, kENUMERATION_UP) ;
  bool bool_1 = var_ok_7092.isValidAndTrue () ;
  if (enumerator_7126.hasCurrentObject () && bool_1) {
    while (enumerator_7126.hasCurrentObject () && bool_1) {
      var_ok_7092 = function_compareSyntaxSignature (var_referenceSignature_6998, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_7126.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 168)), enumerator_7126.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 166)) ;
      enumerator_7126.gotoNextObject () ;
      if (enumerator_7126.hasCurrentObject ()) {
        bool_1 = var_ok_7092.isValidAndTrue () ;
      }
    }
  }
  const GALGAS_parseRewindInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::class_func_new (temp_2.readProperty_mInstructionLocation (), var_listOfSemanticInstructionListForGeneration_5828  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 173))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 173)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration var_instructionList_8478 ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  GALGAS_location joker_8494 ; // Joker input parameter
  temp_0.readProperty_mListOfSemanticInstructionListForGeneration ().method_first (var_instructionList_8478, joker_8494, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 195)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_8478, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 196)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 210)) COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 210)) ;
  }
  GALGAS_string var_parsingContextVar_9195 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 211)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 212)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_9195, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 213)) ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9449 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_9449.hasCurrentObject ()) {
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_9449.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 216)) ;
    }
    if (enumerator_9449.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (var_parsingContextVar_9195, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 225)) ;
    }
    enumerator_9449.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstruction transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                             GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_parseWhenInstruction temp_0 = this ;
  routine_transformInstructionList_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mElseInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 181)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstruction analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                 const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                 const GALGAS_string constinArgument_inLexiqueName,
                                                                 const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                 const GALGAS_string constinArgument_inComponentName,
                                                                 const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_9163 ;
  const GALGAS_parseWhenInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-parse-when.galgas", 212)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_when_5F_expression_9163, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 219)) ;
  }
  GALGAS_uint var_localSelectMethodCount_9278 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_9710 ;
  {
  const GALGAS_parseWhenInstruction temp_1 = this ;
  const GALGAS_parseWhenInstruction temp_2 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_1.readProperty_mWhenInstructionList (), temp_2.readProperty_mEndOfWhenInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_9278, var_when_5F_instructionListForGeneration_9710, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 222)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_10151 ;
  {
  const GALGAS_parseWhenInstruction temp_3 = this ;
  const GALGAS_parseWhenInstruction temp_4 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_3.readProperty_mElseInstructionList (), temp_4.readProperty_mEndOfElseInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_10151, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 240)) ;
  }
  {
  const GALGAS_parseWhenInstruction temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 258)) ;
  }
  const GALGAS_parseWhenInstruction temp_6 = this ;
  GALGAS_bool var_ok_10310 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_9710, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 261)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_10151, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 262)), temp_6.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 260)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_ok_10310.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_parseWhenInstruction temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::class_func_new (temp_8.readProperty_mInstructionLocation (), var_when_5F_expression_9163, var_when_5F_instructionListForGeneration_9710, var_else_5F_instructionListForGeneration_10151  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 267))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 267)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 292)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_12548 ;
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mWhenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_12548, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 306)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_12548, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_1.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 308)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 316)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_2.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 317)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 325)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                 const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                 GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                 GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                     const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                     const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                     const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                     const GALGAS_string /* constinArgument_inComponentName */,
                                                                     const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 92)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_syntaxSendInstructionAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 93)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_5097 ;
  const GALGAS_syntaxSendInstructionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-syntax-send.galgas", 100)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_5097, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expression_5097.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_syntaxSendInstructionAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 108)) ;
    }
  }
  const GALGAS_syntaxSendInstructionAST temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::class_func_new (temp_7.readProperty_mInstructionLocation (), var_expression_5097  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_6685 ;
  const GALGAS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_6685, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 135)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 143)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_6685, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 144)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 145)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addString (").add_operation (var_sourceVar_6685, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)).add_operation (GALGAS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 146)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 147)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const GALGAS_string & constinArgument_inPosfix,
                                                                                       const GALGAS_semanticInstructionListForGeneration & constinArgument_inInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration result_result ; // Returned variable
  result_result = GALGAS_semanticInstructionListForGeneration::class_func_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 41)) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_2078 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_2078.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2078.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 43)) ;
    enumerator_2078.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxSignatureOfInstructionList [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxSignatureOfInstructionList (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxSignatureOfInstructionList ("syntaxSignatureOfInstructionList",
                                                                                  functionWithGenericHeader_syntaxSignatureOfInstructionList,
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
                                                                                  2,
                                                                                  functionArgs_syntaxSignatureOfInstructionList) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'compareSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool function_compareSyntaxSignature (const GALGAS_semanticInstructionListForGeneration & constinArgument_inReferenceSignature,
                                             const GALGAS_semanticInstructionListForGeneration & constinArgument_inTestedSignature,
                                             const GALGAS_location & constinArgument_inErrorLocation,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  result_outOk = GALGAS_bool (true) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_3007 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
  cEnumerator_semanticInstructionListForGeneration enumerator_3051 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
  bool bool_0 = result_outOk.isValidAndTrue () ;
  if (enumerator_3007.hasCurrentObject () && enumerator_3051.hasCurrentObject () && bool_0) {
    while (enumerator_3007.hasCurrentObject () && enumerator_3051.hasCurrentObject () && bool_0) {
      result_outOk = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_3007.current_mInstruction (HERE).ptr (), enumerator_3051.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 70)) ;
      enumerator_3007.gotoNextObject () ;
      enumerator_3051.gotoNextObject () ;
      if (enumerator_3007.hasCurrentObject () && enumerator_3051.hasCurrentObject ()) {
        bool_0 = result_outOk.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_outOk.operator_and (GALGAS_bool (kIsStrictInf, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 72)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_semanticInstructionForGeneration var_instruction_3316 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 73)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_syntaxInstructionForGeneration var_si_3411 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3316.ptr ())) ;
        if (nullptr == var_si_3411.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3411.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 75)) ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = result_outOk.operator_and (GALGAS_bool (kIsStrictSup, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)) ;
        GALGAS_semanticInstructionForGeneration var_instruction_3950 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 83)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_syntaxInstructionForGeneration var_si_4045 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3950.ptr ())) ;
          if (nullptr == var_si_4045.ptr ()) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_4045.readProperty_mInstructionLocation (), GALGAS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 87)) ;
          }
        }
        if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 90)) ;
        }
      }
    }
  }
//---
  return result_outOk ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compareSyntaxSignature (Compiler * inCompiler,
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

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compareSyntaxSignature ("compareSyntaxSignature",
                                                                        functionWithGenericHeader_compareSyntaxSignature,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        3,
                                                                        functionArgs_compareSyntaxSignature) ;

