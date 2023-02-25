#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-27.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 255)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_minusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 261)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_mulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 267)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_divEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 279)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_10871 ;
  GALGAS_string var_targetVariableCppName_10907 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10957 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_11057 ;
        GALGAS_bool var_unused_0_11061 ;
        GALGAS_bool var_mutableProperties_11103 ;
        const bool optionalResult11037 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_11057, var_unused_0_11061, var_mutableProperties_11103) ;
        if (!optionalResult11037) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_11103.operator_not (SOURCE_FILE ("instruction-concat.galgas", 300)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("property not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 301)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_11258 = extensionGetter_definition (var_selfType_11057, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_11363 ;
          const GALGAS_plusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_11346 ; // Joker input parameter
          var_propertyMap_11258.method_searchKey (temp_6.readProperty_mReceiverName (), joker_11346, var_isConstant_11363, var_targetType_10871, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 304)) ;
          var_nameForCheckingFormalParameterUsing_10957 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_10907 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 306)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 307)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_11363.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 309)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_11103.operator_not (SOURCE_FILE ("instruction-concat.galgas", 311)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 312)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 315)) ;
        var_targetType_10871.drop () ; // Release error dropped variable
        var_targetVariableCppName_10907.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_10957.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_10871, var_targetVariableCppName_10907, var_nameForCheckingFormalParameterUsing_10957, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 319)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_12231 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12231.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_12284 = extensionGetter_definition (var_targetType_10871, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 327)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_12372 ;
    GALGAS_bool var_isConstant_12388 ;
    var_propertyMap_12284.method_searchKey (enumerator_12231.current_mValue (HERE), var_isPublic_12372, var_isConstant_12388, var_targetType_10871, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 328)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_12372.operator_not (SOURCE_FILE ("instruction-concat.galgas", 329)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_12231.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 330)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_12388.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_12231.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 333)) ;
      }
    }
    enumerator_12231.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_10871, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 337)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 337)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 337)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_plusEqualExpressionInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_10871, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 339)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 339)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 339)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 338)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13209 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_25 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10871, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13209, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 342)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_26 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10871, var_expression_13209.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_13209, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_27 = this ;
  const GALGAS_plusEqualExpressionInstructionAST temp_28 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_10871, var_targetVariableCppName_10907, var_nameForCheckingFormalParameterUsing_10957, temp_28.readProperty_mStructAttributeList (), var_expression_13209, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 353))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 353)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@minusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_minusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_14279 ;
  GALGAS_string var_targetVariableCppName_14315 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_14365 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_14465 ;
        GALGAS_bool var_selfIsMutable_14493 ;
        GALGAS_bool var_mutableProperties_14535 ;
        const bool optionalResult14445 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14465, var_selfIsMutable_14493, var_mutableProperties_14535) ;
        if (!optionalResult14445) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_14493.operator_not (SOURCE_FILE ("instruction-concat.galgas", 380)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_minusEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_14684 = extensionGetter_definition (var_selfType_14465, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 383)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_14789 ;
          const GALGAS_minusEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_14772 ; // Joker input parameter
          var_propertyMap_14684.method_searchKey (temp_6.readProperty_mReceiverName (), joker_14772, var_isConstant_14789, var_targetType_14279, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 384)) ;
          var_nameForCheckingFormalParameterUsing_14365 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_minusEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_14315 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 386)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_14789.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_minusEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 389)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_14535.operator_not (SOURCE_FILE ("instruction-concat.galgas", 391)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_minusEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 392)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_minusEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 395)) ;
        var_targetType_14279.drop () ; // Release error dropped variable
        var_targetVariableCppName_14315.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_14365.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_14279, var_targetVariableCppName_14315, var_nameForCheckingFormalParameterUsing_14365, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 399)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_15657 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_15657.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_15710 = extensionGetter_definition (var_targetType_14279, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 407)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_15798 ;
    GALGAS_bool var_isConstant_15814 ;
    var_propertyMap_15710.method_searchKey (enumerator_15657.current_mValue (HERE), var_isPublic_15798, var_isConstant_15814, var_targetType_14279, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 408)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_15798.operator_not (SOURCE_FILE ("instruction-concat.galgas", 409)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_15657.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 410)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_15814.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_15657.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 413)) ;
      }
    }
    enumerator_15657.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_14279, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 417)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 417)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 417)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_minusEqualExpressionInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_14279, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 419)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 419)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 419)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 418)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_16636 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_25 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_14279, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_16636, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 422)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_26 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_14279, var_expression_16636.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_16636, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 431)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_27 = this ;
  const GALGAS_minusEqualExpressionInstructionAST temp_28 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_14279, var_targetVariableCppName_14315, var_nameForCheckingFormalParameterUsing_14365, temp_28.readProperty_mStructAttributeList (), var_expression_16636, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 433))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_mulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_17705 ;
  GALGAS_string var_targetVariableCppName_17741 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_17791 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_17891 ;
        GALGAS_bool var_selfIsMutable_17919 ;
        GALGAS_bool var_mutableProperties_17961 ;
        const bool optionalResult17871 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_17891, var_selfIsMutable_17919, var_mutableProperties_17961) ;
        if (!optionalResult17871) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_17919.operator_not (SOURCE_FILE ("instruction-concat.galgas", 460)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_mulEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 461)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_18110 = extensionGetter_definition (var_selfType_17891, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_18215 ;
          const GALGAS_mulEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_18198 ; // Joker input parameter
          var_propertyMap_18110.method_searchKey (temp_6.readProperty_mReceiverName (), joker_18198, var_isConstant_18215, var_targetType_17705, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 464)) ;
          var_nameForCheckingFormalParameterUsing_17791 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_mulEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_17741 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 467)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_18215.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_mulEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 469)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_17961.operator_not (SOURCE_FILE ("instruction-concat.galgas", 471)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_mulEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 472)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_mulEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)) ;
        var_targetType_17705.drop () ; // Release error dropped variable
        var_targetVariableCppName_17741.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_17791.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_17705, var_targetVariableCppName_17741, var_nameForCheckingFormalParameterUsing_17791, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 479)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_19110 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_19110.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_19163 = extensionGetter_definition (var_targetType_17705, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 488)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_19251 ;
    GALGAS_bool var_isConstant_19267 ;
    var_propertyMap_19163.method_searchKey (enumerator_19110.current_mValue (HERE), var_isPublic_19251, var_isConstant_19267, var_targetType_17705, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 489)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_19251.operator_not (SOURCE_FILE ("instruction-concat.galgas", 490)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_19110.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 491)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_19267.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_19110.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 494)) ;
      }
    }
    enumerator_19110.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_17705, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 498)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 498)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_mulEqualExpressionInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_17705, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 500)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 500)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 500)), fixItArray24  COMMA_SOURCE_FILE ("instruction-concat.galgas", 499)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_20083 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_25 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_25.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_17705, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_20083, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 503)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_26 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_17705, var_expression_20083.readProperty_mResultType (), temp_26.readProperty_mInstructionLocation (), var_expression_20083, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_27 = this ;
  const GALGAS_mulEqualExpressionInstructionAST temp_28 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_27.readProperty_mInstructionLocation (), var_targetType_17705, var_targetVariableCppName_17741, var_nameForCheckingFormalParameterUsing_17791, temp_28.readProperty_mStructAttributeList (), var_expression_20083, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 514))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 514)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@divEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_divEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_21150 ;
  GALGAS_string var_targetVariableCppName_21186 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_21236 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_21336 ;
        GALGAS_bool var_selfIsMutable_21364 ;
        GALGAS_bool var_mutableProperties_21406 ;
        const bool optionalResult21316 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_21336, var_selfIsMutable_21364, var_mutableProperties_21406) ;
        if (!optionalResult21316) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_21364.operator_not (SOURCE_FILE ("instruction-concat.galgas", 541)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_divEqualExpressionInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 542)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_21555 = extensionGetter_definition (var_selfType_21336, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_21660 ;
          const GALGAS_divEqualExpressionInstructionAST temp_6 = this ;
          GALGAS_bool joker_21643 ; // Joker input parameter
          var_propertyMap_21555.method_searchKey (temp_6.readProperty_mReceiverName (), joker_21643, var_isConstant_21660, var_targetType_21150, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)) ;
          var_nameForCheckingFormalParameterUsing_21236 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_divEqualExpressionInstructionAST temp_7 = this ;
          var_targetVariableCppName_21186 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 547)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 548)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_21660.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_divEqualExpressionInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 550)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_21406.operator_not (SOURCE_FILE ("instruction-concat.galgas", 552)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_divEqualExpressionInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property is not mutable in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 553)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_divEqualExpressionInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 556)) ;
        var_targetType_21150.drop () ; // Release error dropped variable
        var_targetVariableCppName_21186.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_21236.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_21150, var_targetVariableCppName_21186, var_nameForCheckingFormalParameterUsing_21236, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_22555 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_22555.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_22608 = extensionGetter_definition (var_targetType_21150, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 569)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_22696 ;
    GALGAS_bool var_isConstant_22712 ;
    var_propertyMap_22608.method_searchKey (enumerator_22555.current_mValue (HERE), var_isPublic_22696, var_isConstant_22712, var_targetType_21150, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 570)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_22696.operator_not (SOURCE_FILE ("instruction-concat.galgas", 571)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_22555.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 572)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_22712.boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_divEqualExpressionInstructionAST temp_21 = this ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray22  COMMA_SOURCE_FILE ("instruction-concat.galgas", 575)) ;
      }
    }
    enumerator_22555.gotoNextObject () ;
  }
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = extensionGetter_definition (var_targetType_21150, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 579)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 579)).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_divEqualExpressionInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_21150, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 581)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 581)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 581)), fixItArray25  COMMA_SOURCE_FILE ("instruction-concat.galgas", 580)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_23540 ;
  const GALGAS_divEqualExpressionInstructionAST temp_26 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_26.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_21150, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_23540, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 584)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_27 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_21150, var_expression_23540.readProperty_mResultType (), temp_27.readProperty_mInstructionLocation (), var_expression_23540, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 593)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_28 = this ;
  const GALGAS_divEqualExpressionInstructionAST temp_29 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_28.readProperty_mInstructionLocation (), var_targetType_21150, var_targetVariableCppName_21186, var_nameForCheckingFormalParameterUsing_21236, temp_29.readProperty_mStructAttributeList (), var_expression_23540, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 595))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 595)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_24596 ;
  GALGAS_string var_targetVariableCppName_24632 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_24682 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_24782 ;
        GALGAS_bool var_unused_0_24794 ;
        GALGAS_bool var_mutableProperties_24836 ;
        const bool optionalResult24762 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_24782, var_unused_0_24794, var_mutableProperties_24836) ;
        if (!optionalResult24762) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_mutableProperties_24836.operator_not (SOURCE_FILE ("instruction-concat.galgas", 622)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_plusEqualElementsInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-concat.galgas", 623)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_24989 = extensionGetter_definition (var_selfType_24782, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_25094 ;
          const GALGAS_plusEqualElementsInstructionAST temp_6 = this ;
          GALGAS_bool joker_25077 ; // Joker input parameter
          var_propertyMap_24989.method_searchKey (temp_6.readProperty_mReceiverName (), joker_25077, var_isConstant_25094, var_targetType_24596, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) ;
          var_nameForCheckingFormalParameterUsing_24682 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_plusEqualElementsInstructionAST temp_7 = this ;
          var_targetVariableCppName_24632 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 629)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_25094.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_plusEqualElementsInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-concat.galgas", 631)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_24836.operator_not (SOURCE_FILE ("instruction-concat.galgas", 633)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_plusEqualElementsInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 634)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_plusEqualElementsInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-concat.galgas", 637)) ;
        var_targetType_24596.drop () ; // Release error dropped variable
        var_targetVariableCppName_24632.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_24682.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_16 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_24596, var_targetVariableCppName_24632, var_nameForCheckingFormalParameterUsing_24682, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 641)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_25992 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25992.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_26045 = extensionGetter_definition (var_targetType_24596, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 650)).readProperty_mPropertyMap () ;
    GALGAS_unifiedTypeMapEntry var_previousTargetType_26111 = var_targetType_24596 ;
    GALGAS_bool var_isPublic_26173 ;
    GALGAS_bool var_isConstant_26189 ;
    var_propertyMap_26045.method_searchKey (enumerator_25992.current_mValue (HERE), var_isPublic_26173, var_isConstant_26189, var_targetType_24596, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 652)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_26173.operator_not (SOURCE_FILE ("instruction-concat.galgas", 653)).boolEnum () ;
      if (kBoolTrue == test_18) {
        switch (constinArgument_inAnalysisContext.readProperty_selfType ().enumValue ()) {
        case GALGAS_selfAvailability::kNotBuilt:
          break ;
        case GALGAS_selfAvailability::kEnum_none:
          {
            TC_Array <C_FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticError (enumerator_25992.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-concat.galgas", 656)) ;
          }
          break ;
        case GALGAS_selfAvailability::kEnum_available:
          {
            const cEnumAssociatedValues_selfAvailability_available * extractPtr_26546 = (const cEnumAssociatedValues_selfAvailability_available *) (constinArgument_inAnalysisContext.readProperty_selfType ().unsafePointer ()) ;
            const GALGAS_unifiedTypeMapEntry extractedValue_26398_selfType = extractPtr_26546->mAssociatedValue0 ;
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = GALGAS_bool (kIsNotEqual, var_previousTargetType_26111.objectCompare (extractedValue_26398_selfType)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <C_FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_25992.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 659)) ;
              }
            }
          }
          break ;
        }
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_isConstant_26189.boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (enumerator_25992.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray23  COMMA_SOURCE_FILE ("instruction-concat.galgas", 667)) ;
      }
    }
    enumerator_25992.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_26896 = extensionGetter_definition (var_targetType_24596, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 671)).readProperty_mAddAssignOperatorArguments () ;
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_26896.getter_length (SOURCE_FILE ("instruction-concat.galgas", 672)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_plusEqualElementsInstructionAST temp_25 = this ;
      TC_Array <C_FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_24596, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 674)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 674)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 674)), fixItArray26  COMMA_SOURCE_FILE ("instruction-concat.galgas", 673)) ;
    }
  }
  if (kBoolFalse == test_24) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_plusEqualElementsInstructionAST temp_28 = this ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 676)).objectCompare (var_addAssignOperatorArguments_26896.getter_length (SOURCE_FILE ("instruction-concat.galgas", 676)))).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_plusEqualElementsInstructionAST temp_29 = this ;
        const GALGAS_plusEqualElementsInstructionAST temp_30 = this ;
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_29.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_targetType_24596, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).add_operation (var_addAssignOperatorArguments_26896.getter_length (SOURCE_FILE ("instruction-concat.galgas", 679)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 678)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 679)).add_operation (temp_30.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-concat.galgas", 680)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 679)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 680)), fixItArray31  COMMA_SOURCE_FILE ("instruction-concat.galgas", 677)) ;
      }
    }
    if (kBoolFalse == test_27) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_27709 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 682)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_32 = this ;
      cEnumerator_actualOutputExpressionList enumerator_27776 (temp_32.readProperty_mExpressions (), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_27838 (var_addAssignOperatorArguments_26896, kENUMERATION_UP) ;
      while (enumerator_27776.hasCurrentObject () && enumerator_27838.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_28135 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_27776.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_27838.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_28135, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 684)) ;
        enumGalgasBool test_33 = kBoolTrue ;
        if (kBoolTrue == test_33) {
          test_33 = GALGAS_bool (kIsNotEqual, enumerator_27838.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_27776.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_33) {
            GALGAS_string temp_34 ;
            const enumGalgasBool test_35 = GALGAS_bool (kIsNotEqual, enumerator_27838.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_35) {
              temp_34 = enumerator_27838.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 693)) ;
            }else if (kBoolFalse == test_35) {
              temp_34 = GALGAS_string::makeEmptyString () ;
            }
            GALGAS_string var_s_28228 = GALGAS_string ("!").add_operation (temp_34, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 693)) ;
            TC_Array <C_FixItDescription> fixItArray36 ;
            appendFixItActions (fixItArray36, kFixItReplace, var_s_28228) ;
            inCompiler->emitSemanticError (enumerator_27776.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28228, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 694)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 694)), fixItArray36  COMMA_SOURCE_FILE ("instruction-concat.galgas", 694)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_27838.current_mFormalArgumentType (HERE), var_expression_28135.readProperty_mResultType (), enumerator_27776.current_mEndOfExpressionLocation (HERE), var_expression_28135, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 698)) ;
        }
        var_effectiveParameterList_27709.addAssign_operation (var_expression_28135  COMMA_SOURCE_FILE ("instruction-concat.galgas", 699)) ;
        enumerator_27776.gotoNextObject () ;
        enumerator_27838.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_37 = this ;
      const GALGAS_plusEqualElementsInstructionAST temp_38 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_24632, var_targetType_24596, var_nameForCheckingFormalParameterUsing_24682, temp_37.readProperty_mInstructionLocation (), temp_38.readProperty_mStructAttributeList (), var_effectiveParameterList_27709  COMMA_SOURCE_FILE ("instruction-concat.galgas", 702))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 702)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@plusEqualnstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_plusEqualnstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_plusEqualnstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 734)) ;
  GALGAS_stringlist var_parameterList_30181 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 735)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = this ;
  cEnumerator_semanticExpressionListForGeneration enumerator_30217 (temp_1.readProperty_mExpressionList (), kENUMERATION_UP) ;
  while (enumerator_30217.hasCurrentObject ()) {
    GALGAS_string var_parameter_30425 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_30217.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_30425, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 737)) ;
    var_parameterList_30181.addAssign_operation (var_parameter_30425  COMMA_SOURCE_FILE ("instruction-concat.galgas", 744)) ;
    enumerator_30217.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 747)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mReceiverCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 748)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_30628 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_30628.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_30628.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 750)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 750)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 750)) ;
    enumerator_30628.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 753)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 754)) ;
  }
  cEnumerator_stringlist enumerator_30908 (var_parameterList_30181, kENUMERATION_UP) ;
  while (enumerator_30908.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30908.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 756)) ;
    if (enumerator_30908.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 757)) ;
    }
    enumerator_30908.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = this ;
    test_6 = extensionGetter_definition (temp_7.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 759)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 759)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 760)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 761)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 763)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@opEqualInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_opEqualInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_opEqualInstructionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 786)) ;
  GALGAS_string var_sourceVar_32493 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_32493, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 787)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mNameForCheckingFormalParameterUsing () COMMA_SOURCE_FILE ("instruction-concat.galgas", 794)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.readProperty_mTargetVariableCppName (), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 795)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = this ;
  cEnumerator_lstringlist enumerator_32646 (temp_4.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_32646.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_32646.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 797)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 797)) ;
    enumerator_32646.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.readProperty_mGeneratedMethod (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 799)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 799)).add_operation (var_sourceVar_32493, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 799)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 799)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 800)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 801)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 802)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.readProperty_mTargetVariableCppName () COMMA_SOURCE_FILE ("instruction-concat.galgas", 803)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dropInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_dropInstructionAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_3140 (temp_0.readProperty_mDropList (), kENUMERATION_UP) ;
  while (enumerator_3140.hasCurrentObject ()) {
    {
    extensionSetter_searchForDropAccess (ioArgument_ioVariableMap, enumerator_3140.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 76)) ;
    }
    enumerator_3140.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_errorInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 184)) ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 185)) ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
}
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
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inLocationExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outLocationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 239)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLocationType (), outArgument_outLocationExpression.readProperty_mResultType (), constinArgument_inErrorLocation, outArgument_outLocationExpression, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 248)) ;
  }
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 258)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 255)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 264)) ;
  cEnumerator_fixitListAST enumerator_9359 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_9359.hasCurrentObject ()) {
    switch (enumerator_9359.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 268))  COMMA_SOURCE_FILE ("instruction-error.galgas", 268)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_10404 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_9359.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9500_exp = extractPtr_10404->mAssociatedValue0 ;
        const GALGAS_location extractedValue_9514_errorLocation = extractPtr_10404->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9774 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_9500_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9774, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 270)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_bool test_1 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_1.boolEnum ()) {
            test_1 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_2 = test_1 ;
          if (kBoolTrue == test_2.boolEnum ()) {
            test_2 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_3 = test_2 ;
          if (kBoolTrue == test_3.boolEnum ()) {
            test_3 = GALGAS_bool (kIsNotEqual, var_expression_9774.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_0 = test_3.boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_9514_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_9774.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 282)), fixItArray4  COMMA_SOURCE_FILE ("instruction-error.galgas", 282)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9774  COMMA_SOURCE_FILE ("instruction-error.galgas", 285))  COMMA_SOURCE_FILE ("instruction-error.galgas", 285)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_11345 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_9359.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_10436_exp = extractPtr_11345->mAssociatedValue0 ;
        const GALGAS_location extractedValue_10450_errorLocation = extractPtr_11345->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10710 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_10436_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10710, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)) ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_7 = test_6 ;
          if (kBoolTrue == test_7.boolEnum ()) {
            test_7 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_8 = test_7 ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_10710.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_5 = test_8.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_10450_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_10710.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 299)), fixItArray9  COMMA_SOURCE_FILE ("instruction-error.galgas", 299)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10710  COMMA_SOURCE_FILE ("instruction-error.galgas", 302))  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_12284 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_9359.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_11376_exp = extractPtr_12284->mAssociatedValue0 ;
        const GALGAS_location extractedValue_11390_errorLocation = extractPtr_12284->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11650 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_11376_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType (), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11650, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 304)) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          GALGAS_bool test_11 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringListType ())) ;
          if (kBoolTrue == test_11.boolEnum ()) {
            test_11 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringListType ())) ;
          }
          GALGAS_bool test_12 = test_11 ;
          if (kBoolTrue == test_12.boolEnum ()) {
            test_12 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringSetType ())) ;
          }
          GALGAS_bool test_13 = test_12 ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_11650.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())) ;
          }
          test_10 = test_13.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_11390_errorLocation, GALGAS_string ("expression type is @").add_operation (extensionGetter_definition (var_expression_11650.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 316)), fixItArray14  COMMA_SOURCE_FILE ("instruction-error.galgas", 316)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11650  COMMA_SOURCE_FILE ("instruction-error.galgas", 319))  COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
      }
      break ;
    }
    enumerator_9359.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (extensionGetter_definition (outArgument_outMessageExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 325)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 324)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_13454 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_13481 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_13513 ;
  {
  const GALGAS_errorInstructionAST temp_0 = this ;
  const GALGAS_errorInstructionAST temp_1 = this ;
  const GALGAS_errorInstructionAST temp_2 = this ;
  const GALGAS_errorInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_13454, var_messageExpression_13481, var_fixitListForGeneration_13513, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 341)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_13578 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 356)) ;
  const GALGAS_errorInstructionAST temp_4 = this ;
  cEnumerator_lstringlist enumerator_13609 (temp_4.readProperty_mBuiltVariableList (), kENUMERATION_UP) ;
  while (enumerator_13609.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13709 ;
    {
    GALGAS_unifiedTypeMapEntry joker_13692 ; // Joker input parameter
    GALGAS_string joker_13711 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_13609.current_mValue (HERE), joker_13692, var_varCppName_13709, joker_13711, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 358)) ;
    }
    var_builtVariableCppNameList_13578.addAssign_operation (var_varCppName_13709  COMMA_SOURCE_FILE ("instruction-error.galgas", 359)) ;
    enumerator_13609.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.readProperty_mInstructionLocation (), var_locationExpression_13454, var_messageExpression_13481, var_builtVariableCppNameList_13578, var_fixitListForGeneration_13513  COMMA_SOURCE_FILE ("instruction-error.galgas", 362))  COMMA_SOURCE_FILE ("instruction-error.galgas", 362)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@errorInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_17158 ;
  const GALGAS_errorInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17158, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 441)) ;
  GALGAS_string var_messageCppVarName_17365 ;
  const GALGAS_errorInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mErrorExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_17365, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)) ;
  GALGAS_string var_fixItArrayCppName_17622 ;
  const GALGAS_errorInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_17622, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 457)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 466)) COMMA_SOURCE_FILE ("instruction-error.galgas", 466)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (var_receiverCppVarName_17158, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 467)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (var_messageCppVarName_17365, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 468)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (var_fixItArrayCppName_17622, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 469)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 470)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 471)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 467)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = this ;
  cEnumerator_stringlist enumerator_17985 (temp_4.readProperty_mBuiltVariableCppNameList (), kENUMERATION_UP) ;
  while (enumerator_17985.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17985.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 474)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17985.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 475)) ;
    enumerator_17985.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_forInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhileExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  const GALGAS_forInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mBeforeInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 499)) ;
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mBetweenInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 500)) ;
  const GALGAS_forInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mDoInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 501)) ;
  const GALGAS_forInstructionAST temp_4 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.readProperty_mAfterInstructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 502)) ;
  const GALGAS_forInstructionAST temp_5 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_16543 (temp_5.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_16543.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((cPtr_abstractEnumeratedCollectionAST *) enumerator_16543.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 504)) ;
    enumerator_16543.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 515)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 521)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_enterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 527)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionImplicitVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionImplicitVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                              GALGAS_string & outArgument_outEnumeratorCppName,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 558)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 555)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfAnonymousEnumeration ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 564)).getter_string (SOURCE_FILE ("instruction-for.galgas", 564)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 564)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_19344 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 565)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_19344.getter_length (SOURCE_FILE ("instruction-for.galgas", 566)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 567)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 567)) ;
    }
  }
  GALGAS_string var_suggestion_19679 = GALGAS_string ("(") ;
  cEnumerator_enumerationDescriptorList enumerator_19725 (var_enumerationDescriptorList_19344, kENUMERATION_UP) ;
  while (enumerator_19725.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = this ;
    var_suggestion_19679.plusAssign_operation(temp_5.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19725.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 573)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 573)) ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = this ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_7 = this ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_19725.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_6.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_19725.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), temp_7.readProperty_mEndOfAnonymousEnumeration ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 576)), GALGAS_bool (true), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).add_operation (enumerator_19725.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578))  COMMA_SOURCE_FILE ("instruction-for.galgas", 574)) ;
    if (enumerator_19725.hasNextObject ()) {
      var_suggestion_19679.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 580)) ;
    }
    enumerator_19725.gotoNextObject () ;
  }
  var_suggestion_19679.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 582)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorAnomynousForInstructionEnumeratedObject.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      appendFixItActions (fixItArray10, kFixItReplace, var_suggestion_19679) ;
      inCompiler->emitSemanticError (temp_9.readProperty_mEndOfAnonymousEnumeration (), GALGAS_string ("anonymous 'for' enumerated object (due to '--error-anonymous-for-instruction' option)"), fixItArray10  COMMA_SOURCE_FILE ("instruction-for.galgas", 584)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionCstListInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                          GALGAS_string & outArgument_outEnumeratorCppName,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 604)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)).getter_string (SOURCE_FILE ("instruction-for.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 610)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_21343 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 611)).readProperty_mEnumerationDescriptor () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 612)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 613)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 613)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = this ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = this ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 616)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (temp_7.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 616)) COMMA_SOURCE_FILE ("instruction-for.galgas", 616)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_21757 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 617)).readProperty_mEnumerationDescriptor () ;
        cEnumerator_enumerationDescriptorList enumerator_21876 (var_currentTypedAttributeList_21757, kENUMERATION_UP) ;
        while (enumerator_21876.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = this ;
          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, GALGAS_lstring::constructor_new (enumerator_21876.current_mEnumerationName (HERE), temp_8.readProperty_mEndOfEnumerationExpression ()  COMMA_SOURCE_FILE ("instruction-for.galgas", 620)), enumerator_21876.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).add_operation (enumerator_21876.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 622)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)).add_operation (enumerator_21876.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 619)) ;
          }
          enumerator_21876.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = this ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = this ;
        test_9 = temp_10.readProperty_mEndsWithEllipsis ().operator_not (SOURCE_FILE ("instruction-for.galgas", 626)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 626)).objectCompare (var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 626)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 626)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 630)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = this ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 629)).getter_string (SOURCE_FILE ("instruction-for.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 628)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 629)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 629)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 630)).add_operation (temp_15.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 632)).getter_string (SOURCE_FILE ("instruction-for.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 631)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 627)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = this ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = this ;
          test_17 = temp_18.readProperty_mEndsWithEllipsis ().operator_and (GALGAS_bool (kIsStrictSup, temp_19.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 633)).objectCompare (var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 633)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 633)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = this ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 637)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = this ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 636)).getter_string (SOURCE_FILE ("instruction-for.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 635)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 636)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 636)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 637)).add_operation (temp_23.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 639)).getter_string (SOURCE_FILE ("instruction-for.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 638)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 634)) ;
          }
        }
        if (kBoolFalse == test_17) {
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            GALGAS_bool test_26 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_errorEllipsisInEnumeratedObject.readProperty_value ()) ;
            if (kBoolTrue == test_26.boolEnum ()) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_27 = this ;
              test_26 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 641)).objectCompare (temp_27.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 641)))) ;
            }
            test_25 = test_26.boolEnum () ;
            if (kBoolTrue == test_25) {
              const GALGAS_enumeratedCollectionCstListInExpAST temp_28 = this ;
              GALGAS_uint var_missingArgumentCount_23468 = var_enumerationDescriptorList_21343.getter_length (SOURCE_FILE ("instruction-for.galgas", 642)).substract_operation (temp_28.readProperty_mElementList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 642)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 642)) ;
              const GALGAS_enumeratedCollectionCstListInExpAST temp_29 = this ;
              TC_Array <C_FixItDescription> fixItArray30 ;
              GALGAS_string temp_31 ;
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, var_missingArgumentCount_23468.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
              if (kBoolTrue == test_32) {
                temp_31 = GALGAS_string ("*") ;
              }else if (kBoolFalse == test_32) {
                temp_31 = GALGAS_string (" ").add_operation (var_missingArgumentCount_23468.getter_string (SOURCE_FILE ("instruction-for.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 645)).add_operation (GALGAS_string ("*"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 645)) ;
              }
              appendFixItActions (fixItArray30, kFixItReplace, temp_31) ;
              inCompiler->emitSemanticError (temp_29.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("enumerated object ends with '...' (due to '--error-ellipsis-in-for-instruction' option)"), fixItArray30  COMMA_SOURCE_FILE ("instruction-for.galgas", 643)) ;
            }
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_33 = this ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_23866 (temp_33.readProperty_mElementList (), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_23923 (var_enumerationDescriptorList_21343, kENUMERATION_UP) ;
          while (enumerator_23866.hasCurrentObject () && enumerator_23923.hasCurrentObject ()) {
            enumGalgasBool test_34 = kBoolTrue ;
            if (kBoolTrue == test_34) {
              test_34 = GALGAS_bool (kIsNotEqual, enumerator_23866.current_mOptionalConstantName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_34) {
                enumGalgasBool test_35 = kBoolTrue ;
                if (kBoolTrue == test_35) {
                  test_35 = GALGAS_bool (kIsNotEqual, enumerator_23866.current_mOptionalTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_35) {
                    GALGAS_unifiedTypeMapEntry var_foundType_24106 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_23866.current_mOptionalTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 650)) ;
                    enumGalgasBool test_36 = kBoolTrue ;
                    if (kBoolTrue == test_36) {
                      test_36 = GALGAS_bool (kIsNotEqual, var_foundType_24106.objectCompare (enumerator_23923.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_36) {
                        TC_Array <C_FixItDescription> fixItArray37 ;
                        inCompiler->emitSemanticError (enumerator_23866.current_mOptionalTypeName (HERE).readProperty_location (), GALGAS_string ("incorrect '@").add_operation (extensionGetter_definition (var_foundType_24106, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).add_operation (extensionGetter_definition (enumerator_23923.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 652)), fixItArray37  COMMA_SOURCE_FILE ("instruction-for.galgas", 652)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_23923.current_mEnumeratedType (HERE), enumerator_23866.current_mOptionalConstantName (HERE), enumerator_23866.current_mDeclaredAsUnused (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)).add_operation (enumerator_23923.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 659))  COMMA_SOURCE_FILE ("instruction-for.galgas", 655)) ;
              }
            }
            enumerator_23866.gotoNextObject () ;
            enumerator_23923.gotoNextObject () ;
          }
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumeratedCollectionVarInExpAST analyzeEnumeration'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionVarInExpAST::method_analyzeEnumeration (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                      GALGAS_localConstantList & ioArgument_ioLocalConstantListForDoBranch,
                                                                      GALGAS_string & outArgument_outEnumeratorCppName,
                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mEnumeratedExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 680)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = this ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.readProperty_mEndOfEnumerationExpression ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 686)).getter_string (SOURCE_FILE ("instruction-for.galgas", 686)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 686)) ;
  GALGAS_unifiedTypeMapEntry var_enumeratedElementType_25656 = extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 687)).readProperty_mTypeForEnumeratedElement () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_25656.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 688)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfEnumerationExpression (), GALGAS_string ("an '@").add_operation (extensionGetter_definition (outArgument_outEnumerationExpression.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 689)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 689)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_6 = this ;
      test_5 = GALGAS_bool (kIsNotEqual, temp_6.readProperty_mEnumerationVariable ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_enumeratedCollectionVarInExpAST temp_7 = this ;
        ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_25656, temp_7.readProperty_mEnumerationVariable (), GALGAS_bool (false), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 691))  COMMA_SOURCE_FILE ("instruction-for.galgas", 691)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mEnumerationOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_10 = this ;
      GALGAS_unifiedTypeMapEntry var_explicitType_26232 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_10.readProperty_mEnumerationOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 695)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_enumeratedElementType_25656, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (var_explicitType_26232, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_12 = this ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mEnumerationOptionalTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_enumeratedElementType_25656, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 697)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 697)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 697)), fixItArray13  COMMA_SOURCE_FILE ("instruction-for.galgas", 697)) ;
        }
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 714)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 715)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 717)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_27669 ;
  {
  const GALGAS_forInstructionAST temp_0 = this ;
  const GALGAS_forInstructionAST temp_1 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 723)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 724)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 725)), temp_0.readProperty_mBeforeInstructionList (), temp_1.readProperty_mEndOf_5F_before_5F_branch (), ioArgument_ioVariableMap, var_before_5F_instructionList_27669, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 718)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_2.readProperty_mEndOf_5F_before_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 731)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 733)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_28197 ;
  {
  const GALGAS_forInstructionAST temp_3 = this ;
  const GALGAS_forInstructionAST temp_4 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 739)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 740)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 741)), temp_3.readProperty_mBetweenInstructionList (), temp_4.readProperty_mEndOf_5F_between_5F_branch (), ioArgument_ioVariableMap, var_between_5F_instructionList_28197, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 734)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOf_5F_between_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 747)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 749)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_28756 ;
  {
  const GALGAS_forInstructionAST temp_6 = this ;
  const GALGAS_forInstructionAST temp_7 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 755)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 756)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 757)), temp_6.readProperty_mAfterInstructionList (), temp_7.readProperty_mEndOf_5F_after_5F_branch (), ioArgument_ioVariableMap, var_after_5F_instructionList_28756, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 750)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOf_5F_after_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 763)) ;
  }
  GALGAS_localConstantList var_localConstantListForDoBranch_28906 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 765)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_28982 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 766)) ;
  const GALGAS_forInstructionAST temp_9 = this ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_29027 (temp_9.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_29027.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_29294 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_29360 ;
    callExtensionMethod_analyzeEnumeration ((cPtr_abstractEnumeratedCollectionAST *) enumerator_29027.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_28906, var_enumeratorCppName_29294, var_enumerationExpression_29360, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 768)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_29027.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_28982.addAssign_operation (temp_10, var_enumerationExpression_29360, var_enumeratorCppName_29294  COMMA_SOURCE_FILE ("instruction-for.galgas", 778)) ;
    enumerator_29027.gotoNextObject () ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 784)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 785)) ;
  }
  cEnumerator_localConstantList enumerator_29684 (var_localConstantListForDoBranch_28906, kENUMERATION_UP) ;
  while (enumerator_29684.hasCurrentObject ()) {
    {
    extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_29684.current (HERE).readProperty_mName (), enumerator_29684.current (HERE).readProperty_mType (), enumerator_29684.current (HERE).readProperty_mCppName (), enumerator_29684.current (HERE).readProperty_mCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 788)) ;
    }
    enumerator_29684.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_30126 ;
  const GALGAS_forInstructionAST temp_12 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_12.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 799)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_30126, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 796)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_30304 ;
  {
  const GALGAS_forInstructionAST temp_13 = this ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.readProperty_mEndOf_5F_while_5F_expression (), var_uncheckedWhileExpression_30126, var_whileExpression_30304, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 804)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_14.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 811)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_15.readProperty_mEndOf_5F_while_5F_expression (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 812)) ;
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
  }
  GALGAS_string var_indexCppName_30531 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = this ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = this ;
      var_indexCppName_30531 = GALGAS_string ("index_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 817)).getter_string (SOURCE_FILE ("instruction-for.galgas", 817)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 817)) ;
      const GALGAS_forInstructionAST temp_19 = this ;
      var_localConstantListForDoBranch_28906.addAssign_operation (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), temp_19.readProperty_mIndexVariableName (), GALGAS_bool (false), var_indexCppName_30531  COMMA_SOURCE_FILE ("instruction-for.galgas", 818)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_31272 ;
  {
  const GALGAS_forInstructionAST temp_20 = this ;
  const GALGAS_forInstructionAST temp_21 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantListForDoBranch_28906, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 831)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 832)), temp_20.readProperty_mDoInstructionList (), temp_21.readProperty_mEndOf_5F_do_5F_branch (), ioArgument_ioVariableMap, var_do_5F_instructionList_31272, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 825)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 839)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_23.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 841)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_foreach_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 842)) ;
  }
  const GALGAS_forInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_enumerationList_28982, var_indexCppName_30531, var_whileExpression_30304, var_before_5F_instructionList_27669, var_between_5F_instructionList_28197, var_do_5F_instructionList_31272, var_after_5F_instructionList_28756  COMMA_SOURCE_FILE ("instruction-for.galgas", 844))  COMMA_SOURCE_FILE ("instruction-for.galgas", 844)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@forInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_enumerationVarCppNameList_33639 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 890)) ;
  const GALGAS_forInstructionForGeneration temp_0 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_33677 (temp_0.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  while (enumerator_33677.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_33898 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_33677.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_33898, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 892)) ;
    var_enumerationVarCppNameList_33639.addAssign_operation (var_enumerationVar_33898  COMMA_SOURCE_FILE ("instruction-for.galgas", 899)) ;
    enumerator_33677.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = this ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_34025 (temp_1.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_34065 (var_enumerationVarCppNameList_33639, kENUMERATION_UP) ;
  while (enumerator_34025.hasCurrentObject () && enumerator_34065.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (extensionGetter_identifierRepresentation (enumerator_34025.current_mEnumeratedExpression (HERE).readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 902)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 902)).add_operation (enumerator_34025.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)).add_operation (enumerator_34065.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 903)).add_operation (enumerator_34025.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 904)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 902)) ;
    enumerator_34025.gotoNextObject () ;
    enumerator_34065.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = this ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_34377 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mWhileExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 907)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = this ;
    const GALGAS_forInstructionForGeneration temp_5 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_mBeforeInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 909)).add_operation (temp_5.readProperty_mAfterInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 909)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 909)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_or (var_whileExpressionIsAllwaysTrue_34377.operator_not (SOURCE_FILE ("instruction-for.galgas", 909)) COMMA_SOURCE_FILE ("instruction-for.galgas", 909)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = this ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 912)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 912)) ;
        }
      }
      GALGAS_string var_boolVarCppName_34812 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 914)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 914)) ;
      ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 915)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_34377.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_34812, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 917)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 917)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_35167 ;
        const GALGAS_forInstructionForGeneration temp_10 = this ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_10.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_35167, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 919)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_34812, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)).add_operation (var_whileVar_35167, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 920)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 920)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 922)) ;
      const GALGAS_forInstructionForGeneration temp_11 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35334 (temp_11.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35334.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35334.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 924)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 924)) ;
        enumerator_35334.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34812.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 926)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 926)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.readProperty_mBeforeInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 927)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 935)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 936)) ;
      const GALGAS_forInstructionForGeneration temp_13 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_35839 (temp_13.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_35839.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_35839.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 938)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 938)) ;
        enumerator_35839.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34812.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 940)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 940)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 942)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = this ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36322 (temp_15.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
      while (enumerator_36322.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_36322.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 952)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 952)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 952)) ;
        enumerator_36322.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = this ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 955)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 955)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 955)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_34377.operator_not (SOURCE_FILE ("instruction-for.galgas", 958)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 959)) ;
          const GALGAS_forInstructionForGeneration temp_20 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_36723 (temp_20.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_36723.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_36723.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 961)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 961)) ;
            if (enumerator_36723.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 962)) ;
            }
            enumerator_36723.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 964)) ;
          GALGAS_string var_whileVar_37103 ;
          const GALGAS_forInstructionForGeneration temp_21 = this ;
          callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_21.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_37103, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 965)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_34812, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)).add_operation (var_whileVar_37103, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 972)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 972)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 973)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = this ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 976)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 977)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 978)) ;
          const GALGAS_forInstructionForGeneration temp_24 = this ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_37449 (temp_24.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
          while (enumerator_37449.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_37449.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 980)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 980)) ;
            enumerator_37449.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_34812.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 982)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 982)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = this ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 983)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 991)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 992)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 995)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 997)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.readProperty_mAfterInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 998)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1006)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = this ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1009)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1009)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1009)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1011)) ;
    const GALGAS_forInstructionForGeneration temp_30 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_38646 (temp_30.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_38646.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_38646.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1013)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1013)) ;
      if (enumerator_38646.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1014)) ;
      }
      enumerator_38646.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1016)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = this ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.readProperty_mDoInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1018)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = this ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.readProperty_mBetweenInstructionList ().getter_length (SOURCE_FILE ("instruction-for.galgas", 1027)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1028)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1029)) ;
        const GALGAS_forInstructionForGeneration temp_34 = this ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39294 (temp_34.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
        while (enumerator_39294.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_39294.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1031)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1031)) ;
          if (enumerator_39294.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1032)) ;
          }
          enumerator_39294.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1034)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = this ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.readProperty_mBetweenInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1035)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1043)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1044)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = this ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_39882 (temp_36.readProperty_mEnumeratedObjectList (), kENUMERATION_UP) ;
    while (enumerator_39882.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_39882.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1048)) ;
      enumerator_39882.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = this ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.readProperty_mIndexVariableCppName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1051)) COMMA_SOURCE_FILE ("instruction-for.galgas", 1051)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = this ;
        const GALGAS_forInstructionForGeneration temp_40 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.readProperty_mIndexVariableCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)).add_operation (extensionGetter_commaSourceFile (temp_40.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 1053)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1052)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 1055)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_15320 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15320.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_15320.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
    enumerator_15320.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 354)) ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_15776 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15776.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_15776.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 356)) ;
    enumerator_15776.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInFileInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInFileInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_16551 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 372)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_16551 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 373)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_16868 ;
  GALGAS_bool var_hasTranslateFeature_16910 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = this ;
  GALGAS_bool joker_16874 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_16868, joker_16874, var_hasTranslateFeature_16910, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 375)) ;
  GALGAS_formalParameterSignature var_labelSignature_17032 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = this ;
  var_grammarLabelMap_16868.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_17032, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 382)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_17482 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = this ;
  const GALGAS_grammarInFileInstructionAST temp_4 = this ;
  const GALGAS_grammarInFileInstructionAST temp_5 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)), var_labelSignature_17032, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_17482, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 387)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_17777 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 403)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_17777, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 400)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_17777.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_17777.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 412)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 411)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 412)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 410)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_18270 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)) ;
  GALGAS_stringlist var_assignementList_18383 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 416)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_16910, var_syntaxDirectedTranslationResultVarName_18270, var_assignementList_18383, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 417)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = this ;
  const GALGAS_grammarInFileInstructionAST temp_13 = this ;
  const GALGAS_grammarInFileInstructionAST temp_14 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mGrammarComponentName ().readProperty_string (), temp_14.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_17777, var_actualParameterListForGeneration_17482, var_hasTranslateFeature_16910, var_assignementList_18383, var_syntaxDirectedTranslationResultVarName_18270  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInStringInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInStringInstructionAST temp_0 = this ;
  GALGAS_lstring var_grammarUsefulnessName_19540 = function_grammarNameForUsefulEntitiesGraph (temp_0.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 447)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_19540 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 448)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_19864 ;
  GALGAS_bool var_hasTranslateFeature_19906 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = this ;
  GALGAS_bool joker_19870 ; // Joker input parameter
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mGrammarMap ().method_searchKey (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_19864, joker_19870, var_hasTranslateFeature_19906, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 450)) ;
  GALGAS_formalParameterSignature var_labelSignature_20028 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = this ;
  var_grammarLabelMap_19864.method_searchKey (temp_2.readProperty_mLabelName (), var_labelSignature_20028, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 457)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_20478 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = this ;
  const GALGAS_grammarInStringInstructionAST temp_4 = this ;
  const GALGAS_grammarInStringInstructionAST temp_5 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.readProperty_mLabelName (), GALGAS_string ("label of the ").add_operation (temp_4.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 467)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 467)), var_labelSignature_20028, temp_5.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_20478, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 462)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_20773 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_6.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 478)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_20773, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 475)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_20773.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfSourceExpression (), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_20773.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 487)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 486)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 487)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 485)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_21401 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_10.readProperty_mNameExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 493)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_21401, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 490)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_21401.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfNameExpression (), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (extensionGetter_definition (var_sourceExpression_20773.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = this ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_21837 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.readProperty_mGrammarComponentName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)) ;
  GALGAS_stringlist var_assignementList_21950 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 506)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = this ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_19906, var_syntaxDirectedTranslationResultVarName_21837, var_assignementList_21950, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = this ;
  const GALGAS_grammarInStringInstructionAST temp_17 = this ;
  const GALGAS_grammarInStringInstructionAST temp_18 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.readProperty_mInstructionLocation (), temp_17.readProperty_mGrammarComponentName ().readProperty_string (), temp_18.readProperty_mLabelName ().readProperty_string (), var_sourceExpression_20773, var_nameExpression_21401, var_actualParameterListForGeneration_20478, var_hasTranslateFeature_19906, var_assignementList_21950, var_syntaxDirectedTranslationResultVarName_21837  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 515))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 515)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceFileForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 552))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 552)) ;
  GALGAS_string var_sourceVar_24104 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceFileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_24104, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 554)) ;
  GALGAS_stringlist var_parameterCppNameList_24157 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 562)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_24211 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 563)) ;
  GALGAS_stringlist var_inputVariableList_24254 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 564)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_24297 (temp_2.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_24297.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_24606 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_24297.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_24211, var_inputVariableList_24254, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_24606, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 566)) ;
    var_parameterCppNameList_24157.addAssign_operation (var_parameterCppName_24606  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 575)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_24297.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_24606.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 577)) ;
      }
    }
    enumerator_24297.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionWithSourceFileForGeneration temp_6 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_6.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 581)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 581)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_7 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_9 = this ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = temp_9.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_11) {
    const GALGAS_grammarInstructionWithSourceFileForGeneration temp_12 = this ;
    temp_10 = temp_12.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 587)) ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583)).add_operation (temp_8.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 584)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 585)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 586)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 586)).add_operation (var_sourceVar_24104, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 587)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 583)) ;
  cEnumerator_stringlist enumerator_25389 (var_parameterCppNameList_24157, kENUMERATION_UP) ;
  while (enumerator_25389.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_25389.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 590)) ;
    enumerator_25389.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 592)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 593)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = this ;
  cEnumerator_stringlist enumerator_25647 (temp_14.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_25647.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25647.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 595)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 595)) ;
    enumerator_25647.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 623)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 623)) ;
  GALGAS_string var_sourceVar_27296 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_27296, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 625)) ;
  GALGAS_string var_nameVar_27514 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mNameStringExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_27514, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 633)) ;
  GALGAS_stringlist var_parameterCppNameList_27567 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 641)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_27621 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 642)) ;
  GALGAS_stringlist var_inputVariableList_27664 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 643)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_27707 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_27707.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_28023 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_27707.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_27621, var_inputVariableList_27664, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_28023, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 645)) ;
    var_parameterCppNameList_27567.addAssign_operation (var_parameterCppName_28023  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 654)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_27707.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_28023.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 656)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 656)) ;
      }
    }
    enumerator_27707.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_7 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (temp_7.readProperty_mSyntaxDirectedTranslationResultVarName (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 660)) ;
    }
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_8 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_9 = this ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_10 = this ;
  GALGAS_string temp_11 ;
  const enumGalgasBool test_12 = temp_10.readProperty_mGrammarHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_12) {
    const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_13 = this ;
    temp_11 = temp_13.readProperty_mSyntaxDirectedTranslationResultVarName ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 665)) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.readProperty_mGrammarName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)).add_operation (temp_9.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 663)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 664)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 664)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 664)).add_operation (var_sourceVar_27296, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 665)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 666)).add_operation (var_nameVar_27514, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 667)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 662)) ;
  cEnumerator_stringlist enumerator_28825 (var_parameterCppNameList_27567, kENUMERATION_UP) ;
  while (enumerator_28825.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_28825.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 669)) ;
    enumerator_28825.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 671)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 672)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = this ;
  cEnumerator_stringlist enumerator_29083 (temp_15.readProperty_mAssignementList (), kENUMERATION_UP) ;
  while (enumerator_29083.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29083.current (HERE).readProperty_mValue ().add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 674)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 674)) ;
    enumerator_29083.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_9387 ;
  GALGAS_string var_targetVariableCppName_9423 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_9574 ;
        GALGAS_bool var_selfIsMutable_9602 ;
        GALGAS_bool var_mutableProperties_9644 ;
        const bool optionalResult9554 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9574, var_selfIsMutable_9602, var_mutableProperties_9644) ;
        if (!optionalResult9554) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_selfIsMutable_9602.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 291)).boolEnum () ;
            if (kBoolTrue == test_3) {
              const GALGAS_incDecInstructionAST temp_4 = this ;
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (temp_4.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 292)) ;
            }
          }
          GALGAS_propertyMap var_propertyMap_9793 = extensionGetter_definition (var_selfType_9574, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 294)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_9898 ;
          const GALGAS_incDecInstructionAST temp_6 = this ;
          GALGAS_bool joker_9881 ; // Joker input parameter
          var_propertyMap_9793.method_searchKey (temp_6.readProperty_mReceiverName (), joker_9881, var_isConstant_9898, var_targetType_9387, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 295)) ;
          const GALGAS_incDecInstructionAST temp_7 = this ;
          var_targetVariableCppName_9423 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 297)).add_operation (temp_7.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 298)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_9898.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_incDecInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 300)) ;
            }
          }
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = var_mutableProperties_9644.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 302)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_incDecInstructionAST temp_12 = this ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be mutated in this constant"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 303)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_incDecInstructionAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray15  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 306)) ;
        var_targetType_9387.drop () ; // Release error dropped variable
        var_targetVariableCppName_9423.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_16 = this ;
    GALGAS_string joker_11672 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_16.readProperty_mReceiverName (), var_targetType_9387, var_targetVariableCppName_9423, joker_11672, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 328)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = this ;
  cEnumerator_lstringlist enumerator_11744 (temp_17.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11744.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_11797 = extensionGetter_definition (var_targetType_9387, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 337)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_11885 ;
    GALGAS_bool var_isConstant_11901 ;
    var_propertyMap_11797.method_searchKey (enumerator_11744.current_mValue (HERE), var_isPublic_11885, var_isConstant_11901, var_targetType_9387, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 338)) ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_isPublic_11885.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 339)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_11744.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray19  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 340)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = var_isConstant_11901.boolEnum () ;
      if (kBoolTrue == test_20) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_11744.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray21  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 343)) ;
      }
    }
    enumerator_11744.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = extensionGetter_definition (var_targetType_9387, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 347)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 347)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 347)).boolEnum () ;
    if (kBoolTrue == test_22) {
      const GALGAS_incDecInstructionAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_9387, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 349)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 349)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 349)), fixItArray24  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 348)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_25 = this ;
  const GALGAS_incDecInstructionAST temp_26 = this ;
  const GALGAS_incDecInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_25.readProperty_mInstructionLocation (), var_targetVariableCppName_9423, var_targetType_9387, temp_26.readProperty_mStructAttributeList (), temp_27.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 352))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 352)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_targetType_13254 ;
  GALGAS_string var_targetVariableCppName_13357 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = this ;
  GALGAS_string joker_13359 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mReceiverName (), var_targetType_13254, var_targetVariableCppName_13357, joker_13359, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_13375 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13375.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_13428 = extensionGetter_definition (var_targetType_13254, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 375)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_13516 ;
    GALGAS_bool var_isConstant_13532 ;
    var_propertyMap_13428.method_searchKey (enumerator_13375.current_mValue (HERE), var_isPublic_13516, var_isConstant_13532, var_targetType_13254, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_13516.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 377)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_13375.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isConstant_13532.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_13375.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 381)) ;
      }
    }
    enumerator_13375.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = extensionGetter_definition (var_targetType_13254, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 385)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 385)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_incDecNoOVFInstructionAST temp_7 = this ;
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_targetType_13254, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 387)), fixItArray8  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 386)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_9 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_10 = this ;
  const GALGAS_incDecNoOVFInstructionAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_targetVariableCppName_13357, var_targetType_13254, temp_10.readProperty_mStructAttributeList (), temp_11.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 390))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 390)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecNoOVFInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_14898 ;
    GALGAS_bool var_selfIsMutable_14926 ;
    GALGAS_bool var_unused_0_14948 ;
    const bool optionalResult14878 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14898, var_selfIsMutable_14926, var_unused_0_14948) ;
    if (!optionalResult14878) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14926.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 410)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 411)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_14898, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 414)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 414)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 414)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecNoOVFInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_14898, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 416)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 416)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 416)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 415)) ;
        }
      }
      const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecNoOVFInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_14898, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 423)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 419))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 419)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecNoOVFInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 427)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfIncDecInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                       GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_16312 ;
    GALGAS_bool var_selfIsMutable_16340 ;
    GALGAS_bool var_unused_0_16362 ;
    const bool optionalResult16292 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16312, var_selfIsMutable_16340, var_unused_0_16362) ;
    if (!optionalResult16292) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_16340.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 442)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfIncDecInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 443)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_16312, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 446)).readProperty_mHandledOperatorFlags ().getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 446)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 446)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfIncDecInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_16312, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 448)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 447)) ;
        }
      }
      const GALGAS_selfIncDecInstructionAST temp_7 = this ;
      const GALGAS_selfIncDecInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_16312, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 455)), temp_8.readProperty_mKind ()  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 451))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 451)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfIncDecInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 459)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 495)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_18606 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_18644 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18644.hasCurrentObject ()) {
    var_receiverCppName_18606.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_18644.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 498)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 498)) ;
    enumerator_18644.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_18606.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)).add_operation (extensionGetter_commaSourceFile (temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 504)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 503)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 505)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 505)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_18606.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 507)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 507)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 507)).add_operation (extensionGetter_commaSourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 508)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 508)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 508)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 507)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 509)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 509)) ;
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@incDecNoOVFInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_incDecNoOVFInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mReceiverCppName () COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 523)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = this ;
  GALGAS_string var_receiverCppName_19842 = temp_1.readProperty_mReceiverCppName () ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_19880 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_19880.hasCurrentObject ()) {
    var_receiverCppName_19842.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_19880.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 526)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 526)) ;
    enumerator_19880.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19842.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 531)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 531)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_19842.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 533)) ;
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_12832 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_12832.hasCurrentObject ()) {
    switch (enumerator_12832.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_12964 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_12832.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12904_exp = extractPtr_12964->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_12904_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 367)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_13110 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_12832.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_12987_exp = extractPtr_13110->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_13007_typeName = extractPtr_13110->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_12987_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 369)) ;
        {
        GALGAS_unifiedTypeMapEntry joker_13108 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_13007_typeName, joker_13108, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 370)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_13552 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_12832.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_13158_receiverExpression = extractPtr_13552->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_13171_parameters = extractPtr_13552->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13158_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 372)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_13269 (extractedValue_13171_parameters, kENUMERATION_UP) ;
        while (enumerator_13269.hasCurrentObject ()) {
          switch (enumerator_13269.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_13423 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_13269.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_13350_expression = extractPtr_13423->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_13350_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 376)) ;
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
          enumerator_13269.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_12832.gotoNextObject () ;
  }
  const GALGAS_ifInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 384)) ;
  const GALGAS_ifInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 385)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration var_testListForGeneration_15077 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 423)) ;
  const GALGAS_ifInstructionAST temp_0 = this ;
  cEnumerator_ifExpressionList enumerator_15100 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_15100.hasCurrentObject ()) {
    switch (enumerator_15100.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_15719 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_15100.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_15172_exp = extractPtr_15719->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_15399 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_15172_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 430)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_15399, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 427)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_15562 ;
        {
        const GALGAS_ifInstructionAST temp_1 = this ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.readProperty_mEndOf_5F_if_5F_instruction (), var_analyzed_5F_if_5F_expression_15399, var_if_5F_expression_15562, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 435)) ;
        }
        var_testListForGeneration_15077.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_15562  COMMA_SOURCE_FILE ("instruction-if.galgas", 441))  COMMA_SOURCE_FILE ("instruction-if.galgas", 441)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 442)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 443)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_19396 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_15100.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_15749_constantName = extractPtr_19396->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_15753_exp = extractPtr_19396->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_15773_typeName = extractPtr_19396->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_15996 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_15753_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 448)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_15996, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 445)) ;
        GALGAS_unifiedTypeMapEntry var_castType_16053 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 454)) ;
        GALGAS_unifiedTypeMapEntry var_testType_16100 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 455)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extensionGetter_definition (var_analyzedExpression_15996.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 457)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 457)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_15773_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_15773_typeName.readProperty_location (), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 459)) ;
                var_castType_16053.drop () ; // Release error dropped variable
                var_testType_16100.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_16053 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15773_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 461)) ;
              var_testType_16100 = var_castType_16053 ;
              GALGAS_unifiedTypeMapEntry var_t_16621 = var_castType_16053 ;
              GALGAS_bool var_found_16658 = GALGAS_bool (kIsEqual, var_t_16621.objectCompare (var_analyzedExpression_15996.readProperty_mResultType ())) ;
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 466)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).isValid ()) {
                uint32_t variant_16711 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 466)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 466)).uintValue () ;
                bool loop_16711 = true ;
                while (loop_16711) {
                  loop_16711 = var_found_16658.operator_not (SOURCE_FILE ("instruction-if.galgas", 467)).operator_and (extensionGetter_definition (var_t_16621, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 467)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 467)).operator_not (SOURCE_FILE ("instruction-if.galgas", 467)) COMMA_SOURCE_FILE ("instruction-if.galgas", 467)).isValid () ;
                  if (loop_16711) {
                    loop_16711 = var_found_16658.operator_not (SOURCE_FILE ("instruction-if.galgas", 467)).operator_and (extensionGetter_definition (var_t_16621, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 467)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 467)).operator_not (SOURCE_FILE ("instruction-if.galgas", 467)) COMMA_SOURCE_FILE ("instruction-if.galgas", 467)).boolValue () ;
                  }
                  if (loop_16711 && (0 == variant_16711)) {
                    loop_16711 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 466)) ;
                  }
                  if (loop_16711) {
                    variant_16711 -- ;
                    var_t_16621 = extensionGetter_definition (var_t_16621, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 468)).readProperty_mSuperType () ;
                    var_found_16658 = GALGAS_bool (kIsEqual, var_t_16621.objectCompare (var_analyzedExpression_15996.readProperty_mResultType ())) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_16658.operator_not (SOURCE_FILE ("instruction-if.galgas", 471)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_15773_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extractedValue_15773_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 473)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 473)).add_operation (extensionGetter_definition (var_analyzedExpression_15996.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 473)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 473)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 473)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 472)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMapEntry var_classType_17343 ;
            const bool optionalResult17313 = extensionGetter_definition (var_analyzedExpression_15996.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)).readProperty_mTypeKindEnum ().optional_weakReferenceType (var_classType_17343) ;
            if (!optionalResult17313) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_15773_typeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_16053 = var_classType_17343 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_16053 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), extractedValue_15773_typeName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 481)) ;
              }
              var_testType_16100 = var_castType_16053 ;
              GALGAS_unifiedTypeMapEntry var_t_17593 = var_castType_16053 ;
              GALGAS_bool var_found_17628 = GALGAS_bool (kIsEqual, var_t_17593.objectCompare (var_analyzedExpression_15996.readProperty_mResultType ())) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_17628.boolEnum () ;
                if (kBoolTrue == test_9) {
                  extensionGetter_definition (var_castType_16053, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 487)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16100, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 487)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_17593.objectCompare (var_classType_17343)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_17628 = GALGAS_bool (true) ;
                  }
                }
              }
              if (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 491)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 491)).isValid ()) {
                uint32_t variant_17861 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap ().getter_count (SOURCE_FILE ("instruction-if.galgas", 491)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 491)).uintValue () ;
                bool loop_17861 = true ;
                while (loop_17861) {
                  loop_17861 = var_found_17628.operator_not (SOURCE_FILE ("instruction-if.galgas", 492)).operator_and (extensionGetter_definition (var_t_17593, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 492)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 492)).operator_not (SOURCE_FILE ("instruction-if.galgas", 492)) COMMA_SOURCE_FILE ("instruction-if.galgas", 492)).isValid () ;
                  if (loop_17861) {
                    loop_17861 = var_found_17628.operator_not (SOURCE_FILE ("instruction-if.galgas", 492)).operator_and (extensionGetter_definition (var_t_17593, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 492)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-if.galgas", 492)).operator_not (SOURCE_FILE ("instruction-if.galgas", 492)) COMMA_SOURCE_FILE ("instruction-if.galgas", 492)).boolValue () ;
                  }
                  if (loop_17861 && (0 == variant_17861)) {
                    loop_17861 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 491)) ;
                  }
                  if (loop_17861) {
                    variant_17861 -- ;
                    var_t_17593 = extensionGetter_definition (var_t_17593, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 493)).readProperty_mSuperType () ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_17593.objectCompare (var_analyzedExpression_15996.readProperty_mResultType ())).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_17628 = GALGAS_bool (true) ;
                        extensionGetter_definition (var_castType_16053, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)).readProperty_mTypeKindEnum ().method_weakReferenceType (var_testType_16100, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 496)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_17593.objectCompare (var_classType_17343)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_17628 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_17628.operator_not (SOURCE_FILE ("instruction-if.galgas", 501)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_15773_typeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_castType_16053, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (extensionGetter_definition (var_analyzedExpression_15996.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 502)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_15996.readProperty_mLocation (), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_15996.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 506)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 506)) ;
          }
        }
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 509)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 510)) ;
        }
        GALGAS_string var_targetVariableCppName_18871 = GALGAS_string ("var_").add_operation (extractedValue_15749_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 511)).add_operation (extractedValue_15749_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)).getter_string (SOURCE_FILE ("instruction-if.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 512)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, extractedValue_15749_constantName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_15749_constantName, var_castType_16053, var_targetVariableCppName_18871, var_targetVariableCppName_18871, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 514)) ;
            }
          }
        }
        var_testListForGeneration_15077.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_18871, var_analyzedExpression_15996, var_castType_16053, var_testType_16100  COMMA_SOURCE_FILE ("instruction-if.galgas", 521))  COMMA_SOURCE_FILE ("instruction-if.galgas", 521)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_19793 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_15100.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_19444_receiverExpression = extractPtr_19793->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_19463_optionalMethodName = extractPtr_19793->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_19474_parameters = extractPtr_19793->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_19444_receiverExpression, extractedValue_19463_optionalMethodName, extractedValue_19474_parameters, var_testListForGeneration_15077, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 528)) ;
        }
      }
      break ;
    }
    enumerator_15100.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_20195 ;
  {
  const GALGAS_ifInstructionAST temp_17 = this ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 546)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 547)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 548)), temp_17.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioVariableMap, var_then_5F_instructionList_20195, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 541)) ;
  }
  const GALGAS_ifInstructionAST temp_18 = this ;
  GALGAS_ifExpressionList var_expressions_20217 = temp_18.readProperty_mExpressions () ;
  {
  GALGAS_ifExpressionKind joker_20264 ; // Joker input parameter
  var_expressions_20217.setter_popLast (joker_20264, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 554)) ;
  }
  cEnumerator_ifExpressionList enumerator_20275 (var_expressions_20217, kENUMERATION_UP) ;
  while (enumerator_20275.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_19 = this ;
    extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_19.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 556)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_20 = this ;
    extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_20.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 557)) ;
    }
    enumerator_20275.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_21 = this ;
  extensionSetter_closeBranch (ioArgument_ioVariableMap, temp_21.readProperty_mEndOf_5F_then_5F_branch (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 559)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_20884 ;
  {
  const GALGAS_ifInstructionAST temp_22 = this ;
  const GALGAS_ifInstructionAST temp_23 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 566)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 567)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 568)), temp_22.readProperty_m_5F_else_5F_instructionList (), temp_23.readProperty_mEndOf_5F_if_5F_instruction (), ioArgument_ioVariableMap, var_else_5F_instructionList_20884, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 561)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_24 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_24.readProperty_mEndOf_5F_if_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 574)) ;
  }
  const GALGAS_ifInstructionAST temp_25 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_25.readProperty_mEndOf_5F_then_5F_branch (), var_testListForGeneration_15077, var_then_5F_instructionList_20195, var_else_5F_instructionList_20884  COMMA_SOURCE_FILE ("instruction-if.galgas", 576))  COMMA_SOURCE_FILE ("instruction-if.galgas", 576)) ;
}
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_22437 ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 600)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_22437, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 597)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 605)) ;
  }
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 606)) ;
  }
  GALGAS_unifiedTypeMapEntry var_receiverType_22588 = var_receiverExpression_22437.readProperty_mResultType () ;
  GALGAS_optionalMethodMap var_optionalMethodMap_22664 = extensionGetter_definition (var_receiverType_22588, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 609)).readProperty_mOptionalMethodMap () ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_22794 ;
  const cMapElement_optionalMethodMap * objectArray_22801 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_22664.readAccessForWithInstruction (constinArgument_inOptionalMethodName.readProperty_string ()) ;
  if (NULL != objectArray_22801) {
      macroValidSharedObject (objectArray_22801, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_22794 = objectArray_22801->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_22918 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_23003 (var_optionalMethodMap_22664, kENUMERATION_UP) ;
    while (enumerator_23003.hasCurrentObject ()) {
      var_s_22918.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_23003.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 617)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 617)) ;
      enumerator_23003.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), var_s_22918, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 619)) ;
    var_optionalMethodSignature_22794.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 622)).objectCompare (var_optionalMethodSignature_22794.getter_length (SOURCE_FILE ("instruction-if.galgas", 622)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.readProperty_location (), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 624)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 624)).add_operation (extensionGetter_definition (var_receiverType_22588, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 624)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 624)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 624)).add_operation (var_optionalMethodSignature_22794.getter_length (SOURCE_FILE ("instruction-if.galgas", 625)).getter_string (SOURCE_FILE ("instruction-if.galgas", 624)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 624)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 626)).getter_string (SOURCE_FILE ("instruction-if.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 626)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 623)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_23650 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 628)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_23695 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_23758 (var_optionalMethodSignature_22794, kENUMERATION_UP) ;
    while (enumerator_23695.hasCurrentObject () && enumerator_23758.hasCurrentObject ()) {
      switch (enumerator_23695.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_24571 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_23695.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_23854_expression = extractPtr_24571->mAssociatedValue0 ;
          const GALGAS_location extractedValue_23863_location = extractPtr_24571->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_24126 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_23854_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_23758.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_24126, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 633)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23695.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 642)) ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_24223 = GALGAS_string ("!").add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 642)) ;
              TC_Array <C_FixItDescription> fixItArray6 ;
              appendFixItActions (fixItArray6, kFixItReplace, var_s_24223) ;
              inCompiler->emitSemanticError (enumerator_23695.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_24223, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 643)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 643)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 643)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_23758.current_mFormalArgumentType (HERE), var_exp_24126.readProperty_mResultType (), extractedValue_23863_location, var_exp_24126, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 645)) ;
          }
          var_actualParameterList_23650.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_24126  COMMA_SOURCE_FILE ("instruction-if.galgas", 646))  COMMA_SOURCE_FILE ("instruction-if.galgas", 646)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_25711 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_23695.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_24622_actualTypeName = extractPtr_25711->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_24644_constantName = extractPtr_25711->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_24622_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 648)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_24622_actualTypeName.readProperty_string ())) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651))) ;
              inCompiler->emitSemanticError (extractedValue_24622_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 650)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 649)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_25015 = GALGAS_string ("var_").add_operation (extractedValue_24644_constantName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 653)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 653)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 653)).add_operation (extractedValue_24644_constantName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 654)).getter_string (SOURCE_FILE ("instruction-if.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 654)) ;
          {
          extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_24644_constantName, enumerator_23758.current_mFormalArgumentType (HERE), var_targetVariableCppName_25015, var_targetVariableCppName_25015, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 655)) ;
          }
          var_actualParameterList_23650.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_25015  COMMA_SOURCE_FILE ("instruction-if.galgas", 661))  COMMA_SOURCE_FILE ("instruction-if.galgas", 661)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23695.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 663)) ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_25525 = GALGAS_string ("\?").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 663)) ;
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, var_s_25525) ;
              inCompiler->emitSemanticError (enumerator_23695.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25525, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 664)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_26887 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_23695.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_25762_actualTypeName = extractPtr_26887->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_25784_variableName = extractPtr_26887->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_25762_actualTypeName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)).readProperty_mTypeName ().readProperty_string ().objectCompare (extractedValue_25762_actualTypeName.readProperty_string ())) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 670))) ;
              inCompiler->emitSemanticError (extractedValue_25762_actualTypeName.readProperty_location (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 668)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_26156 = GALGAS_string ("var_").add_operation (extractedValue_25784_variableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 672)).add_operation (extractedValue_25784_variableName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 673)).getter_string (SOURCE_FILE ("instruction-if.galgas", 673)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 673)) ;
          {
          extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_25784_variableName, GALGAS_bool (true), enumerator_23758.current_mFormalArgumentType (HERE), var_targetVariableCppName_26156, var_targetVariableCppName_26156, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 674)) ;
          }
          var_actualParameterList_23650.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 681)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26156  COMMA_SOURCE_FILE ("instruction-if.galgas", 681))  COMMA_SOURCE_FILE ("instruction-if.galgas", 681)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23695.current_mSelector (HERE).readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)) ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_26701 = GALGAS_string ("\?").add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)) ;
              TC_Array <C_FixItDescription> fixItArray20 ;
              appendFixItActions (fixItArray20, kFixItReplace, var_s_26701) ;
              inCompiler->emitSemanticError (enumerator_23695.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26701, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 684)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 684)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_27466 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_23695.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_26930_checkSelector = extractPtr_27466->mAssociatedValue0 ;
          const GALGAS_location extractedValue_26939_location = extractPtr_27466->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_26943_idx = extractPtr_27466->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_26980 = GALGAS_string ("var_unused_").add_operation (extractedValue_26943_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)).add_operation (extractedValue_26939_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)).getter_string (SOURCE_FILE ("instruction-if.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 687)) ;
          var_actualParameterList_23650.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (extensionGetter_definition (enumerator_23758.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 688)).readProperty_mTypeName ().readProperty_string (), var_targetVariableCppName_26980  COMMA_SOURCE_FILE ("instruction-if.galgas", 688))  COMMA_SOURCE_FILE ("instruction-if.galgas", 688)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_26930_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_23695.current_mSelector (HERE).readProperty_string ())) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = enumerator_23758.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 690)) ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              GALGAS_string var_s_27280 = GALGAS_string ("\?").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 690)) ;
              TC_Array <C_FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, kFixItReplace, var_s_27280) ;
              inCompiler->emitSemanticError (enumerator_23695.current_mSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_27280, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 691)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 691)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 691)) ;
            }
          }
        }
        break ;
      }
      enumerator_23695.gotoNextObject () ;
      enumerator_23758.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_22437, constinArgument_inOptionalMethodName, var_actualParameterList_23650  COMMA_SOURCE_FILE ("instruction-if.galgas", 695))  COMMA_SOURCE_FILE ("instruction-if.galgas", 695)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ifInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_testVar_30559 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 775)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 776)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_30559, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 777)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 777)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 777)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = this ;
  cEnumerator_ifTestListForGeneration enumerator_30725 (temp_0.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_30725.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30559, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 779)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 779)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 779)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 780)) ;
    }
    switch (enumerator_30725.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_31162 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_30725.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_30899_exp = extractPtr_31162->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_31079 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_30899_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31079, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 783)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_30559.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 790)).add_operation (var_cppVarName_31079, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 790)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 790)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 790)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_31891 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_30725.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_31196_targetVarCppName = extractPtr_31891->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31200_exp = extractPtr_31891->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31211_targetType = extractPtr_31891->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMapEntry extractedValue_31220_testType = extractPtr_31891->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_31248 = extensionGetter_identifierRepresentation (extractedValue_31211_targetType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 792)) ;
        GALGAS_string var_testTypeName_31311 = extensionGetter_identifierRepresentation (extractedValue_31220_testType, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 793)) ;
        GALGAS_string var_cppVarName_31526 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_31200_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_31526, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 794)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_31248, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 801)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 801)).add_operation (extractedValue_31196_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 801)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 801)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_31311, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 802)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 802)).add_operation (var_cppVarName_31526, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 802)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 802)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 802)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_31196_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 803)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 803)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 803)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30559, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 804)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 804)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 804)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 805)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_33622 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_30725.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_31939_receiverExpression = extractPtr_33622->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_31958_optionalMethodName = extractPtr_33622->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_31969_parameters = extractPtr_33622->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_32164 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_31939_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_32164, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 807)) ;
        GALGAS_stringlist var_actualParameterNameList_32218 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 814)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_32244 (extractedValue_31969_parameters, kENUMERATION_UP) ;
        while (enumerator_32244.hasCurrentObject ()) {
          switch (enumerator_32244.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_32607 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_32244.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_32325_expression = extractPtr_32607->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_32541 ;
              callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_32325_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_32541, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 818)) ;
              var_actualParameterNameList_32218.addAssign_operation (var_argumentCppName_32541  COMMA_SOURCE_FILE ("instruction-if.galgas", 825)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_32819 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_32244.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32645_typeName = extractPtr_32819->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32658_constantName = extractPtr_32819->mAssociatedValue1 ;
              var_actualParameterNameList_32218.addAssign_operation (extractedValue_32658_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 827)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32645_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (extractedValue_32658_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 828)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 828)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_33031 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_32244.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_32857_typeName = extractPtr_33031->mAssociatedValue0 ;
              const GALGAS_string extractedValue_32870_variableName = extractPtr_33031->mAssociatedValue1 ;
              var_actualParameterNameList_32218.addAssign_operation (extractedValue_32870_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 830)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_32857_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)).add_operation (extractedValue_32870_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 831)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 831)) ;
            }
            break ;
          }
          enumerator_32244.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_33078 = GALGAS_string ("optionalResult").add_operation (extractedValue_31958_optionalMethodName.readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 834)).getter_string (SOURCE_FILE ("instruction-if.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 834)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_33078, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)).add_operation (var_cppVarName_32164, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 835)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 835)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_31958_optionalMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 836)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 836)) ;
        cEnumerator_stringlist enumerator_33302 (var_actualParameterNameList_32218, kENUMERATION_UP) ;
        while (enumerator_33302.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_33302.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 839)) ;
          if (enumerator_33302.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 841)) ;
          }
          enumerator_33302.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 843)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_33078, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 844)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 844)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 844)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_30559, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 845)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 845)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 845)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 846)) ;
      }
      break ;
    }
    enumerator_30725.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_30559, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 850)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 850)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 850)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_m_5F_then_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 851)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 859)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = this ;
  cEnumerator_ifTestListForGeneration enumerator_33969 (temp_2.readProperty_mExpressions (), kENUMERATION_UP) ;
  while (enumerator_33969.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 861)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 862)) ;
    enumerator_33969.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = this ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.readProperty_m_5F_else_5F_instructionList ().getter_length (SOURCE_FILE ("instruction-if.galgas", 865)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_30559, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 866)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 866)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 866)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.readProperty_m_5F_else_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 867)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 875)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 143)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mOptionalTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
      GALGAS_unifiedTypeMapEntry joker_5649 ; // Joker input parameter
      extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_2.readProperty_mOptionalTypeName (), joker_5649, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
      }
    }
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_3.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 153)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_6611 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mConstantTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 167)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_6721 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mConstantName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 168)).add_operation (temp_2.readProperty_mConstantName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)).getter_string (SOURCE_FILE ("instruction-let.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 169)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mConstantName (), var_targetType_6611, var_targetVariableCppName_6721, var_targetVariableCppName_6721, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_6611, var_targetVariableCppName_6721  COMMA_SOURCE_FILE ("instruction-let.galgas", 177))  COMMA_SOURCE_FILE ("instruction-let.galgas", 177)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_8085 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 196)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_8085, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 193)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_8144 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 202)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 202)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 203)).getter_string (SOURCE_FILE ("instruction-let.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 203)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_expression_8085.readProperty_mResultType (), var_targetVariableCppName_8144, var_targetVariableCppName_8144, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 204)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_8085.readProperty_mResultType (), GALGAS_bool (true), var_targetVariableCppName_8144, var_expression_8085  COMMA_SOURCE_FILE ("instruction-let.galgas", 211))  COMMA_SOURCE_FILE ("instruction-let.galgas", 211)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_9348 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mOptionalTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 227)) ;
  GALGAS_semanticExpressionForGeneration var_expression_9698 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_9348, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9698, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 229)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = this ;
  GALGAS_string var_targetVariableCppName_9757 = GALGAS_string ("var_").add_operation (temp_2.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 238)).add_operation (temp_3.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)).getter_string (SOURCE_FILE ("instruction-let.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsConstant ().boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = this ;
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mVariableName (), var_targetType_9348, var_targetVariableCppName_9757, var_targetVariableCppName_9757, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 241)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = this ;
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_7.readProperty_mVariableName (), GALGAS_bool (true), var_targetType_9348, var_targetVariableCppName_9757, var_targetVariableCppName_9757, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 248)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_9348, var_expression_9698.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_9698, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 257)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_9348, temp_9.readProperty_mIsConstant (), var_targetVariableCppName_9757, var_expression_9698  COMMA_SOURCE_FILE ("instruction-let.galgas", 259))  COMMA_SOURCE_FILE ("instruction-let.galgas", 259)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@undefinedLocalConstantDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 294)) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_1 = this ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 295)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 295)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 295)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 295)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 295)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                           const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mTargetType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 306)) ;
  GALGAS_string var_sourceVar_13046 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mSourceExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_13046, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 307)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = this ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mTargetType (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (temp_3.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (var_sourceVar_13046, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 314)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_3612 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_3612.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_3612.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 107)) ;
    enumerator_3612.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_logInstructionAST temp_0 = this ;
  cEnumerator_logListAST enumerator_4372 (temp_0.readProperty_mLogList (), kENUMERATION_UP) ;
  while (enumerator_4372.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_4655 ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4372.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 127)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4655, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 124)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_4372.current_mLogMessage (HERE), var_expression_4655  COMMA_SOURCE_FILE ("instruction-log.galgas", 133))  COMMA_SOURCE_FILE ("instruction-log.galgas", 133)) ;
    enumerator_4372.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@logInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_logInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_logVar_5807 ;
  const GALGAS_logInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mLogExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_5807, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 158)) ;
  const GALGAS_logInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_5807.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)).add_operation (temp_1.readProperty_mLogMessage ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-log.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 165)) ;
  const GALGAS_logInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.readProperty_mLogMessage ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 166)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 166)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 166)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 126)) ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 127)) ;
  const GALGAS_loopInstructionWithVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 128)) ;
  const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 129)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variantExpression_5880 ;
  const GALGAS_loopInstructionWithVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_5880, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 144)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_variantExpression_5880.readProperty_mResultType (), var_variantExpression_5880.readProperty_mLocation (), var_variantExpression_5880, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 153)) ;
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_6723 ;
  const GALGAS_loopInstructionWithVariantAST temp_1 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_1.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-with-variant.galgas", 167)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_6723, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 164)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_loopExpression_6723.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_loopInstructionWithVariantAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 175)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 175)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 175)).add_operation (extensionGetter_definition (var_loopExpression_6723.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 175)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 175)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 175)), fixItArray4  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 174)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 178)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_7617 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_5 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_6 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 185)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 186)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 187)), temp_5.readProperty_mFirstInstructions (), temp_6.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_7617, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 180)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_8032 ;
  {
  const GALGAS_loopInstructionWithVariantAST temp_7 = this ;
  const GALGAS_loopInstructionWithVariantAST temp_8 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 199)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 200)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-with-variant.galgas", 201)), temp_7.readProperty_mSecondInstructions (), temp_8.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_8032, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 194)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantAST temp_9 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_9.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 208)) ;
  }
  const GALGAS_loopInstructionWithVariantAST temp_10 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithVariantForGeneration::constructor_new (temp_10.readProperty_mInstructionLocation (), var_variantExpression_5880, var_first_5F_instructionList_7617, var_loopExpression_6723, var_second_5F_instructionList_8032  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 210))  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 210)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithVariantForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_variantCppVarName_9622 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_9622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 240)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_9622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 247)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 248)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_1 = this ;
  GALGAS_string var_variantVar_9760 = GALGAS_string ("variant_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 249)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9760, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (var_variantCppVarName_9622, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 250)) ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_2 = this ;
  GALGAS_string var_loopVar_9944 = GALGAS_string ("loop_").add_operation (temp_2.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)).getter_string (SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9944, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)).add_operation (var_loopVar_9944, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 252)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 254)) ;
  }
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 255)) ;
  }
  GALGAS_string var_loopExpressionVar_10524 ;
  const GALGAS_loopInstructionWithVariantForGeneration temp_4 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_4.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_10524, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 263)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9944.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)).add_operation (var_loopExpressionVar_10524, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)).add_operation (var_loopVar_9944, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 265)).add_operation (var_loopVar_9944, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (var_loopExpressionVar_10524, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 264)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)) COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 268)) ;
  }
  const GALGAS_loopInstructionWithVariantForGeneration temp_5 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_9944, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (var_variantVar_9760, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (GALGAS_string (")) {\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)).add_operation (var_loopVar_9944, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)).add_operation (GALGAS_string (" = false ;\n  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 270)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (extensionGetter_sourceFile (temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string (") ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 271)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 272)).add_operation (var_loopVar_9944, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 273)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_9760, inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 274)) ;
  {
  const GALGAS_loopInstructionWithVariantForGeneration temp_6 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_6.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 275)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 283)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 284)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 285)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 286)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas", 287)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 108)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mFirstInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 109)) ;
  const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mSecondInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 110)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_loopExpression_5303 ;
  const GALGAS_loopInstructionWithoutVariantAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLoopExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-loop-without-variant.galgas", 128)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_5303, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 125)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_loopExpression_5303.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionWithoutVariantAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfLoopExpression (), GALGAS_string ("the loop expression type should be '@").add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)).add_operation (extensionGetter_definition (var_loopExpression_5303.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 136)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 135)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 139)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_6197 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_4 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_5 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 146)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 147)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 148)), temp_4.readProperty_mFirstInstructions (), temp_5.readProperty_mEndOfFirstInstructions (), ioArgument_ioVariableMap, var_first_5F_instructionList_6197, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 141)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_6612 ;
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_6 = this ;
  const GALGAS_loopInstructionWithoutVariantAST temp_7 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 160)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 161)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop-without-variant.galgas", 162)), temp_6.readProperty_mSecondInstructions (), temp_7.readProperty_mEndOfSecondInstructions (), ioArgument_ioVariableMap, var_second_5F_instructionList_6612, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 155)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantAST temp_8 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_8.readProperty_mEndOfLoopInstruction (), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 169)) ;
  }
  const GALGAS_loopInstructionWithoutVariantAST temp_9 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionWithoutVariantForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_first_5F_instructionList_6197, var_loopExpression_5303, var_second_5F_instructionList_6612  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 171))  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 171)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@loopInstructionWithoutVariantForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_0 = this ;
  GALGAS_string var_loopVar_8245 = GALGAS_string ("loop_").add_operation (temp_0.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)).getter_string (SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 197)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_8245, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 198)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_8245, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 199)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 199)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 200)) ;
  }
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_mFirstInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 201)) ;
  }
  GALGAS_string var_loopExpressionVar_8851 ;
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mLoopExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8851, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_8245.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 216)).add_operation (var_loopExpressionVar_8851, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 216)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 216)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 216)).add_operation (var_loopVar_8245, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 217)).add_operation (var_loopVar_8245, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (var_loopExpressionVar_8851, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 216)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_8245, inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 220)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 220)) ;
  {
  const GALGAS_loopInstructionWithoutVariantForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.readProperty_mSecondInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 221)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 230)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas", 231)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 52)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_3180 ;
  const GALGAS_messageInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 70)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3180, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 67)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_3180.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("the expression has the '@").add_operation (extensionGetter_definition (var_expression_3180.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 78)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 78)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 78)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 77)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_3180, temp_4.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-message.galgas", 81))  COMMA_SOURCE_FILE ("instruction-message.galgas", 81)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@messageInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_messageInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_messageCppVarName_4698 ;
  const GALGAS_messageInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4698, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 105)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)).add_operation (var_messageCppVarName_4698, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 113)) ;
  const GALGAS_messageInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 114)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 114)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 115)) COMMA_SOURCE_FILE ("instruction-message.galgas", 115)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 70)) ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  cEnumerator_actualParameterListAST enumerator_2832 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2832.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2832.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 72)) ;
    enumerator_2832.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_3856 ;
  const GALGAS_methodCallInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 92)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_3856, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 89)) ;
  GALGAS_methodKind var_kind_4003 ;
  GALGAS_formalParameterSignature var_routineSignature_4029 ;
  GALGAS_bool var_hasCompilerArgument_4065 ;
  GALGAS_string var_errorMessage_4094 ;
  const GALGAS_methodCallInstructionAST temp_1 = this ;
  GALGAS_location joker_4035 ; // Joker input parameter
  GALGAS_methodQualifier joker_4071 ; // Joker input parameter
  extensionGetter_definition (var_receiverExpression_3856.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)).readProperty_mInstanceMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_kind_4003, var_routineSignature_4029, joker_4035, var_hasCompilerArgument_4065, joker_4071, var_errorMessage_4094, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_4094.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mMethodName ().readProperty_location (), var_errorMessage_4094, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 108)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4621 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = this ;
  const GALGAS_methodCallInstructionAST temp_6 = this ;
  const GALGAS_methodCallInstructionAST temp_7 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 116)), var_routineSignature_4029, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4621, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 111)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_4687 = var_receiverExpression_3856.readProperty_mResultType () ;
  GALGAS_bool var_searching_4736 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 126)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 127)).isValid ()) {
        uint32_t variant_4784 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 127)).uintValue () ;
        bool loop_4784 = true ;
        while (loop_4784) {
          loop_4784 = var_searching_4736.isValid () ;
          if (loop_4784) {
            loop_4784 = var_searching_4736.boolValue () ;
          }
          if (loop_4784 && (0 == variant_4784)) {
            loop_4784 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 127)) ;
          }
          if (loop_4784) {
            variant_4784 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = extensionGetter_definition (var_baseType_4687, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 128)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 128)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_4736 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = this ;
                test_10 = extensionGetter_definition (extensionGetter_definition (var_baseType_4687, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 131)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 131)).readProperty_mInstanceMethodMap ().getter_hasKey (temp_11.readProperty_mMethodName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-method-call.galgas", 131)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_4687 = extensionGetter_definition (var_baseType_4687, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 132)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_4736 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = this ;
  const GALGAS_methodCallInstructionAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.readProperty_mInstructionLocation (), var_receiverExpression_3856.readProperty_mResultType (), var_receiverExpression_3856, temp_13.readProperty_mMethodName ().readProperty_string (), var_kind_4003, var_actualParameterListForGeneration_4621, var_hasCompilerArgument_4065, var_baseType_4687  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 140))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 140)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@methodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppName_6791 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_6791, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_6791 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_6884 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 179)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_6936 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 180)) ;
  GALGAS_stringlist var_inputVariableList_6977 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_7018 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_7018.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_7261 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_7018.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_6936, var_inputVariableList_6977, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_7261, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
    var_parameterCppNameList_6884.addAssign_operation (var_parameterCppName_7261  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 184)) ;
    enumerator_7018.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = this ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (temp_3.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)).add_operation (temp_4.readProperty_mMethodName ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 189)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 190)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 190)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = this ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 191)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 191)).add_operation (extensionGetter_identifierRepresentation (temp_8.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 192)).add_operation (var_receiverCppName_6791, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 193)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 193)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 191)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)).add_operation (var_receiverCppName_6791, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 195)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_6791.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 199)).add_operation (temp_10.readProperty_mMethodName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 199)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 199)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_8190 (var_parameterCppNameList_6884, kENUMERATION_UP) ;
  while (enumerator_8190.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_8190.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 202)) ;
    if (enumerator_8190.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 203)) ;
    }
    enumerator_8190.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_6884.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 205)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = this ;
        test_12 = temp_13.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 207)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 208)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 209)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 212)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 213)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 214)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 216)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 218)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_2471 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2471.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2471.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 60)) ;
    enumerator_2471.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionAST temp_0 = this ;
  GALGAS_lstring var_usefulnessName_3235 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_3235 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 77)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_3540 ;
  GALGAS_bool var_isInternal_3567 ;
  const GALGAS_procCallInstructionAST temp_1 = this ;
  constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().method_searchKey (temp_1.readProperty_mRoutineName (), var_routineSignature_3540, var_isInternal_3567, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 79)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_3567.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = this ;
      GALGAS_location var_procDeclarationLocation_3645 = constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mRoutineMap ().getter_locationForKey (temp_3.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 86)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = this ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.readProperty_mRoutineName ().readProperty_location ().getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)).objectCompare (var_procDeclarationLocation_3645.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 87)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = this ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_3645.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 88)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4376 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = this ;
  const GALGAS_procCallInstructionAST temp_9 = this ;
  const GALGAS_procCallInstructionAST temp_10 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_8.readProperty_mRoutineName (), GALGAS_string ("'").add_operation (temp_9.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 97)), var_routineSignature_3540, temp_10.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4376, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 92)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.readProperty_mRoutineName (), var_actualParameterListForGeneration_4376  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 105)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_procCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 129)) ;
  GALGAS_stringlist var_parameterCppNameList_5540 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5592 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 132)) ;
  GALGAS_stringlist var_inputVariableList_5633 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 133)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5662 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5662.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5947 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5662.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5592, var_inputVariableList_5633, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5947, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 135)) ;
    var_parameterCppNameList_5540.addAssign_operation (var_parameterCppName_5947  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 144)) ;
    enumerator_5662.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.readProperty_mRoutineName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 147)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 147)) ;
  cEnumerator_stringlist enumerator_6138 (var_parameterCppNameList_5540, kENUMERATION_UP) ;
  while (enumerator_6138.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6138.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 149)) ;
    enumerator_6138.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 151)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mRoutineName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 152)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 153)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfAssignmentInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 61)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfAssignmentInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_3122 ;
    GALGAS_bool var_selfIsMutable_3150 ;
    GALGAS_bool var_unused_0_3172 ;
    const bool optionalResult3102 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_3122, var_selfIsMutable_3150, var_unused_0_3172) ;
    if (!optionalResult3102) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_3150.operator_not (SOURCE_FILE ("instruction-self-assignment.galgas", 77)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfAssignmentInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 78)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_3575 ;
      const GALGAS_selfAssignmentInstructionAST temp_4 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_3122, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3575, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 81)) ;
      {
      const GALGAS_selfAssignmentInstructionAST temp_5 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_3122, var_expression_3575.readProperty_mResultType (), temp_5.readProperty_mInstructionLocation (), var_expression_3575, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 90)) ;
      }
      const GALGAS_selfAssignmentInstructionAST temp_6 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_selfType_3122, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 96)).readProperty_string (), var_expression_3575, temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 92))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 92)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfAssignmentInstructionAST temp_7 = this ;
    TC_Array <C_FixItDescription> fixItArray8 ;
    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray8  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 101)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 192)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 198)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 204)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfPlusEqualElementsInstructionAST temp_0 = this ;
  extensionMethod_enterInSemanticContext (temp_0.readProperty_mExpressions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 210)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualElementsInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_9070 ;
    GALGAS_bool var_selfIsMutable_9104 ;
    GALGAS_bool var_unused_0_9132 ;
    const bool optionalResult9044 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_9070, var_selfIsMutable_9104, var_unused_0_9132) ;
    if (!optionalResult9044) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_9104.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 231)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 232)) ;
        }
      }
      GALGAS_functionSignature var_addAssignOperatorArguments_9651 = extensionGetter_definition (var_selfType_9070, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 242)).readProperty_mAddAssignOperatorArguments () ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_9651.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 243)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_9070, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 245)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 245)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 245)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 244)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 247)).objectCompare (var_addAssignOperatorArguments_9651.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 247)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = this ;
            const GALGAS_selfPlusEqualElementsInstructionAST temp_10 = this ;
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("calling the '+=' operator on an '@").add_operation (extensionGetter_definition (var_selfType_9070, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (var_addAssignOperatorArguments_9651.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 250)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 249)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 250)).add_operation (temp_10.readProperty_mExpressions ().getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 251)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 250)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 251)), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 248)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_10443 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 253)) ;
          const GALGAS_selfPlusEqualElementsInstructionAST temp_12 = this ;
          cEnumerator_actualOutputExpressionList enumerator_10549 (temp_12.readProperty_mExpressions (), kENUMERATION_UP) ;
          cEnumerator_functionSignature enumerator_10611 (var_addAssignOperatorArguments_9651, kENUMERATION_UP) ;
          while (enumerator_10549.hasCurrentObject () && enumerator_10611.hasCurrentObject ()) {
            GALGAS_semanticExpressionForGeneration var_expression_10922 ;
            callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_10549.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_10611.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10922, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 255)) ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsNotEqual, enumerator_10611.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_10549.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                GALGAS_string temp_14 ;
                const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_10611.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_15) {
                  temp_14 = enumerator_10611.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)) ;
                }else if (kBoolFalse == test_15) {
                  temp_14 = GALGAS_string::makeEmptyString () ;
                }
                GALGAS_string var_s_11021 = GALGAS_string ("!").add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)) ;
                TC_Array <C_FixItDescription> fixItArray16 ;
                appendFixItActions (fixItArray16, kFixItReplace, var_s_11021) ;
                inCompiler->emitSemanticError (enumerator_10549.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_11021, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 265)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 265)), fixItArray16  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 265)) ;
              }
            }
            {
            routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_10611.current_mFormalArgumentType (HERE), var_expression_10922.readProperty_mResultType (), enumerator_10549.current_mEndOfExpressionLocation (HERE), var_expression_10922, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
            }
            var_effectiveParameterList_10443.addAssign_operation (var_expression_10922  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 268)) ;
            enumerator_10549.gotoNextObject () ;
            enumerator_10611.gotoNextObject () ;
          }
          const GALGAS_selfPlusEqualElementsInstructionAST temp_17 = this ;
          ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_9070, GALGAS_string::makeEmptyString (), temp_17.readProperty_mInstructionLocation (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 276)), var_effectiveParameterList_10443  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 271))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 271)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualElementsInstructionAST temp_18 = this ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 281)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfPlusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_12496 ;
    GALGAS_bool var_selfIsMutable_12530 ;
    GALGAS_bool var_unused_0_12558 ;
    const bool optionalResult12470 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_12496, var_selfIsMutable_12530, var_unused_0_12558) ;
    if (!optionalResult12470) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_12530.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 301)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 302)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_12496, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)).readProperty_mHandledOperatorFlags ().getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 312)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 312)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfPlusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_12496, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 314)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 314)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 314)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 313)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_13602 ;
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_12496, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13602, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 317)) ;
      {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_12496, var_expression_13602.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_13602, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 326)) ;
      }
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_12496, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 333)), var_expression_13602, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 328))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 328)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfPlusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 338)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMinusEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_14846 ;
    GALGAS_bool var_selfIsMutable_14880 ;
    GALGAS_bool var_unused_0_14908 ;
    const bool optionalResult14820 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_14846, var_selfIsMutable_14880, var_unused_0_14908) ;
    if (!optionalResult14820) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_14880.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 358)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 359)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_14846, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 369)).readProperty_mHandledOperatorFlags ().getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 369)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 369)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMinusEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_14846, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 371)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 371)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 371)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 370)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_15953 ;
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_14846, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15953, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 374)) ;
      {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_14846, var_expression_15953.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_15953, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 383)) ;
      }
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_14846, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 390)), var_expression_15953, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 385))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 385)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMinusEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 395)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfMulEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_17196 ;
    GALGAS_bool var_selfIsMutable_17230 ;
    GALGAS_bool var_unused_0_17258 ;
    const bool optionalResult17170 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_17196, var_selfIsMutable_17230, var_unused_0_17258) ;
    if (!optionalResult17170) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_17230.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 415)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 416)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_17196, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 426)).readProperty_mHandledOperatorFlags ().getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 426)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfMulEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_17196, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 428)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 428)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 428)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 427)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_18297 ;
      const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_17196, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_18297, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 431)) ;
      {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_17196, var_expression_18297.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_18297, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 440)) ;
      }
      const GALGAS_selfMulEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_17196, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 447)), var_expression_18297, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 442))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 442)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfMulEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 452)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfDivEqualExpressionInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_19538 ;
    GALGAS_bool var_selfIsMutable_19572 ;
    GALGAS_bool var_unused_0_19600 ;
    const bool optionalResult19512 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_19538, var_selfIsMutable_19572, var_unused_0_19600) ;
    if (!optionalResult19512) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_19572.operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 472)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 473)) ;
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = extensionGetter_definition (var_selfType_19538, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 483)).readProperty_mHandledOperatorFlags ().getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 483)).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_selfDivEqualExpressionInstructionAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("the target object has the '@").add_operation (extensionGetter_definition (var_selfType_19538, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 485)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 485)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 485)), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 484)) ;
        }
      }
      GALGAS_semanticExpressionForGeneration var_expression_20639 ;
      const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = this ;
      callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_7.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfType_19538, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_20639, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 488)) ;
      {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = this ;
      routine_checkAssignmentTypeWithImplicitGetterCall (var_selfType_19538, var_expression_20639.readProperty_mResultType (), temp_8.readProperty_mInstructionLocation (), var_expression_20639, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 497)) ;
      }
      const GALGAS_selfDivEqualExpressionInstructionAST temp_9 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_9.readProperty_mInstructionLocation (), var_selfType_19538, constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 504)), var_expression_20639, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 499))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 499)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfDivEqualExpressionInstructionAST temp_10 = this ;
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("'self' not available in this context"), fixItArray11  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 509)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_setterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_5737 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5737.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_5737.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 179)) ;
    enumerator_5737.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_selfSetterCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_6103 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_6103.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_6103.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 189)) ;
    enumerator_6103.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_receiverType_7110 ;
  GALGAS_string var_targetVariableCppName_7146 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_7196 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = this ;
    test_0 = temp_1.readProperty_mPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapEntry var_selfType_7316 ;
        GALGAS_bool var_selfIsMutable_7364 ;
        GALGAS_bool var_unused_0_7406 ;
        const bool optionalResult7276 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_7316, var_selfIsMutable_7364, var_unused_0_7406) ;
        if (!optionalResult7276) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            GALGAS_bool var_isReference_7502 ;
            const bool optionalResult7472 = extensionGetter_definition (var_selfType_7316, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 211)).readProperty_mTypeKindEnum ().optional_classType (var_isReference_7502) ;
            if (!optionalResult7472) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              test_3 = var_isReference_7502.boolEnum () ;
              if (kBoolTrue == test_3) {
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_selfIsMutable_7364.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 212)).boolEnum () ;
              if (kBoolTrue == test_4) {
                const GALGAS_setterCallInstructionAST temp_5 = this ;
                TC_Array <C_FixItDescription> fixItArray6 ;
                inCompiler->emitSemanticError (temp_5.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray6  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 213)) ;
              }
            }
          }
          GALGAS_propertyMap var_propertyMap_7658 = extensionGetter_definition (var_selfType_7316, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 215)).readProperty_mPropertyMap () ;
          GALGAS_bool var_isConstant_7763 ;
          const GALGAS_setterCallInstructionAST temp_7 = this ;
          GALGAS_bool joker_7746 ; // Joker input parameter
          var_propertyMap_7658.method_searchKey (temp_7.readProperty_mReceiverName (), joker_7746, var_isConstant_7763, var_receiverType_7110, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 216)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_isConstant_7763.boolEnum () ;
            if (kBoolTrue == test_8) {
              const GALGAS_setterCallInstructionAST temp_9 = this ;
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (temp_9.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 218)) ;
            }
          }
          var_nameForCheckingFormalParameterUsing_7196 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
          const GALGAS_setterCallInstructionAST temp_11 = this ;
          var_targetVariableCppName_7146 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 221)).add_operation (temp_11.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)) ;
        }
      }
      if (kBoolFalse == test_2) {
        const GALGAS_setterCallInstructionAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray13  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 224)) ;
        var_receiverType_7110.drop () ; // Release error dropped variable
        var_targetVariableCppName_7146.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_7196.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_14 = this ;
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_14.readProperty_mReceiverName (), var_receiverType_7110, var_targetVariableCppName_7146, var_nameForCheckingFormalParameterUsing_7196, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 229)) ;
    }
  }
  GALGAS_bool var_ok_8537 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_15 = this ;
  GALGAS_location var_errorLocation_8564 = temp_15.readProperty_mReceiverName ().readProperty_location () ;
  const GALGAS_setterCallInstructionAST temp_16 = this ;
  cEnumerator_lstringlist enumerator_8608 (temp_16.readProperty_mReceiverStructProperties (), kENUMERATION_UP) ;
  bool bool_17 = var_ok_8537.isValidAndTrue () ;
  if (enumerator_8608.hasCurrentObject () && bool_17) {
    while (enumerator_8608.hasCurrentObject () && bool_17) {
      var_ok_8537 = extensionGetter_definition (var_receiverType_7110, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 240)).readProperty_mTypeKindEnum ().getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 240)) ;
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_ok_8537.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 241)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (var_errorLocation_8564, GALGAS_string ("a structure is required for '.' access"), fixItArray19  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 242)) ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_propertyMap var_propertyMap_8838 = extensionGetter_definition (var_receiverType_7110, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 244)).readProperty_mPropertyMap () ;
        GALGAS_bool var_isPublic_8930 ;
        GALGAS_bool var_isConstant_8946 ;
        var_propertyMap_8838.method_searchKey (enumerator_8608.current_mValue (HERE), var_isPublic_8930, var_isConstant_8946, var_receiverType_7110, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 245)) ;
        var_errorLocation_8564 = enumerator_8608.current_mValue (HERE).readProperty_location () ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_isPublic_8930.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 247)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8608.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray21  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 248)) ;
          }
        }
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_isConstant_8946.boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_8608.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray23  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 251)) ;
          }
        }
      }
      enumerator_8608.gotoNextObject () ;
      if (enumerator_8608.hasCurrentObject ()) {
        bool_17 = var_ok_8537.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_castType_9283 ;
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_setterCallInstructionAST temp_25 = this ;
    test_24 = GALGAS_bool (kIsNotEqual, temp_25.readProperty_mTypeNameForCasting ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_setterCallInstructionAST temp_26 = this ;
      var_castType_9283 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_26.readProperty_mTypeNameForCasting (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 258)) ;
      {
      const GALGAS_setterCallInstructionAST temp_27 = this ;
      routine_checkAssignmentTypes (var_receiverType_7110, var_castType_9283, temp_27.readProperty_mTypeNameForCasting ().readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 259)) ;
      }
    }
  }
  if (kBoolFalse == test_24) {
    var_castType_9283 = var_receiverType_7110 ;
  }
  GALGAS_methodKind var_kind_9664 ;
  GALGAS_formalParameterSignature var_routineSignature_9690 ;
  GALGAS_bool var_hasCompilerArgument_9719 ;
  GALGAS_string var_setterErrorMessage_9754 ;
  const GALGAS_setterCallInstructionAST temp_28 = this ;
  GALGAS_methodQualifier joker_9725 ; // Joker input parameter
  extensionGetter_definition (var_castType_9283, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 264)).readProperty_mSetterMap ().method_searchKey (temp_28.readProperty_mSetterName (), var_kind_9664, var_routineSignature_9690, var_hasCompilerArgument_9719, joker_9725, var_setterErrorMessage_9754, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 264)) ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_9754.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_29) {
      const GALGAS_setterCallInstructionAST temp_30 = this ;
      TC_Array <C_FixItDescription> fixItArray31 ;
      inCompiler->emitSemanticError (temp_30.readProperty_mSetterName ().readProperty_location (), var_setterErrorMessage_9754, fixItArray31  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 273)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_10284 ;
  {
  const GALGAS_setterCallInstructionAST temp_32 = this ;
  const GALGAS_setterCallInstructionAST temp_33 = this ;
  const GALGAS_setterCallInstructionAST temp_34 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_32.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_33.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 281)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 281)), var_routineSignature_9690, temp_34.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_10284, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 276)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_10350 = var_castType_9283 ;
  GALGAS_bool var_searching_10377 = GALGAS_bool (true) ;
  enumGalgasBool test_35 = kBoolTrue ;
  if (kBoolTrue == test_35) {
    test_35 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 291)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_35) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 292)).isValid ()) {
        uint32_t variant_10425 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 292)).uintValue () ;
        bool loop_10425 = true ;
        while (loop_10425) {
          loop_10425 = var_searching_10377.isValid () ;
          if (loop_10425) {
            loop_10425 = var_searching_10377.boolValue () ;
          }
          if (loop_10425 && (0 == variant_10425)) {
            loop_10425 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 292)) ;
          }
          if (loop_10425) {
            variant_10425 -- ;
            enumGalgasBool test_36 = kBoolTrue ;
            if (kBoolTrue == test_36) {
              test_36 = extensionGetter_definition (var_baseType_10350, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 293)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 293)).boolEnum () ;
              if (kBoolTrue == test_36) {
                var_searching_10377 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_36) {
              enumGalgasBool test_37 = kBoolTrue ;
              if (kBoolTrue == test_37) {
                const GALGAS_setterCallInstructionAST temp_38 = this ;
                test_37 = extensionGetter_definition (extensionGetter_definition (var_baseType_10350, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 296)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 296)).readProperty_mSetterMap ().getter_hasKey (temp_38.readProperty_mSetterName ().readProperty_string () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 296)).boolEnum () ;
                if (kBoolTrue == test_37) {
                  var_baseType_10350 = extensionGetter_definition (var_baseType_10350, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 297)).readProperty_mSuperType () ;
                }
              }
              if (kBoolFalse == test_37) {
                var_searching_10377 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_setterCallInstructionAST temp_39 = this ;
  const GALGAS_setterCallInstructionAST temp_40 = this ;
  const GALGAS_setterCallInstructionAST temp_41 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_39.readProperty_mReceiverName ().readProperty_location (), var_targetVariableCppName_7146, var_nameForCheckingFormalParameterUsing_7196, temp_40.readProperty_mReceiverStructProperties (), var_castType_9283, var_receiverType_7110, temp_41.readProperty_mSetterName (), var_kind_9664, var_actualParameterListForGeneration_10284, var_hasCompilerArgument_9719, var_baseType_10350  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 305))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 305)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMapEntry var_selfType_11802 ;
    GALGAS_bool var_selfIsMutable_11836 ;
    GALGAS_bool var_unused_0_11864 ;
    const bool optionalResult11776 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_11802, var_selfIsMutable_11836, var_unused_0_11864) ;
    if (!optionalResult11776) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_selfIsMutable_11836.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 334)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selfSetterCallInstructionAST temp_2 = this ;
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 335)) ;
        }
      }
      GALGAS_methodKind var_kind_12080 ;
      GALGAS_formalParameterSignature var_routineSignature_12102 ;
      GALGAS_bool var_hasCompilerArgument_12127 ;
      const GALGAS_selfSetterCallInstructionAST temp_4 = this ;
      GALGAS_methodQualifier joker_12129 ; // Joker input parameter
      GALGAS_string joker_12132 ; // Joker input parameter
      extensionGetter_definition (var_selfType_11802, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)).readProperty_mSetterMap ().method_searchKey (temp_4.readProperty_mSetterName (), var_kind_12080, var_routineSignature_12102, var_hasCompilerArgument_12127, joker_12129, joker_12132, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)) ;
      GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12595 ;
      {
      const GALGAS_selfSetterCallInstructionAST temp_5 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_6 = this ;
      const GALGAS_selfSetterCallInstructionAST temp_7 = this ;
      routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.readProperty_mSetterName (), GALGAS_string ("'").add_operation (temp_6.readProperty_mSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 345)), var_routineSignature_12102, temp_7.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12595, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 340)) ;
      }
      const GALGAS_selfSetterCallInstructionAST temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), var_selfType_11802, temp_8.readProperty_mSetterName (), var_kind_12080, var_actualParameterListForGeneration_12595, var_hasCompilerArgument_12127  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_selfSetterCallInstructionAST temp_9 = this ;
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (temp_9.readProperty_mSetterName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray10  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 362)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 403)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_14723 = temp_0.readProperty_mReceiverCppName () ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_14761 (temp_1.readProperty_mReceiverStructAttributes (), kENUMERATION_UP) ;
  while (enumerator_14761.hasCurrentObject ()) {
    var_receiverCppName_14723.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_14761.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 406)) ;
    enumerator_14761.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.readProperty_mReceiverBaseName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 408)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_15007 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 410)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15059 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 411)) ;
  GALGAS_stringlist var_inputVariableList_15100 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 412)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_15129 (temp_3.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_15129.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_15414 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_15129.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15059, var_inputVariableList_15100, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_15414, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)) ;
    var_parameterCppNameList_15007.addAssign_operation (var_parameterCppName_15414  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 423)) ;
    enumerator_15129.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = this ;
  switch (temp_4.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = this ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_5.readProperty_mMethodBaseType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)).add_operation (temp_6.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = this ;
        test_7 = extensionGetter_definition (temp_8.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 429)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 429)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = this ;
            test_9 = GALGAS_bool (kIsStrictSup, extensionGetter_definition (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 430)).readProperty_mAllTypedPropertyList ().getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 430)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14723.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 431)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = this ;
          GALGAS_string var_pointerUniqueName_16006 = GALGAS_string ("ptr_").add_operation (temp_11.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).add_operation (var_pointerUniqueName_16006, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (extensionGetter_identifierRepresentation (temp_13.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (var_receiverCppName_14723, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = this ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = this ;
            test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 436)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = this ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (extensionGetter_definition (temp_17.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_16006, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 438)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 438)).add_operation (extensionGetter_identifierRepresentation (temp_18.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (var_pointerUniqueName_16006, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 439)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 438)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = this ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = this ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (extensionGetter_definition (temp_19.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).add_operation (extensionGetter_commaSourceFile (temp_20.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 442)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_16006, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 444)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 445)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = this ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)).add_operation (extensionGetter_identifierRepresentation (temp_22.readProperty_mCastType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)).add_operation (var_pointerUniqueName_16006, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)).add_operation (var_receiverCppName_14723, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 450)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = this ;
      extensionMethod_addHeaderFileName (temp_24.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 453)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14723.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)).add_operation (temp_25.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_17733 (var_parameterCppNameList_15007, kENUMERATION_UP) ;
  while (enumerator_17733.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17733.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 457)) ;
    if (enumerator_17733.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)) ;
    }
    enumerator_17733.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = this ;
    test_26 = temp_27.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15007.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 461)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 462)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 464)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 465)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 466)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15007.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 467)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 468)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 470)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 472)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 483)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.readProperty_mSelfCppName () COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 484)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_18871 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 486)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_18923 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 487)) ;
  GALGAS_stringlist var_inputVariableList_18964 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 488)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_19005 (temp_1.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_19005.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_19298 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_19005.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_18923, var_inputVariableList_18964, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19298, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 490)) ;
    var_parameterCppNameList_18871.addAssign_operation (var_parameterCppName_19298  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 498)) ;
    enumerator_19005.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = this ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = this ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_definition (temp_3.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)).add_operation (temp_4.readProperty_mSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 503)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = this ;
        test_5 = extensionGetter_definition (temp_6.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 504)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 504)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)).add_operation (temp_8.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 505)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)).add_operation (temp_10.readProperty_mSelfCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 507)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = this ;
        test_11 = extensionGetter_definition (temp_12.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 510)).readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 510)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = this ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = this ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.readProperty_mSelfCppName ().add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)).add_operation (temp_14.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 511)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 511)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = this ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = this ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.readProperty_mSelfCppName ().add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)).add_operation (temp_16.readProperty_mSetterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 513)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_20278 (var_parameterCppNameList_18871, kENUMERATION_UP) ;
  while (enumerator_20278.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_20278.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 517)) ;
    if (enumerator_20278.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 518)) ;
    }
    enumerator_20278.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = this ;
    test_17 = temp_18.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_18871.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 521)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 522)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 524)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 524)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 525)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 525)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 526)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_18871.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 527)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 528)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.readProperty_mSetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 530)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 530)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 530)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 531)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 224)) ;
  const GALGAS_switchInstructionAST temp_1 = this ;
  cEnumerator_switchBranchesAST enumerator_7382 (temp_1.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_7382.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_7382.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 226)) ;
    enumerator_7382.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_switchExpression_8368 ;
  const GALGAS_switchInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSwitchExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 246)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_8368, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_switchExpression_8368.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 252)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 252)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfSwitchExpression (), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (extensionGetter_definition (var_switchExpression_8368.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 255)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 254)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 255)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 253)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_8803 = extensionGetter_definition (var_switchExpression_8368.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 258)).readProperty_mEnumConstantMap () ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_8915 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 259)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 261)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_9052 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 262)) ;
  const GALGAS_switchInstructionAST temp_4 = this ;
  cEnumerator_switchBranchesAST enumerator_9139 (temp_4.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_9139.hasCurrentObject ()) {
    {
    extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 264)) ;
    }
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_9281 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 265)) ;
    GALGAS_bool var_firstConstant_9314 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_9337 (enumerator_9139.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_9337.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_8803.getter_hasKey (enumerator_9337.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_8915.getter_hasKey (enumerator_9337.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-switch.galgas", 269)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_9337.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9337.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 271)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 271)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 270)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_8915.addAssign_operation (enumerator_9337.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("instruction-switch.galgas", 273)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9769 ;
          GALGAS_uint joker_9719 ; // Joker input parameter
          var_enumConstantMap_8803.method_searchKey (enumerator_9337.current_mValue (HERE), joker_9719, var_associatedTypeList_9769, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 274)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9769.getter_length (SOURCE_FILE ("instruction-switch.galgas", 275)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsEqual, enumerator_9139.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 275)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 275)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_9337.current_mValue (HERE).readProperty_location (), GALGAS_string ("the associated values of '").add_operation (enumerator_9337.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 277)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 276)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9769.getter_length (SOURCE_FILE ("instruction-switch.galgas", 278)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_9139.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 278)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 278)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_9337.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9337.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 280)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 279)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_9769.getter_length (SOURCE_FILE ("instruction-switch.galgas", 281)).objectCompare (enumerator_9139.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 281)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_9769.getter_length (SOURCE_FILE ("instruction-switch.galgas", 284)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_9337.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9337.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (var_associatedTypeList_9769.getter_length (SOURCE_FILE ("instruction-switch.galgas", 283)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 283)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 282)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_bigint var_associatedValueIndex_10503 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_10528 (var_associatedTypeList_9769, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_10613 (enumerator_9139.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_10528.hasCurrentObject () && enumerator_10613.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_10613.current_mExtractedValueTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_10528.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 289)).readProperty_mTypeName ().readProperty_string ().objectCompare (enumerator_10613.current_mExtractedValueTypeName (HERE).readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_10613.current_mExtractedValueTypeName (HERE).readProperty_location (), GALGAS_string ("the required type is '@").add_operation (extensionGetter_definition (enumerator_10528.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 290)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_9314.operator_and (GALGAS_bool (kIsNotEqual, enumerator_10613.current_mExtractedValueName (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_11064 = GALGAS_string ("extractedValue_").add_operation (enumerator_10613.current_mExtractedValueName (HERE).readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (enumerator_10613.current_mExtractedValueName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)) ;
                      var_extractedAssociatedValuesForGeneration_9281.addAssign_operation (enumerator_10528.current_mEntry (HERE), var_cppName_11064, var_associatedValueIndex_10503.getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 295))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_10613.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_10613.current_mExtractedValueName (HERE), enumerator_10528.current_mEntry (HERE), var_cppName_11064, var_cppName_11064, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 297)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_10613.current_mExtractedValueName (HERE), enumerator_10528.current_mEntry (HERE), var_cppName_11064, var_cppName_11064, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 299)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_10503.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 302)) ;
                  enumerator_10528.gotoNextObject () ;
                  enumerator_10613.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_9337.current_mValue (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_9337.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)).add_operation (extensionGetter_definition (var_switchExpression_8368.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 307)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
      }
      var_firstConstant_9314 = GALGAS_bool (false) ;
      enumerator_9337.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_12253 ;
    {
    routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 316)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 317)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 318)), enumerator_9139.current_mInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_12253, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 311)) ;
    }
    {
    extensionSetter_closeBranch (ioArgument_ioVariableMap, enumerator_9139.current_mEndOfBranch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 323)) ;
    }
    var_switchBranchesForGeneration_9052.addAssign_operation (enumerator_9139.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_9281, enumerator_9139.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)), var_instructionList_12253  COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
    enumerator_9139.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_22.readProperty_mEndOf_5F_switch_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 326)) ;
  }
  GALGAS_stringset var_forgottenConstants_12588 = var_enumConstantMap_8803.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 328)).substract_operation (var_constantsNamedInSwitchInstruction_8915, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 328)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_12588.getter_count (SOURCE_FILE ("instruction-switch.galgas", 329)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_12710 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_12728 (var_forgottenConstants_12588, kENUMERATION_UP) ;
      while (enumerator_12728.hasCurrentObject ()) {
        var_s_12710.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_12728.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 332)) ;
        enumerator_12728.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = this ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.readProperty_mEndOf_5F_switch_5F_instruction (), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_12710, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 335)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 334)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_8368.readProperty_mResultType (), var_switchExpression_8368, var_switchBranchesForGeneration_9052  COMMA_SOURCE_FILE ("instruction-switch.galgas", 338))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 338)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_switchVar_14890 ;
  const GALGAS_switchInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mSwitchExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_14890, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 381)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_14890, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 388)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 389)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 390)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = this ;
  cEnumerator_switchBranchesForGeneration enumerator_15222 (temp_2.readProperty_mBranches (), kENUMERATION_UP) ;
  while (enumerator_15222.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_15260 (enumerator_15222.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_15260.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_3.readProperty_mSwitchExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)).add_operation (enumerator_15260.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 393)) ;
      enumerator_15260.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 395)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 396)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_15222.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 397)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = this ;
        GALGAS_string var_type_15614 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mEnumType (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 398)).add_operation (enumerator_15222.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 399)) ;
        GALGAS_string var_varPtr_15776 = GALGAS_string ("extractPtr_").add_operation (enumerator_15222.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 400)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_15614, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (var_varPtr_15776, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (var_type_15614, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (var_switchVar_14890, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 401)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_15968 (enumerator_15222.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_15968.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_15968.current_mType (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)).add_operation (enumerator_15968.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)).add_operation (var_varPtr_15776, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)).add_operation (enumerator_15968.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 403)) ;
          enumerator_15968.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_15222.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 407)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 415)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 416)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 417)) ;
    }
    enumerator_15222.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 419)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  cEnumerator_actualParameterListAST enumerator_2748 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_2748.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((cPtr_actualParameterAST *) enumerator_2748.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 67)) ;
    enumerator_2748.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_typeMethodCallInstructionAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_type_3552 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 83)) ;
  GALGAS_formalParameterSignature var_routineSignature_3744 ;
  GALGAS_bool var_hasCompilerArgument_3769 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = this ;
  extensionGetter_definition (var_type_3552, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 85)).readProperty_mClassMethodMap ().method_searchKey (temp_1.readProperty_mMethodName (), var_routineSignature_3744, var_hasCompilerArgument_3769, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 85)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_4210 ;
  {
  const GALGAS_typeMethodCallInstructionAST temp_2 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_2.readProperty_mMethodName (), GALGAS_string ("'").add_operation (temp_3.readProperty_mMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 92)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 92)), var_routineSignature_3744, temp_4.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_4210, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 87)) ;
  }
  const GALGAS_typeMethodCallInstructionAST temp_5 = this ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (temp_5.readProperty_mTypeName (), temp_6.readProperty_mMethodName (), var_actualParameterListForGeneration_4210, var_hasCompilerArgument_3769  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 100))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 100)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 126)) ;
  GALGAS_stringlist var_parameterCppNameList_5424 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 128)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5476 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
  GALGAS_stringlist var_inputVariableList_5517 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 130)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_5558 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_5558.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5851 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_5558.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5476, var_inputVariableList_5517, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5851, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 132)) ;
    var_parameterCppNameList_5424.addAssign_operation (var_parameterCppName_5851  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 140)) ;
    enumerator_5558.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = this ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)).add_operation (temp_2.readProperty_mMethodName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 144)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 143)) ;
  cEnumerator_stringlist enumerator_6124 (var_parameterCppNameList_5424, kENUMERATION_UP) ;
  while (enumerator_6124.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_6124.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 146)) ;
    if (enumerator_6124.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 147)) ;
    }
    enumerator_6124.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = this ;
    test_3 = temp_4.readProperty_mHasCompilerArgument ().boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 150)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 150)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5424.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 151)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 152)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 154)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = this ;
    test_6 = temp_7.readProperty_mHasCompilerArgument ().operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_5424.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 156)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 157)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.readProperty_mMethodName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 159)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 160)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_localVariableDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry joker_2964 ; // Joker input parameter
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mTypeName (), joker_2964, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationAST::method_analyzeSemanticInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationAST temp_0 = this ;
  GALGAS_unifiedTypeMapEntry var_targetType_3698 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 79)) ;
  const GALGAS_localVariableDeclarationAST temp_1 = this ;
  const GALGAS_localVariableDeclarationAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_3800 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 80)) ;
  {
  const GALGAS_localVariableDeclarationAST temp_3 = this ;
  extensionSetter_insertDeclaredLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), var_targetType_3698, var_targetVariableCppName_3800, var_targetVariableCppName_3800, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 81)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_3698, var_targetVariableCppName_3800  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 88))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 88)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mVariableType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 112)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = this ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_1.readProperty_mVariableType (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)).add_operation (temp_2.readProperty_mCppVariableName (), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 113)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 117)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_expression_5274 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mSourceExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 136)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5274, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 133)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = this ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = this ;
  GALGAS_string var_targetVariableCppName_5333 = GALGAS_string ("var_").add_operation (temp_1.readProperty_mVariableName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 142)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 142)).add_operation (temp_2.readProperty_mVariableName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 142)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 142)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_3.readProperty_mVariableName (), GALGAS_bool (true), var_expression_5274.readProperty_mResultType (), var_targetVariableCppName_5333, var_targetVariableCppName_5333, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 143)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5274.readProperty_mResultType (), GALGAS_bool (false), var_targetVariableCppName_5333, var_expression_5274  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 151))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 151)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_warningInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mLocationExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 69)) ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mMessageExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 70)) ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.readProperty_mFixitListAST (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 71)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                    GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_locationExpression_3903 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_3930 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_3962 ;
  {
  const GALGAS_warningInstructionAST temp_0 = this ;
  const GALGAS_warningInstructionAST temp_1 = this ;
  const GALGAS_warningInstructionAST temp_2 = this ;
  const GALGAS_warningInstructionAST temp_3 = this ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.readProperty_mLocationExpression (), temp_1.readProperty_mMessageExpression (), temp_2.readProperty_mFixitListAST (), temp_3.readProperty_mInstructionLocation (), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_3903, var_messageExpression_3930, var_fixitListForGeneration_3962, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 86)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (temp_4.readProperty_mInstructionLocation (), var_locationExpression_3903, var_messageExpression_3930, var_fixitListForGeneration_3962  COMMA_SOURCE_FILE ("instruction-warning.galgas", 101))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 101)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverCppVarName_5327 ;
  const GALGAS_warningInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_5327, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 130)) ;
  GALGAS_string var_messageCppVarName_5533 ;
  const GALGAS_warningInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWarningExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_5533, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 132)) ;
  GALGAS_string var_fixItArrayCppName_5782 ;
  const GALGAS_warningInstructionForGeneration temp_2 = this ;
  extensionMethod_generateFixIt (temp_2.readProperty_mFixitListForGeneration (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_5782, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 140)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 149)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 149)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 150)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 150)).add_operation (var_receiverCppVarName_5327, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 150)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)).add_operation (var_messageCppVarName_5533, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 151)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 152)).add_operation (var_fixItArrayCppName_5782, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 152)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)).add_operation (extensionGetter_commaSourceFile (temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 153)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 150)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 368)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_1.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 369)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_mDoBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 370)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.readProperty_mElseBranchInstructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 371)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_enterInstructionInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 379)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_m_5F_do_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 380)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.readProperty_m_5F_else_5F_Instructions (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 381)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_receiverExpression_14095 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 399)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_14095, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 396)) ;
  GALGAS_unifiedTypeMapEntry var_receiverType_14118 = var_receiverExpression_14095.readProperty_mResultType () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_14259 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_14298 (extensionGetter_definition (var_receiverType_14118, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 408)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_3 = var_found_14259.operator_not (SOURCE_FILE ("instruction-with.galgas", 408)).isValidAndTrue () ;
      if (enumerator_14298.hasCurrentObject () && bool_3) {
        while (enumerator_14298.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = this ;
          var_found_14259 = GALGAS_bool (kIsEqual, enumerator_14298.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_4.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_14298.gotoNextObject () ;
          if (enumerator_14298.hasCurrentObject ()) {
            bool_3 = var_found_14259.operator_not (SOURCE_FILE ("instruction-with.galgas", 408)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_14259.operator_not (SOURCE_FILE ("instruction-with.galgas", 411)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = this ;
          const GALGAS_readAccessWithInstructionAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_7.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 412)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 412)).add_operation (extensionGetter_definition (var_receiverType_14118, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 413)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 412)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_15001 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 420)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_15001, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 417)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readAccessWithInstructionAST temp_11 = this ;
    test_10 = GALGAS_bool (kIsEqual, temp_11.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_15001.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 427)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readAccessWithInstructionAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_15001.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 429)), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 428)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_15001.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 431)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        const GALGAS_readAccessWithInstructionAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_15001.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 433)), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 432)) ;
      }
    }
  }
  const GALGAS_readAccessWithInstructionAST temp_18 = this ;
  GALGAS_string var_objectArrayCppName_15647 = GALGAS_string ("objectArray_").add_operation (temp_18.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)).getter_string (SOURCE_FILE ("instruction-with.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 436)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = extensionGetter_definition (var_receiverType_14118, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 438)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 438)).operator_not (SOURCE_FILE ("instruction-with.galgas", 438)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_readAccessWithInstructionAST temp_20 = this ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_14118, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 439)), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 439)) ;
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 442)) ;
  }
  GALGAS_localConstantList var_localConstantList_16133 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 444)) ;
  cEnumerator_typedPropertyList enumerator_16200 (extensionGetter_definition (var_receiverType_14118, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 445)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16200.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_22 = this ;
    const GALGAS_readAccessWithInstructionAST temp_23 = this ;
    var_localConstantList_16133.addAssign_operation (enumerator_16200.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_22.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_16200.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 448)), temp_23.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 448)), GALGAS_bool (true), var_objectArrayCppName_15647.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450)).add_operation (enumerator_16200.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 450))  COMMA_SOURCE_FILE ("instruction-with.galgas", 446)) ;
    enumerator_16200.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_24 = this ;
  const GALGAS_readAccessWithInstructionAST temp_25 = this ;
  var_localConstantList_16133.addAssign_operation (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 454)), GALGAS_lstring::constructor_new (temp_24.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 455)), temp_25.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 455)), GALGAS_bool (true), var_objectArrayCppName_15647.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 457))  COMMA_SOURCE_FILE ("instruction-with.galgas", 453)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_17268 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_26 = this ;
  const GALGAS_readAccessWithInstructionAST temp_27 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_16133, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 464)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 465)), temp_26.readProperty_mDoBranchInstructions (), temp_27.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_17268, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 458)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_17721 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_28 = this ;
  const GALGAS_readAccessWithInstructionAST temp_29 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 477)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 478)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 479)), temp_28.readProperty_mElseBranchInstructions (), temp_29.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_17721, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 472)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_30 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_30.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 485)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_31 = this ;
  const GALGAS_readAccessWithInstructionAST temp_32 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (temp_31.readProperty_mInstructionLocation (), var_receiverExpression_14095, var_objectArrayCppName_15647, var_keyExpression_15001, temp_32.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_17268, var_else_5F_instructionList_17721  COMMA_SOURCE_FILE ("instruction-with.galgas", 487))  COMMA_SOURCE_FILE ("instruction-with.galgas", 487)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteAccessWithInstructionAST::method_analyzeSemanticInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_keyExpression_19044 ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mKeyExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 511)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_19044, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 508)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readWriteAccessWithInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_19044.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 518)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_readWriteAccessWithInstructionAST temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_19044.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 520)), fixItArray5  COMMA_SOURCE_FILE ("instruction-with.galgas", 519)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_keyExpression_19044.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 522)).readProperty_mTypeName ().readProperty_string ().objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_readWriteAccessWithInstructionAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfKeyExpression (), GALGAS_string ("the key type is '@").add_operation (extensionGetter_definition (var_keyExpression_19044.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 524)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 523)) ;
      }
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_9 = this ;
  GALGAS_string var_objectArrayCppName_19690 = GALGAS_string ("objectArray_").add_operation (temp_9.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 527)).getter_string (SOURCE_FILE ("instruction-with.galgas", 527)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 527)) ;
  GALGAS_unifiedTypeMapEntry var_targetType_19833 ;
  GALGAS_string var_receiverVariableCppName_19871 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readWriteAccessWithInstructionAST temp_11 = this ;
    test_10 = temp_11.readProperty_mReceiverIsPrefixedBySelf ().boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        GALGAS_unifiedTypeMapEntry var_selfType_20006 ;
        GALGAS_bool var_unused_0_20042 ;
        GALGAS_bool var_propertiesAreMutable_20111 ;
        const bool optionalResult19961 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_20006, var_unused_0_20042, var_propertiesAreMutable_20111) ;
        if (!optionalResult19961) {
          test_12 = kBoolFalse ;
        }
        if (kBoolTrue == test_12) {
          enumGalgasBool test_13 = kBoolTrue ;
          if (kBoolTrue == test_13) {
            const GALGAS_readWriteAccessWithInstructionAST temp_14 = this ;
            test_13 = GALGAS_bool (kIsEqual, temp_14.readProperty_mReceiverName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_13) {
              var_receiverVariableCppName_19871 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName () ;
              var_targetType_19833 = var_selfType_20006 ;
            }
          }
          if (kBoolFalse == test_13) {
            GALGAS_propertyMap var_propertyMap_20299 = extensionGetter_definition (var_selfType_20006, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 540)).readProperty_mPropertyMap () ;
            GALGAS_bool var_isConstant_20406 ;
            const GALGAS_readWriteAccessWithInstructionAST temp_15 = this ;
            GALGAS_bool joker_20389 ; // Joker input parameter
            var_propertyMap_20299.method_searchKey (temp_15.readProperty_mReceiverName (), joker_20389, var_isConstant_20406, var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 541)) ;
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = var_isConstant_20406.boolEnum () ;
              if (kBoolTrue == test_16) {
                const GALGAS_readWriteAccessWithInstructionAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray18  COMMA_SOURCE_FILE ("instruction-with.galgas", 543)) ;
              }
            }
            if (kBoolFalse == test_16) {
              enumGalgasBool test_19 = kBoolTrue ;
              if (kBoolTrue == test_19) {
                test_19 = var_propertiesAreMutable_20111.operator_not (SOURCE_FILE ("instruction-with.galgas", 544)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  const GALGAS_readWriteAccessWithInstructionAST temp_20 = this ;
                  TC_Array <C_FixItDescription> fixItArray21 ;
                  inCompiler->emitSemanticError (temp_20.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("the property cannot be modified in this context"), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 545)) ;
                }
              }
            }
            const GALGAS_readWriteAccessWithInstructionAST temp_22 = this ;
            var_receiverVariableCppName_19871 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 547)).add_operation (temp_22.readProperty_mReceiverName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 548)) ;
          }
        }
      }
      if (kBoolFalse == test_12) {
        const GALGAS_readWriteAccessWithInstructionAST temp_23 = this ;
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mReceiverName ().readProperty_location (), GALGAS_string ("'self' cannot be used in this context"), fixItArray24  COMMA_SOURCE_FILE ("instruction-with.galgas", 551)) ;
        var_targetType_19833.drop () ; // Release error dropped variable
        var_receiverVariableCppName_19871.drop () ; // Release error dropped variable
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_readWriteAccessWithInstructionAST temp_25 = this ;
    GALGAS_string joker_21110 ; // Joker input parameter
    extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_25.readProperty_mReceiverName (), var_targetType_19833, var_receiverVariableCppName_19871, joker_21110, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 554)) ;
    }
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_26 = this ;
  cEnumerator_lstringlist enumerator_21136 (temp_26.readProperty_mFieldList (), kENUMERATION_UP) ;
  while (enumerator_21136.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21179 = extensionGetter_definition (var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 562)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_21266 ;
    GALGAS_bool var_isConstant_21282 ;
    var_propertyMap_21179.method_searchKey (enumerator_21136.current_mValue (HERE), var_isPublic_21266, var_isConstant_21282, var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 563)) ;
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_isPublic_21266.operator_not (SOURCE_FILE ("instruction-with.galgas", 564)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_21136.current_mValue (HERE).readProperty_location (), GALGAS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray28  COMMA_SOURCE_FILE ("instruction-with.galgas", 565)) ;
      }
    }
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = var_isConstant_21282.boolEnum () ;
      if (kBoolTrue == test_29) {
        TC_Array <C_FixItDescription> fixItArray30 ;
        inCompiler->emitSemanticError (enumerator_21136.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray30  COMMA_SOURCE_FILE ("instruction-with.galgas", 568)) ;
      }
    }
    enumerator_21136.gotoNextObject () ;
  }
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = extensionGetter_definition (var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 572)).readProperty_mHandledOperatorFlags ().getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 572)).operator_not (SOURCE_FILE ("instruction-with.galgas", 572)).boolEnum () ;
    if (kBoolTrue == test_31) {
      const GALGAS_readWriteAccessWithInstructionAST temp_32 = this ;
      TC_Array <C_FixItDescription> fixItArray33 ;
      inCompiler->emitSemanticError (temp_32.readProperty_mEndOfReceiverExpression (), GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 573)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 573)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 573)), fixItArray33  COMMA_SOURCE_FILE ("instruction-with.galgas", 573)) ;
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GALGAS_readWriteAccessWithInstructionAST temp_35 = this ;
    test_34 = GALGAS_bool (kIsNotEqual, temp_35.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_34) {
      GALGAS_bool var_found_21881 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_21920 (extensionGetter_definition (var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 578)).readProperty_mMapSearchMethodList (), kENUMERATION_UP) ;
      bool bool_36 = var_found_21881.operator_not (SOURCE_FILE ("instruction-with.galgas", 578)).isValidAndTrue () ;
      if (enumerator_21920.hasCurrentObject () && bool_36) {
        while (enumerator_21920.hasCurrentObject () && bool_36) {
          const GALGAS_readWriteAccessWithInstructionAST temp_37 = this ;
          var_found_21881 = GALGAS_bool (kIsEqual, enumerator_21920.current_mSearchMethodName (HERE).readProperty_string ().objectCompare (temp_37.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string ())) ;
          enumerator_21920.gotoNextObject () ;
          if (enumerator_21920.hasCurrentObject ()) {
            bool_36 = var_found_21881.operator_not (SOURCE_FILE ("instruction-with.galgas", 578)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_38 = kBoolTrue ;
      if (kBoolTrue == test_38) {
        test_38 = var_found_21881.operator_not (SOURCE_FILE ("instruction-with.galgas", 581)).boolEnum () ;
        if (kBoolTrue == test_38) {
          const GALGAS_readWriteAccessWithInstructionAST temp_39 = this ;
          const GALGAS_readWriteAccessWithInstructionAST temp_40 = this ;
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_location (), GALGAS_string ("there is no '").add_operation (temp_40.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 582)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 582)).add_operation (extensionGetter_definition (var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 582)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 582)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 582)), fixItArray41  COMMA_SOURCE_FILE ("instruction-with.galgas", 582)) ;
        }
      }
    }
  }
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 586)) ;
  }
  GALGAS_localInitializedVariableList var_localInitializedVariableList_22483 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 588)) ;
  cEnumerator_typedPropertyList enumerator_22531 (extensionGetter_definition (var_targetType_19833, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 589)).readProperty_mCurrentTypedPropertyList (), kENUMERATION_UP) ;
  while (enumerator_22531.hasCurrentObject ()) {
    const GALGAS_readWriteAccessWithInstructionAST temp_42 = this ;
    const GALGAS_readWriteAccessWithInstructionAST temp_43 = this ;
    var_localInitializedVariableList_22483.addAssign_operation (enumerator_22531.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_42.readProperty_mPrefix ().readProperty_string ().add_operation (enumerator_22531.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 592)), temp_43.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 592)), var_objectArrayCppName_19690.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593)).add_operation (enumerator_22531.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 593))  COMMA_SOURCE_FILE ("instruction-with.galgas", 590)) ;
    enumerator_22531.gotoNextObject () ;
  }
  GALGAS_localConstantList temp_44 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 599)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_45 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_46 = this ;
  temp_44.addAssign_operation (extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 596)), GALGAS_lstring::constructor_new (temp_45.readProperty_mPrefix ().readProperty_string ().add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 597)), temp_46.readProperty_mEndOfReceiverExpression ()  COMMA_SOURCE_FILE ("instruction-with.galgas", 597)), GALGAS_bool (true), var_objectArrayCppName_19690.add_operation (GALGAS_string ("->mProperty_lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 599))  COMMA_SOURCE_FILE ("instruction-with.galgas", 599)) ;
  GALGAS_localConstantList var_localConstantList_22856 = temp_44 ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_23588 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_47 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_48 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_localConstantList_22856, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 607)), var_localInitializedVariableList_22483, temp_47.readProperty_m_5F_do_5F_Instructions (), temp_48.readProperty_mEndOf_5F_do_5F_instructions (), ioArgument_ioVariableMap, var_do_5F_instructionList_23588, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 601)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_23999 ;
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_49 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_50 = this ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 620)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 621)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 622)), temp_49.readProperty_m_5F_else_5F_Instructions (), temp_50.readProperty_mEndOf_5F_else_5F_instructions (), ioArgument_ioVariableMap, var_else_5F_instructionList_23999, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 615)) ;
  }
  {
  const GALGAS_readWriteAccessWithInstructionAST temp_51 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_51.readProperty_mEndOf_5F_else_5F_instructions (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 628)) ;
  }
  const GALGAS_readWriteAccessWithInstructionAST temp_52 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_53 = this ;
  const GALGAS_readWriteAccessWithInstructionAST temp_54 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readWriteWithInstructionForGeneration::constructor_new (temp_52.readProperty_mInstructionLocation (), var_receiverVariableCppName_19871, var_targetType_19833, temp_53.readProperty_mFieldList (), var_objectArrayCppName_19690, var_keyExpression_19044, temp_54.readProperty_mSearchMethodNameForErrorSignaling ().readProperty_string (), var_do_5F_instructionList_23588, var_else_5F_instructionList_23999  COMMA_SOURCE_FILE ("instruction-with.galgas", 630))  COMMA_SOURCE_FILE ("instruction-with.galgas", 630)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readOnlyWithInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readOnlyWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_receiverVarCppName_26636 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName_26636, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 682)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_1 = this ;
  GALGAS_unifiedTypeMapEntry var_receiverType_26659 = temp_1.readProperty_mReceiverExpression ().readProperty_mResultType () ;
  GALGAS_string var_keyVarCppName_26899 ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_26899, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 691)) ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const cMapElement_").add_operation (extensionGetter_identifierRepresentation (var_receiverType_26659, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 699)).add_operation (temp_3.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 700)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 700)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26659, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 701)).add_operation (var_receiverVarCppName_26636, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 702)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 699)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_5 = this ;
    test_4 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName_26899, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 704)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 704)) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_6 = this ;
    const GALGAS_readOnlyWithInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("performSearch (").add_operation (var_keyVarCppName_26899, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 706)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 707)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26659, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 708)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)).add_operation (temp_6.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 709)).add_operation (extensionGetter_commaSourceFile (temp_7.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 710)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 706)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 711)) COMMA_SOURCE_FILE ("instruction-with.galgas", 711)) ;
    }
  }
  const GALGAS_readOnlyWithInstructionForGeneration temp_8 = this ;
  const GALGAS_readOnlyWithInstructionForGeneration temp_9 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != ").add_operation (temp_8.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 713)).add_operation (temp_9.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 714)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 714)).add_operation (extensionGetter_identifierRepresentation (var_receiverType_26659, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 715)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 713)) ;
  {
  const GALGAS_readOnlyWithInstructionForGeneration temp_10 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_10.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 716)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    const GALGAS_readOnlyWithInstructionForGeneration temp_12 = this ;
    test_11 = GALGAS_bool (kIsStrictSup, temp_12.readProperty_mElseBranchInstructions ().getter_length (SOURCE_FILE ("instruction-with.galgas", 724)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 725)) ;
      {
      const GALGAS_readOnlyWithInstructionForGeneration temp_13 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_13.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 726)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 735)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteWithInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_readWriteWithInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_readWriteWithInstructionForGeneration temp_0 = this ;
  GALGAS_string var_receiverCppName_28982 = temp_0.readProperty_mReceiverVariableCppName () ;
  const GALGAS_readWriteWithInstructionForGeneration temp_1 = this ;
  cEnumerator_lstringlist enumerator_29028 (temp_1.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_29028.hasCurrentObject ()) {
    var_receiverCppName_28982.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_29028.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 749)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 749)) ;
    enumerator_29028.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName_29347 ;
  const GALGAS_readWriteWithInstructionForGeneration temp_2 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_2.readProperty_mKeyExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName_29347, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 752)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 760)) COMMA_SOURCE_FILE ("instruction-with.galgas", 760)) ;
  }
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mReceiverVariableCppName () COMMA_SOURCE_FILE ("instruction-with.galgas", 761)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_4 = this ;
  extensionMethod_addHeaderFileName (temp_4.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 762)) ;
  const GALGAS_readWriteWithInstructionForGeneration temp_5 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_6 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cMapElement_").add_operation (extensionGetter_identifierRepresentation (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 763)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 763)).add_operation (temp_6.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)).add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 764)).add_operation (var_receiverCppName_28982, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 765)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 763)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_readWriteWithInstructionForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSearchMethodNameForErrorSignaling ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)).add_operation (var_keyVarCppName_29347, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 767)) ;
    }
  }
  if (kBoolFalse == test_8) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)).add_operation (var_keyVarCppName_29347, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 769)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 769)) ;
    const GALGAS_readWriteWithInstructionForGeneration temp_10 = this ;
    const GALGAS_readWriteWithInstructionForGeneration temp_11 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", kSearchErrorMessage_").add_operation (extensionGetter_identifierRepresentation (temp_10.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)).add_operation (temp_11.readProperty_mSearchMethodNameForErrorSignaling (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 770)) ;
  }
  const GALGAS_readWriteWithInstructionForGeneration temp_12 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_13 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_14 = this ;
  const GALGAS_readWriteWithInstructionForGeneration temp_15 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 772)).add_operation (temp_13.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)).add_operation (GALGAS_string ("  macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 773)).add_operation (temp_14.readProperty_mObjectArrayCppName (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (extensionGetter_identifierRepresentation (temp_15.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 774)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 772)) ;
  {
  const GALGAS_readWriteWithInstructionForGeneration temp_16 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_16.readProperty_mDoBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 775)) ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_readWriteWithInstructionForGeneration temp_18 = this ;
    test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mElseBranchInstructions ().getter_length (SOURCE_FILE ("instruction-with.galgas", 783)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_17) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 784)) ;
      {
      const GALGAS_readWriteWithInstructionForGeneration temp_19 = this ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_19.readProperty_mElseBranchInstructions (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 785)) ;
      }
    }
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 794)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_nonTerminalSymbolIndex_4560 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4562 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4560, joker_4562, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 103)) ;
  const GALGAS_nonterminalCallInstruction temp_1 = this ;
  const GALGAS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4560  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 104))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 104)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                       const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                       const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                       const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GALGAS_string /* constinArgument_inComponentName */,
                                                                       const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap var_labelMap_5728 ;
  const GALGAS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_5728, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 130)) ;
  GALGAS_formalParameterSignature var_signature_5771 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_nonterminalCallInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsEqual, temp_2.readProperty_mLabelName ().readProperty_string ().objectCompare (GALGAS_string ("parse"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_signature_5771 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 133)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_nonterminalCallInstruction temp_3 = this ;
    GALGAS_formalParameterListForGeneration joker_5884 ; // Joker input parameter
    GALGAS_location joker_5898 ; // Joker input parameter
    var_labelMap_5728.method_searchKey (temp_3.readProperty_mLabelName (), joker_5884, var_signature_5771, joker_5898, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 135)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_6346 ;
  {
  const GALGAS_nonterminalCallInstruction temp_4 = this ;
  const GALGAS_nonterminalCallInstruction temp_5 = this ;
  const GALGAS_nonterminalCallInstruction temp_6 = this ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.readProperty_mNonterminalName (), GALGAS_string ("'<").add_operation (temp_5.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 143)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 143)), var_signature_5771, temp_6.readProperty_mActualParameterList (), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6346, inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 138)) ;
  }
  const GALGAS_nonterminalCallInstruction temp_7 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 151)) ;
  const GALGAS_nonterminalCallInstruction temp_8 = this ;
  const GALGAS_nonterminalCallInstruction temp_9 = this ;
  const GALGAS_nonterminalCallInstruction temp_10 = this ;
  const GALGAS_nonterminalCallInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mNonterminalName ().readProperty_string (), temp_10.readProperty_mLabelName ().readProperty_string (), var_actualParameterListForGeneration_6346, temp_11.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ()  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 157))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 157)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 189)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-non-terminal.galgas", 190))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 185))  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 185)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_nonterminalInstructionForGeneration var_si_8618 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_8618.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_8618.readProperty_mNonterminalName ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 203)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8618.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 205)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 205)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 204)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_8959 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_8959.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_8959.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 209)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 209)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 208)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_nonterminalInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 212)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas", 215)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_nonterminalInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 216)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_parameterCppNameList_9977 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 233)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_10029 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 234)) ;
  GALGAS_stringlist var_inputVariableList_10070 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-non-terminal.galgas", 235)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_0 = this ;
  cEnumerator_actualParameterListForGeneration enumerator_10111 (temp_0.readProperty_mActualParameterList (), kENUMERATION_UP) ;
  while (enumerator_10111.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_10404 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_10111.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10029, var_inputVariableList_10070, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_10404, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 237)) ;
    var_parameterCppNameList_9977.addAssign_operation (var_parameterCppName_10404  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 246)) ;
    enumerator_10111.gotoNextObject () ;
  }
  const GALGAS_nonterminalInstructionForGeneration temp_1 = this ;
  GALGAS_string var_sdtResultVarName_10511 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 249)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 249)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("C_String ").add_operation (var_sdtResultVarName_10511, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 251)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 251)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 251)) ;
    }
  }
  const GALGAS_nonterminalInstructionForGeneration temp_3 = this ;
  const GALGAS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 253)) ;
  cEnumerator_stringlist enumerator_10863 (var_parameterCppNameList_9977, kENUMERATION_UP) ;
  while (enumerator_10863.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_10863.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 255)) ;
    enumerator_10863.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_sdtResultVarName_10511.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 258)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 260)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 260)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 261)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 261)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 261)) ;
  const GALGAS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_10511, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 262)) ;
  cEnumerator_stringlist enumerator_11400 (var_jokerParametersToReleaseList_10029, kENUMERATION_UP) ;
  while (enumerator_11400.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_11400.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas", 270)) ;
    enumerator_11400.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_4184 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 105)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4272 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 107)) ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  routine_transformInstructionList (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4272, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 108)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList_4591 = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList_4272  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 115)) ;
  const GALGAS_repeatInstruction temp_1 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4696 (temp_1.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_4696.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4756 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 118)) ;
    {
    routine_transformInstructionList (enumerator_4696.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4756, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 119)) ;
    }
    var_repeatBranchList_4591.addAssign_operation (var_syntaxInstructionList_4756  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 126)) ;
    enumerator_4696.gotoNextObject () ;
  }
  const GALGAS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_4591, var_addedNonTerminalIndex_4184  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 129))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 129)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_6149 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 156)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 158)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_6712 ;
  {
  const GALGAS_repeatInstruction temp_0 = this ;
  const GALGAS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_6712, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 160)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6829 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 178)) ;
  const GALGAS_repeatInstruction temp_2 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_6884 (temp_2.readProperty_mRepeatBranchList (), kENUMERATION_UP) ;
  while (enumerator_6884.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_7332 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6884.current_mSyntaxInstructionList (HERE), enumerator_6884.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7332, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 180)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6829.addAssign_operation (var_instructionList_7332, enumerator_6884.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 197)) ;
    enumerator_6884.gotoNextObject () ;
  }
  {
  const GALGAS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 200)) ;
  }
  const GALGAS_repeatInstruction temp_4 = this ;
  const GALGAS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6149, var_repeated_5F_instructionList_6712, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_6829  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 202))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 202)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList_8898 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 232)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9027 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-repeat.galgas", 233)) ;
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9122 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_9122.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9027.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9122.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 236)), enumerator_9122.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 235)) ;
    enumerator_9122.gotoNextObject () ;
  }
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  const GALGAS_repeatInstructionForGeneration temp_4 = this ;
  const GALGAS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_8898, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9027  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240))  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 240)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_repeatInstructionForGeneration var_si_10056 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_10056.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10056.readProperty_m_5F_repeated_5F_instructionList (), var_si_10056.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 259)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 260)).objectCompare (var_si_10056.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 260)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas", 260)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_repeatInstructionForGeneration temp_4 = this ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10056.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 263)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 262)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 263)).add_operation (var_si_10056.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-repeat.galgas", 265)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 264)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 261)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_repeatInstructionForGeneration temp_6 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10850 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10954 (var_si_10056.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_10850.hasCurrentObject () && enumerator_10954.hasCurrentObject () && bool_7) {
        while (enumerator_10850.hasCurrentObject () && enumerator_10954.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_10850.current_mInstructionList (HERE), enumerator_10954.current_mInstructionList (HERE), enumerator_10954.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 269)) ;
          enumerator_10850.gotoNextObject () ;
          enumerator_10954.gotoNextObject () ;
          if (enumerator_10850.hasCurrentObject () && enumerator_10954.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      GALGAS_syntaxInstructionForGeneration var_si_11161 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_11161.ptr ()) {
        test_8 = kBoolFalse ;
      }
      if (kBoolTrue == test_8) {
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11161.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 273)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_8) {
      const GALGAS_repeatInstructionForGeneration temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 277)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas", 280)).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_repeatInstructionForGeneration temp_13 = this ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 281)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@repeatInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_repeatFlagCppName_12173 = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 297)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 298)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_repeatFlagCppName_12173, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 299)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_repeatFlagCppName_12173, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 300)) ;
  {
  const GALGAS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 301)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 309)) ;
  }
  const GALGAS_repeatInstructionForGeneration temp_1 = this ;
  const GALGAS_repeatInstructionForGeneration temp_2 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_1.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (temp_2.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 310)) ;
  const GALGAS_repeatInstructionForGeneration temp_3 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12840 (temp_3.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  GALGAS_uint index_12820 ((uint32_t) 0) ;
  while (enumerator_12840.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_12820.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)).getter_string (SOURCE_FILE ("instruction-repeat.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 312)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12840.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 313)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 321)) ;
    enumerator_12840.gotoNextObject () ;
    index_12820.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 311)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 323)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_repeatFlagCppName_12173, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 324)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 324)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 325)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 326)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas", 327)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas", 328)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                          GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_addedNonTerminalIndex_3858 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 100)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList_3939 = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 102)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_4006 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_4006.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4066 = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 104)) ;
    {
    routine_transformInstructionList (enumerator_4006.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4066, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 105)) ;
    }
    var_selectBranchList_3939.addAssign_operation (var_syntaxInstructionList_4066  COMMA_SOURCE_FILE ("instruction-select.galgas", 112)) ;
    enumerator_4006.gotoNextObject () ;
  }
  const GALGAS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_3939, var_addedNonTerminalIndex_3858  COMMA_SOURCE_FILE ("instruction-select.galgas", 115))  COMMA_SOURCE_FILE ("instruction-select.galgas", 115)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_choiceIndex_5460 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 141)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 143)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5639 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 145)) ;
  const GALGAS_selectInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5738 (temp_0.readProperty_mSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_5738.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList_6186 ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_5738.current_mSyntaxInstructionList (HERE), enumerator_5738.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6186, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 147)) ;
    }
    var_listOfSemanticInstructionListForGeneration_5639.addAssign_operation (var_instructionList_6186, enumerator_5738.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 164)) ;
    enumerator_5738.gotoNextObject () ;
  }
  {
  const GALGAS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 167)) ;
  }
  const GALGAS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_5460, var_listOfSemanticInstructionListForGeneration_5639  COMMA_SOURCE_FILE ("instruction-select.galgas", 168))  COMMA_SOURCE_FILE ("instruction-select.galgas", 168)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7565 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-select.galgas", 193)) ;
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_7660 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_7660.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_7565.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_7660.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 196)), enumerator_7660.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas", 195)) ;
    enumerator_7660.gotoNextObject () ;
  }
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  const GALGAS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_7565  COMMA_SOURCE_FILE ("instruction-select.galgas", 199))  COMMA_SOURCE_FILE ("instruction-select.galgas", 199)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_selectInstructionForGeneration var_si_8524 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_8524.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      result_result = GALGAS_bool (true) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GALGAS_bool (kIsNotEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 219)).objectCompare (var_si_8524.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 219)))) COMMA_SOURCE_FILE ("instruction-select.galgas", 219)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_selectInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_8524.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 222)).getter_string (SOURCE_FILE ("instruction-select.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 221)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 222)).add_operation (var_si_8524.readProperty_mListOfSemanticInstructionListForGeneration ().getter_length (SOURCE_FILE ("instruction-select.galgas", 224)).getter_string (SOURCE_FILE ("instruction-select.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 223)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas", 220)) ;
          result_result = GALGAS_bool (false) ;
        }
      }
      const GALGAS_selectInstructionForGeneration temp_5 = this ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9203 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_9315 (var_si_8524.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9203.hasCurrentObject () && enumerator_9315.hasCurrentObject () && bool_6) {
        while (enumerator_9203.hasCurrentObject () && enumerator_9315.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9203.current_mInstructionList (HERE), enumerator_9315.current_mInstructionList (HERE), enumerator_9315.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 229)) ;
          enumerator_9203.gotoNextObject () ;
          enumerator_9315.gotoNextObject () ;
          if (enumerator_9203.hasCurrentObject () && enumerator_9315.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      GALGAS_syntaxInstructionForGeneration var_si_9522 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_9522.ptr ()) {
        test_7 = kBoolFalse ;
      }
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9522.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas", 233)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_selectInstructionForGeneration temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas", 237)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas", 240)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_selectInstructionForGeneration temp_12 = this ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas", 241)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) COMMA_SOURCE_FILE ("instruction-select.galgas", 257)) ;
  }
  const GALGAS_selectInstructionForGeneration temp_0 = this ;
  const GALGAS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 258)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 258)) ;
  const GALGAS_selectInstructionForGeneration temp_2 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_10830 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  GALGAS_uint index_10810 ((uint32_t) 0) ;
  while (enumerator_10830.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case ").add_operation (index_10810.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).getter_string (SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas", 260)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 260)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_10830.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 261)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 269)) ;
    enumerator_10830.gotoNextObject () ;
    index_10810.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 259)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 271)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 272)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                 const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                 GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                 GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_terminalSymbolIndex_6476 ;
  const GALGAS_terminalCheckInstruction temp_0 = this ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_6483 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (temp_0.readProperty_mTerminalName ().readProperty_string ()) ;
  if (NULL != objectArray_6483) {
      macroValidSharedObject (objectArray_6483, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex_6476 = objectArray_6483->mProperty_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex_6476 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas", 149)) ;
    {
    const GALGAS_terminalCheckInstruction temp_1 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_1.readProperty_mTerminalName (), var_terminalSymbolIndex_6476, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 150)) ;
    }
  }
  const GALGAS_terminalCheckInstruction temp_2 = this ;
  const GALGAS_terminalCheckInstruction temp_3 = this ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mTerminalName (), var_terminalSymbolIndex_6476  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 152))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 152)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                     const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                     const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                     const GALGAS_string constinArgument_inLexiqueName,
                                                                     const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                     const GALGAS_string /* constinArgument_inComponentName */,
                                                                     const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                     GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList var_sentAttributeList_7916 ;
  const GALGAS_terminalCheckInstruction temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_7916, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 177)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_terminalCheckInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mActualInputParameterList ().getter_length (SOURCE_FILE ("instruction-terminal.galgas", 179)).objectCompare (var_sentAttributeList_7916.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 179)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_terminalCheckInstruction temp_3 = this ;
      const GALGAS_terminalCheckInstruction temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_sentAttributeList_7916.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 182)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_terminalCheckInstruction temp_7 = this ;
      const GALGAS_terminalCheckInstruction temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mActualInputParameterList ().getter_length (SOURCE_FILE ("instruction-terminal.galgas", 185)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GALGAS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (var_sentAttributeList_7916.getter_length (SOURCE_FILE ("instruction-terminal.galgas", 181)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 181)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 182)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 182)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_length (SOURCE_FILE ("instruction-terminal.galgas", 184)).getter_string (SOURCE_FILE ("instruction-terminal.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 183)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 184)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 180)) ;
    }
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList_8455 = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 188)) ;
  const GALGAS_terminalCheckInstruction temp_12 = this ;
  cEnumerator_actualInputParameterListAST enumerator_8529 (temp_12.readProperty_mActualInputParameterList (), kENUMERATION_UP) ;
  cEnumerator_lexicalSentValueList enumerator_8624 (var_sentAttributeList_7916, kENUMERATION_UP) ;
  while (enumerator_8529.hasCurrentObject () && enumerator_8624.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_8529.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_8624.current_mLexicalType (HERE), enumerator_8624.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_8455, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 190)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsNotEqual, enumerator_8624.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8529.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_string temp_14 ;
        const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_8624.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_15) {
          temp_14 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_15) {
          temp_14 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_8529.current_mActualSelector (HERE).readProperty_location (), GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_8624.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 198)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 198)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 198)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 198)) ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_8624.current_mLexicalFormalSelector (HERE).readProperty_location (), GALGAS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 199)) ;
      }
    }
    enumerator_8529.gotoNextObject () ;
    enumerator_8624.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstruction temp_18 = this ;
  cEnumerator__32_lstringlist enumerator_9171 (temp_18.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_9171.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9171.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas", 204)).operator_not (SOURCE_FILE ("instruction-terminal.galgas", 204)).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <C_FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, kFixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9171.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9171.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 205)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 205)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 205)) ;
      }
    }
    enumerator_9171.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstruction temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 209)) ;
  const GALGAS_terminalCheckInstruction temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 214)) ;
  const GALGAS_terminalCheckInstruction temp_23 = this ;
  const GALGAS_terminalCheckInstruction temp_24 = this ;
  const GALGAS_terminalCheckInstruction temp_25 = this ;
  const GALGAS_terminalCheckInstruction temp_26 = this ;
  const GALGAS_terminalCheckInstruction temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_8455, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ()  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 220))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 220)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string /* constinArgument_inPosfix */,
                                                                               GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("instruction-terminal.galgas", 256)), temp_3.readProperty_mIndexingKeyList (), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 258)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("instruction-terminal.galgas", 259))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252))  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 252)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_terminalCheckInstructionForGeneration var_si_12181 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (NULL == var_si_12181.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GALGAS_bool (kIsEqual, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_12181.readProperty_mTerminalName ().readProperty_string ())) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 271)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_12181.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 273)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 273)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 272)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      GALGAS_syntaxInstructionForGeneration var_si_12521 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (NULL == var_si_12521.ptr ()) {
        test_5 = kBoolFalse ;
      }
      if (kBoolTrue == test_5) {
        const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_12521.readProperty_mInstructionLocation (), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 277)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 277)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 276)) ;
        result_result = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GALGAS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 280)) ;
      result_result = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas", 283)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_terminalCheckInstructionForGeneration temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 284)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_terminalCheckInstructionForGeneration temp_0 = this ;
  cEnumerator_terminalCheckAssignementList enumerator_13596 (temp_0.readProperty_mTerminalCheckAssignementList (), kENUMERATION_UP) ;
  while (enumerator_13596.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, enumerator_13596.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (enumerator_13596.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 302)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 302)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 302)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_13596.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (enumerator_13596.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 305)) ;
    enumerator_13596.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_2 = this ;
  cEnumerator__32_lstringlist enumerator_14013 (temp_2.readProperty_mIndexingKeyList (), kENUMERATION_UP) ;
  while (enumerator_14013.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 311)) ;
    const GALGAS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("->enterIndexing (C_Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 312)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 312)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14013.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 313)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_14013.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 314)) ;
    enumerator_14013.gotoNextObject () ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 317)) ;
  const GALGAS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 323)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 330)) COMMA_SOURCE_FILE ("instruction-terminal.galgas", 330)) ;
  }
  const GALGAS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_7 = this ;
  const GALGAS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)).add_operation (GALGAS_string ("->acceptTerminal (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)).add_operation (temp_6.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 332)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 332)).add_operation (extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 332)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas", 331)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                             GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_parseLoopInstruction temp_0 = this ;
  routine_transformInstructionList (temp_0.readProperty_mDoInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 107)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression_5503 ;
  const GALGAS_parseLoopInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mVariantExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 138)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression_5503, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 135)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression_5503.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_parseLoopInstruction temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfVariantExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_5503.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 145)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 145)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 145)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 146)), fixItArray3  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 144)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression_6114 ;
  const GALGAS_parseLoopInstruction temp_4 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_4.readProperty_mWhileExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-loop.galgas", 152)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression_6114, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 149)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_while_5F_expression_6114.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_parseLoopInstruction temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mEndOfWhileExpression (), GALGAS_string ("the variant expression type is '@").add_operation (extensionGetter_definition (var_variant_5F_expression_5503.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 159)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 159)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 159)).add_operation (extensionGetter_definition (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 160)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 160)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 160)), fixItArray7  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 158)) ;
    }
  }
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 164)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList_6969 ;
  {
  const GALGAS_parseLoopInstruction temp_8 = this ;
  const GALGAS_parseLoopInstruction temp_9 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_8.readProperty_mDoInstructionList (), temp_9.readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6969, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 166)) ;
  }
  {
  const GALGAS_parseLoopInstruction temp_10 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_10.readProperty_mEndOfInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 184)) ;
  }
  const GALGAS_parseLoopInstruction temp_11 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (temp_11.readProperty_mInstructionLocation (), var_variant_5F_expression_5503, var_while_5F_expression_6114, var_instructionList_6969  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 186))  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 186)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 211)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseLoopInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 225)) COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 225)) ;
  }
  GALGAS_string var_variantVarCppName_9107 ;
  const GALGAS_parseLoopInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mVariantExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName_9107, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 227)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantVarCppName_9107, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 229)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 229)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 230)) ;
  }
  GALGAS_string var_variantVar_9261 = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 231)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 232)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_9261, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)).add_operation (var_variantVarCppName_9107, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 233)) ;
  GALGAS_string var_loopVar_9470 = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-loop.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 235)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 236)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_9470, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 237)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (var_loopVar_9470, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 238)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 239)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9470.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 240)) ;
  GALGAS_string var_whileVarCppName_9896 ;
  const GALGAS_parseLoopInstructionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mWhileExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName_9896, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 241)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_whileVarCppName_9896, inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 242)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 243)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_9470.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 244)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_variantVar_9261.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 245)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 246)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_2.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 247)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 255)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 255)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 255)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 256)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 257)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 258)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 260)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 261)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("//--- 'parse'\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 263)) ;
  {
  const GALGAS_parseLoopInstructionForGeneration temp_3 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), temp_3.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 266)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 264)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 272)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-loop.galgas", 272)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                               GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                               GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList var_syntaxInstructionList_3870 ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  GALGAS_location joker_3872 ; // Joker input parameter
  temp_0.readProperty_mParseRewindBranchList ().method_first (var_syntaxInstructionList_3870, joker_3872, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 100)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList_3870, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 102)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_5050 = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 131)) ;
  GALGAS_uint var_referenceSelectMethodCount_5138 = ioArgument_ioSelectMethodCount ;
  const GALGAS_parseRewindInstruction temp_0 = this ;
  cEnumerator_listOfSyntaxInstructionList enumerator_5210 (temp_0.readProperty_mParseRewindBranchList (), kENUMERATION_UP) ;
  while (enumerator_5210.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount_5138 ;
    GALGAS_semanticInstructionListForGeneration var_instructionList_5322 = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-parse-rewind.galgas", 135)) ;
    cEnumerator_syntaxInstructionList enumerator_5387 (enumerator_5210.current_mSyntaxInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5387.hasCurrentObject ()) {
      callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_5387.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList_5322, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 137)) ;
      enumerator_5387.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration_5050.addAssign_operation (var_instructionList_5322, enumerator_5210.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 153)) ;
    enumerator_5210.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches_6030 = var_listOfSemanticInstructionListForGeneration_5050 ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_6129 ;
  {
  GALGAS_location joker_6131 ; // Joker input parameter
  var_tempListOfBranches_6030.setter_popFirst (var_instructionList_6129, joker_6131, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 157)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature_6196 = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList_6129, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 158)) ;
  GALGAS_bool var_ok_6274 = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_6327 (var_tempListOfBranches_6030, kENUMERATION_UP) ;
  bool bool_1 = var_ok_6274.isValidAndTrue () ;
  if (enumerator_6327.hasCurrentObject () && bool_1) {
    while (enumerator_6327.hasCurrentObject () && bool_1) {
      var_ok_6274 = function_compareSyntaxSignature (var_referenceSignature_6196, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_6327.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 163)), enumerator_6327.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 161)) ;
      enumerator_6327.gotoNextObject () ;
      if (enumerator_6327.hasCurrentObject ()) {
        bool_1 = var_ok_6274.isValidAndTrue () ;
      }
    }
  }
  const GALGAS_parseRewindInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (temp_2.readProperty_mInstructionLocation (), var_listOfSemanticInstructionListForGeneration_5050  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 168))  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 168)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration var_instructionList_7689 ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  GALGAS_location joker_7691 ; // Joker input parameter
  temp_0.readProperty_mListOfSemanticInstructionListForGeneration ().method_first (var_instructionList_7689, joker_7691, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 190)) ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList_7689, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 191)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseRewindInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 205)) COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 205)) ;
  }
  GALGAS_string var_parsingContextVar_8416 = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-parse-rewind.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 206)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 207)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar_8416, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 208)) ;
  const GALGAS_parseRewindInstructionForGeneration temp_0 = this ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_8654 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration (), kENUMERATION_UP) ;
  while (enumerator_8654.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_8654.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 211)) ;
    }
    if (enumerator_8654.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 220)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 220)).add_operation (var_parsingContextVar_8416, inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 220)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-rewind.galgas", 220)) ;
    }
    enumerator_8654.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                             const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                             GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                             GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_parseWhenInstruction temp_0 = this ;
  routine_transformInstructionList (temp_0.readProperty_mElseInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 172)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionForGeneration var_when_5F_expression_7900 ;
  const GALGAS_parseWhenInstruction temp_0 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_0.readProperty_mWhenExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-parse-when.galgas", 203)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression_7900, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 200)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 209)) ;
  }
  GALGAS_uint var_localSelectMethodCount_8022 = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration_8465 ;
  {
  const GALGAS_parseWhenInstruction temp_1 = this ;
  const GALGAS_parseWhenInstruction temp_2 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_1.readProperty_mWhenInstructionList (), temp_2.readProperty_mEndOfWhenInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount_8022, var_when_5F_instructionListForGeneration_8465, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 212)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration_8906 ;
  {
  const GALGAS_parseWhenInstruction temp_3 = this ;
  const GALGAS_parseWhenInstruction temp_4 = this ;
  routine_analyzeSyntaxInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_3.readProperty_mElseInstructionList (), temp_4.readProperty_mEndOfElseInstructionList (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration_8906, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 230)) ;
  }
  {
  const GALGAS_parseWhenInstruction temp_5 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_5.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 248)) ;
  }
  const GALGAS_parseWhenInstruction temp_6 = this ;
  GALGAS_bool var_ok_9034 = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration_8465, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 251)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration_8906, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 252)), temp_6.readProperty_mEndOfElseInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 250)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_ok_9034.boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_parseWhenInstruction temp_8 = this ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (temp_8.readProperty_mInstructionLocation (), var_when_5F_expression_7900, var_when_5F_instructionListForGeneration_8465, var_else_5F_instructionListForGeneration_8906  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 257))  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 257)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string constinArgument_inPosfix,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  ioArgument_ioInstructionListForGeneration.plusAssign_operation(function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_mInstructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 282)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@parseWhenInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_11303 ;
  const GALGAS_parseWhenInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mWhenExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_11303, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 296)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_11303, inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 297)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 297)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_1 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 298)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 306)) ;
  {
  const GALGAS_parseWhenInstructionForGeneration temp_2 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_2.readProperty_mElseInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 307)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-parse-when.galgas", 315)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstruction transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstruction::method_transformInstruction (GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                              const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                              GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                              GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstruction analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstruction::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                  const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                  const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                  const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                  const GALGAS_string /* constinArgument_inComponentName */,
                                                                  const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                  GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("instruction-syntax-send.galgas", 80)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_syntaxSendInstruction temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 81)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_3920 ;
  const GALGAS_syntaxSendInstruction temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("instruction-syntax-send.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3920, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 84)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expression_3920.readProperty_mResultType ().objectCompare (constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_syntaxSendInstruction temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("'send' expresion should be an @string expression"), fixItArray6  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 94)) ;
    }
  }
  const GALGAS_syntaxSendInstruction temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (temp_7.readProperty_mInstructionLocation (), var_expression_3920  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97))  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 97)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxSendInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceVar_5359 ;
  const GALGAS_syntaxSendInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_5359, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 122)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 124)) COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 124)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_sourceVar_5359, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 125)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 125)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 125)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 126)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 126)).add_operation (var_sourceVar_5359, inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 126)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 126)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-syntax-send.galgas", 125)) ;
}
