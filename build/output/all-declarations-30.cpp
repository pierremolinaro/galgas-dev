#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-30.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_moduloExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inInferenceType,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_12296 ;
  const GALGAS_moduloExpressionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mLeftExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_12296, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 337)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_12575 ;
  const GALGAS_moduloExpressionAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mRightExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_12296.getter_mResultType (SOURCE_FILE ("expression-multiplicative.galgas", 349)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_12575, inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 346)) ;
  GALGAS_unifiedTypeMap_2D_entry var_leftType_12649 = var_leftExpression_12296.getter_mResultType (SOURCE_FILE ("expression-multiplicative.galgas", 355)) ;
  {
  const GALGAS_moduloExpressionAST temp_2 = object ;
  routine_checkDiadicOperator (var_leftType_12649, var_rightExpression_12575.getter_mResultType (SOURCE_FILE ("expression-multiplicative.galgas", 358)), var_leftType_12649.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 359)).getter_infixModOperator (SOURCE_FILE ("expression-multiplicative.galgas", 359)), GALGAS_string ("mod"), temp_2.getter_mOperatorLocation (HERE), var_rightExpression_12575, inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 356)) ;
  }
  const GALGAS_moduloExpressionAST temp_3 = object ;
  outArgument_outExpression = GALGAS_binaryOperatorExpressionForGeneration::constructor_new (var_leftType_12649, temp_3.getter_mOperatorLocation (HERE), var_leftExpression_12296, GALGAS_binaryOperator::constructor_modulo_5F_operation (SOURCE_FILE ("expression-multiplicative.galgas", 369)), var_rightExpression_12575  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 365)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                  extensionMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

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
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_1431 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_1457 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_1431)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).isValid ()) {
    uint32_t variant_1493 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).uintValue () ;
    bool loop_1493 = true ;
    while (loop_1493) {
      loop_1493 = var_ok_1457.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).operator_and (var_sourceType_1431.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).isValid () ;
      if (loop_1493) {
        loop_1493 = var_ok_1457.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).operator_and (var_sourceType_1431.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)).boolValue () ;
      }
      if (loop_1493 && (0 == variant_1493)) {
        loop_1493 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 25)) ;
      }
      if (loop_1493) {
        variant_1493 -- ;
        var_sourceType_1431 = var_sourceType_1431.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 26)) ;
        var_ok_1457 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_1431)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_1457.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 29)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_1743 ;
      const bool optionalResult1712 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 29)).optional_weakReferenceType (var_targetType_1743) ;
      if (!optionalResult1712) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_1431 = constinArgument_inSourceType ;
        var_ok_1457 = GALGAS_bool (kIsEqual, var_targetType_1743.objectCompare (var_sourceType_1431)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).isValid ()) {
          uint32_t variant_1822 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).uintValue () ;
          bool loop_1822 = true ;
          while (loop_1822) {
            loop_1822 = var_ok_1457.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).operator_and (var_sourceType_1431.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).isValid () ;
            if (loop_1822) {
              loop_1822 = var_ok_1457.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).operator_and (var_sourceType_1431.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)).boolValue () ;
            }
            if (loop_1822 && (0 == variant_1822)) {
              loop_1822 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 32)) ;
            }
            if (loop_1822) {
              variant_1822 -- ;
              var_sourceType_1431 = var_sourceType_1431.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 33)) ;
              var_ok_1457 = GALGAS_bool (kIsEqual, var_targetType_1743.objectCompare (var_sourceType_1431)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_ok_1457.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 37)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 39)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 39)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 39)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 39)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 38)) ;
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
                                                        GALGAS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_sourceType_2545 = constinArgument_inSourceType ;
  GALGAS_bool var_ok_2571 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (constinArgument_inSourceType)) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid ()) {
    uint32_t variant_2609 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).uintValue () ;
    bool loop_2609 = true ;
    while (loop_2609) {
      loop_2609 = var_ok_2571.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (var_sourceType_2545.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).isValid () ;
      if (loop_2609) {
        loop_2609 = var_ok_2571.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_and (var_sourceType_2545.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)).boolValue () ;
      }
      if (loop_2609 && (0 == variant_2609)) {
        loop_2609 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 53)) ;
      }
      if (loop_2609) {
        variant_2609 -- ;
        var_sourceType_2545 = var_sourceType_2545.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 54)) ;
        var_ok_2571 = GALGAS_bool (kIsEqual, constinArgument_inTargetType.objectCompare (var_sourceType_2545)) ;
      }
    }
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_ok_2571.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 57)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMap_2D_entry var_targetType_2859 ;
      const bool optionalResult2828 = constinArgument_inTargetType.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 57)).optional_weakReferenceType (var_targetType_2859) ;
      if (!optionalResult2828) {
        test_0 = kBoolFalse ;
      }
      if (kBoolTrue == test_0) {
        var_sourceType_2545 = constinArgument_inSourceType ;
        var_ok_2571 = GALGAS_bool (kIsEqual, var_targetType_2859.objectCompare (var_sourceType_2545)) ;
        if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).isValid ()) {
          uint32_t variant_2938 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).uintValue () ;
          bool loop_2938 = true ;
          while (loop_2938) {
            loop_2938 = var_ok_2571.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).operator_and (var_sourceType_2545.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).isValid () ;
            if (loop_2938) {
              loop_2938 = var_ok_2571.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).operator_and (var_sourceType_2545.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)).boolValue () ;
            }
            if (loop_2938 && (0 == variant_2938)) {
              loop_2938 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 60)) ;
            }
            if (loop_2938) {
              variant_2938 -- ;
              var_sourceType_2545 = var_sourceType_2545.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 61)) ;
              var_ok_2571 = GALGAS_bool (kIsEqual, var_targetType_2859.objectCompare (var_sourceType_2545)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    GALGAS_bool test_2 = var_ok_2571.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 66)) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      test_2 = constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 66)).getter_hasKey (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 66)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 66)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_methodKind var_kind_3306 ;
      GALGAS_functionSignature var_argumentTypeList_3353 ;
      GALGAS_bool var_hasCompilerArgument_3393 ;
      GALGAS_unifiedTypeMap_2D_entry var_returnedType_3417 ;
      GALGAS_location joker_3361 ; // Joker input parameter
      GALGAS_methodQualifier joker_3425_2 ; // Joker input parameter
      GALGAS_string joker_3425_1 ; // Joker input parameter
      constinArgument_inSourceType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 67)).method_searchKey (constinArgument_inTargetType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 68)), var_kind_3306, var_argumentTypeList_3353, joker_3361, var_hasCompilerArgument_3393, var_returnedType_3417, joker_3425_2, joker_3425_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 67)) ;
      var_ok_2571 = GALGAS_bool (kIsEqual, var_argumentTypeList_3353.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_3417.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 76)) ;
      GALGAS_getterCallExpressionForGeneration var_conversionExpression_3569 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_3306, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 83)), constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 84)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 85)), var_hasCompilerArgument_3393  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 78)) ;
      ioArgument_ioRightExpression = var_conversionExpression_3569 ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_ok_2571.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 90)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("target object type is '@").add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)).add_operation (GALGAS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)).add_operation (constinArgument_inSourceType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)).add_operation (GALGAS_string ("' object; this type have no '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 92)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 93)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)).add_operation (constinArgument_inTargetType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 94)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 91)) ;
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
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 108)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type is '@").add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).add_operation (GALGAS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).add_operation (GALGAS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 110)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 111)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 111)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 109)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_entry var_rightType_4818 = constinArgument_inRightType ;
    GALGAS_bool var_ok_4845 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_4818)) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).isValid ()) {
      uint32_t variant_4880 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).uintValue () ;
      bool loop_4880 = true ;
      while (loop_4880) {
        loop_4880 = var_ok_4845.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).operator_and (var_rightType_4818.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).isValid () ;
        if (loop_4880) {
          loop_4880 = var_ok_4845.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).operator_and (var_rightType_4818.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)).boolValue () ;
        }
        if (loop_4880 && (0 == variant_4880)) {
          loop_4880 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 115)) ;
        }
        if (loop_4880) {
          variant_4880 -- ;
          var_rightType_4818 = var_rightType_4818.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 116)) ;
          var_ok_4845 = GALGAS_bool (kIsEqual, constinArgument_inLeftType.objectCompare (var_rightType_4818)) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      GALGAS_bool test_3 = var_ok_4845.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
      if (kBoolTrue == test_3.boolEnum ()) {
        test_3 = constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)).getter_hasKey (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 120)) ;
      }
      test_2 = test_3.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_bool var_hasCompilerArgument_5187 ;
        GALGAS_unifiedTypeMap_2D_entry var_returnedType_5228 ;
        GALGAS_methodKind var_kind_5251 ;
        GALGAS_functionSignature var_argumentTypeList_5383 ;
        GALGAS_location joker_5393 ; // Joker input parameter
        GALGAS_methodQualifier joker_5455_2 ; // Joker input parameter
        GALGAS_string joker_5455_1 ; // Joker input parameter
        constinArgument_inRightType.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)).method_searchKey (constinArgument_inLeftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 125)), var_kind_5251, var_argumentTypeList_5383, joker_5393, var_hasCompilerArgument_5187, var_returnedType_5228, joker_5455_2, joker_5455_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 124)) ;
        var_ok_4845 = GALGAS_bool (kIsEqual, var_argumentTypeList_5383.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_returnedType_5228.objectCompare (constinArgument_inLeftType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 133)) ;
        GALGAS_getterCallExpressionForGeneration var_conversionExpression_5605 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inLeftType, constinArgument_inErrorLocation, var_kind_5251, ioArgument_ioRightExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 140)), constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 141)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 142)), var_hasCompilerArgument_5187  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 135)) ;
        ioArgument_ioRightExpression = var_conversionExpression_5605 ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_ok_4845.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 147)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)).add_operation (GALGAS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 149)).add_operation (constinArgument_inRightType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).add_operation (GALGAS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 150)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 151)).add_operation (GALGAS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)).add_operation (constinArgument_inLeftType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)).add_operation (GALGAS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 152)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 148)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_3902 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_assignmentInstructionAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mOptionalProperty (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_assignmentInstructionAST temp_2 = object ;
      GALGAS_string joker_4041 ; // Joker input parameter
      GALGAS_string joker_4050 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_neutralAccess (temp_2.getter_mTargetVariableName (HERE), var_targetType_3902, joker_4041, joker_4050, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 107)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_assignmentInstructionAST temp_3 = object ;
    GALGAS_string joker_4157 ; // Joker input parameter
    GALGAS_string joker_4166 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_neutralAccess (temp_3.getter_mTargetVariableName (HERE), var_targetType_3902, joker_4157, joker_4166, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 114)) ;
    }
    GALGAS_propertyMap var_propertyMap_4239 = var_targetType_3902.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 121)) ;
    GALGAS_bool var_isPublic_4334 ;
    const GALGAS_assignmentInstructionAST temp_4 = object ;
    var_propertyMap_4239.method_searchKey (temp_4.getter_mOptionalProperty (HERE), var_isPublic_4334, var_targetType_3902, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 122)) ;
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_isPublic_4334.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_assignmentInstructionAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.getter_mOptionalProperty (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 124)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray7  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 124)) ;
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_4750 ;
  const GALGAS_assignmentInstructionAST temp_8 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_8.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_3902, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_4750, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 129)) ;
  {
  const GALGAS_assignmentInstructionAST temp_9 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_3902, var_expression_4750.getter_mResultType (SOURCE_FILE ("instruction-assignment.galgas", 140)), temp_9.getter_mInstructionLocation (HERE), var_expression_4750, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 138)) ;
  }
  GALGAS_string var_targetVariableCppName_4996 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_5042 ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_assignmentInstructionAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsEqual, temp_11.getter_mOptionalProperty (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      const GALGAS_assignmentInstructionAST temp_12 = object ;
      GALGAS_unifiedTypeMap_2D_entry joker_5170 ; // Joker input parameter
      ioArgument_ioVariableMap.setter_searchForWriteAccess (temp_12.getter_mTargetVariableName (HERE), joker_5170, var_targetVariableCppName_4996, var_nameForCheckingFormalParameterUsing_5042, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 148)) ;
      }
    }
  }
  if (kBoolFalse == test_10) {
    {
    const GALGAS_assignmentInstructionAST temp_13 = object ;
    GALGAS_unifiedTypeMap_2D_entry joker_5342 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_13.getter_mTargetVariableName (HERE), joker_5342, var_targetVariableCppName_4996, var_nameForCheckingFormalParameterUsing_5042, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 155)) ;
    }
  }
  const GALGAS_assignmentInstructionAST temp_14 = object ;
  const GALGAS_assignmentInstructionAST temp_15 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_3902, var_targetVariableCppName_4996, var_nameForCheckingFormalParameterUsing_5042, temp_14.getter_mOptionalProperty (HERE).getter_string (SOURCE_FILE ("instruction-assignment.galgas", 167)), var_expression_4750, temp_15.getter_mTargetVariableName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 163)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6192 ;
  GALGAS_string var_targetVariableCppName_6228 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6278 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-assignment.galgas", 185)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfPropertyAssignmentInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mTargetSelfPropertyName (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 186)), GALGAS_string ("'self' cannot be used in this context"), fixItArray2  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 186)) ;
      var_targetType_6192.drop () ; // Release error dropped variable
      var_nameForCheckingFormalParameterUsing_6278.drop () ; // Release error dropped variable
      var_targetVariableCppName_6228.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-assignment.galgas", 188)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_selfPropertyAssignmentInstructionAST temp_4 = object ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.getter_mTargetSelfPropertyName (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 189)), GALGAS_string ("'self' object is not mutable"), fixItArray5  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 189)) ;
        var_targetType_6192.drop () ; // Release error dropped variable
        var_nameForCheckingFormalParameterUsing_6278.drop () ; // Release error dropped variable
        var_targetVariableCppName_6228.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_propertyMap var_propertyMap_6721 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 192)) ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_6 = object ;
      GALGAS_bool joker_6830 ; // Joker input parameter
      var_propertyMap_6721.method_searchKey (temp_6.getter_mTargetSelfPropertyName (HERE), joker_6830, var_targetType_6192, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 193)) ;
      var_nameForCheckingFormalParameterUsing_6278 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_7 = object ;
      var_targetVariableCppName_6228 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 195)).add_operation (temp_7.getter_mTargetSelfPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-assignment.galgas", 196)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 196)) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_selfPropertyAssignmentInstructionAST temp_9 = object ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.getter_mOptionalProperty (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_propertyMap var_propertyMap_7198 = var_targetType_6192.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 200)) ;
      GALGAS_bool var_isPublic_7291 ;
      const GALGAS_selfPropertyAssignmentInstructionAST temp_10 = object ;
      var_propertyMap_7198.method_searchKey (temp_10.getter_mOptionalProperty (HERE), var_isPublic_7291, var_targetType_6192, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 201)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_isPublic_7291.operator_not (SOURCE_FILE ("instruction-assignment.galgas", 202)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfPropertyAssignmentInstructionAST temp_12 = object ;
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.getter_mOptionalProperty (HERE).getter_location (SOURCE_FILE ("instruction-assignment.galgas", 203)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 203)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_7691 ;
  const GALGAS_selfPropertyAssignmentInstructionAST temp_14 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_14.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6192, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7691, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 207)) ;
  {
  const GALGAS_selfPropertyAssignmentInstructionAST temp_15 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6192, var_expression_7691.getter_mResultType (SOURCE_FILE ("instruction-assignment.galgas", 216)), temp_15.getter_mInstructionLocation (HERE), var_expression_7691, inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 216)) ;
  }
  const GALGAS_selfPropertyAssignmentInstructionAST temp_16 = object ;
  const GALGAS_selfPropertyAssignmentInstructionAST temp_17 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (var_targetType_6192, var_targetVariableCppName_6228, var_nameForCheckingFormalParameterUsing_6278, temp_16.getter_mOptionalProperty (HERE).getter_string (SOURCE_FILE ("instruction-assignment.galgas", 222)), var_expression_7691, temp_17.getter_mTargetSelfPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218))  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 218)) ;
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
  GALGAS_string var_sourceVar_9413 ;
  const GALGAS_assignmentInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_9413, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 252)) ;
  {
  const GALGAS_assignmentInstructionForGeneration temp_1 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_1.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 259)) ;
  }
  const GALGAS_assignmentInstructionForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 261)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsEqual, temp_4.getter_mOptionalProperty (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_assignmentInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(temp_5.getter_mTargetCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)).add_operation (var_sourceVar_9413, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 263)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_assignmentInstructionForGeneration temp_6 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_6.getter_mTargetCppName (HERE).add_operation (GALGAS_string (".setter_set"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 265)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 265)) ;
    const GALGAS_assignmentInstructionForGeneration temp_7 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(temp_7.getter_mOptionalProperty (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("instruction-assignment.galgas", 266)).getter_identifierRepresentation (SOURCE_FILE ("instruction-assignment.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 266)) ;
    const GALGAS_assignmentInstructionForGeneration temp_8 = object ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (").add_operation (var_sourceVar_9413, inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)).add_operation (extensionGetter_sourceFile (temp_8.getter_mSourceLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas", 267)) ;
  }
  {
  const GALGAS_assignmentInstructionForGeneration temp_9 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_9.getter_mTargetCppName (HERE) COMMA_SOURCE_FILE ("instruction-assignment.galgas", 269)) ;
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
  cEnumerator_castInstructionBranchListAST enumerator_4515 (temp_2.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_4515.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4515.current_mInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 128)) ;
    enumerator_4515.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_castExpression_5239 ;
  const GALGAS_structuredCastInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mCastExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-cast.galgas", 147)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_castExpression_5239, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 144)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 153)) ;
  }
  GALGAS_castInstructionBranchListForGeneration var_castBranchList_5586 = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 155)) ;
  const GALGAS_structuredCastInstructionAST temp_1 = object ;
  cEnumerator_castInstructionBranchListAST enumerator_5674 (temp_1.getter_mCastInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_5674.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_type_5712 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_5674.current_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 158)) ;
    GALGAS_unifiedTypeMap_2D_entry var_t_5890 = var_type_5712 ;
    GALGAS_bool var_found_5913 = GALGAS_bool (kIsEqual, var_t_5890.objectCompare (var_castExpression_5239.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 161)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).isValid ()) {
      uint32_t variant_5958 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-cast.galgas", 162)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 162)).uintValue () ;
      bool loop_5958 = true ;
      while (loop_5958) {
        loop_5958 = var_found_5913.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5890.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).isValid () ;
        if (loop_5958) {
          loop_5958 = var_found_5913.operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_and (var_t_5890.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).getter_isNull (SOURCE_FILE ("instruction-cast.galgas", 163)).operator_not (SOURCE_FILE ("instruction-cast.galgas", 163)) COMMA_SOURCE_FILE ("instruction-cast.galgas", 163)).boolValue () ;
        }
        if (loop_5958 && (0 == variant_5958)) {
          loop_5958 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-cast.galgas", 162)) ;
        }
        if (loop_5958) {
          variant_5958 -- ;
          var_t_5890 = var_t_5890.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 164)) ;
          var_found_5913 = GALGAS_bool (kIsEqual, var_t_5890.objectCompare (var_castExpression_5239.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 165)))) ;
        }
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_found_5913.operator_not (SOURCE_FILE ("instruction-cast.galgas", 167)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5674.current_mTypeName (HERE).getter_location (SOURCE_FILE ("instruction-cast.galgas", 168)), GALGAS_string ("the '@").add_operation (enumerator_5674.current_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (var_castExpression_5239.getter_mResultType (SOURCE_FILE ("instruction-cast.galgas", 169)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 169)), fixItArray3  COMMA_SOURCE_FILE ("instruction-cast.galgas", 168)) ;
      }
    }
    GALGAS_string var_localConstantName_6403 ;
    GALGAS_localConstantList var_localConstantList_6429 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 173)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_5674.current_mConstantVarName (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_localConstantName_6403 = GALGAS_string ("cast_").add_operation (enumerator_5674.current_mConstantVarName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)).add_operation (enumerator_5674.current_mConstantVarName (HERE).getter_string (SOURCE_FILE ("instruction-cast.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 175)) ;
        var_localConstantList_6429.addAssign_operation (var_type_5712, enumerator_5674.current_mConstantVarName (HERE), GALGAS_bool (true), var_localConstantName_6403  COMMA_SOURCE_FILE ("instruction-cast.galgas", 176)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_localConstantName_6403 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_6873 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6429, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 191)), enumerator_5674.current_mInstructionList (HERE), enumerator_5674.current_mEndOfInstructions (HERE), ioArgument_ioVariableMap, var_instructionList_6873, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 186)) ;
    }
    var_castBranchList_5586.addAssign_operation (enumerator_5674.current_mTypeComparisonKind (HERE), var_type_5712, var_localConstantName_6403, var_instructionList_6873  COMMA_SOURCE_FILE ("instruction-cast.galgas", 197)) ;
    enumerator_5674.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_7317 ;
  {
  const GALGAS_structuredCastInstructionAST temp_5 = object ;
  const GALGAS_structuredCastInstructionAST temp_6 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 205)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-cast.galgas", 206)), temp_5.getter_mElseInstructionList (HERE), temp_6.getter_mEndOfCastInstruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_7317, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 201)) ;
  }
  {
  const GALGAS_structuredCastInstructionAST temp_7 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_7.getter_mEndOfCastInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 213)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_structuredCastInstructionForGeneration::constructor_new (var_castExpression_5239, var_castBranchList_5586, var_else_5F_instructionList_7317  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215))  COMMA_SOURCE_FILE ("instruction-cast.galgas", 215)) ;
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
  GALGAS_string var_castCppVarName_9434 ;
  const GALGAS_structuredCastInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName_9434, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 251)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9434, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 259)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 260)) ;
  }
  const GALGAS_structuredCastInstructionForGeneration temp_1 = object ;
  cEnumerator_castInstructionBranchListForGeneration enumerator_9582 (temp_1.getter_mCastBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_9582.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_9582.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 262)) ;
    switch (enumerator_9582.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_castCppVarName_9434, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)).add_operation (enumerator_9582.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 266)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 267)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 265)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_9582.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 270)).add_operation (var_castCppVarName_9434, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 271)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 269)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((").add_operation (var_castCppVarName_9434, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)).add_operation (enumerator_9582.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 274)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (enumerator_9582.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 275)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 276)).add_operation (var_castCppVarName_9434, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 273)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, enumerator_9582.current_mCastedVarCppName (HERE).getter_length (SOURCE_FILE ("instruction-cast.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (enumerator_9582.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 281)).add_operation (enumerator_9582.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (enumerator_9582.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 282)).add_operation (var_castCppVarName_9434, inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-cast.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 280)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_9582.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 285)) ;
    }
    if (enumerator_9582.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-cast.galgas", 293)) ;
    }
    enumerator_9582.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_7368 ;
  GALGAS_string var_targetVariableCppName_7404 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_7454 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 198)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_plusEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 199)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 199)) ;
          var_targetType_7368.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_7454.drop () ; // Release error dropped variable
          var_targetVariableCppName_7404.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 201)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_plusEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 202)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 202)) ;
            var_targetType_7368.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_7454.drop () ; // Release error dropped variable
            var_targetVariableCppName_7404.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_7924 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 205)) ;
          const GALGAS_plusEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_8025 ; // Joker input parameter
          var_propertyMap_7924.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_8025, var_targetType_7368, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 206)) ;
          var_nameForCheckingFormalParameterUsing_7454 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_7404 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 208)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 208)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_7368, var_targetVariableCppName_7404, var_nameForCheckingFormalParameterUsing_7454, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 211)) ;
    }
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_8735 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8735.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8758 = var_targetType_7368.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 226)) ;
    GALGAS_bool var_isPublic_8835 ;
    var_propertyMap_8758.method_searchKey (enumerator_8735.current_mValue (HERE), var_isPublic_8835, var_targetType_7368, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 227)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_8835.operator_not (SOURCE_FILE ("instruction-concat.galgas", 228)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_8735.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 229)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 229)) ;
      }
    }
    enumerator_8735.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_7368.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 233)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 233)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 233)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_plusEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_7368.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 235)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 234)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9513 ;
  const GALGAS_plusEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_7368, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9513, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 238)) ;
  {
  const GALGAS_plusEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_7368, var_expression_9513.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 247)), temp_18.getter_mInstructionLocation (HERE), var_expression_9513, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 247)) ;
  }
  const GALGAS_plusEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_plusEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_7368, var_targetVariableCppName_7404, var_nameForCheckingFormalParameterUsing_7454, temp_20.getter_mStructAttributeList (HERE), var_expression_9513, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 249)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_10519 ;
  GALGAS_string var_targetVariableCppName_10555 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_10605 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_minusEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 274)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_minusEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 275)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 275)) ;
          var_targetType_10519.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_10605.drop () ; // Release error dropped variable
          var_targetVariableCppName_10555.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 277)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_minusEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 278)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 278)) ;
            var_targetType_10519.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_10605.drop () ; // Release error dropped variable
            var_targetVariableCppName_10555.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_11075 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 281)) ;
          const GALGAS_minusEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_11176 ; // Joker input parameter
          var_propertyMap_11075.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_11176, var_targetType_10519, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 282)) ;
          var_nameForCheckingFormalParameterUsing_10605 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_minusEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_10555 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 284)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 284)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_minusEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_10519, var_targetVariableCppName_10555, var_nameForCheckingFormalParameterUsing_10605, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 287)) ;
    }
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_11886 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_11886.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_11909 = var_targetType_10519.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 302)) ;
    GALGAS_bool var_isPublic_11986 ;
    var_propertyMap_11909.method_searchKey (enumerator_11886.current_mValue (HERE), var_isPublic_11986, var_targetType_10519, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 303)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_11986.operator_not (SOURCE_FILE ("instruction-concat.galgas", 304)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_11886.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 305)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 305)) ;
      }
    }
    enumerator_11886.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_10519.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 309)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 309)).operator_not (SOURCE_FILE ("instruction-concat.galgas", 309)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_minusEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_10519.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 311)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 310)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_12665 ;
  const GALGAS_minusEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_10519, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_12665, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 314)) ;
  {
  const GALGAS_minusEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_10519, var_expression_12665.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 323)), temp_18.getter_mInstructionLocation (HERE), var_expression_12665, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 323)) ;
  }
  const GALGAS_minusEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_minusEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_10519, var_targetVariableCppName_10555, var_nameForCheckingFormalParameterUsing_10605, temp_20.getter_mStructAttributeList (HERE), var_expression_12665, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 325))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 325)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_13670 ;
  GALGAS_string var_targetVariableCppName_13706 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_13756 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mulEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 350)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_mulEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 351)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 351)) ;
          var_targetType_13670.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_13756.drop () ; // Release error dropped variable
          var_targetVariableCppName_13706.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 353)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_mulEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 354)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 354)) ;
            var_targetType_13670.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_13756.drop () ; // Release error dropped variable
            var_targetVariableCppName_13706.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_14226 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 357)) ;
          const GALGAS_mulEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_14327 ; // Joker input parameter
          var_propertyMap_14226.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_14327, var_targetType_13670, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 358)) ;
          var_nameForCheckingFormalParameterUsing_13756 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_mulEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_13706 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 360)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 360)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 360)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_mulEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_13670, var_targetVariableCppName_13706, var_nameForCheckingFormalParameterUsing_13756, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 363)) ;
    }
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_15037 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_15037.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_15060 = var_targetType_13670.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 378)) ;
    GALGAS_bool var_isPublic_15137 ;
    var_propertyMap_15060.method_searchKey (enumerator_15037.current_mValue (HERE), var_isPublic_15137, var_targetType_13670, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 379)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_15137.operator_not (SOURCE_FILE ("instruction-concat.galgas", 380)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_15037.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 381)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 381)) ;
      }
    }
    enumerator_15037.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_13670.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 385)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_mulEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_13670.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 387)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 386)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15810 ;
  const GALGAS_mulEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_13670, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15810, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 390)) ;
  {
  const GALGAS_mulEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_13670, var_expression_15810.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 399)), temp_18.getter_mInstructionLocation (HERE), var_expression_15810, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 399)) ;
  }
  const GALGAS_mulEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_mulEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_13670, var_targetVariableCppName_13706, var_nameForCheckingFormalParameterUsing_13756, temp_20.getter_mStructAttributeList (HERE), var_expression_15810, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 401))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 401)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_16813 ;
  GALGAS_string var_targetVariableCppName_16849 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_16899 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_divEqualExpressionInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 426)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_divEqualExpressionInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 427)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 427)) ;
          var_targetType_16813.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_16899.drop () ; // Release error dropped variable
          var_targetVariableCppName_16849.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 429)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_divEqualExpressionInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 430)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 430)) ;
            var_targetType_16813.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_16899.drop () ; // Release error dropped variable
            var_targetVariableCppName_16849.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_17369 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 433)) ;
          const GALGAS_divEqualExpressionInstructionAST temp_8 = object ;
          GALGAS_bool joker_17470 ; // Joker input parameter
          var_propertyMap_17369.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_17470, var_targetType_16813, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 434)) ;
          var_nameForCheckingFormalParameterUsing_16899 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_divEqualExpressionInstructionAST temp_9 = object ;
          var_targetVariableCppName_16849 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 436)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 436)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_divEqualExpressionInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_16813, var_targetVariableCppName_16849, var_nameForCheckingFormalParameterUsing_16899, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 439)) ;
    }
  }
  const GALGAS_divEqualExpressionInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_18180 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_18180.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_18203 = var_targetType_16813.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 454)) ;
    GALGAS_bool var_isPublic_18280 ;
    var_propertyMap_18203.method_searchKey (enumerator_18180.current_mValue (HERE), var_isPublic_18280, var_targetType_16813, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 455)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_18280.operator_not (SOURCE_FILE ("instruction-concat.galgas", 456)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_18180.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 457)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 457)) ;
      }
    }
    enumerator_18180.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_16813.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 461)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas", 461)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_divEqualExpressionInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_16813.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 463)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 462)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_18953 ;
  const GALGAS_divEqualExpressionInstructionAST temp_17 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_17.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_16813, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_18953, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 466)) ;
  {
  const GALGAS_divEqualExpressionInstructionAST temp_18 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_16813, var_expression_18953.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 475)), temp_18.getter_mInstructionLocation (HERE), var_expression_18953, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 475)) ;
  }
  const GALGAS_divEqualExpressionInstructionAST temp_19 = object ;
  const GALGAS_divEqualExpressionInstructionAST temp_20 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_19.getter_mInstructionLocation (HERE), var_targetType_16813, var_targetVariableCppName_16849, var_nameForCheckingFormalParameterUsing_16899, temp_20.getter_mStructAttributeList (HERE), var_expression_18953, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 477)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_19956 ;
  GALGAS_string var_targetVariableCppName_19992 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_20042 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_plusEqualElementsInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 502)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_plusEqualElementsInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 503)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-concat.galgas", 503)) ;
          var_targetType_19956.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_20042.drop () ; // Release error dropped variable
          var_targetVariableCppName_19992.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-concat.galgas", 505)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_plusEqualElementsInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 506)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-concat.galgas", 506)) ;
            var_targetType_19956.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_20042.drop () ; // Release error dropped variable
            var_targetVariableCppName_19992.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_20512 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 509)) ;
          const GALGAS_plusEqualElementsInstructionAST temp_8 = object ;
          GALGAS_bool joker_20613 ; // Joker input parameter
          var_propertyMap_20512.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_20613, var_targetType_19956, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 510)) ;
          var_nameForCheckingFormalParameterUsing_20042 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_plusEqualElementsInstructionAST temp_9 = object ;
          var_targetVariableCppName_19992 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 512)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 512)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_plusEqualElementsInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_19956, var_targetVariableCppName_19992, var_nameForCheckingFormalParameterUsing_20042, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 515)) ;
    }
  }
  const GALGAS_plusEqualElementsInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_21285 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21285.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_21308 = var_targetType_19956.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 531)) ;
    GALGAS_bool var_isPublic_21385 ;
    var_propertyMap_21308.method_searchKey (enumerator_21285.current_mValue (HERE), var_isPublic_21385, var_targetType_19956, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 532)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_21385.operator_not (SOURCE_FILE ("instruction-concat.galgas", 533)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_21285.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 534)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-concat.galgas", 534)) ;
      }
    }
    enumerator_21285.gotoNextObject () ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_21604 = var_targetType_19956.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 538)) ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_21604.getter_length (SOURCE_FILE ("instruction-concat.galgas", 539)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_plusEqualElementsInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_19956.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 541)), fixItArray16  COMMA_SOURCE_FILE ("instruction-concat.galgas", 540)) ;
    }
  }
  if (kBoolFalse == test_14) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_plusEqualElementsInstructionAST temp_18 = object ;
      test_17 = GALGAS_bool (kIsNotEqual, temp_18.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 543)).objectCompare (var_addAssignOperatorArguments_21604.getter_length (SOURCE_FILE ("instruction-concat.galgas", 543)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_plusEqualElementsInstructionAST temp_19 = object ;
        const GALGAS_plusEqualElementsInstructionAST temp_20 = object ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_19.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_targetType_19956.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (var_addAssignOperatorArguments_21604.getter_length (SOURCE_FILE ("instruction-concat.galgas", 546)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 545)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)).add_operation (temp_20.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-concat.galgas", 547)).getter_string (SOURCE_FILE ("instruction-concat.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 546)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 547)), fixItArray21  COMMA_SOURCE_FILE ("instruction-concat.galgas", 544)) ;
      }
    }
    if (kBoolFalse == test_17) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_22354 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 549)) ;
      const GALGAS_plusEqualElementsInstructionAST temp_22 = object ;
      cEnumerator_actualOutputExpressionList enumerator_22391 (temp_22.getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_22425 (var_addAssignOperatorArguments_21604, kENUMERATION_UP) ;
      while (enumerator_22391.hasCurrentObject () && enumerator_22425.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_22676 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_22391.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_22425.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_22676, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 551)) ;
        enumGalgasBool test_23 = kBoolTrue ;
        if (kBoolTrue == test_23) {
          test_23 = GALGAS_bool (kIsNotEqual, enumerator_22425.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_22391.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_23) {
            GALGAS_string temp_24 ;
            const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_22425.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_25) {
              temp_24 = GALGAS_string (":") ;
            }else if (kBoolFalse == test_25) {
              temp_24 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_22391.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-concat.galgas", 560)), GALGAS_string ("the selector should be '!").add_operation (enumerator_22425.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 561)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)).add_operation (temp_24, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 561)), fixItArray26  COMMA_SOURCE_FILE ("instruction-concat.galgas", 560)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_22425.current_mFormalArgumentType (HERE), var_expression_22676.getter_mResultType (SOURCE_FILE ("instruction-concat.galgas", 563)), enumerator_22391.current_mEndOfExpressionLocation (HERE), var_expression_22676, inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 563)) ;
        }
        var_effectiveParameterList_22354.addAssign_operation (var_expression_22676  COMMA_SOURCE_FILE ("instruction-concat.galgas", 564)) ;
        enumerator_22391.gotoNextObject () ;
        enumerator_22425.gotoNextObject () ;
      }
      const GALGAS_plusEqualElementsInstructionAST temp_27 = object ;
      const GALGAS_plusEqualElementsInstructionAST temp_28 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_targetVariableCppName_19992, var_targetType_19956, var_nameForCheckingFormalParameterUsing_20042, temp_27.getter_mInstructionLocation (HERE), temp_28.getter_mStructAttributeList (HERE), var_effectiveParameterList_22354  COMMA_SOURCE_FILE ("instruction-concat.galgas", 567))  COMMA_SOURCE_FILE ("instruction-concat.galgas", 567)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 599)) ;
  GALGAS_stringlist var_parameterList_24454 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-concat.galgas", 600)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_1 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_24503 (temp_1.getter_mExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_24503.hasCurrentObject ()) {
    GALGAS_string var_parameter_24686 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_24503.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter_24686, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 602)) ;
    var_parameterList_24454.addAssign_operation (var_parameter_24686  COMMA_SOURCE_FILE ("instruction-concat.galgas", 609)) ;
    enumerator_24503.gotoNextObject () ;
  }
  {
  const GALGAS_plusEqualnstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 612)) ;
  }
  const GALGAS_plusEqualnstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mReceiverCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 613)) ;
  const GALGAS_plusEqualnstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_24913 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_24913.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_24913.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 615)).getter_identifierRepresentation (SOURCE_FILE ("instruction-concat.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 615)) ;
    enumerator_24913.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".addAssign_operation ("), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 618)) ;
  {
  const GALGAS_plusEqualnstructionForGeneration temp_5 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_5.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 619)) ;
  }
  cEnumerator_stringlist enumerator_25177 (var_parameterList_24454, kENUMERATION_UP) ;
  while (enumerator_25177.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_25177.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 621)) ;
    if (enumerator_25177.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 622)) ;
    }
    enumerator_25177.gotoNextObject () ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_plusEqualnstructionForGeneration temp_7 = object ;
    test_6 = temp_7.getter_mTargetType (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 624)).getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("instruction-concat.galgas", 624)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 625)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 626)) ;
      }
    }
  }
  const GALGAS_plusEqualnstructionForGeneration temp_8 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_8.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 628)) ;
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
  extensionMethod_addHeaderFileName (temp_0.getter_mTargetType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 651)) ;
  GALGAS_string var_sourceVar_26650 ;
  const GALGAS_opEqualInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_26650, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 652)) ;
  {
  const GALGAS_opEqualInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mNameForCheckingFormalParameterUsing (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 659)) ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(temp_3.getter_mTargetVariableCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 660)) ;
  const GALGAS_opEqualInstructionForGeneration temp_4 = object ;
  cEnumerator_lstringlist enumerator_26827 (temp_4.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_26827.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_26827.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-concat.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 662)) ;
    enumerator_26827.gotoNextObject () ;
  }
  const GALGAS_opEqualInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".").add_operation (temp_5.getter_mGeneratedMethod (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)).add_operation (var_sourceVar_26650, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 664)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 665)) ;
  const GALGAS_opEqualInstructionForGeneration temp_6 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_6.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)), inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas", 666)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas", 667)) COMMA_SOURCE_FILE ("instruction-concat.galgas", 667)) ;
  }
  {
  const GALGAS_opEqualInstructionForGeneration temp_7 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_7.getter_mTargetVariableCppName (HERE) COMMA_SOURCE_FILE ("instruction-concat.galgas", 668)) ;
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
  cEnumerator_lstringlist enumerator_2211 (temp_0.getter_mDropList (HERE), kENUMERATION_UP) ;
  while (enumerator_2211.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_entry joker_2265_3 ; // Joker input parameter
    GALGAS_string joker_2265_2 ; // Joker input parameter
    GALGAS_string joker_2265_1 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForDropAccess (enumerator_2211.current_mValue (HERE), joker_2265_3, joker_2265_2, joker_2265_1, inCompiler COMMA_SOURCE_FILE ("instruction-drop.galgas", 53)) ;
    }
    enumerator_2211.gotoNextObject () ;
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
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 173)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_getterMap var_getterMap_6613 = outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 174)).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 174)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = var_getterMap_6613.getter_hasKey (GALGAS_string ("location") COMMA_SOURCE_FILE ("instruction-error.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_methodKind var_kind_6794 ;
          GALGAS_functionSignature var_argumentTypeList_6843 ;
          GALGAS_bool var_hasCompilerArgument_6893 ;
          GALGAS_unifiedTypeMap_2D_entry var_returnedType_6941 ;
          GALGAS_location joker_6853 ; // Joker input parameter
          GALGAS_methodQualifier joker_6951_2 ; // Joker input parameter
          GALGAS_string joker_6951_1 ; // Joker input parameter
          var_getterMap_6613.method_searchKey (GALGAS_string ("location").getter_nowhere (SOURCE_FILE ("instruction-error.galgas", 177)), var_kind_6794, var_argumentTypeList_6843, joker_6853, var_hasCompilerArgument_6893, var_returnedType_6941, joker_6951_2, joker_6951_1, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 176)) ;
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsNotEqual, var_argumentTypeList_6843.getter_length (SOURCE_FILE ("instruction-error.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 187)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string ("' and defines a 'location' getter with arguments; it should be either of the '@location' type,"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 187)).add_operation (GALGAS_string (" either defines a 'location' getter without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 188)), fixItArray3  COMMA_SOURCE_FILE ("instruction-error.galgas", 186)) ;
            }
          }
          if (kBoolFalse == test_2) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (kIsNotEqual, var_returnedType_6941.objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 192)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (GALGAS_string ("' and defines a 'location' getter that returns an '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 192)).add_operation (var_returnedType_6941.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string ("' object; it should be either of the '@location' type, either defines a 'location' getter without"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 193)).add_operation (GALGAS_string (" argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 194)), fixItArray5  COMMA_SOURCE_FILE ("instruction-error.galgas", 191)) ;
              }
            }
            if (kBoolFalse == test_4) {
              GALGAS_getterCallExpressionForGeneration var_conversionExpression_7894 = GALGAS_getterCallExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE), constinArgument_inErrorLocation, var_kind_6794, outArgument_outLocationExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 202)), constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLocationType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 203)), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 204)), var_hasCompilerArgument_6893  COMMA_SOURCE_FILE ("instruction-error.galgas", 197)) ;
              outArgument_outLocationExpression = var_conversionExpression_7894 ;
            }
          }
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (GALGAS_string (" location expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (outArgument_outLocationExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 211)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (GALGAS_string ("' and does not define a 'location' getter; it should be either of the '@location' type, either"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 211)).add_operation (GALGAS_string (" defines a 'location' getter without argument that returns an '@location' object"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 212)), fixItArray6  COMMA_SOURCE_FILE ("instruction-error.galgas", 210)) ;
      }
    }
  }
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inMessageExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-error.galgas", 220)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outMessageExpression, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 217)) ;
  outArgument_outFixitListForGeneration = GALGAS_fixitListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 226)) ;
  cEnumerator_fixitListAST enumerator_8962 (constinArgument_inFixitListAST, kENUMERATION_UP) ;
  while (enumerator_8962.hasCurrentObject ()) {
    switch (enumerator_8962.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItRemove (SOURCE_FILE ("instruction-error.galgas", 230))  COMMA_SOURCE_FILE ("instruction-error.galgas", 230)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_9959 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_8962.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_9959->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_9959->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_9343 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9343, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 232)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, var_expression_9343.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 240)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_8.boolEnum ()) {
            test_8 = GALGAS_bool (kIsNotEqual, var_expression_9343.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 241)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_9 = test_8 ;
          if (kBoolTrue == test_9.boolEnum ()) {
            test_9 = GALGAS_bool (kIsNotEqual, var_expression_9343.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 242)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_10 = test_9 ;
          if (kBoolTrue == test_10.boolEnum ()) {
            test_10 = GALGAS_bool (kIsNotEqual, var_expression_9343.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 243)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_7 = test_10.boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_9343.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 244)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 244)), fixItArray11  COMMA_SOURCE_FILE ("instruction-error.galgas", 244)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItReplace (var_expression_9343  COMMA_SOURCE_FILE ("instruction-error.galgas", 247))  COMMA_SOURCE_FILE ("instruction-error.galgas", 247)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_10871 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_8962.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_10871->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_10871->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_10250 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_10250, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 249)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          GALGAS_bool test_13 = GALGAS_bool (kIsNotEqual, var_expression_10250.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 257)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_13.boolEnum ()) {
            test_13 = GALGAS_bool (kIsNotEqual, var_expression_10250.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 258)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_14 = test_13 ;
          if (kBoolTrue == test_14.boolEnum ()) {
            test_14 = GALGAS_bool (kIsNotEqual, var_expression_10250.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 259)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_15 = test_14 ;
          if (kBoolTrue == test_15.boolEnum ()) {
            test_15 = GALGAS_bool (kIsNotEqual, var_expression_10250.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 260)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_12 = test_15.boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_10250.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 261)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 261)), fixItArray16  COMMA_SOURCE_FILE ("instruction-error.galgas", 261)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (var_expression_10250  COMMA_SOURCE_FILE ("instruction-error.galgas", 264))  COMMA_SOURCE_FILE ("instruction-error.galgas", 264)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_11781 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_8962.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_11781->mAssociatedValue0 ;
        const GALGAS_location extractedValue_errorLocation = extractPtr_11781->mAssociatedValue1 ;
        GALGAS_semanticExpressionForGeneration var_expression_11161 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11161, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 266)) ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          GALGAS_bool test_18 = GALGAS_bool (kIsNotEqual, var_expression_11161.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 274)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE))) ;
          if (kBoolTrue == test_18.boolEnum ()) {
            test_18 = GALGAS_bool (kIsNotEqual, var_expression_11161.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 275)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringListType (HERE))) ;
          }
          GALGAS_bool test_19 = test_18 ;
          if (kBoolTrue == test_19.boolEnum ()) {
            test_19 = GALGAS_bool (kIsNotEqual, var_expression_11161.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 276)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringSetType (HERE))) ;
          }
          GALGAS_bool test_20 = test_19 ;
          if (kBoolTrue == test_20.boolEnum ()) {
            test_20 = GALGAS_bool (kIsNotEqual, var_expression_11161.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 277)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))) ;
          }
          test_17 = test_20.boolEnum () ;
          if (kBoolTrue == test_17) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_errorLocation, GALGAS_string ("expression type is @").add_operation (var_expression_11161.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 278)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)).add_operation (GALGAS_string (", it should be an @string, @stringset, @stringlist or @lstringlist"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 278)), fixItArray21  COMMA_SOURCE_FILE ("instruction-error.galgas", 278)) ;
          }
        }
        outArgument_outFixitListForGeneration.addAssign_operation (GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (var_expression_11161  COMMA_SOURCE_FILE ("instruction-error.galgas", 281))  COMMA_SOURCE_FILE ("instruction-error.galgas", 281)) ;
      }
      break ;
    }
    enumerator_8962.gotoNextObject () ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, outArgument_outMessageExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 285)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_22) {
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the ").add_operation (constinArgument_inErrorOrWarningString, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)).add_operation (GALGAS_string (" message expression type is '@"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)).add_operation (outArgument_outMessageExpression.getter_mResultType (SOURCE_FILE ("instruction-error.galgas", 287)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)).add_operation (GALGAS_string ("'; it should be of the '@string' type"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 287)), fixItArray23  COMMA_SOURCE_FILE ("instruction-error.galgas", 286)) ;
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
  GALGAS_semanticExpressionForGeneration var_locationExpression_12865 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_12892 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_12924 ;
  {
  const GALGAS_errorInstructionAST temp_0 = object ;
  const GALGAS_errorInstructionAST temp_1 = object ;
  const GALGAS_errorInstructionAST temp_2 = object ;
  const GALGAS_errorInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.getter_mLocationExpression (HERE), temp_1.getter_mMessageExpression (HERE), temp_2.getter_mFixitListAST (HERE), temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("error"), ioArgument_ioVariableMap, var_locationExpression_12865, var_messageExpression_12892, var_fixitListForGeneration_12924, inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 302)) ;
  }
  GALGAS_stringlist var_builtVariableCppNameList_12989 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-error.galgas", 317)) ;
  const GALGAS_errorInstructionAST temp_4 = object ;
  cEnumerator_lstringlist enumerator_13042 (temp_4.getter_mBuiltVariableList (HERE), kENUMERATION_UP) ;
  while (enumerator_13042.hasCurrentObject ()) {
    GALGAS_string var_varCppName_13114 ;
    {
    GALGAS_unifiedTypeMap_2D_entry joker_13097 ; // Joker input parameter
    GALGAS_string joker_13116 ; // Joker input parameter
    ioArgument_ioVariableMap.setter_searchForWriteAccess (enumerator_13042.current_mValue (HERE), joker_13097, var_varCppName_13114, joker_13116, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 319)) ;
    }
    var_builtVariableCppNameList_12989.addAssign_operation (var_varCppName_13114  COMMA_SOURCE_FILE ("instruction-error.galgas", 320)) ;
    enumerator_13042.gotoNextObject () ;
  }
  const GALGAS_errorInstructionAST temp_5 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_errorInstructionForGeneration::constructor_new (temp_5.getter_mInstructionLocation (HERE), var_locationExpression_12865, var_messageExpression_12892, var_builtVariableCppNameList_12989, var_fixitListForGeneration_12924  COMMA_SOURCE_FILE ("instruction-error.galgas", 323))  COMMA_SOURCE_FILE ("instruction-error.galgas", 323)) ;
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
  GALGAS_string var_receiverCppVarName_16501 ;
  const GALGAS_errorInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16501, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 402)) ;
  GALGAS_string var_messageCppVarName_16708 ;
  const GALGAS_errorInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mErrorExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_16708, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 410)) ;
  GALGAS_string var_fixItArrayCppName_16961 ;
  const GALGAS_errorInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.getter_mFixitListForGeneration (HERE), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_16961, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) COMMA_SOURCE_FILE ("instruction-error.galgas", 427)) ;
  }
  const GALGAS_errorInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (var_receiverCppVarName_16501, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 428)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (var_messageCppVarName_16708, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 429)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (var_fixItArrayCppName_16961, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 430)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 432)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 428)) ;
  const GALGAS_errorInstructionForGeneration temp_4 = object ;
  cEnumerator_stringlist enumerator_17353 (temp_4.getter_mBuiltVariableCppNameList (HERE), kENUMERATION_UP) ;
  while (enumerator_17353.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_17353.current_mValue (HERE) COMMA_SOURCE_FILE ("instruction-error.galgas", 435)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17353.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 436)) ;
    enumerator_17353.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mWhileExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 280)) ;
  const GALGAS_forInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_mBeforeInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 281)) ;
  const GALGAS_forInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_mBetweenInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 282)) ;
  const GALGAS_forInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.getter_mDoInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 283)) ;
  const GALGAS_forInstructionAST temp_4 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_4.getter_mAfterInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 284)) ;
  const GALGAS_forInstructionAST temp_5 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_10063 (temp_5.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_10063.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_10063.current_mEnumeratedCollection (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 286)) ;
    enumerator_10063.gotoNextObject () ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 297)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 303)) ;
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
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 309)) ;
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
                                                                                        GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                        GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionImplicitVarInExpAST * object = (const cPtr_enumeratedCollectionImplicitVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 339)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 336)) ;
  const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 345)).getter_string (SOURCE_FILE ("instruction-for.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 345)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_12842 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 346)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 346)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_12842.getter_length (SOURCE_FILE ("instruction-for.galgas", 347)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 348)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 348)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 348)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_13168 (var_enumerationDescriptorList_12842, kENUMERATION_UP) ;
  while (enumerator_13168.hasCurrentObject ()) {
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_5 = object ;
    const GALGAS_enumeratedCollectionImplicitVarInExpAST temp_6 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_13168.current_mEnumeratedType (HERE), GALGAS_lstring::constructor_new (temp_5.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_13168.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 354)), temp_6.getter_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 354)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355)).add_operation (enumerator_13168.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 355))  COMMA_SOURCE_FILE ("instruction-for.galgas", 352)) ;
    enumerator_13168.gotoNextObject () ;
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
                                                                                    GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                    GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionCstListInExpAST * object = (const cPtr_enumeratedCollectionCstListInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionCstListInExpAST) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 373)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 370)) ;
  const GALGAS_enumeratedCollectionCstListInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 379)).getter_string (SOURCE_FILE ("instruction-for.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 379)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptorList_14343 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 380)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 380)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, var_enumerationDescriptorList_14343.getter_length (SOURCE_FILE ("instruction-for.galgas", 381)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 382)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 382)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 382)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_enumeratedCollectionCstListInExpAST temp_6 = object ;
      const GALGAS_enumeratedCollectionCstListInExpAST temp_7 = object ;
      test_5 = GALGAS_bool (kIsEqual, temp_6.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (temp_7.getter_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("instruction-for.galgas", 385)) COMMA_SOURCE_FILE ("instruction-for.galgas", 385)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_enumerationDescriptorList var_currentTypedAttributeList_14726 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 386)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 386)) ;
        cEnumerator_enumerationDescriptorList enumerator_14834 (var_currentTypedAttributeList_14726, kENUMERATION_UP) ;
        while (enumerator_14834.hasCurrentObject ()) {
          {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_8 = object ;
          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (GALGAS_lstring::constructor_new (enumerator_14834.current_mEnumerationName (HERE), temp_8.getter_mEndOfEnumerationExpression (HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas", 389)), enumerator_14834.current_mEnumeratedType (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)).add_operation (enumerator_14834.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 391)), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)).add_operation (enumerator_14834.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 388)) ;
          }
          enumerator_14834.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_enumeratedCollectionCstListInExpAST temp_10 = object ;
        const GALGAS_enumeratedCollectionCstListInExpAST temp_11 = object ;
        test_9 = temp_10.getter_mEndsWithEllipsis (HERE).operator_not (SOURCE_FILE ("instruction-for.galgas", 395)).operator_and (GALGAS_bool (kIsNotEqual, temp_11.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 395)).objectCompare (var_enumerationDescriptorList_14343.getter_length (SOURCE_FILE ("instruction-for.galgas", 395)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 395)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_14343.getter_length (SOURCE_FILE ("instruction-for.galgas", 399)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          const GALGAS_enumeratedCollectionCstListInExpAST temp_15 = object ;
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_12.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 397)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (var_enumerationDescriptorList_14343.getter_length (SOURCE_FILE ("instruction-for.galgas", 398)).getter_string (SOURCE_FILE ("instruction-for.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 397)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 398)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 398)).add_operation (GALGAS_string (" for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 399)).add_operation (temp_15.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 401)).getter_string (SOURCE_FILE ("instruction-for.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 400)), fixItArray16  COMMA_SOURCE_FILE ("instruction-for.galgas", 396)) ;
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_18 = object ;
          const GALGAS_enumeratedCollectionCstListInExpAST temp_19 = object ;
          test_17 = temp_18.getter_mEndsWithEllipsis (HERE).operator_and (GALGAS_bool (kIsStrictSup, temp_19.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 402)).objectCompare (var_enumerationDescriptorList_14343.getter_length (SOURCE_FILE ("instruction-for.galgas", 402)))) COMMA_SOURCE_FILE ("instruction-for.galgas", 402)).boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_enumeratedCollectionCstListInExpAST temp_20 = object ;
            GALGAS_string temp_21 ;
            const enumGalgasBool test_22 = GALGAS_bool (kIsStrictSup, var_enumerationDescriptorList_14343.getter_length (SOURCE_FILE ("instruction-for.galgas", 406)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
            if (kBoolTrue == test_22) {
              temp_21 = GALGAS_string ("s") ;
            }else if (kBoolFalse == test_22) {
              temp_21 = GALGAS_string::makeEmptyString () ;
            }
            const GALGAS_enumeratedCollectionCstListInExpAST temp_23 = object ;
            TC_Array <C_FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_20.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("the '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 404)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (GALGAS_string ("' type requires "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (var_enumerationDescriptorList_14343.getter_length (SOURCE_FILE ("instruction-for.galgas", 405)).getter_string (SOURCE_FILE ("instruction-for.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 404)).add_operation (GALGAS_string (" argument"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)).add_operation (temp_21, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 405)).add_operation (GALGAS_string (" or less for enumeration: this list provides "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 406)).add_operation (temp_23.getter_mElementList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 408)).getter_string (SOURCE_FILE ("instruction-for.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 407)), fixItArray24  COMMA_SOURCE_FILE ("instruction-for.galgas", 403)) ;
          }
        }
        if (kBoolFalse == test_17) {
          const GALGAS_enumeratedCollectionCstListInExpAST temp_25 = object ;
          cEnumerator_forInstructionEnumeratedObjectElementListAST enumerator_16204 (temp_25.getter_mElementList (HERE), kENUMERATION_UP) ;
          cEnumerator_enumerationDescriptorList enumerator_16237 (var_enumerationDescriptorList_14343, kENUMERATION_UP) ;
          while (enumerator_16204.hasCurrentObject () && enumerator_16237.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsNotEqual, enumerator_16204.current_mOptionalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 411)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = GALGAS_bool (kIsNotEqual, enumerator_16204.current_mOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                  if (kBoolTrue == test_27) {
                    GALGAS_unifiedTypeMap_2D_entry var_foundType_16392 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_16204.current_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 413)) ;
                    enumGalgasBool test_28 = kBoolTrue ;
                    if (kBoolTrue == test_28) {
                      test_28 = GALGAS_bool (kIsNotEqual, var_foundType_16392.objectCompare (enumerator_16237.current_mEnumeratedType (HERE))).boolEnum () ;
                      if (kBoolTrue == test_28) {
                        TC_Array <C_FixItDescription> fixItArray29 ;
                        inCompiler->emitSemanticError (enumerator_16204.current_mOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 418)), GALGAS_string ("incorrect '@").add_operation (var_foundType_16392.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (GALGAS_string ("' type: '@"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (enumerator_16237.current_mEnumeratedType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)).add_operation (GALGAS_string ("' type required here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 418)), fixItArray29  COMMA_SOURCE_FILE ("instruction-for.galgas", 418)) ;
                      }
                    }
                  }
                }
                ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (enumerator_16237.current_mEnumeratedType (HERE), enumerator_16204.current_mOptionalConstantName (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421)).add_operation (enumerator_16237.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-for.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 421))  COMMA_SOURCE_FILE ("instruction-for.galgas", 421)) ;
              }
            }
            enumerator_16204.gotoNextObject () ;
            enumerator_16237.gotoNextObject () ;
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
                                                                                GALGAS_localInitializedVariableList & ioArgument_ioLocalConstantListForDoBranch,
                                                                                GALGAS_string & outArgument_outEnumeratorCppName,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outEnumerationExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumeratedCollectionVarInExpAST * object = (const cPtr_enumeratedCollectionVarInExpAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumeratedCollectionVarInExpAST) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mEnumeratedExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 442)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outEnumerationExpression, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 439)) ;
  const GALGAS_enumeratedCollectionVarInExpAST temp_1 = object ;
  outArgument_outEnumeratorCppName = GALGAS_string ("enumerator_").add_operation (temp_1.getter_mEndOfEnumerationExpression (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 448)).getter_string (SOURCE_FILE ("instruction-for.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 448)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumeratedElementType_17865 = outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 449)).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 449)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_enumeratedElementType_17865.getter_isNull (SOURCE_FILE ("instruction-for.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mEndOfEnumerationExpression (HERE), GALGAS_string ("an '@").add_operation (outArgument_outEnumerationExpression.getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 451)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)).add_operation (GALGAS_string ("' object cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 451)), fixItArray4  COMMA_SOURCE_FILE ("instruction-for.galgas", 451)) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_5 = object ;
    ioArgument_ioLocalConstantListForDoBranch.addAssign_operation (var_enumeratedElementType_17865, temp_5.getter_mEnumerationVariable (HERE), outArgument_outEnumeratorCppName.add_operation (GALGAS_string (".current (HERE)"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 453))  COMMA_SOURCE_FILE ("instruction-for.galgas", 453)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_enumeratedCollectionVarInExpAST temp_7 = object ;
    test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mEnumerationOptionalTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_enumeratedCollectionVarInExpAST temp_8 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_explicitType_18358 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_8.getter_mEnumerationOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 457)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_enumeratedElementType_17865.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 461)).objectCompare (var_explicitType_18358.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 461)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_enumeratedCollectionVarInExpAST temp_10 = object ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.getter_mEnumerationOptionalTypeName (HERE).getter_location (SOURCE_FILE ("instruction-for.galgas", 462)), GALGAS_string ("the '@").add_operation (var_enumeratedElementType_17865.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)).add_operation (GALGAS_string ("' type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 462)), fixItArray11  COMMA_SOURCE_FILE ("instruction-for.galgas", 462)) ;
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
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 478)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 479)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 481)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_before_5F_instructionList_19376 ;
  {
  const GALGAS_forInstructionAST temp_0 = object ;
  const GALGAS_forInstructionAST temp_1 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 487)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 488)), temp_0.getter_mBeforeInstructionList (HERE), temp_1.getter_mEndOf_5F_before_5F_branch (HERE), ioArgument_ioVariableMap, var_before_5F_instructionList_19376, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 483)) ;
  }
  {
  const GALGAS_forInstructionAST temp_2 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_2.getter_mEndOf_5F_before_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 494)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 496)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_between_5F_instructionList_19885 ;
  {
  const GALGAS_forInstructionAST temp_3 = object ;
  const GALGAS_forInstructionAST temp_4 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 502)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 503)), temp_3.getter_mBetweenInstructionList (HERE), temp_4.getter_mEndOf_5F_between_5F_branch (HERE), ioArgument_ioVariableMap, var_between_5F_instructionList_19885, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 498)) ;
  }
  {
  const GALGAS_forInstructionAST temp_5 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_5.getter_mEndOf_5F_between_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 509)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 511)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_after_5F_instructionList_20682 ;
  {
  const GALGAS_forInstructionAST temp_6 = object ;
  const GALGAS_forInstructionAST temp_7 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 516)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 517)), temp_6.getter_mAfterInstructionList (HERE), temp_7.getter_mEndOf_5F_after_5F_branch (HERE), ioArgument_ioVariableMap, var_after_5F_instructionList_20682, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 512)) ;
  }
  {
  const GALGAS_forInstructionAST temp_8 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_8.getter_mEndOf_5F_after_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 523)) ;
  }
  GALGAS_localInitializedVariableList var_localConstantListForDoBranch_20839 = GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 525)) ;
  GALGAS_forInstructionEnumeratedObjectListForGeneration var_enumerationList_20911 = GALGAS_forInstructionEnumeratedObjectListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 526)) ;
  const GALGAS_forInstructionAST temp_9 = object ;
  cEnumerator_forInstructionEnumeratedObjectListAST enumerator_20955 (temp_9.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_20955.hasCurrentObject ()) {
    GALGAS_string var_enumeratorCppName_21191 ;
    GALGAS_semanticExpressionForGeneration var_enumerationExpression_21257 ;
    callExtensionMethod_analyzeEnumeration ((const cPtr_abstractEnumeratedCollectionAST *) enumerator_20955.current_mEnumeratedCollection (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_localConstantListForDoBranch_20839, var_enumeratorCppName_21191, var_enumerationExpression_21257, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 528)) ;
    GALGAS_string temp_10 ;
    const enumGalgasBool test_11 = enumerator_20955.current_mAscending (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = GALGAS_string ("UP") ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string ("DOWN") ;
    }
    var_enumerationList_20911.addAssign_operation (temp_10, var_enumerationExpression_21257, var_enumeratorCppName_21191  COMMA_SOURCE_FILE ("instruction-for.galgas", 538)) ;
    enumerator_20955.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 544)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 545)) ;
  }
  cEnumerator_localInitializedVariableList enumerator_21581 (var_localConstantListForDoBranch_20839, kENUMERATION_UP) ;
  while (enumerator_21581.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_21581.current (HERE).getter_mName (HERE), enumerator_21581.current (HERE).getter_mType (HERE), enumerator_21581.current (HERE).getter_mCppName (HERE), enumerator_21581.current (HERE).getter_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 548)) ;
    }
    enumerator_21581.gotoNextObject () ;
  }
  GALGAS_semanticExpressionForGeneration var_uncheckedWhileExpression_22009 ;
  const GALGAS_forInstructionAST temp_12 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_12.getter_mWhileExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-for.galgas", 559)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_uncheckedWhileExpression_22009, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 556)) ;
  GALGAS_semanticExpressionForGeneration var_whileExpression_22187 ;
  {
  const GALGAS_forInstructionAST temp_13 = object ;
  routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_13.getter_mEndOf_5F_while_5F_expression (HERE), var_uncheckedWhileExpression_22009, var_whileExpression_22187, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 564)) ;
  }
  {
  const GALGAS_forInstructionAST temp_14 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_14.getter_mEndOf_5F_while_5F_expression (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 571)) ;
  }
  {
  const GALGAS_forInstructionAST temp_15 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_15.getter_mEndOf_5F_while_5F_expression (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 572)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 574)) ;
  }
  GALGAS_string var_indexCppName_22410 = GALGAS_string::makeEmptyString () ;
  GALGAS_localConstantList var_indexDeclaration_22453 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 576)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    const GALGAS_forInstructionAST temp_17 = object ;
    test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mIndexVariableName (HERE).getter_string (SOURCE_FILE ("instruction-for.galgas", 577)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_forInstructionAST temp_18 = object ;
      var_indexCppName_22410 = GALGAS_string ("index_").add_operation (temp_18.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)).getter_string (SOURCE_FILE ("instruction-for.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 578)) ;
      const GALGAS_forInstructionAST temp_19 = object ;
      var_indexDeclaration_22453.addAssign_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), temp_19.getter_mIndexVariableName (HERE), GALGAS_bool (false), var_indexCppName_22410  COMMA_SOURCE_FILE ("instruction-for.galgas", 579)) ;
    }
  }
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_22819 ;
  {
  const GALGAS_forInstructionAST temp_20 = object ;
  const GALGAS_forInstructionAST temp_21 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_indexDeclaration_22453, var_localConstantListForDoBranch_20839, temp_20.getter_mDoInstructionList (HERE), temp_21.getter_mEndOf_5F_do_5F_branch (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_22819, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 587)) ;
  }
  {
  const GALGAS_forInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 599)) ;
  }
  {
  const GALGAS_forInstructionAST temp_23 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_23.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 601)) ;
  }
  {
  const GALGAS_forInstructionAST temp_24 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_24.getter_mEndOf_5F_foreach_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 602)) ;
  }
  const GALGAS_forInstructionAST temp_25 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_forInstructionForGeneration::constructor_new (temp_25.getter_mInstructionLocation (HERE), var_enumerationList_20911, var_indexCppName_22410, var_whileExpression_22187, var_before_5F_instructionList_19376, var_between_5F_instructionList_19885, var_do_5F_instructionList_22819, var_after_5F_instructionList_20682  COMMA_SOURCE_FILE ("instruction-for.galgas", 604))  COMMA_SOURCE_FILE ("instruction-for.galgas", 604)) ;
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
  GALGAS_stringlist var_enumerationVarCppNameList_25329 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-for.galgas", 650)) ;
  const GALGAS_forInstructionForGeneration temp_0 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_25373 (temp_0.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  while (enumerator_25373.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar_25403 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_25373.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar_25403, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 653)) ;
    var_enumerationVarCppNameList_25329.addAssign_operation (var_enumerationVar_25403  COMMA_SOURCE_FILE ("instruction-for.galgas", 660)) ;
    enumerator_25373.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_1 = object ;
  cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_25686 (temp_1.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
  cEnumerator_stringlist enumerator_25719 (var_enumerationVarCppNameList_25329, kENUMERATION_UP) ;
  while (enumerator_25686.hasCurrentObject () && enumerator_25719.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (enumerator_25686.current_mEnumeratedExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-for.galgas", 663)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 663)).add_operation (enumerator_25686.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_25719.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (GALGAS_string (", kENUMERATION_"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 664)).add_operation (enumerator_25686.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 665)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 663)) ;
    enumerator_25686.gotoNextObject () ;
    enumerator_25719.gotoNextObject () ;
  }
  const GALGAS_forInstructionForGeneration temp_2 = object ;
  GALGAS_bool var_whileExpressionIsAllwaysTrue_26003 = callExtensionGetter_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mWhileExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 668)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_forInstructionForGeneration temp_4 = object ;
    const GALGAS_forInstructionForGeneration temp_5 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_mBeforeInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 670)).add_operation (temp_5.getter_mAfterInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue_26003.operator_not (SOURCE_FILE ("instruction-for.galgas", 670)) COMMA_SOURCE_FILE ("instruction-for.galgas", 670)).boolEnum () ;
    if (kBoolTrue == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_forInstructionForGeneration temp_7 = object ;
        test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_forInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_8.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 673)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 673)) ;
        }
      }
      GALGAS_string var_boolVarCppName_26438 = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-for.galgas", 675)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 675)) ;
      ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 675)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = var_whileExpressionIsAllwaysTrue_26003.boolEnum () ;
        if (kBoolTrue == test_9) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolVarCppName_26438, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 677)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 677)) ;
        }
      }
      if (kBoolFalse == test_9) {
        GALGAS_string var_whileVar_26657 ;
        const GALGAS_forInstructionForGeneration temp_10 = object ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_10.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_26657, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 680)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_boolVarCppName_26438, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (var_whileVar_26657, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 681)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 683)) ;
      const GALGAS_forInstructionForGeneration temp_11 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_26982 (temp_11.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_26982.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_26982.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 685)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 685)) ;
        enumerator_26982.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26438.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 687)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 687)) ;
      {
      const GALGAS_forInstructionForGeneration temp_12 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_12.getter_mBeforeInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 688)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 696)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 697)) ;
      const GALGAS_forInstructionForGeneration temp_13 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27465 (temp_13.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_27465.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_27465.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 699)) ;
        enumerator_27465.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26438.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 701)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 701)) ;
      {
      const GALGAS_forInstructionForGeneration temp_14 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_14.getter_mDoInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 703)) ;
      }
      const GALGAS_forInstructionForGeneration temp_15 = object ;
      cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_27926 (temp_15.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
      while (enumerator_27926.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_27926.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 713)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 713)) ;
        enumerator_27926.gotoNextObject () ;
      }
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        const GALGAS_forInstructionForGeneration temp_17 = object ;
        test_16 = GALGAS_bool (kIsNotEqual, temp_17.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_16) {
          const GALGAS_forInstructionForGeneration temp_18 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_18.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 716)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 716)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 716)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = var_whileExpressionIsAllwaysTrue_26003.operator_not (SOURCE_FILE ("instruction-for.galgas", 719)).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 720)) ;
          const GALGAS_forInstructionForGeneration temp_20 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_28305 (temp_20.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_28305.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_28305.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 722)) ;
            if (enumerator_28305.hasNextObject ()) {
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 723)) ;
            }
            enumerator_28305.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 725)) ;
          GALGAS_string var_whileVar_28484 ;
          const GALGAS_forInstructionForGeneration temp_21 = object ;
          callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_21.getter_mWhileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar_28484, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 727)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("    ").add_operation (var_boolVarCppName_26438, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (var_whileVar_28484, inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 734)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 734)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 735)) ;
        }
      }
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_forInstructionForGeneration temp_23 = object ;
        test_22 = GALGAS_bool (kIsStrictSup, temp_23.getter_mBetweenInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 738)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_22) {
          {
          ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 739)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 740)) ;
          const GALGAS_forInstructionForGeneration temp_24 = object ;
          cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_29028 (temp_24.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
          while (enumerator_29028.hasCurrentObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_29028.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 742)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 742)) ;
            enumerator_29028.gotoNextObject () ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(var_boolVarCppName_26438.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 744)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 744)) ;
          {
          const GALGAS_forInstructionForGeneration temp_25 = object ;
          routine_generateInstructionList (ioArgument_ioInclusionSet, temp_25.getter_mBetweenInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 745)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 753)) ;
          {
          ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 754)) ;
          }
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 757)) ;
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 759)) ;
      }
      {
      const GALGAS_forInstructionForGeneration temp_26 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_26.getter_mAfterInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 760)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 768)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      const GALGAS_forInstructionForGeneration temp_28 = object ;
      test_27 = GALGAS_bool (kIsNotEqual, temp_28.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_27) {
        const GALGAS_forInstructionForGeneration temp_29 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (temp_29.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 771)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 771)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 773)) ;
    const GALGAS_forInstructionForGeneration temp_30 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30203 (temp_30.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_30203.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30203.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 775)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 775)) ;
      if (enumerator_30203.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 776)) ;
      }
      enumerator_30203.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 778)) ;
    {
    const GALGAS_forInstructionForGeneration temp_31 = object ;
    routine_generateInstructionList (ioArgument_ioInclusionSet, temp_31.getter_mDoInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 780)) ;
    }
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      const GALGAS_forInstructionForGeneration temp_33 = object ;
      test_32 = GALGAS_bool (kIsStrictSup, temp_33.getter_mBetweenInstructionList (HERE).getter_length (SOURCE_FILE ("instruction-for.galgas", 789)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_32) {
        {
        ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 790)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 791)) ;
        const GALGAS_forInstructionForGeneration temp_34 = object ;
        cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_30829 (temp_34.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_30829.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_30829.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 793)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 793)) ;
          if (enumerator_30829.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 794)) ;
          }
          enumerator_30829.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 796)) ;
        {
        const GALGAS_forInstructionForGeneration temp_35 = object ;
        routine_generateInstructionList (ioArgument_ioInclusionSet, temp_35.getter_mBetweenInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 797)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 805)) ;
        {
        ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 806)) ;
        }
      }
    }
    const GALGAS_forInstructionForGeneration temp_36 = object ;
    cEnumerator_forInstructionEnumeratedObjectListForGeneration enumerator_31395 (temp_36.getter_mEnumeratedObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_31395.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_31395.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 810)) ;
      enumerator_31395.gotoNextObject () ;
    }
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      const GALGAS_forInstructionForGeneration temp_38 = object ;
      test_37 = GALGAS_bool (kIsNotEqual, temp_38.getter_mIndexVariableCppName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_37) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) COMMA_SOURCE_FILE ("instruction-for.galgas", 813)) ;
        }
        const GALGAS_forInstructionForGeneration temp_39 = object ;
        const GALGAS_forInstructionForGeneration temp_40 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_39.getter_mIndexVariableCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 814)).add_operation (extensionGetter_commaSourceFile (temp_40.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas", 815)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 814)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas", 817)) ;
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
  cEnumerator_actualParameterListAST enumerator_7530 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_7530.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7530.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 185)) ;
    enumerator_7530.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_7970 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_7970.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_7970.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 196)) ;
    enumerator_7970.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_8648 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 211)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_8648 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 212)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_8965 ;
  GALGAS_bool var_hasTranslateFeature_9007 ;
  const GALGAS_grammarInFileInstructionAST temp_1 = object ;
  GALGAS_bool joker_8971 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_8965, joker_8971, var_hasTranslateFeature_9007, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 214)) ;
  GALGAS_formalParameterSignature var_labelSignature_9129 ;
  const GALGAS_grammarInFileInstructionAST temp_2 = object ;
  var_grammarLabelMap_8965.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_9129, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 221)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_9543 ;
  {
  const GALGAS_grammarInFileInstructionAST temp_3 = object ;
  const GALGAS_grammarInFileInstructionAST temp_4 = object ;
  const GALGAS_grammarInFileInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 231)), var_labelSignature_9129, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_9543, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 226)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_9824 ;
  const GALGAS_grammarInFileInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 242)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_9824, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 239)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_9824.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 248)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInFileInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source file path and its type should be '@lstring', but it is '@").add_operation (var_sourceExpression_9824.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 251)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 250)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 251)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 249)) ;
    }
  }
  const GALGAS_grammarInFileInstructionAST temp_10 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_10297 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_10.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 254)) ;
  GALGAS_stringlist var_assignementList_10410 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 255)) ;
  const GALGAS_grammarInFileInstructionAST temp_11 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_11.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_9007, var_syntaxDirectedTranslationResultVarName_10297, var_assignementList_10410, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 256)) ;
  const GALGAS_grammarInFileInstructionAST temp_12 = object ;
  const GALGAS_grammarInFileInstructionAST temp_13 = object ;
  const GALGAS_grammarInFileInstructionAST temp_14 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceFileForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), temp_13.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 266)), temp_14.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 267)), var_sourceExpression_9824, var_actualParameterListForGeneration_9543, var_hasTranslateFeature_9007, var_assignementList_10410, var_syntaxDirectedTranslationResultVarName_10297  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 264)) ;
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
  GALGAS_lstring var_grammarUsefulnessName_11504 = function_grammarNameForUsefulEntitiesGraph (temp_0.getter_mGrammarComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 285)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_grammarUsefulnessName_11504 COMMA_SOURCE_FILE ("instruction-grammar.galgas", 286)) ;
  }
  GALGAS_grammarLabelMap var_grammarLabelMap_11828 ;
  GALGAS_bool var_hasTranslateFeature_11870 ;
  const GALGAS_grammarInStringInstructionAST temp_1 = object ;
  GALGAS_bool joker_11834 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mGrammarMap (HERE).method_searchKey (temp_1.getter_mGrammarComponentName (HERE), var_grammarLabelMap_11828, joker_11834, var_hasTranslateFeature_11870, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 288)) ;
  GALGAS_formalParameterSignature var_labelSignature_11992 ;
  const GALGAS_grammarInStringInstructionAST temp_2 = object ;
  var_grammarLabelMap_11828.method_searchKey (temp_2.getter_mLabelName (HERE), var_labelSignature_11992, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 295)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_12406 ;
  {
  const GALGAS_grammarInStringInstructionAST temp_3 = object ;
  const GALGAS_grammarInStringInstructionAST temp_4 = object ;
  const GALGAS_grammarInStringInstructionAST temp_5 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_3.getter_mLabelName (HERE), GALGAS_string ("label of the ").add_operation (temp_4.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)).add_operation (GALGAS_string (" grammar"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 305)), var_labelSignature_11992, temp_5.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_12406, inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 300)) ;
  }
  GALGAS_semanticExpressionForGeneration var_sourceExpression_12687 ;
  const GALGAS_grammarInStringInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 316)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_sourceExpression_12687, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 313)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_sourceExpression_12687.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 322)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInStringInstructionAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.getter_mEndOfSourceExpression (HERE), GALGAS_string ("this expression is the source string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12687.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 325)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 324)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 325)), fixItArray9  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 323)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_nameExpression_13281 ;
  const GALGAS_grammarInStringInstructionAST temp_10 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_10.getter_mNameExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-grammar.galgas", 331)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_nameExpression_13281, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 328)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsNotEqual, var_nameExpression_13281.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 337)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_grammarInStringInstructionAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.getter_mEndOfNameExpression (HERE), GALGAS_string ("this expression is the name string and its type should be '@string', but it is '@").add_operation (var_sourceExpression_12687.getter_mResultType (SOURCE_FILE ("instruction-grammar.galgas", 340)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 339)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 340)), fixItArray13  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 338)) ;
    }
  }
  const GALGAS_grammarInStringInstructionAST temp_14 = object ;
  GALGAS_string var_syntaxDirectedTranslationResultVarName_13697 = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (temp_14.getter_mGrammarComponentName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 343)) ;
  GALGAS_stringlist var_assignementList_13810 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 344)) ;
  const GALGAS_grammarInStringInstructionAST temp_15 = object ;
  callExtensionMethod_analyzeGrammarInstructionSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_15.getter_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (HERE).ptr (), constinArgument_inAnalysisContext, var_hasTranslateFeature_11870, var_syntaxDirectedTranslationResultVarName_13697, var_assignementList_13810, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 345)) ;
  const GALGAS_grammarInStringInstructionAST temp_16 = object ;
  const GALGAS_grammarInStringInstructionAST temp_17 = object ;
  const GALGAS_grammarInStringInstructionAST temp_18 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_grammarInstructionWithSourceExpressionForGeneration::constructor_new (temp_16.getter_mInstructionLocation (HERE), temp_17.getter_mGrammarComponentName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 355)), temp_18.getter_mLabelName (HERE).getter_string (SOURCE_FILE ("instruction-grammar.galgas", 356)), var_sourceExpression_12687, var_nameExpression_13281, var_actualParameterListForGeneration_12406, var_hasTranslateFeature_11870, var_assignementList_13810, var_syntaxDirectedTranslationResultVarName_13697  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353))  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 353)) ;
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
  GALGAS_string var_sourceVar_15871 ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceFileExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_15871, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 392)) ;
  GALGAS_stringlist var_parameterCppNameList_15924 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 400)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15977 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 401)) ;
  GALGAS_stringlist var_inputVariableList_16019 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 402)) ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_2 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_16075 (temp_2.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_16075.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16354 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_16075.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15977, var_inputVariableList_16019, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16354, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 404)) ;
    var_parameterCppNameList_15924.addAssign_operation (var_parameterCppName_16354  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 413)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_16075.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_16354.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 415)) ;
      }
    }
    enumerator_16075.gotoNextObject () ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_7.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)).add_operation (temp_8.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 422)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 423)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 424)).add_operation (var_sourceVar_15871, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 421)) ;
  cEnumerator_stringlist enumerator_17161 (var_parameterCppNameList_15924, kENUMERATION_UP) ;
  while (enumerator_17161.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_17161.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 428)) ;
    enumerator_17161.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_13 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_13.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 430)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 431)) ;
  }
  const GALGAS_grammarInstructionWithSourceFileForGeneration temp_14 = object ;
  cEnumerator_stringlist enumerator_17394 (temp_14.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_17394.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17394.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 433)) ;
    enumerator_17394.gotoNextObject () ;
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
  GALGAS_string var_sourceVar_18935 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_18935, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 463)) ;
  GALGAS_string var_nameVar_19153 ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_2 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_2.getter_mNameStringExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_nameVar_19153, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 471)) ;
  GALGAS_stringlist var_parameterCppNameList_19206 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 479)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_19259 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 480)) ;
  GALGAS_stringlist var_inputVariableList_19301 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-grammar.galgas", 481)) ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_19357 (temp_3.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_19357.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_19643 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_19357.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_19259, var_inputVariableList_19301, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_19643, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 483)) ;
    var_parameterCppNameList_19206.addAssign_operation (var_parameterCppName_19643  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 492)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_19357.current_mActualParameter (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioGeneratedCode.plusAssign_operation(var_parameterCppName_19643.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 494)) ;
      }
    }
    enumerator_19357.gotoNextObject () ;
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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cGrammar_").add_operation (temp_8.getter_mGrammarName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)).add_operation (temp_9.getter_mLabelName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-grammar.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 501)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 502)).add_operation (var_sourceVar_18935, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 503)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 504)).add_operation (var_nameVar_19153, inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 500)) ;
  cEnumerator_stringlist enumerator_20469 (var_parameterCppNameList_19206, kENUMERATION_UP) ;
  while (enumerator_20469.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_20469.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 507)) ;
    enumerator_20469.gotoNextObject () ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_14 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_14.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 509)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) COMMA_SOURCE_FILE ("instruction-grammar.galgas", 510)) ;
  }
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration temp_15 = object ;
  cEnumerator_stringlist enumerator_20702 (temp_15.getter_mAssignementList (HERE), kENUMERATION_UP) ;
  while (enumerator_20702.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_20702.current (HERE).getter_mValue (HERE).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)), inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas", 512)) ;
    enumerator_20702.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6144 ;
  GALGAS_string var_targetVariableCppName_6180 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_6230 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_incDecInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 185)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_incDecInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 186)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 186)) ;
          var_targetType_6144.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_6230.drop () ; // Release error dropped variable
          var_targetVariableCppName_6180.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 188)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_incDecInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 189)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 189)) ;
            var_targetType_6144.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_6230.drop () ; // Release error dropped variable
            var_targetVariableCppName_6180.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_6700 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 192)) ;
          const GALGAS_incDecInstructionAST temp_8 = object ;
          GALGAS_bool joker_6801 ; // Joker input parameter
          var_propertyMap_6700.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_6801, var_targetType_6144, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 193)) ;
          var_nameForCheckingFormalParameterUsing_6230 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_incDecInstructionAST temp_9 = object ;
          var_targetVariableCppName_6180 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 195)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_incDecInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_targetType_6144, var_targetVariableCppName_6180, var_nameForCheckingFormalParameterUsing_6230, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 198)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_11 = object ;
  cEnumerator_lstringlist enumerator_7465 (temp_11.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_7465.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_7488 = var_targetType_6144.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 210)) ;
    GALGAS_bool var_isPublic_7565 ;
    var_propertyMap_7488.method_searchKey (enumerator_7465.current_mValue (HERE), var_isPublic_7565, var_targetType_6144, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 211)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_isPublic_7565.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 212)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_7465.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 213)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 213)) ;
      }
    }
    enumerator_7465.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_targetType_6144.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 217)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 217)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_incDecInstructionAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_6144.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '++', '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 219)), fixItArray16  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 218)) ;
    }
  }
  const GALGAS_incDecInstructionAST temp_17 = object ;
  const GALGAS_incDecInstructionAST temp_18 = object ;
  const GALGAS_incDecInstructionAST temp_19 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_17.getter_mInstructionLocation (HERE), var_targetVariableCppName_6180, var_targetType_6144, temp_18.getter_mStructAttributeList (HERE), temp_19.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 222)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_8721 ;
  GALGAS_string var_targetVariableCppName_8753 ;
  {
  const GALGAS_incDecNoOVFInstructionAST temp_0 = object ;
  GALGAS_string joker_8854 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_0.getter_mReceiverName (HERE), var_targetType_8721, var_targetVariableCppName_8753, joker_8854, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 243)) ;
  }
  const GALGAS_incDecNoOVFInstructionAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_8894 (temp_1.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8894.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_8917 = var_targetType_8721.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 245)) ;
    GALGAS_bool var_isPublic_8994 ;
    var_propertyMap_8917.method_searchKey (enumerator_8894.current_mValue (HERE), var_isPublic_8994, var_targetType_8721, inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 246)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_isPublic_8994.operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 247)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_8894.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-inc-dec.galgas", 248)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray3  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 248)) ;
      }
    }
    enumerator_8894.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_targetType_8721.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 252)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 252)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 252)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_incDecNoOVFInstructionAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_targetType_8721.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)).add_operation (GALGAS_string ("' type, but this type does not support the '&++', '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 254)), fixItArray6  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 253)) ;
    }
  }
  const GALGAS_incDecNoOVFInstructionAST temp_7 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_8 = object ;
  const GALGAS_incDecNoOVFInstructionAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_7.getter_mInstructionLocation (HERE), var_targetVariableCppName_8753, var_targetType_8721, temp_8.getter_mStructAttributeList (HERE), temp_9.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 257))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 257)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_10181 ;
  GALGAS_string var_selfObjectCppName_10209 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 278)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfIncDecNoOVFInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 279)) ;
      var_selfObjectCppName_10209.drop () ; // Release error dropped variable
      var_selfTypeEntry_10181.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_10209 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_10181 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_10181.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 285)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 285)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 285)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfIncDecNoOVFInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_10181.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)).add_operation (GALGAS_string ("' type, but this type does not support the '&++' and  '&--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 287)), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 286)) ;
    }
  }
  const GALGAS_selfIncDecNoOVFInstructionAST temp_6 = object ;
  const GALGAS_selfIncDecNoOVFInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecNoOVFInstructionForGeneration::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_selfObjectCppName_10209, var_selfTypeEntry_10181, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 294)), temp_7.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 290))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 290)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_11544 ;
  GALGAS_string var_selfObjectCppName_11572 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-inc-dec.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfIncDecInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 312)) ;
      var_selfObjectCppName_11572.drop () ; // Release error dropped variable
      var_selfTypeEntry_11544.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_11572 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_11544 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_11544.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 318)).getter_incDecOperator (SOURCE_FILE ("instruction-inc-dec.galgas", 318)).operator_not (SOURCE_FILE ("instruction-inc-dec.galgas", 318)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfIncDecInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_11544.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)).add_operation (GALGAS_string ("' type, but this type does not support the '++' and  '--' operators"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 320)), fixItArray5  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 319)) ;
    }
  }
  const GALGAS_selfIncDecInstructionAST temp_6 = object ;
  const GALGAS_selfIncDecInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_incDecInstructionForGeneration::constructor_new (temp_6.getter_mInstructionLocation (HERE), var_selfObjectCppName_11572, var_selfTypeEntry_11544, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-inc-dec.galgas", 327)), temp_7.getter_mKind (HERE)  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323))  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 323)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 364)) ;
  }
  const GALGAS_incDecInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_13726 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_13788 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_13788.hasCurrentObject ()) {
    var_receiverCppName_13726.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_13788.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 367)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 367)) ;
    enumerator_13788.gotoNextObject () ;
  }
  const GALGAS_incDecInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      const GALGAS_incDecInstructionForGeneration temp_4 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_13726.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)).add_operation (extensionGetter_commaSourceFile (temp_4.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 372)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 374)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      const GALGAS_incDecInstructionForGeneration temp_5 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_13726.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)).add_operation (extensionGetter_commaSourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 377)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 376)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 378)) ;
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
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mReceiverCppName (HERE) COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 392)) ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_1 = object ;
  GALGAS_string var_receiverCppName_14954 = temp_1.getter_mReceiverCppName (HERE) ;
  const GALGAS_incDecNoOVFInstructionForGeneration temp_2 = object ;
  cEnumerator_lstringlist enumerator_15016 (temp_2.getter_mStructAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_15016.hasCurrentObject ()) {
    var_receiverCppName_14954.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_15016.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-inc-dec.galgas", 395)).getter_identifierRepresentation (SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 395)) ;
    enumerator_15016.gotoNextObject () ;
  }
  const GALGAS_incDecNoOVFInstructionForGeneration temp_3 = object ;
  switch (temp_3.getter_mKind (HERE).enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14954.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 400)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_14954.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)), inCompiler  COMMA_SOURCE_FILE ("instruction-inc-dec.galgas", 402)) ;
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
  cEnumerator_ifExpressionList enumerator_7393 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_7393.hasCurrentObject ()) {
    switch (enumerator_7393.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_7503 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_7393.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_7503->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 206)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_7671 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_7393.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_7671->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_7671->mAssociatedValue3 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 208)) ;
        {
        GALGAS_unifiedTypeMap_2D_entry joker_7669 ; // Joker input parameter
        GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, extractedValue_typeName, joker_7669 COMMA_SOURCE_FILE ("instruction-if.galgas", 209)) ;
        }
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_8113 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_7393.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_receiverExpression = extractPtr_8113->mAssociatedValue0 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_parameters = extractPtr_8113->mAssociatedValue2 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_receiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 211)) ;
        cEnumerator_optionalMethodActualArgumentList enumerator_7845 (extractedValue_parameters, kENUMERATION_UP) ;
        while (enumerator_7845.hasCurrentObject ()) {
          switch (enumerator_7845.current_mActualArgument (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgument::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_7984 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_7845.current_mActualArgument (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionAST extractedValue_expression = extractPtr_7984->mAssociatedValue0 ;
              callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_expression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 215)) ;
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
          enumerator_7845.gotoNextObject () ;
        }
      }
      break ;
    }
    enumerator_7393.gotoNextObject () ;
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
  GALGAS_ifTestListForGeneration var_testListForGeneration_9576 = GALGAS_ifTestListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 261)) ;
  const GALGAS_ifInstructionAST temp_0 = object ;
  cEnumerator_ifExpressionList enumerator_9621 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_9621.hasCurrentObject ()) {
    switch (enumerator_9621.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifExpressionKind::kNotBuilt:
      break ;
    case GALGAS_ifExpressionKind::kEnum_regularExp:
      {
        const cEnumAssociatedValues_ifExpressionKind_regularExp * extractPtr_10203 = (const cEnumAssociatedValues_ifExpressionKind_regularExp *) (enumerator_9621.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_10203->mAssociatedValue0 ;
        GALGAS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_9883 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 268)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_9883, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 265)) ;
        GALGAS_semanticExpressionForGeneration var_if_5F_expression_10046 ;
        {
        const GALGAS_ifInstructionAST temp_1 = object ;
        routine_checkExpressionIsBoolean (constinArgument_inAnalysisContext, temp_1.getter_mEndOf_5F_if_5F_instruction (HERE), var_analyzed_5F_if_5F_expression_9883, var_if_5F_expression_10046, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 273)) ;
        }
        var_testListForGeneration_9576.addAssign_operation (GALGAS_ifTestForGeneration::constructor_regular (var_if_5F_expression_10046  COMMA_SOURCE_FILE ("instruction-if.galgas", 279))  COMMA_SOURCE_FILE ("instruction-if.galgas", 279)) ;
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
        const cEnumAssociatedValues_ifExpressionKind_letExp * extractPtr_13658 = (const cEnumAssociatedValues_ifExpressionKind_letExp *) (enumerator_9621.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_constantName = extractPtr_13658->mAssociatedValue0 ;
        const GALGAS_semanticExpressionAST extractedValue_exp = extractPtr_13658->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_13658->mAssociatedValue3 ;
        GALGAS_semanticExpressionForGeneration var_analyzedExpression_10465 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_exp.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 286)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_analyzedExpression_10465, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 283)) ;
        GALGAS_unifiedTypeMap_2D_entry var_castType_10522 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 292)) ;
        GALGAS_unifiedTypeMap_2D_entry var_testType_10570 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 293)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 295)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 295)).getter_isClassType (SOURCE_FILE ("instruction-if.galgas", 295)).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (extractedValue_typeName.getter_location (HERE), GALGAS_string ("on a class object, the 'as' clause is required"), fixItArray4  COMMA_SOURCE_FILE ("instruction-if.galgas", 297)) ;
                var_castType_10522.drop () ; // Release error dropped variable
                var_testType_10570.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_3) {
              var_castType_10522 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 299)) ;
              var_testType_10570 = var_castType_10522 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_11103 = var_castType_10522 ;
              GALGAS_bool var_found_11136 = GALGAS_bool (kIsEqual, var_t_11103.objectCompare (var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 303)))) ;
              if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 304)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 304)).isValid ()) {
                uint32_t variant_11191 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 304)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 304)).uintValue () ;
                bool loop_11191 = true ;
                while (loop_11191) {
                  loop_11191 = var_found_11136.operator_not (SOURCE_FILE ("instruction-if.galgas", 305)).operator_and (var_t_11103.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 305)).operator_not (SOURCE_FILE ("instruction-if.galgas", 305)) COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).isValid () ;
                  if (loop_11191) {
                    loop_11191 = var_found_11136.operator_not (SOURCE_FILE ("instruction-if.galgas", 305)).operator_and (var_t_11103.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 305)).operator_not (SOURCE_FILE ("instruction-if.galgas", 305)) COMMA_SOURCE_FILE ("instruction-if.galgas", 305)).boolValue () ;
                  }
                  if (loop_11191 && (0 == variant_11191)) {
                    loop_11191 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 304)) ;
                  }
                  if (loop_11191) {
                    variant_11191 -- ;
                    var_t_11103 = var_t_11103.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 306)) ;
                    var_found_11136 = GALGAS_bool (kIsEqual, var_t_11103.objectCompare (var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 307)))) ;
                  }
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_found_11136.operator_not (SOURCE_FILE ("instruction-if.galgas", 309)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_typeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 310)), GALGAS_string ("the '@").add_operation (extractedValue_typeName.getter_string (SOURCE_FILE ("instruction-if.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)).add_operation (GALGAS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)).add_operation (var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 311)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 311)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 310)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_unifiedTypeMap_2D_entry var_classType_11772 ;
            const bool optionalResult11742 = var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 315)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 315)).optional_weakReferenceType (var_classType_11772) ;
            if (!optionalResult11742) {
              test_7 = kBoolFalse ;
            }
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = GALGAS_bool (kIsEqual, extractedValue_typeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_castType_10522 = var_classType_11772 ;
                }
              }
              if (kBoolFalse == test_8) {
                var_castType_10522 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), extractedValue_typeName, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 319)) ;
              }
              var_testType_10570 = var_castType_10522 ;
              GALGAS_unifiedTypeMap_2D_entry var_t_12042 = var_castType_10522 ;
              GALGAS_bool var_found_12073 = GALGAS_bool (kIsEqual, var_t_12042.objectCompare (var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 323)))) ;
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_found_12073.boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_castType_10522.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 325)).method_weakReferenceType (var_testType_10570, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 325)) ;
                }
              }
              if (kBoolFalse == test_9) {
                enumGalgasBool test_10 = kBoolTrue ;
                if (kBoolTrue == test_10) {
                  test_10 = GALGAS_bool (kIsEqual, var_t_12042.objectCompare (var_classType_11772)).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    var_found_12073 = GALGAS_bool (true) ;
                  }
                }
              }
              if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 329)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 329)).isValid ()) {
                uint32_t variant_12297 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-if.galgas", 329)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 329)).uintValue () ;
                bool loop_12297 = true ;
                while (loop_12297) {
                  loop_12297 = var_found_12073.operator_not (SOURCE_FILE ("instruction-if.galgas", 330)).operator_and (var_t_12042.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 330)).operator_not (SOURCE_FILE ("instruction-if.galgas", 330)) COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).isValid () ;
                  if (loop_12297) {
                    loop_12297 = var_found_12073.operator_not (SOURCE_FILE ("instruction-if.galgas", 330)).operator_and (var_t_12042.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).getter_isNull (SOURCE_FILE ("instruction-if.galgas", 330)).operator_not (SOURCE_FILE ("instruction-if.galgas", 330)) COMMA_SOURCE_FILE ("instruction-if.galgas", 330)).boolValue () ;
                  }
                  if (loop_12297 && (0 == variant_12297)) {
                    loop_12297 = false ;
                    inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-if.galgas", 329)) ;
                  }
                  if (loop_12297) {
                    variant_12297 -- ;
                    var_t_12042 = var_t_12042.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 331)) ;
                    enumGalgasBool test_11 = kBoolTrue ;
                    if (kBoolTrue == test_11) {
                      test_11 = GALGAS_bool (kIsEqual, var_t_12042.objectCompare (var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 332)))).boolEnum () ;
                      if (kBoolTrue == test_11) {
                        var_found_12073 = GALGAS_bool (true) ;
                        var_castType_10522.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 334)).method_weakReferenceType (var_testType_10570, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 334)) ;
                      }
                    }
                    if (kBoolFalse == test_11) {
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (kIsEqual, var_t_12042.objectCompare (var_classType_11772)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_found_12073 = GALGAS_bool (true) ;
                        }
                      }
                    }
                  }
                }
              }
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = var_found_12073.operator_not (SOURCE_FILE ("instruction-if.galgas", 339)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  TC_Array <C_FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_typeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 340)), GALGAS_string ("the '@").add_operation (var_castType_10522.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)).add_operation (GALGAS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)).add_operation (var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 341)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 341)), fixItArray14  COMMA_SOURCE_FILE ("instruction-if.galgas", 340)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (var_analyzedExpression_10465.getter_mLocation (SOURCE_FILE ("instruction-if.galgas", 344)), GALGAS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (var_analyzedExpression_10465.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 345)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 344)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 345)), fixItArray15  COMMA_SOURCE_FILE ("instruction-if.galgas", 344)) ;
          }
        }
        {
        ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 347)) ;
        }
        {
        ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 348)) ;
        }
        GALGAS_string var_targetVariableCppName_13210 = GALGAS_string ("var_").add_operation (extractedValue_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 349)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 349)).add_operation (extractedValue_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 350)).getter_string (SOURCE_FILE ("instruction-if.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 350)) ;
        {
        ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_constantName, var_castType_10522, var_targetVariableCppName_13210, var_targetVariableCppName_13210, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 351)) ;
        }
        var_testListForGeneration_9576.addAssign_operation (GALGAS_ifTestForGeneration::constructor_letExp (var_targetVariableCppName_13210, var_analyzedExpression_10465, var_castType_10522, var_testType_10570  COMMA_SOURCE_FILE ("instruction-if.galgas", 357))  COMMA_SOURCE_FILE ("instruction-if.galgas", 357)) ;
      }
      break ;
    case GALGAS_ifExpressionKind::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall * extractPtr_14055 = (const cEnumAssociatedValues_ifExpressionKind_optionalMethodCall *) (enumerator_9621.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_receiverExpression = extractPtr_14055->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalMethodName = extractPtr_14055->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentList extractedValue_parameters = extractPtr_14055->mAssociatedValue2 ;
        {
        routine_analyzeOptionalMethodCall (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, extractedValue_receiverExpression, extractedValue_optionalMethodName, extractedValue_parameters, var_testListForGeneration_9576, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 364)) ;
        }
      }
      break ;
    }
    enumerator_9621.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_then_5F_instructionList_14381 ;
  {
  const GALGAS_ifInstructionAST temp_16 = object ;
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 381)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 382)), temp_16.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioVariableMap, var_then_5F_instructionList_14381, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 377)) ;
  }
  const GALGAS_ifInstructionAST temp_17 = object ;
  GALGAS_ifExpressionList var_expressions_14403 = temp_17.getter_mExpressions (HERE) ;
  {
  GALGAS_ifExpressionKind joker_14450 ; // Joker input parameter
  var_expressions_14403.setter_popLast (joker_14450, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 388)) ;
  }
  cEnumerator_ifExpressionList enumerator_14486 (var_expressions_14403, kENUMERATION_UP) ;
  while (enumerator_14486.hasCurrentObject ()) {
    {
    const GALGAS_ifInstructionAST temp_18 = object ;
    ioArgument_ioVariableMap.setter_closeBranch (temp_18.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 390)) ;
    }
    {
    const GALGAS_ifInstructionAST temp_19 = object ;
    ioArgument_ioVariableMap.setter_closeOverride (temp_19.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 391)) ;
    }
    enumerator_14486.gotoNextObject () ;
  }
  {
  const GALGAS_ifInstructionAST temp_20 = object ;
  ioArgument_ioVariableMap.setter_closeBranch (temp_20.getter_mEndOf_5F_then_5F_branch (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 393)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_15003 ;
  {
  const GALGAS_ifInstructionAST temp_21 = object ;
  const GALGAS_ifInstructionAST temp_22 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 399)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 400)), temp_21.getter_m_5F_else_5F_instructionList (HERE), temp_22.getter_mEndOf_5F_if_5F_instruction (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_15003, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 395)) ;
  }
  {
  const GALGAS_ifInstructionAST temp_23 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_23.getter_mEndOf_5F_if_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 406)) ;
  }
  const GALGAS_ifInstructionAST temp_24 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_ifInstructionForGeneration::constructor_new (temp_24.getter_mEndOf_5F_then_5F_branch (HERE), var_testListForGeneration_9576, var_then_5F_instructionList_14381, var_else_5F_instructionList_15003  COMMA_SOURCE_FILE ("instruction-if.galgas", 408))  COMMA_SOURCE_FILE ("instruction-if.galgas", 408)) ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_16283 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) constinArgument_inReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-if.galgas", 434)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_16283, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 431)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 439)) ;
  }
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 440)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_16435 = var_receiverExpression_16283.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 442)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_16513 = var_receiverType_16435.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 443)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_16628 ;
  const cMapElement_optionalMethodMap * objectArray_16635 = (const cMapElement_optionalMethodMap *) var_optionalMethodMap_16513.readAccessForWithInstruction (constinArgument_inOptionalMethodName.getter_string (HERE)) ;
  if (NULL != objectArray_16635) {
      macroValidSharedObject (objectArray_16635, cMapElement_optionalMethodMap) ;
    var_optionalMethodSignature_16628 = objectArray_16635->mProperty_mArgumentTypeList ;
  }else{
    GALGAS_string var_s_16752 = GALGAS_string ("this optional method is not defined; available optional methods:") ;
    cEnumerator_optionalMethodMap enumerator_16859 (var_optionalMethodMap_16513, kENUMERATION_UP) ;
    while (enumerator_16859.hasCurrentObject ()) {
      var_s_16752.plusAssign_operation(GALGAS_string ("\n"
        "  - ").add_operation (enumerator_16859.current_lkey (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 451)) ;
      enumerator_16859.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray0 ;
    inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.getter_location (SOURCE_FILE ("instruction-if.galgas", 453)), var_s_16752, fixItArray0  COMMA_SOURCE_FILE ("instruction-if.galgas", 453)) ;
    var_optionalMethodSignature_16628.drop () ; // Release error dropped variable
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 456)).objectCompare (var_optionalMethodSignature_16628.getter_length (SOURCE_FILE ("instruction-if.galgas", 456)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inOptionalMethodName.getter_location (SOURCE_FILE ("instruction-if.galgas", 457)), GALGAS_string ("calling the '").add_operation (constinArgument_inOptionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_string ("' optional method of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (var_receiverType_16435.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (var_optionalMethodSignature_16628.getter_length (SOURCE_FILE ("instruction-if.galgas", 459)).getter_string (SOURCE_FILE ("instruction-if.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 458)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).add_operation (constinArgument_inActualParameters.getter_length (SOURCE_FILE ("instruction-if.galgas", 460)).getter_string (SOURCE_FILE ("instruction-if.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 459)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 460)), fixItArray2  COMMA_SOURCE_FILE ("instruction-if.galgas", 457)) ;
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_optionalMethodActualArgumentListForGeneration var_actualParameterList_17456 = GALGAS_optionalMethodActualArgumentListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 462)) ;
    cEnumerator_optionalMethodActualArgumentList enumerator_17524 (constinArgument_inActualParameters, kENUMERATION_UP) ;
    cEnumerator_optionalMethodSignature enumerator_17598 (var_optionalMethodSignature_16628, kENUMERATION_UP) ;
    while (enumerator_17524.hasCurrentObject () && enumerator_17598.hasCurrentObject ()) {
      switch (enumerator_17524.current_mActualArgument (HERE).enumValue ()) {
      case GALGAS_optionalMethodActualArgument::kNotBuilt:
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualOutput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput * extractPtr_18320 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualOutput *) (enumerator_17524.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_semanticExpressionAST extractedValue_expression = extractPtr_18320->mAssociatedValue0 ;
          const GALGAS_location extractedValue_location = extractPtr_18320->mAssociatedValue1 ;
          GALGAS_semanticExpressionForGeneration var_exp_17923 ;
          callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) extractedValue_expression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_17598.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_17923, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 467)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17524.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_string temp_4 ;
              const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                temp_4 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_5) {
                temp_4 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_17524.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 476)), GALGAS_string ("the selector should be '!").add_operation (enumerator_17598.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 477)), fixItArray6  COMMA_SOURCE_FILE ("instruction-if.galgas", 476)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_17598.current_mFormalArgumentType (HERE), var_exp_17923.getter_mResultType (SOURCE_FILE ("instruction-if.galgas", 479)), extractedValue_location, var_exp_17923, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 479)) ;
          }
          var_actualParameterList_17456.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualOutput (var_exp_17923  COMMA_SOURCE_FILE ("instruction-if.galgas", 480))  COMMA_SOURCE_FILE ("instruction-if.galgas", 480)) ;
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualLetInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput * extractPtr_19303 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualLetInput *) (enumerator_17524.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_actualTypeName = extractPtr_19303->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_constantName = extractPtr_19303->mAssociatedValue1 ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            GALGAS_bool test_8 = GALGAS_bool (kIsNotEqual, extractedValue_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_8.boolEnum ()) {
              test_8 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 482)).objectCompare (extractedValue_actualTypeName.getter_string (HERE))) ;
            }
            test_7 = test_8.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              appendFixItActions (fixItArray9, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 485))) ;
              inCompiler->emitSemanticError (extractedValue_actualTypeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 483)), GALGAS_string ("the '@").add_operation (enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 484)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 484)), fixItArray9  COMMA_SOURCE_FILE ("instruction-if.galgas", 483)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_18692 = GALGAS_string ("var_").add_operation (extractedValue_constantName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 487)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 487)).add_operation (extractedValue_constantName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 488)).getter_string (SOURCE_FILE ("instruction-if.galgas", 488)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 488)) ;
          {
          ioArgument_ioVariableMap.setter_insertLocalConstant (extractedValue_constantName, enumerator_17598.current_mFormalArgumentType (HERE), var_targetVariableCppName_18692, var_targetVariableCppName_18692, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 489)) ;
          }
          var_actualParameterList_17456.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualLetInput (enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 495)), var_targetVariableCppName_18692  COMMA_SOURCE_FILE ("instruction-if.galgas", 495))  COMMA_SOURCE_FILE ("instruction-if.galgas", 495)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17524.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string temp_11 ;
              const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                temp_11 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_12) {
                temp_11 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_17524.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 497)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_17598.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 498)), fixItArray13  COMMA_SOURCE_FILE ("instruction-if.galgas", 497)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualVarInput:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput * extractPtr_20294 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualVarInput *) (enumerator_17524.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_actualTypeName = extractPtr_20294->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_variableName = extractPtr_20294->mAssociatedValue1 ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = GALGAS_bool (kIsNotEqual, extractedValue_actualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 501)).objectCompare (extractedValue_actualTypeName.getter_string (HERE))) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              appendFixItActions (fixItArray16, kFixItReplace, GALGAS_string ("@").add_operation (enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 504))) ;
              inCompiler->emitSemanticError (extractedValue_actualTypeName.getter_location (SOURCE_FILE ("instruction-if.galgas", 502)), GALGAS_string ("the '@").add_operation (enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)).add_operation (GALGAS_string ("' type name is required here"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 503)), fixItArray16  COMMA_SOURCE_FILE ("instruction-if.galgas", 502)) ;
            }
          }
          GALGAS_string var_targetVariableCppName_19676 = GALGAS_string ("var_").add_operation (extractedValue_variableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 506)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 506)).add_operation (extractedValue_variableName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)).getter_string (SOURCE_FILE ("instruction-if.galgas", 507)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 507)) ;
          {
          ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (extractedValue_variableName, enumerator_17598.current_mFormalArgumentType (HERE), var_targetVariableCppName_19676, var_targetVariableCppName_19676, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 508)) ;
          }
          var_actualParameterList_17456.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 514)), var_targetVariableCppName_19676  COMMA_SOURCE_FILE ("instruction-if.galgas", 514))  COMMA_SOURCE_FILE ("instruction-if.galgas", 514)) ;
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17524.current_mSelector (HERE).getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_17) {
              GALGAS_string temp_18 ;
              const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                temp_18 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_19) {
                temp_18 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_17524.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 516)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_17598.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 517)).add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 517)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 517)), fixItArray20  COMMA_SOURCE_FILE ("instruction-if.galgas", 516)) ;
            }
          }
        }
        break ;
      case GALGAS_optionalMethodActualArgument::kEnum_actualInputJoker:
        {
          const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker * extractPtr_20799 = (const cEnumAssociatedValues_optionalMethodActualArgument_actualInputJoker *) (enumerator_17524.current_mActualArgument (HERE).unsafePointer ()) ;
          const GALGAS_bool extractedValue_checkSelector = extractPtr_20799->mAssociatedValue0 ;
          const GALGAS_location extractedValue_location = extractPtr_20799->mAssociatedValue1 ;
          const GALGAS_uint extractedValue_idx = extractPtr_20799->mAssociatedValue2 ;
          GALGAS_string var_targetVariableCppName_20387 = GALGAS_string ("var_unused_").add_operation (extractedValue_idx.getter_string (SOURCE_FILE ("instruction-if.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)).add_operation (extractedValue_location.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)).getter_string (SOURCE_FILE ("instruction-if.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 520)) ;
          var_actualParameterList_17456.addAssign_operation (GALGAS_optionalMethodActualArgumentForGeneration::constructor_actualVarInput (enumerator_17598.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 521)), var_targetVariableCppName_20387  COMMA_SOURCE_FILE ("instruction-if.galgas", 521))  COMMA_SOURCE_FILE ("instruction-if.galgas", 521)) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = extractedValue_checkSelector ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_17524.current_mSelector (HERE).getter_string (HERE))) ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              GALGAS_string temp_23 ;
              const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, enumerator_17598.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_24) {
                temp_23 = GALGAS_string (":") ;
              }else if (kBoolFalse == test_24) {
                temp_23 = GALGAS_string::makeEmptyString () ;
              }
              TC_Array <C_FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (enumerator_17524.current_mSelector (HERE).getter_location (SOURCE_FILE ("instruction-if.galgas", 523)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_17598.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("instruction-if.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 524)).add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 524)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 524)), fixItArray25  COMMA_SOURCE_FILE ("instruction-if.galgas", 523)) ;
            }
          }
        }
        break ;
      }
      enumerator_17524.gotoNextObject () ;
      enumerator_17598.gotoNextObject () ;
    }
    ioArgument_ioTestListForGeneration.addAssign_operation (GALGAS_ifTestForGeneration::constructor_optionalMethodCall (var_receiverExpression_16283, constinArgument_inOptionalMethodName, var_actualParameterList_17456  COMMA_SOURCE_FILE ("instruction-if.galgas", 528))  COMMA_SOURCE_FILE ("instruction-if.galgas", 528)) ;
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
  GALGAS_string var_testVar_23828 = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-if.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 608)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 609)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("enumGalgasBool ").add_operation (var_testVar_23828, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)).add_operation (GALGAS_string (" = kBoolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 610)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 610)) ;
  const GALGAS_ifInstructionForGeneration temp_0 = object ;
  cEnumerator_ifTestListForGeneration enumerator_24014 (temp_0.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_24014.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_23828, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 612)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 612)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 612)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 613)) ;
    }
    switch (enumerator_24014.current_mExpression (HERE).enumValue ()) {
    case GALGAS_ifTestForGeneration::kNotBuilt:
      break ;
    case GALGAS_ifTestForGeneration::kEnum_regular:
      {
        const cEnumAssociatedValues_ifTestForGeneration_regular * extractPtr_24429 = (const cEnumAssociatedValues_ifTestForGeneration_regular *) (enumerator_24014.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_24429->mAssociatedValue0 ;
        GALGAS_string var_cppVarName_24346 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_24346, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 616)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(var_testVar_23828.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 623)).add_operation (var_cppVarName_24346, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 623)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 623)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 623)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_letExp:
      {
        const cEnumAssociatedValues_ifTestForGeneration_letExp * extractPtr_25158 = (const cEnumAssociatedValues_ifTestForGeneration_letExp *) (enumerator_24014.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_string extractedValue_targetVarCppName = extractPtr_25158->mAssociatedValue0 ;
        const GALGAS_semanticExpressionForGeneration extractedValue_exp = extractPtr_25158->mAssociatedValue1 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_targetType = extractPtr_25158->mAssociatedValue2 ;
        const GALGAS_unifiedTypeMap_2D_entry extractedValue_testType = extractPtr_25158->mAssociatedValue3 ;
        GALGAS_string var_targetTypeName_24515 = extractedValue_targetType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 625)) ;
        GALGAS_string var_testTypeName_24578 = extractedValue_testType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 626)) ;
        GALGAS_string var_cppVarName_24793 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_24793, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 627)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (var_targetTypeName_24515, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 634)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 634)).add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 634)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 634)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_24578, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)).add_operation (var_cppVarName_24793, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)).add_operation (GALGAS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 635)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 635)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (NULL == ").add_operation (extractedValue_targetVarCppName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)).add_operation (GALGAS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 636)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 636)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_23828, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 637)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 637)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 637)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 638)) ;
      }
      break ;
    case GALGAS_ifTestForGeneration::kEnum_optionalMethodCall:
      {
        const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall * extractPtr_26885 = (const cEnumAssociatedValues_ifTestForGeneration_optionalMethodCall *) (enumerator_24014.current_mExpression (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_receiverExpression = extractPtr_26885->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_optionalMethodName = extractPtr_26885->mAssociatedValue1 ;
        const GALGAS_optionalMethodActualArgumentListForGeneration extractedValue_parameters = extractPtr_26885->mAssociatedValue2 ;
        GALGAS_string var_cppVarName_25431 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_receiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_25431, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 640)) ;
        GALGAS_stringlist var_actualParameterNameList_25481 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-if.galgas", 647)) ;
        cEnumerator_optionalMethodActualArgumentListForGeneration enumerator_25522 (extractedValue_parameters, kENUMERATION_UP) ;
        while (enumerator_25522.hasCurrentObject ()) {
          switch (enumerator_25522.current_mParameter (HERE).enumValue ()) {
          case GALGAS_optionalMethodActualArgumentForGeneration::kNotBuilt:
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualOutput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput * extractPtr_25870 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualOutput *) (enumerator_25522.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_semanticExpressionForGeneration extractedValue_expression = extractPtr_25870->mAssociatedValue0 ;
              GALGAS_string var_argumentCppName_25804 ;
              callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_expression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_25804, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 651)) ;
              var_actualParameterNameList_25481.addAssign_operation (var_argumentCppName_25804  COMMA_SOURCE_FILE ("instruction-if.galgas", 658)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualLetInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput * extractPtr_26082 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualLetInput *) (enumerator_25522.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_typeName = extractPtr_26082->mAssociatedValue0 ;
              const GALGAS_string extractedValue_constantName = extractPtr_26082->mAssociatedValue1 ;
              var_actualParameterNameList_25481.addAssign_operation (extractedValue_constantName  COMMA_SOURCE_FILE ("instruction-if.galgas", 660)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).add_operation (extractedValue_constantName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 661)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 661)) ;
            }
            break ;
          case GALGAS_optionalMethodActualArgumentForGeneration::kEnum_actualVarInput:
            {
              const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput * extractPtr_26294 = (const cEnumAssociatedValues_optionalMethodActualArgumentForGeneration_actualVarInput *) (enumerator_25522.current_mParameter (HERE).unsafePointer ()) ;
              const GALGAS_string extractedValue_typeName = extractPtr_26294->mAssociatedValue0 ;
              const GALGAS_string extractedValue_variableName = extractPtr_26294->mAssociatedValue1 ;
              var_actualParameterNameList_25481.addAssign_operation (extractedValue_variableName  COMMA_SOURCE_FILE ("instruction-if.galgas", 663)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extractedValue_typeName.getter_identifierRepresentation (SOURCE_FILE ("instruction-if.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).add_operation (extractedValue_variableName, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 664)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 664)) ;
            }
            break ;
          }
          enumerator_25522.gotoNextObject () ;
        }
        GALGAS_string var_boolResultName_26341 = GALGAS_string ("optionalResult").add_operation (extractedValue_optionalMethodName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)).getter_string (SOURCE_FILE ("instruction-if.galgas", 667)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 667)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool ").add_operation (var_boolResultName_26341, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 668)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 668)).add_operation (var_cppVarName_25431, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 668)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 668)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (".optional_").add_operation (extractedValue_optionalMethodName.getter_string (SOURCE_FILE ("instruction-if.galgas", 669)), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 669)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 669)) ;
        cEnumerator_stringlist enumerator_26593 (var_actualParameterNameList_25481, kENUMERATION_UP) ;
        while (enumerator_26593.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_26593.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 672)) ;
          if (enumerator_26593.hasNextObject ()) {
            ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 674)) ;
          }
          enumerator_26593.gotoNextObject () ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 676)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (!").add_operation (var_boolResultName_26341, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 677)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 677)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_testVar_23828, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)).add_operation (GALGAS_string (" = kBoolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 678)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 678)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 679)) ;
      }
      break ;
    }
    enumerator_24014.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar_23828, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 683)) ;
  {
  const GALGAS_ifInstructionForGeneration temp_1 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_1.getter_m_5F_then_5F_instructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 684)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 692)) ;
  const GALGAS_ifInstructionForGeneration temp_2 = object ;
  cEnumerator_ifTestListForGeneration enumerator_27253 (temp_2.getter_mExpressions (HERE), kENUMERATION_UP) ;
  while (enumerator_27253.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 694)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 695)) ;
    enumerator_27253.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ifInstructionForGeneration temp_4 = object ;
    test_3 = GALGAS_bool (kIsStrictSup, temp_4.getter_m_5F_else_5F_instructionList (HERE).getter_length (SOURCE_FILE ("instruction-if.galgas", 698)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolFalse == ").add_operation (var_testVar_23828, inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 699)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 699)) ;
      {
      const GALGAS_ifInstructionForGeneration temp_5 = object ;
      routine_generateInstructionList (ioArgument_ioInclusionSet, temp_5.getter_m_5F_else_5F_instructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 700)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas", 708)) ;
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
      GALGAS_unifiedTypeMap_2D_entry joker_3894 ; // Joker input parameter
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_2.getter_mOptionalTypeName (HERE), joker_3894 COMMA_SOURCE_FILE ("instruction-let.galgas", 102)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_4589 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mConstantTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 118)) ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_1 = object ;
  const GALGAS_undefinedLocalConstantDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_4722 = GALGAS_string ("var_").add_operation (temp_1.getter_mConstantName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).add_operation (temp_2.getter_mConstantName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)).getter_string (SOURCE_FILE ("instruction-let.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 119)) ;
  {
  const GALGAS_undefinedLocalConstantDeclarationAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (temp_3.getter_mConstantName (HERE), var_targetType_4589, var_targetVariableCppName_4722, var_targetVariableCppName_4722, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 120)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_undefinedLocalConstantDeclarationForGeneration::constructor_new (var_targetType_4589, var_targetVariableCppName_4722  COMMA_SOURCE_FILE ("instruction-let.galgas", 127))  COMMA_SOURCE_FILE ("instruction-let.galgas", 127)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_5869 ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-let.galgas", 145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_5869, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 142)) ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_5928 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)).getter_string (SOURCE_FILE ("instruction-let.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 151)) ;
  {
  const GALGAS_localConstantDeclarationWithAssignmentAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertLocalConstant (temp_3.getter_mVariableName (HERE), var_expression_5869.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 152)), var_targetVariableCppName_5928, var_targetVariableCppName_5928, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 152)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_5869.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 155)), GALGAS_bool (true), var_targetVariableCppName_5928, var_expression_5869  COMMA_SOURCE_FILE ("instruction-let.galgas", 154))  COMMA_SOURCE_FILE ("instruction-let.galgas", 154)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_targetType_6873 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mOptionalTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 170)) ;
  GALGAS_semanticExpressionForGeneration var_expression_7231 ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_1 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_1.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_targetType_6873, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7231, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 172)) ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_3 = object ;
  GALGAS_string var_targetVariableCppName_7290 = GALGAS_string ("var_").add_operation (temp_2.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).add_operation (temp_3.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)).getter_string (SOURCE_FILE ("instruction-let.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 181)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_5 = object ;
    test_4 = temp_5.getter_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_6 = object ;
      ioArgument_ioVariableMap.setter_insertLocalConstant (temp_6.getter_mVariableName (HERE), var_targetType_6873, var_targetVariableCppName_7290, var_targetVariableCppName_7290, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 183)) ;
      }
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_7 = object ;
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_7.getter_mVariableName (HERE), var_targetType_6873, var_targetVariableCppName_7290, var_targetVariableCppName_7290, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 185)) ;
    }
  }
  {
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_8 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_targetType_6873, var_expression_7231.getter_mResultType (SOURCE_FILE ("instruction-let.galgas", 188)), temp_8.getter_mInstructionLocation (HERE), var_expression_7231, inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 188)) ;
  }
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST temp_9 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_targetType_6873, temp_9.getter_mIsConstant (HERE), var_targetVariableCppName_7290, var_expression_7231  COMMA_SOURCE_FILE ("instruction-let.galgas", 190))  COMMA_SOURCE_FILE ("instruction-let.galgas", 190)) ;
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
  GALGAS_string var_sourceVar_10132 ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mSourceExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar_10132, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 239)) ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_2 = object ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_2.getter_mTargetType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (temp_3.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (var_sourceVar_10132, inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-let.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("instruction-let.galgas", 246)) ;
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
  cEnumerator_logListAST enumerator_2312 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_2312.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2312.current_mLogExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 67)) ;
    enumerator_2312.gotoNextObject () ;
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
  cEnumerator_logListAST enumerator_2979 (temp_0.getter_mLogList (HERE), kENUMERATION_UP) ;
  while (enumerator_2979.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression_3063 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_2979.current_mLogExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-log.galgas", 87)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_3063, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 84)) ;
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_logInstructionForGeneration::constructor_new (enumerator_2979.current_mLogMessage (HERE), var_expression_3063  COMMA_SOURCE_FILE ("instruction-log.galgas", 93))  COMMA_SOURCE_FILE ("instruction-log.galgas", 93)) ;
    enumerator_2979.gotoNextObject () ;
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
  GALGAS_string var_logVar_4404 ;
  const GALGAS_logInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mLogExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar_4404, inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 118)) ;
  const GALGAS_logInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_logVar_4404.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)).add_operation (temp_1.getter_mLogMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 125)) ;
  const GALGAS_logInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_commaSourceFile (temp_2.getter_mLogMessage (HERE).getter_location (SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-log.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-log.galgas", 126)) ;
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
  GALGAS_semanticExpressionForGeneration var_variantExpression_3816 ;
  const GALGAS_loopInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mVariantExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 99)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variantExpression_3816, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 96)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_variantExpression_3816.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 105)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_loopInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfVariantExpression (HERE), GALGAS_string ("the variant expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (var_variantExpression_3816.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 107)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 107)), fixItArray3  COMMA_SOURCE_FILE ("instruction-loop.galgas", 106)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_loopExpression_4457 ;
  const GALGAS_loopInstructionAST temp_4 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_4.getter_mLoopExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-loop.galgas", 114)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_loopExpression_4457, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 111)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_loopExpression_4457.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 120)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_loopInstructionAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.getter_mEndOfLoopExpression (HERE), GALGAS_string ("the loop expression type should be '@").add_operation (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("', but it has '@"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (var_loopExpression_4457.getter_mResultType (SOURCE_FILE ("instruction-loop.galgas", 122)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 122)), fixItArray7  COMMA_SOURCE_FILE ("instruction-loop.galgas", 121)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 125)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_first_5F_instructionList_5187 ;
  {
  const GALGAS_loopInstructionAST temp_8 = object ;
  const GALGAS_loopInstructionAST temp_9 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 132)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 133)), temp_8.getter_mFirstInstructions (HERE), temp_9.getter_mEndOfFirstInstructions (HERE), ioArgument_ioVariableMap, var_first_5F_instructionList_5187, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 128)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_second_5F_instructionList_5519 ;
  {
  const GALGAS_loopInstructionAST temp_10 = object ;
  const GALGAS_loopInstructionAST temp_11 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 145)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-loop.galgas", 146)), temp_10.getter_mSecondInstructions (HERE), temp_11.getter_mEndOfSecondInstructions (HERE), ioArgument_ioVariableMap, var_second_5F_instructionList_5519, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 141)) ;
  }
  {
  const GALGAS_loopInstructionAST temp_12 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_12.getter_mEndOfLoopInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 153)) ;
  }
  const GALGAS_loopInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_loopInstructionForGeneration::constructor_new (temp_13.getter_mInstructionLocation (HERE), var_variantExpression_3816, var_first_5F_instructionList_5187, var_loopExpression_4457, var_second_5F_instructionList_5519  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155))  COMMA_SOURCE_FILE ("instruction-loop.galgas", 155)) ;
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
  GALGAS_string var_variantCppVarName_7270 ;
  const GALGAS_loopInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mVariantExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName_7270, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 185)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_variantCppVarName_7270, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 192)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 193)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_1 = object ;
  GALGAS_string var_variantVar_7408 = GALGAS_string ("variant_").add_operation (temp_1.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 194)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("uint32_t ").add_operation (var_variantVar_7408, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (var_variantCppVarName_7270, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 195)) ;
  const GALGAS_loopInstructionForGeneration temp_2 = object ;
  GALGAS_string var_loopVar_7592 = GALGAS_string ("loop_").add_operation (temp_2.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)).getter_string (SOURCE_FILE ("instruction-loop.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 196)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("bool ").add_operation (var_loopVar_7592, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)).add_operation (var_loopVar_7592, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 197)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 199)) ;
  }
  {
  const GALGAS_loopInstructionForGeneration temp_3 = object ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_3.getter_mFirstInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 200)) ;
  }
  GALGAS_string var_loopExpressionVar_8043 ;
  const GALGAS_loopInstructionForGeneration temp_4 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_4.getter_mLoopExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar_8043, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 209)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_loopVar_7592.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopExpressionVar_8043, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)).add_operation (var_loopVar_7592, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 211)).add_operation (var_loopVar_7592, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (var_loopExpressionVar_8043, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 212)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 210)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) COMMA_SOURCE_FILE ("instruction-loop.galgas", 214)) ;
  }
  const GALGAS_loopInstructionForGeneration temp_5 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_loopVar_7592, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_variantVar_7408, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)).add_operation (var_loopVar_7592, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 216)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (extensionGetter_sourceFile (temp_5.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 217)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 218)).add_operation (var_loopVar_7592, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 215)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_variantVar_7408, inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("instruction-loop.galgas", 220)) ;
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
  cEnumerator_semanticExpressionListAST enumerator_4848 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_4848.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_4848.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 135)) ;
    enumerator_4848.gotoNextObject () ;
  }
  const GALGAS_matchInstructionAST temp_1 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_4965 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_4965.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4965.current_mMatchBranchInstructionList (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 138)) ;
    enumerator_4965.gotoNextObject () ;
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
  GALGAS_semanticExpressionListForGeneration var_expressionList_5646 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 152)) ;
  const GALGAS_matchInstructionAST temp_0 = object ;
  cEnumerator_semanticExpressionListAST enumerator_5727 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_5727.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_matchedExpression_6004 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_5727.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-match.galgas", 158)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_matchedExpression_6004, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 155)) ;
    var_expressionList_5646.addAssign_operation (var_matchedExpression_6004  COMMA_SOURCE_FILE ("instruction-match.galgas", 163)) ;
    GALGAS_unifiedTypeMap_2D_entry var_type_6119 = var_matchedExpression_6004.getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 165)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_type_6119.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 166)).operator_not (SOURCE_FILE ("instruction-match.galgas", 166)).operator_and (GALGAS_bool (kIsNotEqual, var_type_6119.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 166)))) COMMA_SOURCE_FILE ("instruction-match.galgas", 166)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5727.current_mEndOfExpressionLocation (HERE), GALGAS_string ("this expression is an instance of '@").add_operation (var_type_6119.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)).add_operation (GALGAS_string ("' type, but this type is neither an enumeration, neither a class"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 168)), fixItArray2  COMMA_SOURCE_FILE ("instruction-match.galgas", 167)) ;
      }
    }
    enumerator_5727.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 172)) ;
  }
  GALGAS_matchInstructionBranchListForGeneration var_matchInstructionBranchList_6539 = GALGAS_matchInstructionBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 173)) ;
  const GALGAS_matchInstructionAST temp_3 = object ;
  cEnumerator_matchInstructionBranchListAST enumerator_6629 (temp_3.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_6629.hasCurrentObject ()) {
    GALGAS_localConstantList var_localConstantList_6676 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 176)) ;
    GALGAS_matchListForGeneration var_matchListForGeneration_6730 = GALGAS_matchListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 177)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_expressionList_5646.getter_length (SOURCE_FILE ("instruction-match.galgas", 178)).objectCompare (enumerator_6629.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 178)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_semanticExpressionListForGeneration enumerator_6854 (var_expressionList_5646, kENUMERATION_UP) ;
        cEnumerator_matchEntryListAST enumerator_6877 (enumerator_6629.current_mMatchEntryList (HERE), kENUMERATION_UP) ;
        while (enumerator_6854.hasCurrentObject () && enumerator_6877.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_type_6897 = enumerator_6854.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 180)) ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_type_6897.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 181)).getter_isClassType (SOURCE_FILE ("instruction-match.galgas", 181)).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = enumerator_6877.current_mIsType (HERE).boolEnum () ;
                if (kBoolTrue == test_6) {
                  GALGAS_unifiedTypeMap_2D_entry var_namedType_7028 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 183)) ;
                  GALGAS_unifiedTypeMap_2D_entry var_t_7182 = var_type_6897 ;
                  GALGAS_bool var_found_7213 = GALGAS_bool (kIsEqual, var_t_7182.objectCompare (var_namedType_7028)) ;
                  if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).isValid ()) {
                    uint32_t variant_7247 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("instruction-match.galgas", 186)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 186)).uintValue () ;
                    bool loop_7247 = true ;
                    while (loop_7247) {
                      loop_7247 = var_found_7213.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7182.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).isValid () ;
                      if (loop_7247) {
                        loop_7247 = var_found_7213.operator_not (SOURCE_FILE ("instruction-match.galgas", 187)).operator_and (var_t_7182.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).getter_isNull (SOURCE_FILE ("instruction-match.galgas", 187)).operator_not (SOURCE_FILE ("instruction-match.galgas", 187)) COMMA_SOURCE_FILE ("instruction-match.galgas", 187)).boolValue () ;
                      }
                      if (loop_7247 && (0 == variant_7247)) {
                        loop_7247 = false ;
                        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-match.galgas", 186)) ;
                      }
                      if (loop_7247) {
                        variant_7247 -- ;
                        var_t_7182 = var_t_7182.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 188)) ;
                        var_found_7213 = GALGAS_bool (kIsEqual, var_t_7182.objectCompare (var_namedType_7028)) ;
                      }
                    }
                  }
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = var_found_7213.operator_not (SOURCE_FILE ("instruction-match.galgas", 191)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 192)), GALGAS_string ("the '@").add_operation (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (var_type_6897.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 193)), fixItArray8  COMMA_SOURCE_FILE ("instruction-match.galgas", 192)) ;
                    }
                  }
                  if (kBoolFalse == test_7) {
                    enumGalgasBool test_9 = kBoolTrue ;
                    if (kBoolTrue == test_9) {
                      test_9 = GALGAS_bool (kIsStrictSup, enumerator_6877.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 194)).getter_length (SOURCE_FILE ("instruction-match.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
                      if (kBoolTrue == test_9) {
                        var_localConstantList_6676.addAssign_operation (var_t_7182, enumerator_6877.current_mLocalConstantName (HERE), GALGAS_bool (false), GALGAS_string ("match_instruction_constant_name")  COMMA_SOURCE_FILE ("instruction-match.galgas", 195)) ;
                      }
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 198)), GALGAS_string ("a type that inherits from '@").add_operation (enumerator_6854.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 199)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)).add_operation (GALGAS_string ("' class is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 199)), fixItArray10  COMMA_SOURCE_FILE ("instruction-match.galgas", 198)) ;
              }
              var_matchListForGeneration_6730.addAssign_operation (GALGAS_bool (true), enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201)), enumerator_6877.current_mLocalConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 201))  COMMA_SOURCE_FILE ("instruction-match.galgas", 201)) ;
            }
          }
          if (kBoolFalse == test_5) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsEqual, var_type_6897.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 202)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-match.galgas", 202)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = enumerator_6877.current_mIsType (HERE).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 204)), GALGAS_string ("a constant of the '@").add_operation (enumerator_6854.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 205)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)).add_operation (GALGAS_string ("' enumeration type is expected here"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 205)), fixItArray13  COMMA_SOURCE_FILE ("instruction-match.galgas", 204)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = var_type_6897.getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).getter_hasKey (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 206)) COMMA_SOURCE_FILE ("instruction-match.galgas", 206)).operator_not (SOURCE_FILE ("instruction-match.galgas", 206)).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      TC_Array <C_FixItDescription> fixItArray15 ;
                      inCompiler->emitSemanticError (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 207)), GALGAS_string ("the '").add_operation (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' symbol is not a constant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (enumerator_6854.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 208)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 208)), fixItArray15  COMMA_SOURCE_FILE ("instruction-match.galgas", 207)) ;
                    }
                  }
                }
                var_matchListForGeneration_6730.addAssign_operation (GALGAS_bool (false), enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_string (SOURCE_FILE ("instruction-match.galgas", 212)), enumerator_6854.current_mExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-match.galgas", 213)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 213))  COMMA_SOURCE_FILE ("instruction-match.galgas", 210)) ;
              }
            }
            if (kBoolFalse == test_11) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_6877.current_mTypeNameOrEnumerationConstantName (HERE).getter_location (SOURCE_FILE ("instruction-match.galgas", 215)), GALGAS_string ("internal error"), fixItArray16  COMMA_SOURCE_FILE ("instruction-match.galgas", 215)) ;
            }
          }
          enumerator_6854.gotoNextObject () ;
          enumerator_6877.gotoNextObject () ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_6629.current_mEndOfMatchEntryList (HERE), GALGAS_string ("this match list should contain ").add_operation (var_expressionList_5646.getter_length (SOURCE_FILE ("instruction-match.galgas", 220)).getter_string (SOURCE_FILE ("instruction-match.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (GALGAS_string (" elements, but it acually contains "), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)).add_operation (enumerator_6629.current_mMatchEntryList (HERE).getter_length (SOURCE_FILE ("instruction-match.galgas", 221)).getter_string (SOURCE_FILE ("instruction-match.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 220)), fixItArray17  COMMA_SOURCE_FILE ("instruction-match.galgas", 219)) ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_9312 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_6676, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 230)), enumerator_6629.current_mMatchBranchInstructionList (HERE), enumerator_6629.current_mEndOf_5F_instructionList (HERE), ioArgument_ioVariableMap, var_instructionList_9312, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 225)) ;
    }
    var_matchInstructionBranchList_6539.addAssign_operation (var_matchListForGeneration_6730, var_instructionList_9312  COMMA_SOURCE_FILE ("instruction-match.galgas", 237)) ;
    enumerator_6629.gotoNextObject () ;
  }
  GALGAS_semanticInstructionListForGeneration var_elseInstructionList_9758 ;
  {
  const GALGAS_matchInstructionAST temp_18 = object ;
  const GALGAS_matchInstructionAST temp_19 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 245)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 246)), temp_18.getter_mElseInstructionList (HERE), temp_19.getter_mEndOf_5F_match_5F_instruction (HERE), ioArgument_ioVariableMap, var_elseInstructionList_9758, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 241)) ;
  }
  {
  const GALGAS_matchInstructionAST temp_20 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_20.getter_mEndOf_5F_match_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 253)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_matchInstructionForGeneration::constructor_new (var_expressionList_5646, var_matchInstructionBranchList_6539, var_elseInstructionList_9758  COMMA_SOURCE_FILE ("instruction-match.galgas", 255))  COMMA_SOURCE_FILE ("instruction-match.galgas", 255)) ;
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
  GALGAS_stringlist var_receiverList_11904 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-match.galgas", 296)) ;
  const GALGAS_matchInstructionForGeneration temp_0 = object ;
  cEnumerator_semanticExpressionListForGeneration enumerator_11960 (temp_0.getter_mMatchedExpressionList (HERE), kENUMERATION_UP) ;
  while (enumerator_11960.hasCurrentObject ()) {
    GALGAS_string var_variable_12112 ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_11960.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable_12112, inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 298)) ;
    var_receiverList_11904.addAssign_operation (var_variable_12112  COMMA_SOURCE_FILE ("instruction-match.galgas", 299)) ;
    enumerator_11960.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 301)) ;
  cEnumerator_stringlist enumerator_12202 (var_receiverList_11904, kENUMERATION_UP) ;
  while (enumerator_12202.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_12202.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 303)) ;
    if (enumerator_12202.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 304)) ;
    }
    enumerator_12202.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 306)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 307)) ;
  }
  const GALGAS_matchInstructionForGeneration temp_1 = object ;
  cEnumerator_matchInstructionBranchListForGeneration enumerator_12409 (temp_1.getter_mMatchInstructionBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_12409.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 309)) ;
    cEnumerator_matchListForGeneration enumerator_12480 (enumerator_12409.current_mMatchListForGeneration (HERE), kENUMERATION_UP) ;
    cEnumerator_stringlist enumerator_12500 (var_receiverList_11904, kENUMERATION_UP) ;
    while (enumerator_12480.hasCurrentObject () && enumerator_12500.hasCurrentObject ()) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = enumerator_12480.current_mIsType (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_12480.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 312)).add_operation (enumerator_12500.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 312)) ;
        }
      }
      if (kBoolFalse == test_2) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("(").add_operation (enumerator_12500.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (enumerator_12480.current_mLocalConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 315)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 316)).add_operation (enumerator_12480.current_mTypeNameOrEnumerationConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("instruction-match.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 315)) ;
      }
      if (enumerator_12480.hasNextObject () && enumerator_12500.hasNextObject ()) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" && "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 319)) ;
      }
      enumerator_12480.gotoNextObject () ;
      enumerator_12500.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 321)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_12409.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 322)) ;
    }
    if (enumerator_12409.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("instruction-match.galgas", 330)) ;
    }
    enumerator_12409.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2240 ;
  const GALGAS_messageInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-message.galgas", 53)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2240, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expression_2240.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 59)).objectCompare (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_messageInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("the expression has the '@").add_operation (var_expression_2240.getter_mResultType (SOURCE_FILE ("instruction-message.galgas", 61)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)).add_operation (GALGAS_string ("' type, but the 'message' instruction requires an '@string' expression"), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 61)), fixItArray3  COMMA_SOURCE_FILE ("instruction-message.galgas", 60)) ;
    }
  }
  const GALGAS_messageInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_messageInstructionForGeneration::constructor_new (var_expression_2240, temp_4.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-message.galgas", 64))  COMMA_SOURCE_FILE ("instruction-message.galgas", 64)) ;
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
  GALGAS_string var_messageCppVarName_3913 ;
  const GALGAS_messageInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_3913, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 88)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)).add_operation (var_messageCppVarName_3913, inCompiler COMMA_SOURCE_FILE ("instruction-message.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("instruction-message.galgas", 96)) ;
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
  cEnumerator_actualParameterListAST enumerator_1926 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1926.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1926.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 48)) ;
    enumerator_1926.gotoNextObject () ;
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
  GALGAS_semanticExpressionForGeneration var_receiverExpression_2859 ;
  const GALGAS_methodCallInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-method-call.galgas", 66)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_2859, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 63)) ;
  GALGAS_formalParameterSignature var_routineSignature_2939 ;
  GALGAS_bool var_hasCompilerArgument_2967 ;
  GALGAS_methodKind var_kind_2986 ;
  GALGAS_string var_errorMessage_3009 ;
  const GALGAS_methodCallInstructionAST temp_1 = object ;
  GALGAS_location joker_3120 ; // Joker input parameter
  GALGAS_methodQualifier joker_3144 ; // Joker input parameter
  var_receiverExpression_2859.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 76)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)).method_searchKey (temp_1.getter_mMethodName (HERE), var_kind_2986, var_routineSignature_2939, joker_3120, var_hasCompilerArgument_2967, joker_3144, var_errorMessage_3009, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 76)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_errorMessage_3009.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_methodCallInstructionAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.getter_mMethodName (HERE).getter_location (SOURCE_FILE ("instruction-method-call.galgas", 78)), var_errorMessage_3009, fixItArray4  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 78)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3647 ;
  {
  const GALGAS_methodCallInstructionAST temp_5 = object ;
  const GALGAS_methodCallInstructionAST temp_6 = object ;
  const GALGAS_methodCallInstructionAST temp_7 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_5.getter_mMethodName (HERE), GALGAS_string ("'").add_operation (temp_6.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)).add_operation (GALGAS_string ("' instance method header"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 86)), var_routineSignature_2939, temp_7.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3647, inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 81)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_3713 = var_receiverExpression_2859.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 94)) ;
  GALGAS_bool var_searching_3764 = GALGAS_bool (true) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-method-call.galgas", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).isValid ()) {
        uint32_t variant_3813 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-method-call.galgas", 97)).uintValue () ;
        bool loop_3813 = true ;
        while (loop_3813) {
          loop_3813 = var_searching_3764.isValid () ;
          if (loop_3813) {
            loop_3813 = var_searching_3764.boolValue () ;
          }
          if (loop_3813 && (0 == variant_3813)) {
            loop_3813 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-method-call.galgas", 97)) ;
          }
          if (loop_3813) {
            variant_3813 -- ;
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = var_baseType_3713.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 98)).getter_isNull (SOURCE_FILE ("instruction-method-call.galgas", 98)).boolEnum () ;
              if (kBoolTrue == test_9) {
                var_searching_3764 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                const GALGAS_methodCallInstructionAST temp_11 = object ;
                test_10 = var_baseType_3713.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).getter_hasKey (temp_11.getter_mMethodName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 101)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  var_baseType_3713 = var_baseType_3713.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 102)) ;
                }
              }
              if (kBoolFalse == test_10) {
                var_searching_3764 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_methodCallInstructionAST temp_12 = object ;
  const GALGAS_methodCallInstructionAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_methodCallInstructionForGeneration::constructor_new (temp_12.getter_mInstructionLocation (HERE), var_receiverExpression_2859.getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 112)), var_receiverExpression_2859, temp_13.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-method-call.galgas", 114)), var_kind_2986, var_actualParameterListForGeneration_3647, var_hasCompilerArgument_2967, var_baseType_3713  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 110)) ;
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
  GALGAS_string var_receiverCppName_5687 ;
  const GALGAS_methodCallInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_5687, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 146)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_5687 COMMA_SOURCE_FILE ("instruction-method-call.galgas", 147)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_5780 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 149)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_5831 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 150)) ;
  GALGAS_stringlist var_inputVariableList_5871 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-method-call.galgas", 151)) ;
  const GALGAS_methodCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_5925 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_5925.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_5957 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_5925.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_5831, var_inputVariableList_5871, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_5957, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 154)) ;
    var_parameterCppNameList_5780.addAssign_operation (var_parameterCppName_5957  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 155)) ;
    enumerator_5925.gotoNextObject () ;
  }
  const GALGAS_methodCallInstructionForGeneration temp_2 = object ;
  switch (temp_2.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_methodCallInstructionForGeneration temp_3 = object ;
      const GALGAS_methodCallInstructionForGeneration temp_4 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (temp_3.getter_mMethodBaseType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)).add_operation (temp_4.getter_mMethodName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160))  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 160)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_6 = object ;
        test_5 = temp_6.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 161)).getter_isClassType (SOURCE_FILE ("instruction-method-call.galgas", 161)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_methodCallInstructionForGeneration temp_7 = object ;
          const GALGAS_methodCallInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionMethod_").add_operation (temp_7.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)).add_operation (temp_8.getter_mReceiverExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-method-call.galgas", 163)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (var_receiverCppName_5687, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 163)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 162)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_methodCallInstructionForGeneration temp_9 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionMethod_").add_operation (temp_9.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (var_receiverCppName_5687, inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 165)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_methodCallInstructionForGeneration temp_10 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_5687.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (temp_10.getter_mMethodName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 168)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_7040 (var_parameterCppNameList_5780, kENUMERATION_UP) ;
  while (enumerator_7040.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_7040.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 171)) ;
    if (enumerator_7040.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 172)) ;
    }
    enumerator_7040.gotoNextObject () ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_parameterCppNameList_5780.getter_length (SOURCE_FILE ("instruction-method-call.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_methodCallInstructionForGeneration temp_13 = object ;
        test_12 = temp_13.getter_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_12) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 176)) ;
          }
          ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 177)) ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 178)) ;
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
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) COMMA_SOURCE_FILE ("instruction-method-call.galgas", 181)) ;
        }
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 182)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 183)) ;
      }
    }
    if (kBoolFalse == test_14) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 185)) ;
    }
  }
  const GALGAS_methodCallInstructionForGeneration temp_16 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_16.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("instruction-method-call.galgas", 187)) ;
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
  cEnumerator_actualParameterListAST enumerator_1686 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1686.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1686.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 40)) ;
    enumerator_1686.gotoNextObject () ;
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
  GALGAS_lstring var_usefulnessName_2353 = function_procedureNameForUsefulEntitiesGraph (temp_0.getter_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 55)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_2353 COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 56)) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_2658 ;
  GALGAS_bool var_isInternal_2685 ;
  const GALGAS_procCallInstructionAST temp_1 = object ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).method_searchKey (temp_1.getter_mRoutineName (HERE), var_routineSignature_2658, var_isInternal_2685, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 58)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_isInternal_2685.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_procCallInstructionAST temp_3 = object ;
      GALGAS_location var_procDeclarationLocation_2763 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mRoutineMap (HERE).getter_locationForKey (temp_3.getter_mRoutineName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 65)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_procCallInstructionAST temp_5 = object ;
        test_4 = GALGAS_bool (kIsNotEqual, temp_5.getter_mRoutineName (HERE).getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)).objectCompare (var_procDeclarationLocation_2763.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 66)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_procCallInstructionAST temp_6 = object ;
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.getter_mRoutineName (HERE).getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 67)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_2763.getter_file (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)), fixItArray7  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 67)) ;
        }
      }
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3458 ;
  {
  const GALGAS_procCallInstructionAST temp_8 = object ;
  const GALGAS_procCallInstructionAST temp_9 = object ;
  const GALGAS_procCallInstructionAST temp_10 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_8.getter_mRoutineName (HERE), GALGAS_string ("'").add_operation (temp_9.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)).add_operation (GALGAS_string ("' routine header"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 76)), var_routineSignature_2658, temp_10.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3458, inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 71)) ;
  }
  const GALGAS_procCallInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_procCallInstructionForGeneration::constructor_new (temp_11.getter_mRoutineName (HERE), var_actualParameterListForGeneration_3458  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84))  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 84)) ;
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
  GALGAS_stringlist var_parameterCppNameList_4594 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 110)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4642 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 111)) ;
  GALGAS_stringlist var_inputVariableList_4679 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-proc-call.galgas", 112)) ;
  const GALGAS_procCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_4722 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_4722.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4977 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4722.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4642, var_inputVariableList_4679, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4977, inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 114)) ;
    var_parameterCppNameList_4594.addAssign_operation (var_parameterCppName_4977  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 123)) ;
    enumerator_4722.gotoNextObject () ;
  }
  const GALGAS_procCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("routine_").add_operation (temp_2.getter_mRoutineName (HERE).getter_string (SOURCE_FILE ("instruction-proc-call.galgas", 126)).getter_identifierRepresentation (SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 126)) ;
  cEnumerator_stringlist enumerator_5189 (var_parameterCppNameList_4594, kENUMERATION_UP) ;
  while (enumerator_5189.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5189.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 128)) ;
    enumerator_5189.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 130)) ;
  }
  const GALGAS_procCallInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mRoutineName (HERE).getter_location (SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-proc-call.galgas", 131)) ;
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
  GALGAS_semanticExpressionForGeneration var_expression_2519 ;
  const GALGAS_selfAssignmentInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2519, inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 55)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 64)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_selfAssignmentInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mInstructionLocation (HERE), GALGAS_string ("'self' cannot be used in this context"), fixItArray3  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 65)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-assignment.galgas", 66)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_selfAssignmentInstructionAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.getter_mInstructionLocation (HERE), GALGAS_string ("'self' object is not mutable"), fixItArray6  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 67)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 68)).getter_isClassType (SOURCE_FILE ("instruction-self-assignment.galgas", 68)).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_selfAssignmentInstructionAST temp_8 = object ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.getter_mInstructionLocation (HERE), GALGAS_string ("'self' assignment is not allowed for class instances"), fixItArray9  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 69)) ;
        }
      }
    }
  }
  {
  const GALGAS_selfAssignmentInstructionAST temp_10 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), var_expression_2519.getter_mResultType (SOURCE_FILE ("instruction-self-assignment.galgas", 72)), temp_10.getter_mInstructionLocation (HERE), var_expression_2519, inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 72)) ;
  }
  const GALGAS_selfAssignmentInstructionAST temp_11 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_assignmentInstructionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-self-assignment.galgas", 78)).getter_string (SOURCE_FILE ("instruction-self-assignment.galgas", 78)), var_expression_2519, temp_11.getter_mInstructionLocation (HERE)  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 74))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas", 74)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_6305 ;
  GALGAS_string var_selfObjectCppName_6333 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 153)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 154)) ;
      var_selfObjectCppName_6333.drop () ; // Release error dropped variable
      var_selfTypeEntry_6305.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_6333 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_6305 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  GALGAS_functionSignature var_addAssignOperatorArguments_6718 = var_selfTypeEntry_6305.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 160)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_addAssignOperatorArguments_6718.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 161)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_6305.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 163)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 162)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_selfPlusEqualElementsInstructionAST temp_7 = object ;
      test_6 = GALGAS_bool (kIsNotEqual, temp_7.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)).objectCompare (var_addAssignOperatorArguments_6718.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 165)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_selfPlusEqualElementsInstructionAST temp_8 = object ;
        const GALGAS_selfPlusEqualElementsInstructionAST temp_9 = object ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_8.getter_mInstructionLocation (HERE), GALGAS_string ("calling the '+=' operator on an '@").add_operation (var_selfTypeEntry_6305.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string ("' object requires "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (var_addAssignOperatorArguments_6718.getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 168)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 167)).add_operation (GALGAS_string (" parameter(s), while this invocation has "), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (temp_9.getter_mExpressions (HERE).getter_length (SOURCE_FILE ("instruction-self-concat.galgas", 169)).getter_string (SOURCE_FILE ("instruction-self-concat.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 168)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 169)), fixItArray10  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 166)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_7444 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 171)) ;
      const GALGAS_selfPlusEqualElementsInstructionAST temp_11 = object ;
      cEnumerator_actualOutputExpressionList enumerator_7517 (temp_11.getter_mExpressions (HERE), kENUMERATION_UP) ;
      cEnumerator_functionSignature enumerator_7551 (var_addAssignOperatorArguments_6718, kENUMERATION_UP) ;
      while (enumerator_7517.hasCurrentObject () && enumerator_7551.hasCurrentObject ()) {
        GALGAS_semanticExpressionForGeneration var_expression_7802 ;
        callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_7517.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_7551.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7802, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 173)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsNotEqual, enumerator_7551.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_7517.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_string temp_13 ;
            const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_7551.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_14) {
              temp_13 = enumerator_7551.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)) ;
            }else if (kBoolFalse == test_14) {
              temp_13 = GALGAS_string::makeEmptyString () ;
            }
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_7517.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("instruction-self-concat.galgas", 182)), GALGAS_string ("the selector should be '!").add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 183)), fixItArray15  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 182)) ;
          }
        }
        {
        routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_7551.current_mFormalArgumentType (HERE), var_expression_7802.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 185)), enumerator_7517.current_mEndOfExpressionLocation (HERE), var_expression_7802, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 185)) ;
        }
        var_effectiveParameterList_7444.addAssign_operation (var_expression_7802  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 186)) ;
        enumerator_7517.gotoNextObject () ;
        enumerator_7551.gotoNextObject () ;
      }
      const GALGAS_selfPlusEqualElementsInstructionAST temp_16 = object ;
      ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_plusEqualnstructionForGeneration::constructor_new (var_selfObjectCppName_6333, var_selfTypeEntry_6305, GALGAS_string::makeEmptyString (), temp_16.getter_mInstructionLocation (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 194)), var_effectiveParameterList_7444  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 189)) ;
    }
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_9022 ;
  GALGAS_string var_selfObjectCppName_9050 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 210)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 211)) ;
      var_selfObjectCppName_9050.drop () ; // Release error dropped variable
      var_selfTypeEntry_9022.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_9050 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_9022 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_9022.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 217)).getter_plusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 217)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 217)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfPlusEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_9022.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)).add_operation (GALGAS_string ("' type, but this type does not support the '+=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 219)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 218)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_9903 ;
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_9022, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_9903, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 222)) ;
  {
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_9022, var_expression_9903.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 231)), temp_7.getter_mInstructionLocation (HERE), var_expression_9903, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 231)) ;
  }
  const GALGAS_selfPlusEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_9022, var_selfObjectCppName_9050, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 238)), var_expression_9903, GALGAS_string ("plusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 233)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_10847 ;
  GALGAS_string var_selfObjectCppName_10875 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 255)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 256)) ;
      var_selfObjectCppName_10875.drop () ; // Release error dropped variable
      var_selfTypeEntry_10847.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_10875 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_10847 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_10847.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 262)).getter_minusEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 262)).operator_not (SOURCE_FILE ("instruction-self-concat.galgas", 262)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfMinusEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_10847.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)).add_operation (GALGAS_string ("' type, but this type does not support the '-=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 264)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 263)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_11729 ;
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_10847, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_11729, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 267)) ;
  {
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_10847, var_expression_11729.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 276)), temp_7.getter_mInstructionLocation (HERE), var_expression_11729, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 276)) ;
  }
  const GALGAS_selfMinusEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_10847, var_selfObjectCppName_10875, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 283)), var_expression_11729, GALGAS_string ("minusAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 278)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_12672 ;
  GALGAS_string var_selfObjectCppName_12700 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 301)) ;
      var_selfObjectCppName_12700.drop () ; // Release error dropped variable
      var_selfTypeEntry_12672.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_12700 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_12672 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_12672.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 307)).getter_mulEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfMulEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_12672.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)).add_operation (GALGAS_string ("' type, but this type does not support the '*=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 309)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 308)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_13548 ;
  const GALGAS_selfMulEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_12672, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_13548, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 312)) ;
  {
  const GALGAS_selfMulEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_12672, var_expression_13548.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 321)), temp_7.getter_mInstructionLocation (HERE), var_expression_13548, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 321)) ;
  }
  const GALGAS_selfMulEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_12672, var_selfObjectCppName_12700, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 328)), var_expression_13548, GALGAS_string ("mulAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 323)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_14489 ;
  GALGAS_string var_selfObjectCppName_14517 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-self-concat.galgas", 345)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mInstructionLocation (HERE), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 346)) ;
      var_selfObjectCppName_14517.drop () ; // Release error dropped variable
      var_selfTypeEntry_14489.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_14517 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_14489 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_selfTypeEntry_14489.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 352)).getter_divEqualOperatorWithExpression (SOURCE_FILE ("instruction-self-concat.galgas", 352)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_selfDivEqualExpressionInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.getter_mInstructionLocation (HERE), GALGAS_string ("the target object has the '@").add_operation (var_selfTypeEntry_14489.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)).add_operation (GALGAS_string ("' type, but this type does not support the '/=' operator"), inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 354)), fixItArray5  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 353)) ;
    }
  }
  GALGAS_semanticExpressionForGeneration var_expression_15365 ;
  const GALGAS_selfDivEqualExpressionInstructionAST temp_6 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_6.getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_selfTypeEntry_14489, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_15365, inCompiler COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 357)) ;
  {
  const GALGAS_selfDivEqualExpressionInstructionAST temp_7 = object ;
  routine_checkAssignmentTypeWithImplicitGetterCall (var_selfTypeEntry_14489, var_expression_15365.getter_mResultType (SOURCE_FILE ("instruction-self-concat.galgas", 366)), temp_7.getter_mInstructionLocation (HERE), var_expression_15365, inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 366)) ;
  }
  const GALGAS_selfDivEqualExpressionInstructionAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_opEqualInstructionForGeneration::constructor_new (temp_8.getter_mInstructionLocation (HERE), var_selfTypeEntry_14489, var_selfObjectCppName_14517, GALGAS_string::makeEmptyString (), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("instruction-self-concat.galgas", 373)), var_expression_15365, GALGAS_string ("divAssign_operation")  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368))  COMMA_SOURCE_FILE ("instruction-self-concat.galgas", 368)) ;
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
  cEnumerator_actualParameterListAST enumerator_3467 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3467.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3467.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 105)) ;
    enumerator_3467.gotoNextObject () ;
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
  cEnumerator_actualParameterListAST enumerator_3817 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_3817.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_3817.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 115)) ;
    enumerator_3817.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_4506 ;
  GALGAS_string var_targetVariableCppName_4542 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_4592 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_setterCallInstructionAST temp_1 = object ;
    test_0 = temp_1.getter_mPrefixedBySelf (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAnalysisContext.getter_mSelfCopyTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 134)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GALGAS_setterCallInstructionAST temp_3 = object ;
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 135)), GALGAS_string ("'self' cannot be used in this context"), fixItArray4  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 135)) ;
          var_receiverType_4506.drop () ; // Release error dropped variable
          var_nameForCheckingFormalParameterUsing_4592.drop () ; // Release error dropped variable
          var_targetVariableCppName_4542.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 137)).boolEnum () ;
          if (kBoolTrue == test_5) {
            const GALGAS_setterCallInstructionAST temp_6 = object ;
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.getter_mReceiverName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 138)), GALGAS_string ("'self' object is not mutable"), fixItArray7  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 138)) ;
            var_receiverType_4506.drop () ; // Release error dropped variable
            var_nameForCheckingFormalParameterUsing_4592.drop () ; // Release error dropped variable
            var_targetVariableCppName_4542.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_5) {
          GALGAS_propertyMap var_propertyMap_5066 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 141)) ;
          const GALGAS_setterCallInstructionAST temp_8 = object ;
          GALGAS_bool joker_5167 ; // Joker input parameter
          var_propertyMap_5066.method_searchKey (temp_8.getter_mReceiverName (HERE), joker_5167, var_receiverType_4506, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 142)) ;
          var_nameForCheckingFormalParameterUsing_4592 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
          const GALGAS_setterCallInstructionAST temp_9 = object ;
          var_targetVariableCppName_4542 = constinArgument_inAnalysisContext.getter_mSelfObjectCppPrefixForAccessingProperty (HERE).add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 144)).add_operation (temp_9.getter_mReceiverName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 144)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_setterCallInstructionAST temp_10 = object ;
    ioArgument_ioVariableMap.setter_searchForReadWriteAccess (temp_10.getter_mReceiverName (HERE), var_receiverType_4506, var_targetVariableCppName_4542, var_nameForCheckingFormalParameterUsing_4592, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 147)) ;
    }
  }
  GALGAS_bool var_ok_5658 = GALGAS_bool (true) ;
  const GALGAS_setterCallInstructionAST temp_11 = object ;
  GALGAS_location var_errorLocation_5685 = temp_11.getter_mReceiverName (HERE).getter_location (HERE) ;
  const GALGAS_setterCallInstructionAST temp_12 = object ;
  cEnumerator_lstringlist enumerator_5758 (temp_12.getter_mReceiverStructProperties (HERE), kENUMERATION_UP) ;
  bool bool_13 = var_ok_5658.isValidAndTrue () ;
  if (enumerator_5758.hasCurrentObject () && bool_13) {
    while (enumerator_5758.hasCurrentObject () && bool_13) {
      var_ok_5658 = var_receiverType_4506.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 158)).getter_isStructType (SOURCE_FILE ("instruction-setter-call.galgas", 158)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_ok_5658.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 159)).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (var_errorLocation_5685, GALGAS_string ("a structure is required for '.' access"), fixItArray15  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 160)) ;
        }
      }
      if (kBoolFalse == test_14) {
        GALGAS_propertyMap var_propertyMap_5942 = var_receiverType_4506.getter_mPropertyMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 162)) ;
        GALGAS_bool var_isPublic_6023 ;
        var_propertyMap_5942.method_searchKey (enumerator_5758.current_mValue (HERE), var_isPublic_6023, var_receiverType_4506, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 163)) ;
        var_errorLocation_5685 = enumerator_5758.current_mValue (HERE).getter_location (HERE) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_isPublic_6023.operator_not (SOURCE_FILE ("instruction-setter-call.galgas", 165)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_5758.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 166)), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray17  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 166)) ;
          }
        }
      }
      enumerator_5758.gotoNextObject () ;
      if (enumerator_5758.hasCurrentObject ()) {
        bool_13 = var_ok_5658.isValidAndTrue () ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_castType_6775 ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_setterCallInstructionAST temp_19 = object ;
    test_18 = GALGAS_bool (kIsNotEqual, temp_19.getter_mTypeNameForCasting (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_setterCallInstructionAST temp_20 = object ;
      var_castType_6775 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_20.getter_mTypeNameForCasting (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 187)) ;
      {
      const GALGAS_setterCallInstructionAST temp_21 = object ;
      routine_checkAssignmentTypes (var_receiverType_4506, var_castType_6775, temp_21.getter_mTypeNameForCasting (HERE).getter_location (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 188)) ;
      }
    }
  }
  if (kBoolFalse == test_18) {
    var_castType_6775 = var_receiverType_4506 ;
  }
  GALGAS_methodKind var_kind_7147 ;
  GALGAS_formalParameterSignature var_routineSignature_7173 ;
  GALGAS_bool var_hasCompilerArgument_7202 ;
  GALGAS_string var_setterErrorMessage_7237 ;
  const GALGAS_setterCallInstructionAST temp_22 = object ;
  GALGAS_methodQualifier joker_7208 ; // Joker input parameter
  var_castType_6775.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 193)).method_searchKey (temp_22.getter_mSetterName (HERE), var_kind_7147, var_routineSignature_7173, var_hasCompilerArgument_7202, joker_7208, var_setterErrorMessage_7237, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 193)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsNotEqual, var_setterErrorMessage_7237.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_23) {
      const GALGAS_setterCallInstructionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 202)), var_setterErrorMessage_7237, fixItArray25  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 202)) ;
    }
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_7731 ;
  {
  const GALGAS_setterCallInstructionAST temp_26 = object ;
  const GALGAS_setterCallInstructionAST temp_27 = object ;
  const GALGAS_setterCallInstructionAST temp_28 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_26.getter_mSetterName (HERE), GALGAS_string ("'").add_operation (temp_27.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 210)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 210)), var_routineSignature_7173, temp_28.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_7731, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 205)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_baseType_7797 = var_castType_6775 ;
  GALGAS_bool var_searching_7824 = GALGAS_bool (true) ;
  enumGalgasBool test_29 = kBoolTrue ;
  if (kBoolTrue == test_29) {
    test_29 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("instruction-setter-call.galgas", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_29) {
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 221)).isValid ()) {
        uint32_t variant_7872 = GALGAS_uint::constructor_max (SOURCE_FILE ("instruction-setter-call.galgas", 221)).uintValue () ;
        bool loop_7872 = true ;
        while (loop_7872) {
          loop_7872 = var_searching_7824.isValid () ;
          if (loop_7872) {
            loop_7872 = var_searching_7824.boolValue () ;
          }
          if (loop_7872 && (0 == variant_7872)) {
            loop_7872 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-setter-call.galgas", 221)) ;
          }
          if (loop_7872) {
            variant_7872 -- ;
            enumGalgasBool test_30 = kBoolTrue ;
            if (kBoolTrue == test_30) {
              test_30 = var_baseType_7797.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 222)).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 222)).boolEnum () ;
              if (kBoolTrue == test_30) {
                var_searching_7824 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_30) {
              enumGalgasBool test_31 = kBoolTrue ;
              if (kBoolTrue == test_31) {
                const GALGAS_setterCallInstructionAST temp_32 = object ;
                test_31 = var_baseType_7797.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 225)).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 225)).getter_hasKey (temp_32.getter_mSetterName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 225)).boolEnum () ;
                if (kBoolTrue == test_31) {
                  var_baseType_7797 = var_baseType_7797.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 226)) ;
                }
              }
              if (kBoolFalse == test_31) {
                var_searching_7824 = GALGAS_bool (false) ;
              }
            }
          }
        }
      }
    }
  }
  const GALGAS_setterCallInstructionAST temp_33 = object ;
  const GALGAS_setterCallInstructionAST temp_34 = object ;
  const GALGAS_setterCallInstructionAST temp_35 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_setterCallInstructionForGeneration::constructor_new (temp_33.getter_mReceiverName (HERE).getter_location (HERE), var_targetVariableCppName_4542, var_nameForCheckingFormalParameterUsing_4592, temp_34.getter_mReceiverStructProperties (HERE), var_castType_6775, var_receiverType_4506, temp_35.getter_mSetterName (HERE), var_kind_7147, var_actualParameterListForGeneration_7731, var_hasCompilerArgument_7202, var_baseType_7797  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 234))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 234)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_setterCallInstructionAST.mSlotID,
                                                   extensionMethod_setterCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_setterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfSetterCallInstructionAST * object = (const cPtr_selfSetterCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfSetterCallInstructionAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_selfTypeEntry_9103 ;
  GALGAS_string var_selfObjectCppName_9131 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE).getter_isNull (SOURCE_FILE ("instruction-setter-call.galgas", 260)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_selfSetterCallInstructionAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 261)), GALGAS_string ("'self' can be used only in extension setters"), fixItArray2  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 261)) ;
      var_selfObjectCppName_9131.drop () ; // Release error dropped variable
      var_selfTypeEntry_9103.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    var_selfObjectCppName_9131 = constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE) ;
    var_selfTypeEntry_9103 = constinArgument_inAnalysisContext.getter_mSelfTypeEntry (HERE) ;
  }
  GALGAS_formalParameterSignature var_routineSignature_9491 ;
  GALGAS_bool var_hasCompilerArgument_9519 ;
  GALGAS_methodKind var_kind_9538 ;
  const GALGAS_selfSetterCallInstructionAST temp_3 = object ;
  GALGAS_methodQualifier joker_9643 ; // Joker input parameter
  GALGAS_string joker_9646 ; // Joker input parameter
  var_selfTypeEntry_9103.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 270)).method_searchKey (temp_3.getter_mSetterName (HERE), var_kind_9538, var_routineSignature_9491, var_hasCompilerArgument_9519, joker_9643, joker_9646, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 270)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_10049 ;
  {
  const GALGAS_selfSetterCallInstructionAST temp_4 = object ;
  const GALGAS_selfSetterCallInstructionAST temp_5 = object ;
  const GALGAS_selfSetterCallInstructionAST temp_6 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_4.getter_mSetterName (HERE), GALGAS_string ("'").add_operation (temp_5.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277)).add_operation (GALGAS_string ("' setter header"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 277)), var_routineSignature_9491, temp_6.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_10049, inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 272)) ;
  }
  const GALGAS_selfSetterCallInstructionAST temp_7 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selfSetterCallInstructionForGeneration::constructor_new (var_selfObjectCppName_9131, var_selfTypeEntry_9103, temp_7.getter_mSetterName (HERE), var_kind_9538, var_actualParameterListForGeneration_10049, var_hasCompilerArgument_9519  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 285))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 285)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionAST.mSlotID,
                                                   extensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_selfSetterCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 333)) ;
  const GALGAS_setterCallInstructionForGeneration temp_0 = object ;
  GALGAS_string var_receiverCppName_11890 = temp_0.getter_mReceiverCppName (HERE) ;
  const GALGAS_setterCallInstructionForGeneration temp_1 = object ;
  cEnumerator_lstringlist enumerator_11957 (temp_1.getter_mReceiverStructAttributes (HERE), kENUMERATION_UP) ;
  while (enumerator_11957.hasCurrentObject ()) {
    var_receiverCppName_11890.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_11957.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 336)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 336)) ;
    enumerator_11957.gotoNextObject () ;
  }
  {
  const GALGAS_setterCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_2.getter_mReceiverBaseName (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 338)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_12166 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 340)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_12214 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 341)) ;
  GALGAS_stringlist var_inputVariableList_12251 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 342)) ;
  const GALGAS_setterCallInstructionForGeneration temp_3 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_12294 (temp_3.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_12294.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_12549 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_12294.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_12214, var_inputVariableList_12251, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_12549, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 344)) ;
    var_parameterCppNameList_12166.addAssign_operation (var_parameterCppName_12549  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 353)) ;
    enumerator_12294.gotoNextObject () ;
  }
  const GALGAS_setterCallInstructionForGeneration temp_4 = object ;
  switch (temp_4.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_setterCallInstructionForGeneration temp_5 = object ;
      const GALGAS_setterCallInstructionForGeneration temp_6 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_5.getter_mMethodBaseType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)).add_operation (temp_6.getter_mSetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 358)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_8 = object ;
        test_7 = temp_8.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 359)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 359)).boolEnum () ;
        if (kBoolTrue == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            const GALGAS_setterCallInstructionForGeneration temp_10 = object ;
            test_9 = GALGAS_bool (kIsStrictSup, temp_10.getter_mReceiverType (HERE).getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 360)).getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
            if (kBoolTrue == test_9) {
              ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11890.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 361)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_11 = object ;
          GALGAS_string var_pointerUniqueName_13095 = GALGAS_string ("ptr_").add_operation (temp_11.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 363)) ;
          const GALGAS_setterCallInstructionForGeneration temp_12 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (temp_12.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)).add_operation (var_pointerUniqueName_13095, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 364)) ;
          const GALGAS_setterCallInstructionForGeneration temp_13 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" = (cPtr_").add_operation (temp_13.getter_mReceiverType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).add_operation (var_receiverCppName_11890, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 365)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            const GALGAS_setterCallInstructionForGeneration temp_15 = object ;
            const GALGAS_setterCallInstructionForGeneration temp_16 = object ;
            test_14 = GALGAS_bool (kIsNotEqual, temp_15.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)).objectCompare (temp_16.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 366)))).boolEnum () ;
            if (kBoolTrue == test_14) {
              const GALGAS_setterCallInstructionForGeneration temp_17 = object ;
              ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (temp_17.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 367)) ;
              const GALGAS_setterCallInstructionForGeneration temp_18 = object ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName_13095, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 368)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 368)).add_operation (temp_18.getter_mCastType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).add_operation (var_pointerUniqueName_13095, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 369)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 370)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 368)) ;
              {
              ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 371)) ;
              }
              const GALGAS_setterCallInstructionForGeneration temp_19 = object ;
              const GALGAS_setterCallInstructionForGeneration temp_20 = object ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (temp_19.getter_mCastType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)).add_operation (extensionGetter_commaSourceFile (temp_20.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 372)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_pointerUniqueName_13095, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 374)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 374)) ;
              ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 375)) ;
            }
          }
          const GALGAS_setterCallInstructionForGeneration temp_21 = object ;
          const GALGAS_setterCallInstructionForGeneration temp_22 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_21.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 377)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 377)).add_operation (temp_22.getter_mCastType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 378)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 378)).add_operation (var_pointerUniqueName_13095, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 378)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 377)) ;
        }
      }
      if (kBoolFalse == test_7) {
        const GALGAS_setterCallInstructionForGeneration temp_23 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_23.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)).add_operation (var_receiverCppName_11890, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 380)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const GALGAS_setterCallInstructionForGeneration temp_24 = object ;
      extensionMethod_addHeaderFileName (temp_24.getter_mReceiverType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 383)) ;
      const GALGAS_setterCallInstructionForGeneration temp_25 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(var_receiverCppName_11890.add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)).add_operation (temp_25.getter_mSetterName (HERE).getter_string (SOURCE_FILE ("instruction-setter-call.galgas", 384)).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 384)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_14747 (var_parameterCppNameList_12166, kENUMERATION_UP) ;
  while (enumerator_14747.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_14747.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 387)) ;
    if (enumerator_14747.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 388)) ;
    }
    enumerator_14747.gotoNextObject () ;
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    const GALGAS_setterCallInstructionForGeneration temp_27 = object ;
    test_26 = temp_27.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_26) {
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_12166.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 391)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_28) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 392)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 394)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 394)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 395)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 396)) ;
    }
  }
  if (kBoolFalse == test_26) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_12166.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 397)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_29) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 398)) ;
      }
    }
  }
  const GALGAS_setterCallInstructionForGeneration temp_30 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_30.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 400)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 400)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 402)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selfSetterCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 413)) ;
  {
  const GALGAS_selfSetterCallInstructionForGeneration temp_0 = object ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_0.getter_mSelfCppName (HERE) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 414)) ;
  }
  GALGAS_stringlist var_parameterCppNameList_15862 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 416)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_15913 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 417)) ;
  GALGAS_stringlist var_inputVariableList_15953 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-setter-call.galgas", 418)) ;
  const GALGAS_selfSetterCallInstructionForGeneration temp_1 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_16007 (temp_1.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_16007.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_16270 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_16007.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_15913, var_inputVariableList_15953, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_16270, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 420)) ;
    var_parameterCppNameList_15862.addAssign_operation (var_parameterCppName_16270  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 428)) ;
    enumerator_16007.gotoNextObject () ;
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_2 = object ;
  switch (temp_2.getter_mKind (HERE).enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsExtension:
    {
      const GALGAS_selfSetterCallInstructionForGeneration temp_3 = object ;
      const GALGAS_selfSetterCallInstructionForGeneration temp_4 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (temp_3.getter_mReceiverType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)).add_operation (temp_4.getter_mSetterName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433))  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 433)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_6 = object ;
        test_5 = temp_6.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 434)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 434)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_7 = object ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_8 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("callExtensionSetter_").add_operation (temp_7.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (temp_8.getter_mSelfCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 435)) ;
        }
      }
      if (kBoolFalse == test_5) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_9 = object ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_10 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("extensionSetter_").add_operation (temp_9.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).add_operation (temp_10.getter_mSelfCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 437)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_12 = object ;
        test_11 = temp_12.getter_mReceiverType (HERE).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 440)).getter_isClassType (SOURCE_FILE ("instruction-setter-call.galgas", 440)).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_selfSetterCallInstructionForGeneration temp_13 = object ;
          const GALGAS_selfSetterCallInstructionForGeneration temp_14 = object ;
          ioArgument_ioGeneratedCode.plusAssign_operation(temp_13.getter_mSelfCppName (HERE).add_operation (GALGAS_string ("->setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)).add_operation (temp_14.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 441)) ;
        }
      }
      if (kBoolFalse == test_11) {
        const GALGAS_selfSetterCallInstructionForGeneration temp_15 = object ;
        const GALGAS_selfSetterCallInstructionForGeneration temp_16 = object ;
        ioArgument_ioGeneratedCode.plusAssign_operation(temp_15.getter_mSelfCppName (HERE).add_operation (GALGAS_string (".setter_"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).add_operation (temp_16.getter_mSetterName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 443)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_17222 (var_parameterCppNameList_15862, kENUMERATION_UP) ;
  while (enumerator_17222.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_17222.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 447)) ;
    if (enumerator_17222.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 448)) ;
    }
    enumerator_17222.gotoNextObject () ;
  }
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_selfSetterCallInstructionForGeneration temp_18 = object ;
    test_17 = temp_18.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_17) {
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15862.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 451)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_19) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 452)) ;
        }
      }
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)) COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 454)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 455)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 455)) ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 456)) ;
    }
  }
  if (kBoolFalse == test_17) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList_15862.getter_length (SOURCE_FILE ("instruction-setter-call.galgas", 457)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_20) {
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 458)) ;
      }
    }
  }
  const GALGAS_selfSetterCallInstructionForGeneration temp_21 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_21.getter_mSetterName (HERE).getter_location (SOURCE_FILE ("instruction-setter-call.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 460)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas", 461)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration.mSlotID,
                                            extensionMethod_selfSetterCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_selfSetterCallInstructionForGeneration_generateInstruction (defineExtensionMethod_selfSetterCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  const GALGAS_switchInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSwitchExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 132)) ;
  const GALGAS_switchInstructionAST temp_1 = object ;
  cEnumerator_switchBranchesAST enumerator_4411 (temp_1.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_4411.hasCurrentObject ()) {
    extensionMethod_enterInstructionListInSemanticContext (enumerator_4411.current_mInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 134)) ;
    enumerator_4411.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                          extensionMethod_switchInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_switchInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_switchInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionAST * object = (const cPtr_switchInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression_5141 ;
  const GALGAS_switchInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSwitchExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-switch.galgas", 154)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_switchExpression_5141, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 151)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_switchExpression_5141.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 160)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 160)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("instruction-switch.galgas", 160)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_switchInstructionAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mEndOfSwitchExpression (HERE), GALGAS_string ("the switch expression type should be an instance of an enumeration type (the '@").add_operation (var_switchExpression_5141.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 163)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 162)).add_operation (GALGAS_string ("' type is not an enumeration type)"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("instruction-switch.galgas", 161)) ;
    }
  }
  GALGAS_constantIndexMap var_enumConstantMap_5756 = var_switchExpression_5141.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 166)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 166)) ;
  GALGAS_stringset var_constantsNamedInSwitchInstruction_5855 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("instruction-switch.galgas", 167)) ;
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 169)) ;
  }
  GALGAS_switchBranchesForGeneration var_switchBranchesForGeneration_5988 = GALGAS_switchBranchesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 170)) ;
  const GALGAS_switchInstructionAST temp_4 = object ;
  cEnumerator_switchBranchesAST enumerator_6020 (temp_4.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_6020.hasCurrentObject ()) {
    GALGAS_extractedAssociatedValuesForGeneration var_extractedAssociatedValuesForGeneration_6106 = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 172)) ;
    GALGAS_bool var_firstConstant_6135 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_6176 (enumerator_6020.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_6176.hasCurrentObject ()) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_enumConstantMap_5756.getter_hasKey (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 175)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 175)).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_constantsNamedInSwitchInstruction_5855.getter_hasKey (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 176)) COMMA_SOURCE_FILE ("instruction-switch.galgas", 176)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_6176.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 177)), GALGAS_string ("the '").add_operation (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)).add_operation (GALGAS_string ("' constant is already named in this switch instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 178)), fixItArray7  COMMA_SOURCE_FILE ("instruction-switch.galgas", 177)) ;
            }
          }
          var_constantsNamedInSwitchInstruction_5855.addAssign_operation (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 180))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 180)) ;
          GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6590 ;
          GALGAS_uint joker_6540 ; // Joker input parameter
          var_enumConstantMap_5756.method_searchKey (enumerator_6176.current_mValue (HERE), joker_6540, var_associatedTypeList_6590, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 181)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6590.getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, enumerator_6020.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 182)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 182)).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_6176.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 183)), GALGAS_string ("the associated values of '").add_operation (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)).add_operation (GALGAS_string ("' constant should be extracted"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 184)), fixItArray9  COMMA_SOURCE_FILE ("instruction-switch.galgas", 183)) ;
            }
          }
          if (kBoolFalse == test_8) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_6590.getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsStrictSup, enumerator_6020.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 185)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-switch.galgas", 185)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (enumerator_6176.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 186)), GALGAS_string ("the '").add_operation (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)).add_operation (GALGAS_string ("' constant has no associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 187)), fixItArray11  COMMA_SOURCE_FILE ("instruction-switch.galgas", 186)) ;
              }
            }
            if (kBoolFalse == test_10) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsNotEqual, var_associatedTypeList_6590.getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)).objectCompare (enumerator_6020.current_mAssociatedValuesExtraction (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 188)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string temp_13 ;
                  const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_associatedTypeList_6590.getter_length (SOURCE_FILE ("instruction-switch.galgas", 191)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    temp_13 = GALGAS_string ("s") ;
                  }else if (kBoolFalse == test_14) {
                    temp_13 = GALGAS_string::makeEmptyString () ;
                  }
                  TC_Array <C_FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_6176.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 189)), GALGAS_string ("the '").add_operation (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("' constant requires "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (var_associatedTypeList_6590.getter_length (SOURCE_FILE ("instruction-switch.galgas", 190)).getter_string (SOURCE_FILE ("instruction-switch.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (GALGAS_string ("  associated value"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 190)), fixItArray15  COMMA_SOURCE_FILE ("instruction-switch.galgas", 189)) ;
                }
              }
              if (kBoolFalse == test_12) {
                GALGAS_uint var_associatedValueIndex_7324 = GALGAS_uint ((uint32_t) 0U) ;
                cEnumerator_unifiedTypeMapEntryList enumerator_7367 (var_associatedTypeList_6590, kENUMERATION_UP) ;
                cEnumerator_switchExtractedValuesListAST enumerator_7402 (enumerator_6020.current_mAssociatedValuesExtraction (HERE), kENUMERATION_UP) ;
                while (enumerator_7367.hasCurrentObject () && enumerator_7402.hasCurrentObject ()) {
                  enumGalgasBool test_16 = kBoolTrue ;
                  if (kBoolTrue == test_16) {
                    test_16 = GALGAS_bool (kIsNotEqual, enumerator_7402.current_mExtractedValueTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                    if (kBoolTrue == test_16) {
                      enumGalgasBool test_17 = kBoolTrue ;
                      if (kBoolTrue == test_17) {
                        test_17 = GALGAS_bool (kIsNotEqual, enumerator_7367.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 196)).objectCompare (enumerator_7402.current_mExtractedValueTypeName (HERE).getter_string (HERE))).boolEnum () ;
                        if (kBoolTrue == test_17) {
                          TC_Array <C_FixItDescription> fixItArray18 ;
                          inCompiler->emitSemanticError (enumerator_7402.current_mExtractedValueTypeName (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 197)), GALGAS_string ("the required type is '@").add_operation (enumerator_7367.current_mType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)), fixItArray18  COMMA_SOURCE_FILE ("instruction-switch.galgas", 197)) ;
                        }
                      }
                    }
                  }
                  enumGalgasBool test_19 = kBoolTrue ;
                  if (kBoolTrue == test_19) {
                    test_19 = var_firstConstant_6135.operator_and (GALGAS_bool (kIsNotEqual, enumerator_7402.current_mExtractedValueName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("instruction-switch.galgas", 200)).boolEnum () ;
                    if (kBoolTrue == test_19) {
                      GALGAS_string var_cppName_7773 = GALGAS_string ("extractedValue_").add_operation (enumerator_7402.current_mExtractedValueName (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 201)) ;
                      var_extractedAssociatedValuesForGeneration_6106.addAssign_operation (enumerator_7367.current_mType (HERE), var_cppName_7773, var_associatedValueIndex_7324  COMMA_SOURCE_FILE ("instruction-switch.galgas", 202)) ;
                      enumGalgasBool test_20 = kBoolTrue ;
                      if (kBoolTrue == test_20) {
                        test_20 = enumerator_7402.current_mMarkedAsUnused (HERE).boolEnum () ;
                        if (kBoolTrue == test_20) {
                          {
                          ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_7402.current_mExtractedValueName (HERE), enumerator_7367.current_mType (HERE), var_cppName_7773, var_cppName_7773, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 204)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_20) {
                        {
                        ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_7402.current_mExtractedValueName (HERE), enumerator_7367.current_mType (HERE), var_cppName_7773, var_cppName_7773, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 206)) ;
                        }
                      }
                    }
                  }
                  var_associatedValueIndex_7324.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 209)) ;
                  enumerator_7367.gotoNextObject () ;
                  enumerator_7402.gotoNextObject () ;
                }
              }
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (enumerator_6176.current_mValue (HERE).getter_location (SOURCE_FILE ("instruction-switch.galgas", 213)), GALGAS_string ("'").add_operation (enumerator_6176.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' is not a constant of '@"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (var_switchExpression_5141.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 214)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 214)), fixItArray21  COMMA_SOURCE_FILE ("instruction-switch.galgas", 213)) ;
      }
      var_firstConstant_6135 = GALGAS_bool (false) ;
      enumerator_6176.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList_8801 ;
    {
    routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 222)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-switch.galgas", 223)), enumerator_6020.current_mInstructions (HERE), enumerator_6020.current_mEndOfBranch (HERE), ioArgument_ioVariableMap, var_instructionList_8801, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 218)) ;
    }
    var_switchBranchesForGeneration_5988.addAssign_operation (enumerator_6020.current_mSwitchConstantList (HERE), var_extractedAssociatedValuesForGeneration_6106, enumerator_6020.current_mEndOfBranch (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)), var_instructionList_8801  COMMA_SOURCE_FILE ("instruction-switch.galgas", 229)) ;
    enumerator_6020.gotoNextObject () ;
  }
  {
  const GALGAS_switchInstructionAST temp_22 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_22.getter_mEndOf_5F_switch_5F_instruction (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 231)) ;
  }
  GALGAS_stringset var_forgottenConstants_9088 = var_enumConstantMap_5756.getter_keySet (SOURCE_FILE ("instruction-switch.galgas", 233)).substract_operation (var_constantsNamedInSwitchInstruction_5855, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 233)) ;
  enumGalgasBool test_23 = kBoolTrue ;
  if (kBoolTrue == test_23) {
    test_23 = GALGAS_bool (kIsStrictSup, var_forgottenConstants_9088.getter_count (SOURCE_FILE ("instruction-switch.galgas", 234)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_23) {
      GALGAS_string var_s_9206 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_9244 (var_forgottenConstants_9088, kENUMERATION_UP) ;
      while (enumerator_9244.hasCurrentObject ()) {
        var_s_9206.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_9244.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 237)) ;
        enumerator_9244.gotoNextObject () ;
      }
      const GALGAS_switchInstructionAST temp_24 = object ;
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (temp_24.getter_mEndOf_5F_switch_5F_instruction (HERE), GALGAS_string ("the switch instruction should name all enumeration constants; missing constants are:").add_operation (var_s_9206, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 240)), fixItArray25  COMMA_SOURCE_FILE ("instruction-switch.galgas", 239)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_switchInstructionForGeneration::constructor_new (var_switchExpression_5141.getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 244)), var_switchExpression_5141, var_switchBranchesForGeneration_5988  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243))  COMMA_SOURCE_FILE ("instruction-switch.galgas", 243)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_switchInstructionAST.mSlotID,
                                                   extensionMethod_switchInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_switchInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@switchInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_switchVar_11274 ;
  const GALGAS_switchInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mSwitchExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar_11274, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 286)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVar_11274, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 293)) ;
  const GALGAS_switchInstructionForGeneration temp_1 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_1.getter_mSwitchExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 294)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 294)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 295)) ;
  const GALGAS_switchInstructionForGeneration temp_2 = object ;
  cEnumerator_switchBranchesForGeneration enumerator_11528 (temp_2.getter_mBranches (HERE), kENUMERATION_UP) ;
  while (enumerator_11528.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11565 (enumerator_11528.current_mSwitchConstantList (HERE), kENUMERATION_UP) ;
    while (enumerator_11565.hasCurrentObject ()) {
      const GALGAS_switchInstructionForGeneration temp_3 = object ;
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (temp_3.getter_mSwitchExpression (HERE).getter_mResultType (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (enumerator_11565.current_mValue (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 298)).getter_identifierRepresentation (SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 298)) ;
      enumerator_11565.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 300)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 301)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_11528.current_mExtractedAssociatedValuesForGeneration (HERE).getter_length (SOURCE_FILE ("instruction-switch.galgas", 302)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_switchInstructionForGeneration temp_5 = object ;
        GALGAS_string var_type_11899 = GALGAS_string ("const cEnumAssociatedValues_").add_operation (temp_5.getter_mEnumType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 303)).add_operation (enumerator_11528.current_mSwitchConstantList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 304)) ;
        GALGAS_string var_varPtr_12061 = GALGAS_string ("extractPtr_").add_operation (enumerator_11528.current_mEndOfBranchLocationIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 305)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (var_type_11899, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_varPtr_12061, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_type_11899, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (var_switchVar_11274, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 306)) ;
        cEnumerator_extractedAssociatedValuesForGeneration enumerator_12276 (enumerator_11528.current_mExtractedAssociatedValuesForGeneration (HERE), kENUMERATION_UP) ;
        while (enumerator_12276.hasCurrentObject ()) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  const GALGAS_").add_operation (enumerator_12276.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (enumerator_12276.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)).add_operation (var_varPtr_12061, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (enumerator_12276.current_mIndex (HERE).getter_string (SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 309)), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 308)) ;
          enumerator_12276.gotoNextObject () ;
        }
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_11528.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 312)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 320)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 321)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas", 322)) ;
    }
    enumerator_11528.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas", 324)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                            extensionMethod_switchInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineExtensionMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  const GALGAS_typeMethodCallInstructionAST temp_0 = object ;
  cEnumerator_actualParameterListAST enumerator_1834 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_1834.hasCurrentObject ()) {
    callExtensionMethod_enterParameterInSemanticContext ((const cPtr_actualParameterAST *) enumerator_1834.current_mActualParameter (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 43)) ;
    enumerator_1834.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                          extensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_typeMethodCallInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodCallInstructionAST * object = (const cPtr_typeMethodCallInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodCallInstructionAST) ;
  const GALGAS_typeMethodCallInstructionAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_type_2541 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 58)) ;
  GALGAS_formalParameterSignature var_routineSignature_2715 ;
  GALGAS_bool var_hasCompilerArgument_2743 ;
  const GALGAS_typeMethodCallInstructionAST temp_1 = object ;
  var_type_2541.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)).method_searchKey (temp_1.getter_mMethodName (HERE), var_routineSignature_2715, var_hasCompilerArgument_2743, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 62)) ;
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration_3242 ;
  {
  const GALGAS_typeMethodCallInstructionAST temp_2 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_3 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_4 = object ;
  routine_analyzeRoutineArguments (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_2.getter_mMethodName (HERE), GALGAS_string ("'").add_operation (temp_3.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)).add_operation (GALGAS_string ("' type proc header"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 69)), var_routineSignature_2715, temp_4.getter_mActualParameterList (HERE), ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_3242, inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 64)) ;
  }
  const GALGAS_typeMethodCallInstructionAST temp_5 = object ;
  const GALGAS_typeMethodCallInstructionAST temp_6 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_typeMethodCallInstructionForGeneration::constructor_new (temp_5.getter_mTypeName (HERE), temp_6.getter_mMethodName (HERE), var_actualParameterListForGeneration_3242, var_hasCompilerArgument_2743  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77))  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 77)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionAST.mSlotID,
                                                   extensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_typeMethodCallInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typeMethodCallInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_stringlist var_parameterCppNameList_4408 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 105)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList_4459 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 106)) ;
  GALGAS_stringlist var_inputVariableList_4499 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("instruction-type-method-call.galgas", 107)) ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_0 = object ;
  cEnumerator_actualParameterListForGeneration enumerator_4553 (temp_0.getter_mActualParameterList (HERE), kENUMERATION_UP) ;
  while (enumerator_4553.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName_4816 ;
    callExtensionMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_4553.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_4459, var_inputVariableList_4499, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_4816, inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 109)) ;
    var_parameterCppNameList_4408.addAssign_operation (var_parameterCppName_4816  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 117)) ;
    enumerator_4553.gotoNextObject () ;
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_1 = object ;
  const GALGAS_typeMethodCallInstructionForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mTypeName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 120)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 120)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)).add_operation (temp_2.getter_mMethodName (HERE).getter_string (SOURCE_FILE ("instruction-type-method-call.galgas", 121)).getter_identifierRepresentation (SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 120)) ;
  cEnumerator_stringlist enumerator_5112 (var_parameterCppNameList_4408, kENUMERATION_UP) ;
  while (enumerator_5112.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssign_operation(enumerator_5112.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 123)) ;
    if (enumerator_5112.hasNextObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 124)) ;
    }
    enumerator_5112.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_4 = object ;
    test_3 = temp_4.getter_mHasCompilerArgument (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 127)) ;
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4408.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 128)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_5) {
          ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 129)) ;
        }
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 131)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_typeMethodCallInstructionForGeneration temp_7 = object ;
    test_6 = temp_7.getter_mHasCompilerArgument (HERE).operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList_4408.getter_length (SOURCE_FILE ("instruction-type-method-call.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 134)) ;
    }
  }
  const GALGAS_typeMethodCallInstructionForGeneration temp_8 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(extensionGetter_sourceFile (temp_8.getter_mMethodName (HERE).getter_location (SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 136)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas", 137)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration.mSlotID,
                                            extensionMethod_typeMethodCallInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typeMethodCallInstructionForGeneration_generateInstruction (defineExtensionMethod_typeMethodCallInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                           GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  {
  const GALGAS_localVariableDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry joker_2097 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioTypeMap, temp_0.getter_mTypeName (HERE), joker_2097 COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 43)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                    const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                    GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                    const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationAST * object = (const cPtr_localVariableDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationAST) ;
  const GALGAS_localVariableDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_targetType_2764 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), temp_0.getter_mTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 58)) ;
  const GALGAS_localVariableDeclarationAST temp_1 = object ;
  const GALGAS_localVariableDeclarationAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_2889 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)).getter_string (SOURCE_FILE ("instruction-var-declaration.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 59)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_localVariableDeclarationAST temp_4 = object ;
    test_3 = temp_4.getter_mIsUndefinedConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_localVariableDeclarationAST temp_5 = object ;
      ioArgument_ioVariableMap.setter_insertUndefinedLocalConstant (temp_5.getter_mVariableName (HERE), var_targetType_2764, var_targetVariableCppName_2889, var_targetVariableCppName_2889, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 61)) ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    {
    const GALGAS_localVariableDeclarationAST temp_6 = object ;
    ioArgument_ioVariableMap.setter_insertUndefinedLocalVariable (temp_6.getter_mVariableName (HERE), var_targetType_2764, var_targetVariableCppName_2889, var_targetVariableCppName_2889, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 63)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (var_targetType_2764, var_targetVariableCppName_2889  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66))  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 66)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  const GALGAS_localVariableDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mVariableType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 90)) ;
  const GALGAS_localVariableDeclarationForGeneration temp_1 = object ;
  const GALGAS_localVariableDeclarationForGeneration temp_2 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (temp_1.getter_mVariableType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (temp_2.getter_mCppVariableName (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("instruction-var-declaration.galgas", 91)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration.mSlotID,
                                            extensionMethod_localVariableDeclarationForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationForGeneration_generateInstruction (defineExtensionMethod_localVariableDeclarationForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 41)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                          extensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@localVariableDeclarationWithAssignmentAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                  GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                                  GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationWithAssignmentAST * object = (const cPtr_localVariableDeclarationWithAssignmentAST *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationWithAssignmentAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_2603 ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mSourceExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 59)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_2603, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 56)) ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_1 = object ;
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_2 = object ;
  GALGAS_string var_targetVariableCppName_2662 = GALGAS_string ("var_").add_operation (temp_1.getter_mVariableName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).add_operation (temp_2.getter_mVariableName (HERE).getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)).getter_string (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 65)) ;
  {
  const GALGAS_localVariableDeclarationWithAssignmentAST temp_3 = object ;
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (temp_3.getter_mVariableName (HERE), var_expression_2603.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 68)), var_targetVariableCppName_2662, var_targetVariableCppName_2662, inCompiler COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 66)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (var_expression_2603.getter_mResultType (SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 74)), GALGAS_bool (false), var_targetVariableCppName_2662, var_expression_2603  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73))  COMMA_SOURCE_FILE ("instruction-var-declaration-with-assignment.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST.mSlotID,
                                                   extensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction (defineExtensionMethod_localVariableDeclarationWithAssignmentAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_warningInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  const GALGAS_warningInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mLocationExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 44)) ;
  const GALGAS_warningInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mMessageExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 45)) ;
  const GALGAS_warningInstructionAST temp_2 = object ;
  extensionMethod_enterFixItListInSemanticContext (temp_2.getter_mFixitListAST (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 46)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                          extensionMethod_warningInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_warningInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_warningInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_warningInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionAST * object = (const cPtr_warningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_locationExpression_2907 ;
  GALGAS_semanticExpressionForGeneration var_messageExpression_2934 ;
  GALGAS_fixitListForGeneration var_fixitListForGeneration_2966 ;
  {
  const GALGAS_warningInstructionAST temp_0 = object ;
  const GALGAS_warningInstructionAST temp_1 = object ;
  const GALGAS_warningInstructionAST temp_2 = object ;
  const GALGAS_warningInstructionAST temp_3 = object ;
  routine_analyzeErrorOrWarningInstruction (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, temp_0.getter_mLocationExpression (HERE), temp_1.getter_mMessageExpression (HERE), temp_2.getter_mFixitListAST (HERE), temp_3.getter_mInstructionLocation (HERE), GALGAS_string ("warning"), ioArgument_ioVariableMap, var_locationExpression_2907, var_messageExpression_2934, var_fixitListForGeneration_2966, inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 60)) ;
  }
  const GALGAS_warningInstructionAST temp_4 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_warningInstructionForGeneration::constructor_new (temp_4.getter_mInstructionLocation (HERE), var_locationExpression_2907, var_messageExpression_2934, var_fixitListForGeneration_2966  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75))  COMMA_SOURCE_FILE ("instruction-warning.galgas", 75)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_warningInstructionAST.mSlotID,
                                                   extensionMethod_warningInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_warningInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_warningInstructionAST_analyzeSemanticInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@warningInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_receiverCppVarName_4155 ;
  const GALGAS_warningInstructionForGeneration temp_0 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_4155, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 105)) ;
  GALGAS_string var_messageCppVarName_4519 ;
  const GALGAS_warningInstructionForGeneration temp_1 = object ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.getter_mWarningExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName_4519, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 107)) ;
  GALGAS_string var_fixItArrayCppName_4772 ;
  const GALGAS_warningInstructionForGeneration temp_2 = object ;
  extensionMethod_generateFixIt (temp_2.getter_mFixitListForGeneration (HERE), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, var_fixItArrayCppName_4772, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 115)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) COMMA_SOURCE_FILE ("instruction-warning.galgas", 124)) ;
  }
  const GALGAS_warningInstructionForGeneration temp_3 = object ;
  ioArgument_ioGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (var_receiverCppVarName_4155, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (var_messageCppVarName_4519, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 126)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (var_fixItArrayCppName_4772, inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 127)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (extensionGetter_commaSourceFile (temp_3.getter_mInstructionLocation (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 128)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-warning.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas", 125)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterExtensionMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                            extensionMethod_warningInstructionForGeneration_generateInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineExtensionMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  const GALGAS_readAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 194)) ;
  const GALGAS_readAccessWithInstructionAST temp_1 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_1.getter_mKeyExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 195)) ;
  const GALGAS_readAccessWithInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_mDoBranchInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 196)) ;
  const GALGAS_readAccessWithInstructionAST temp_3 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_3.getter_mElseBranchInstructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 197)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readWriteAccessWithInstructionAST enterInstructionInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (const cPtr_semanticInstructionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteAccessWithInstructionAST * object = (const cPtr_readWriteAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteAccessWithInstructionAST) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.getter_mKeyExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 205)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.getter_m_5F_do_5F_Instructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 206)) ;
  const GALGAS_readWriteAccessWithInstructionAST temp_2 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_2.getter_m_5F_else_5F_Instructions (HERE), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 207)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (void) {
  enterExtensionMethod_enterInstructionInSemanticContext (kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST.mSlotID,
                                                          extensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext (defineExtensionMethod_readWriteAccessWithInstructionAST_enterInstructionInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@readAccessWithInstructionAST analyzeSemanticInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (const cPtr_semanticInstructionAST * inObject,
                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readAccessWithInstructionAST * object = (const cPtr_readAccessWithInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_readAccessWithInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_8297 ;
  const GALGAS_readAccessWithInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_0.getter_mReceiverExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 224)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_8297, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 221)) ;
  GALGAS_unifiedTypeMap_2D_entry var_receiverType_8320 = var_receiverExpression_8297.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 229)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_readAccessWithInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_bool var_found_8459 = GALGAS_bool (false) ;
      cEnumerator_mapSearchMethodListAST enumerator_8517 (var_receiverType_8320.getter_mMapSearchMethodList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 233)), kENUMERATION_UP) ;
      bool bool_3 = var_found_8459.operator_not (SOURCE_FILE ("instruction-with.galgas", 233)).isValidAndTrue () ;
      if (enumerator_8517.hasCurrentObject () && bool_3) {
        while (enumerator_8517.hasCurrentObject () && bool_3) {
          const GALGAS_readAccessWithInstructionAST temp_4 = object ;
          var_found_8459 = GALGAS_bool (kIsEqual, enumerator_8517.current_mSearchMethodName (HERE).getter_string (HERE).objectCompare (temp_4.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE))) ;
          enumerator_8517.gotoNextObject () ;
          if (enumerator_8517.hasCurrentObject ()) {
            bool_3 = var_found_8459.operator_not (SOURCE_FILE ("instruction-with.galgas", 233)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_found_8459.operator_not (SOURCE_FILE ("instruction-with.galgas", 236)).boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_readAccessWithInstructionAST temp_6 = object ;
          const GALGAS_readAccessWithInstructionAST temp_7 = object ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_6.getter_mSearchMethodNameForErrorSignaling (HERE).getter_location (SOURCE_FILE ("instruction-with.galgas", 237)), GALGAS_string ("there is no '").add_operation (temp_7.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 237)).add_operation (GALGAS_string ("' search method declared in the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 237)).add_operation (var_receiverType_8320.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 238)), fixItArray8  COMMA_SOURCE_FILE ("instruction-with.galgas", 237)) ;
        }
      }
    }
  }
  GALGAS_semanticExpressionForGeneration var_keyExpression_9131 ;
  const GALGAS_readAccessWithInstructionAST temp_9 = object ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_9.getter_mKeyExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("instruction-with.galgas", 245)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_keyExpression_9131, inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 242)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    const GALGAS_readAccessWithInstructionAST temp_11 = object ;
    test_10 = GALGAS_bool (kIsEqual, temp_11.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, var_keyExpression_9131.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 252)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 252)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_readAccessWithInstructionAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.getter_mEndOfKeyExpression (HERE), GALGAS_string ("the key type is '@").add_operation (var_keyExpression_9131.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 254)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)).add_operation (GALGAS_string ("', it should be '@string'"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 254)), fixItArray14  COMMA_SOURCE_FILE ("instruction-with.galgas", 253)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_15 = kBoolTrue ;
    if (kBoolTrue == test_15) {
      test_15 = GALGAS_bool (kIsNotEqual, var_keyExpression_9131.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 256)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 256)).objectCompare (GALGAS_string ("lstring"))).boolEnum () ;
      if (kBoolTrue == test_15) {
        const GALGAS_readAccessWithInstructionAST temp_16 = object ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.getter_mEndOfKeyExpression (HERE), GALGAS_string ("the key type is '@").add_operation (var_keyExpression_9131.getter_mResultType (SOURCE_FILE ("instruction-with.galgas", 258)).getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 258)).add_operation (GALGAS_string ("', it should be @lstring"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 258)), fixItArray17  COMMA_SOURCE_FILE ("instruction-with.galgas", 257)) ;
      }
    }
  }
  const GALGAS_readAccessWithInstructionAST temp_18 = object ;
  GALGAS_string var_objectArrayCppName_9689 = GALGAS_string ("objectArray_").add_operation (temp_18.getter_mInstructionLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 261)).getter_string (SOURCE_FILE ("instruction-with.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 261)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = var_receiverType_8320.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 263)).getter_supportWithAccessor (SOURCE_FILE ("instruction-with.galgas", 263)).operator_not (SOURCE_FILE ("instruction-with.galgas", 263)).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_readAccessWithInstructionAST temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.getter_mEndOfReceiverExpression (HERE), GALGAS_string ("the '@").add_operation (var_receiverType_8320.getter_key (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 264)).add_operation (GALGAS_string ("' type cannot be used in a 'with' instruction"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 264)), fixItArray21  COMMA_SOURCE_FILE ("instruction-with.galgas", 264)) ;
    }
  }
  {
  ioArgument_ioVariableMap.setter_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 267)) ;
  }
  GALGAS_localConstantList var_localConstantList_10140 = GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 269)) ;
  cEnumerator_typedPropertyList enumerator_10216 (var_receiverType_8320.getter_mCurrentTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 270)), kENUMERATION_UP) ;
  while (enumerator_10216.hasCurrentObject ()) {
    const GALGAS_readAccessWithInstructionAST temp_22 = object ;
    const GALGAS_readAccessWithInstructionAST temp_23 = object ;
    var_localConstantList_10140.addAssign_operation (enumerator_10216.current_mPropertyTypeEntry (HERE), GALGAS_lstring::constructor_new (temp_22.getter_mPrefix (HERE).getter_string (HERE).add_operation (enumerator_10216.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("instruction-with.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 273)), temp_23.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 273)), GALGAS_bool (true), var_objectArrayCppName_9689.add_operation (GALGAS_string ("->mProperty_"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 275)).add_operation (enumerator_10216.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-with.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 275))  COMMA_SOURCE_FILE ("instruction-with.galgas", 271)) ;
    enumerator_10216.gotoNextObject () ;
  }
  const GALGAS_readAccessWithInstructionAST temp_24 = object ;
  const GALGAS_readAccessWithInstructionAST temp_25 = object ;
  var_localConstantList_10140.addAssign_operation (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("instruction-with.galgas", 279)), inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 279)), GALGAS_lstring::constructor_new (temp_24.getter_mPrefix (HERE).getter_string (HERE).add_operation (GALGAS_string ("lkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 280)), temp_25.getter_mEndOfReceiverExpression (HERE)  COMMA_SOURCE_FILE ("instruction-with.galgas", 280)), GALGAS_bool (true), var_objectArrayCppName_9689.add_operation (GALGAS_string ("->mPropertylkey"), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 282))  COMMA_SOURCE_FILE ("instruction-with.galgas", 278)) ;
  GALGAS_semanticInstructionListForGeneration var_do_5F_instructionList_11113 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_26 = object ;
  const GALGAS_readAccessWithInstructionAST temp_27 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_localConstantList_10140, GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 288)), temp_26.getter_mDoBranchInstructions (HERE), temp_27.getter_mEndOf_5F_do_5F_instructions (HERE), ioArgument_ioVariableMap, var_do_5F_instructionList_11113, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 283)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionList_11427 ;
  {
  const GALGAS_readAccessWithInstructionAST temp_28 = object ;
  const GALGAS_readAccessWithInstructionAST temp_29 = object ;
  routine_analyzeSemanticInstructionList (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 299)), GALGAS_localInitializedVariableList::constructor_emptyList (SOURCE_FILE ("instruction-with.galgas", 300)), temp_28.getter_mElseBranchInstructions (HERE), temp_29.getter_mEndOf_5F_else_5F_instructions (HERE), ioArgument_ioVariableMap, var_else_5F_instructionList_11427, inCompiler  COMMA_SOURCE_FILE ("instruction-with.galgas", 295)) ;
  }
  {
  const GALGAS_readAccessWithInstructionAST temp_30 = object ;
  ioArgument_ioVariableMap.setter_closeOverride (temp_30.getter_mEndOf_5F_else_5F_instructions (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-with.galgas", 306)) ;
  }
  const GALGAS_readAccessWithInstructionAST temp_31 = object ;
  const GALGAS_readAccessWithInstructionAST temp_32 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_readOnlyWithInstructionForGeneration::constructor_new (temp_31.getter_mInstructionLocation (HERE), var_receiverExpression_8297, var_objectArrayCppName_9689, var_keyExpression_9131, temp_32.getter_mSearchMethodNameForErrorSignaling (HERE).getter_string (HERE), var_do_5F_instructionList_11113, var_else_5F_instructionList_11427  COMMA_SOURCE_FILE ("instruction-with.galgas", 308))  COMMA_SOURCE_FILE ("instruction-with.galgas", 308)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (void) {
  enterExtensionMethod_analyzeSemanticInstruction (kTypeDescriptor_GALGAS_readAccessWithInstructionAST.mSlotID,
                                                   extensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_readAccessWithInstructionAST_analyzeSemanticInstruction (defineExtensionMethod_readAccessWithInstructionAST_analyzeSemanticInstruction, NULL) ;

