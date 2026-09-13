#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-26.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 116)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                 const GGS_string constinArgument_inSelector,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GGS_bool test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas3", 123)))) ;
  if (GalgasBool::boolTrue != test_0.boolEnum ()) {
    test_0 = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas3", 123)))) ;
  }
  result_result = test_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_outputActualParameterAST temp_2 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & ioArgument_ioActualOutputArgumentList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterAST temp_0 = this ;
  const GGS_outputActualParameterAST temp_1 = this ;
  const GGS_outputActualParameterAST temp_2 = this ;
  ioArgument_ioActualOutputArgumentList.addAssignOperation (temp_0.readProperty_mActualSelector (), temp_1.readProperty_mOutputActualParameterExpression (), temp_2.readProperty_mEndOfExpressionLocation ()  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 132)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_lstring constinArgument_inFormalSelector,
                                                                       const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                       GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                       GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("actual-parameters.galgas3", 152)))).operator_and (GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("actual-parameters.galgas3", 153)))) COMMA_SOURCE_FILE ("actual-parameters.galgas3", 152)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 155)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 155)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 155)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 157)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 156)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 157)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 154)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 160)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_8117 = GGS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 160)) ;
        const GGS_outputActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_8117) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_8117, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 161)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 161)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 161)) ;
      }
    }
    GGS_semanticExpressionForGeneration var_expression_8637 ;
    const GGS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expression_8637, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 163)) ;
    {
    const GGS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expression_8637.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8637, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 173)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputActualParameterForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_expression_8637, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 180)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                      const GGS_string constinArgument_inSelector,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas3", 207)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 216)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                            GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                            const GGS_lstring constinArgument_inFormalSelector,
                                                                            const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GGS_localVarManager & ioArgument_ioVariableMap,
                                                                            GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                            GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas3", 233)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 235)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 235)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 235)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 237)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 236)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 237)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 234)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 239)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_11867 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 239)) ;
        const GGS_outputInputActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_11867) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_11867, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 240)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 240)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 240)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_12216 ;
  GGS_string var_variableCppName_12241 ;
  {
  const GGS_outputInputActualParameterAST temp_9 = this ;
  GGS_string joker_12263 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_12216, var_variableCppName_12241, joker_12263, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 243)) ;
  }
  GGS_unifiedTypeMapEntryList var_typeList_12280 = GGS_unifiedTypeMapEntryList::class_func_listWithValue (var_parameterType_12216  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 249)) ;
  const GGS_outputInputActualParameterAST temp_10 = this ;
  UpEnumerator_lstringlist enumerator_12356 (temp_10.readProperty_mStructAttributeList ()) ;
  while (enumerator_12356.hasCurrentObject ()) {
    GGS_propertyMap var_propertyMap_12405 = extensionGetter_definition (var_parameterType_12216, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 251)).readProperty_propertyMap () ;
    GGS_AccessControl var_accessControl_12513 ;
    GGS_bool var_isConstant_12540 ;
    var_propertyMap_12405.method_searchKey (enumerator_12356.current_mValue (HERE), var_accessControl_12513, var_isConstant_12540, var_parameterType_12216, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 252)) ;
    extensionMethod_checkSetAccess (var_accessControl_12513, constinArgument_inAnalysisContext.readProperty_selfAvailability (), enumerator_12356.current_mValue (HERE).readProperty_location (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 258)) ;
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_isConstant_12540.boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_12356.current_mValue (HERE).readProperty_location (), GGS_string ("a constant property cannot be modified"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 260)) ;
      }
    }
    var_typeList_12280.addAssignOperation (var_parameterType_12216  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 262)) ;
    enumerator_12356.gotoNextObject () ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_12216)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_outputInputActualParameterAST temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_12216, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 267)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 267)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 267)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 268)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 269)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 266)) ;
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    const GGS_outputInputActualParameterAST temp_17 = this ;
    test_16 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_17.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas3", 272)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_outputInputActualParameterAST temp_18 = this ;
      GenericArray <FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (temp_18.readProperty_mOutputInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray19  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 273)) ;
    }
  }
  const GGS_outputInputActualParameterAST temp_20 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 276)) ;
  const GGS_outputInputActualParameterAST temp_21 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (var_parameterType_12216, var_variableCppName_12241, temp_21.readProperty_mStructAttributeList (), var_typeList_12280, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 278)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_expression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 299)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputJokerParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputJokerParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string constinArgument_inSelector,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas3", 306)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputJokerParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputJokerParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 315)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                           const GGS_lstring constinArgument_inFormalSelector,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & ioArgument_ioVariableMap,
                                                                           GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas3", 332)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputJokerParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 334)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 334)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 334)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 336)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 335)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 336)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 333)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputJokerParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 338)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_16519 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 338)) ;
        const GGS_outputInputJokerParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_16519) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_16519, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 339)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 339)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 339)) ;
      }
    }
  }
  GGS_semanticExpressionForGeneration var_expressionGeneration_17025 ;
  const GGS_outputInputJokerParameterAST temp_9 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_9.readProperty_expression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_expressionGeneration_17025, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 342)) ;
  {
  const GGS_outputInputJokerParameterAST temp_10 = this ;
  routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (constinArgument_inFormalArgumentType, var_expressionGeneration_17025.readProperty_mResultType (), temp_10.readProperty_mActualSelector ().readProperty_location (), var_expressionGeneration_17025, inCompiler  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 352)) ;
  }
  const GGS_outputInputJokerParameterAST temp_11 = this ;
  GGS_string var_cppVarName_17311 = GGS_string ("joker_").add_operation (temp_11.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 359)).getter_string (SOURCE_FILE ("actual-parameters.galgas3", 359)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 359)) ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_bool (false), var_cppVarName_17311, var_expressionGeneration_17025, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 360)) ;
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_17311, GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 370)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 366)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputSelfParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outputInputSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_outputInputSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas3", 392)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputSelfParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputSelfParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support output/input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 401)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputSelfParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                          GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("actual-parameters.galgas3", 418)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_outputInputSelfParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 420)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 420)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 420)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 422)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 421)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 422)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 419)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_outputInputSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 424)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_20474 = GGS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 424)) ;
        const GGS_outputInputSelfParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_20474) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_20474, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 425)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 425)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 425)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_20695 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas3", 428)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas3", 428)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_20695.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 429)).operator_not (SOURCE_FILE ("actual-parameters.galgas3", 429)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_outputInputSelfParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 430)) ;
        }
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_20695.readProperty_type ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_outputInputSelfParameterAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_20695.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 435)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 435)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 435)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 437)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 436)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 437)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 434)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_outputInputActualParameterForGeneration::init_21__21__21__21_ (constinArgument_inFormalArgumentType, GGS_string ("ioObject"), GGS_lstringlist::init (inCompiler COMMA_HERE), GGS_unifiedTypeMapEntryList::class_func_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 443)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 439)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_outputInputSelfParameterAST temp_16 = this ;
    GenericArray <FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mActualSelector ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 446)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualExistingVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualExistingVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                                const GGS_string constinArgument_inSelector,
                                                                                Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 470)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualExistingVariableParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualExistingVariableParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 479)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      const GGS_lstring constinArgument_inFormalSelector,
                                                                                      const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                      const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 496)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualExistingVariableParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 498)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 498)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 498)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 499)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 499)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 499)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 497)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualExistingVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 501)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_24113 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 501)) ;
        const GGS_inputActualExistingVariableParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_24113) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_24113, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 502)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 502)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 502)) ;
      }
    }
  }
  GGS_unifiedTypeMapEntry var_parameterType_24392 ;
  GGS_string var_targetVariableCppName_24417 ;
  {
  const GGS_inputActualExistingVariableParameterAST temp_9 = this ;
  GGS_string joker_24445 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_24392, var_targetVariableCppName_24417, joker_24445, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 504)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_24392)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_inputActualExistingVariableParameterAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_24392, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 513)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 513)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 513)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 514)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 514)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 514)), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 512)) ;
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    const GGS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas3", 517)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_inputActualExistingVariableParameterAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 518)) ;
    }
  }
  const GGS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 521)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_25172 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualExistingVariableParameterAST temp_18 = this ;
  UpEnumerator_lstringlist enumerator_25210 (temp_18.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_25210.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_25336 ;
    GGS_string var_nameForCheckingFormalParameterUsing_25371 ;
    {
    GGS_unifiedTypeMapEntry joker_25320 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_25210.current_mValue (HERE), joker_25320, var_targetVariableCppName_25336, var_nameForCheckingFormalParameterUsing_25371, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 525)) ;
    }
    var_poisonedVarCppNameList_25172.addAssignOperation (var_targetVariableCppName_25336, var_nameForCheckingFormalParameterUsing_25371  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 531)) ;
    enumerator_25210.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_24392, var_targetVariableCppName_24417, var_poisonedVarCppNameList_25172, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 533)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfPropertyParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfPropertyParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                            const GGS_string constinArgument_inSelector,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 560)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfPropertyParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfPropertyParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 569)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  const GGS_lstring constinArgument_inFormalSelector,
                                                                                  const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                  GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                  GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                  GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 587)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfPropertyParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 589)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 589)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 589)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 590)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 590)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 590)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 588)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualSelfPropertyParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 592)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_28174 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 592)) ;
        const GGS_inputActualSelfPropertyParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_28174) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_28174, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 593)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 593)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 593)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_28374 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas3", 596)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas3", 596)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_propertiesAreMutable (var_selfAvailable_28374.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 597)).operator_not (SOURCE_FILE ("actual-parameters.galgas3", 597)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfPropertyParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 598)) ;
        }
      }
      GGS_propertyMap var_propertyMap_28620 = extensionGetter_definition (var_selfAvailable_28374.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 600)).readProperty_propertyMap () ;
      GGS_unifiedTypeMapEntry var_parameterType_28749 ;
      const GGS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GGS_AccessControl joker_28740_2 ; // Joker input parameter
      GGS_bool joker_28740_1 ; // Joker input parameter
      var_propertyMap_28620.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_28740_2, joker_28740_1, var_parameterType_28749, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 601)) ;
      const GGS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GGS_string var_targetVariableCppName_28774 = constinArgument_inAnalysisContext.readProperty_selfObjectCppPrefixForAccessingProperty ().add_operation (GGS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 602)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas3", 603)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 603)) ;
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_28749)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_inputActualSelfPropertyParameterAST temp_16 = this ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_28749, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 607)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 607)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 607)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 608)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 608)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 608)), fixItArray17  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 606)) ;
        }
      }
      GGS__32_stringlist var_poisonedVarCppNameList_29357 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfPropertyParameterAST temp_18 = this ;
      UpEnumerator_lstringlist enumerator_29397 (temp_18.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_29397.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_29531 ;
        GGS_string var_nameForCheckingFormalParameterUsing_29568 ;
        {
        GGS_unifiedTypeMapEntry joker_29513 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_29397.current_mValue (HERE), joker_29513, var_targetVariableCppName_29531, var_nameForCheckingFormalParameterUsing_29568, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 613)) ;
        }
        var_poisonedVarCppNameList_29357.addAssignOperation (var_targetVariableCppName_29531, var_nameForCheckingFormalParameterUsing_29568  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 619)) ;
        enumerator_29397.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_parameterType_28749, var_targetVariableCppName_28774, var_poisonedVarCppNameList_29357, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 621)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfPropertyParameterAST temp_19 = this ;
    GenericArray <FixItDescription> fixItArray20 ;
    inCompiler->emitSemanticError (temp_19.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GGS_string ("'self' not available in this context"), fixItArray20  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 628)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualSelfParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualSelfParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                    const GGS_string constinArgument_inSelector,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 652)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualSelfParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 661)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualSelfParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                          GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                          const GGS_lstring constinArgument_inFormalSelector,
                                                                          const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GGS_localVarManager & ioArgument_ioVariableMap,
                                                                          GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 678)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualSelfParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 680)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 680)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 680)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 681)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 681)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 681)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 679)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualSelfParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 683)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_32491 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 683)) ;
        const GGS_inputActualSelfParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_32491) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_32491, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 684)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 684)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 684)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_selfAvailability_2E_available var_selfAvailable_32691 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas3", 687)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("actual-parameters.galgas3", 687)).isValuated ()) {
      test_9 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_9) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = extensionGetter_selfIsMutable (var_selfAvailable_32691.readProperty_selfMutability (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 688)).operator_not (SOURCE_FILE ("actual-parameters.galgas3", 688)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_inputActualSelfParameterAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mSelfLocation (), GGS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 689)) ;
        }
      }
      GGS_string var_targetVariableCppName_32915 = constinArgument_inAnalysisContext.readProperty_selfObjectCppName () ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfAvailable_32691.readProperty_type ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_inputActualSelfParameterAST temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mSelfLocation (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfAvailable_32691.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 695)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 695)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 695)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 697)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 696)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 697)), fixItArray15  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 694)) ;
        }
      }
      GGS__32_stringlist var_poisonedVarCppNameList_33390 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputActualSelfParameterAST temp_16 = this ;
      UpEnumerator_lstringlist enumerator_33430 (temp_16.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_33430.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_33564 ;
        GGS_string var_nameForCheckingFormalParameterUsing_33601 ;
        {
        GGS_unifiedTypeMapEntry joker_33546 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_33430.current_mValue (HERE), joker_33546, var_targetVariableCppName_33564, var_nameForCheckingFormalParameterUsing_33601, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 702)) ;
        }
        var_poisonedVarCppNameList_33390.addAssignOperation (var_targetVariableCppName_33564, var_nameForCheckingFormalParameterUsing_33601  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 708)) ;
        enumerator_33430.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (var_selfAvailable_32691.readProperty_type (), var_targetVariableCppName_32915, var_poisonedVarCppNameList_33390, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 710)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    const GGS_inputActualSelfParameterAST temp_17 = this ;
    GenericArray <FixItDescription> fixItArray18 ;
    inCompiler->emitSemanticError (temp_17.readProperty_mSelfLocation (), GGS_string ("'self' not available in this context"), fixItArray18  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 717)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewVariableParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewVariableParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 742)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewVariableParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewVariableParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 751)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 769)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewVariableParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 771)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 771)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 771)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 773)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 772)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 773)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 770)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualNewVariableParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 775)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_36601 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 775)) ;
        const GGS_inputActualNewVariableParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_36601) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_36601, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 776)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 776)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 776)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewVariableParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_36888 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 780)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_36888)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewVariableParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_36888, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 783)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 783)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 783)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 785)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 784)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 785)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 782)) ;
        }
      }
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_15 = this ;
  const GGS_inputActualNewVariableParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_37355 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas3", 789)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 789)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 789)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 789)).getter_string (SOURCE_FILE ("actual-parameters.galgas3", 789)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 789)) ;
  {
  const GGS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GGS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_37355, var_targetVariableCppName_37355, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 790)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37355, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 798)) ;
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas3", 802)).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_inputActualNewVariableParameterAST temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 803)) ;
    }
  }
  const GGS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 806)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_38293 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewVariableParameterAST temp_23 = this ;
  UpEnumerator_lstringlist enumerator_38331 (temp_23.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_38331.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_38457 ;
    GGS_string var_nameForCheckingFormalParameterUsing_38492 ;
    {
    GGS_unifiedTypeMapEntry joker_38441 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_38331.current_mValue (HERE), joker_38441, var_targetVariableCppName_38457, var_nameForCheckingFormalParameterUsing_38492, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 810)) ;
    }
    var_poisonedVarCppNameList_38293.addAssignOperation (var_targetVariableCppName_38457, var_nameForCheckingFormalParameterUsing_38492  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 816)) ;
    enumerator_38331.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_37355, var_poisonedVarCppNameList_38293, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 818)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputActualNewConstantParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputActualNewConstantParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 847)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewConstantParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualNewConstantParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 856)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 874)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualNewConstantParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 876)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 876)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 876)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 878)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 877)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 878)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 875)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputActualNewConstantParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 880)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_41452 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 880)) ;
        const GGS_inputActualNewConstantParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_41452) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_41452, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 881)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 881)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 881)) ;
      }
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GGS_bool (ComparisonKind::notEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_inputActualNewConstantParameterAST temp_11 = this ;
      GGS_unifiedTypeMapEntry var_parameterType_41739 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 885)) ;
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_41739)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_inputActualNewConstantParameterAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_41739, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 888)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 888)).add_operation (GGS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 888)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 889)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 889)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 889)), fixItArray14  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 887)) ;
        }
      }
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_15 = this ;
  const GGS_inputActualNewConstantParameterAST temp_16 = this ;
  GGS_string var_targetVariableCppName_42198 = GGS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("actual-parameters.galgas3", 893)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 893)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 893)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 893)).getter_string (SOURCE_FILE ("actual-parameters.galgas3", 893)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 893)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    const GGS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      const GGS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, var_targetVariableCppName_42198, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 895)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_17) {
    {
    const GGS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, var_targetVariableCppName_42198, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 902)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_localVariableDeclarationForGeneration::init_21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 910)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("actual-parameters.galgas3", 915)).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_inputActualNewConstantParameterAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GGS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 916)) ;
    }
  }
  const GGS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.plusPlusAssignOperation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 919)) ;
  GGS__32_stringlist var_poisonedVarCppNameList_43359 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_inputActualNewConstantParameterAST temp_26 = this ;
  UpEnumerator_lstringlist enumerator_43397 (temp_26.readProperty_mPoisonedVarNameList ()) ;
  while (enumerator_43397.hasCurrentObject ()) {
    GGS_string var_targetVariableCppName_43523 ;
    GGS_string var_nameForCheckingFormalParameterUsing_43558 ;
    {
    GGS_unifiedTypeMapEntry joker_43507 ; // Joker input parameter
    extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_43397.current_mValue (HERE), joker_43507, var_targetVariableCppName_43523, var_nameForCheckingFormalParameterUsing_43558, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 923)) ;
    }
    var_poisonedVarCppNameList_43359.addAssignOperation (var_targetVariableCppName_43523, var_nameForCheckingFormalParameterUsing_43558  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 929)) ;
    enumerator_43397.gotoNextObject () ;
  }
  ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputActualParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_targetVariableCppName_42198, var_poisonedVarCppNameList_43359, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 931)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputSingleJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputSingleJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                           const GGS_string constinArgument_inSelector,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 957)))) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_result.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mActualSelector ().readProperty_string ().objectCompare (constinArgument_inSelector)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputSingleJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputSingleJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mActualSelector ().readProperty_location (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 966)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 const GGS_lstring constinArgument_inFormalSelector,
                                                                                 const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 983)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputSingleJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 985)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 985)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 985)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 987)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 986)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 987)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 984)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 989)) ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string::makeEmptyString () ;
        }
        GGS_string var_s_46678 = GGS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 989)) ;
        const GGS_inputSingleJokerActualParameterAST temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_s_46678) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_46678, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 990)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 990)), fixItArray8  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 990)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_inputSingleJokerActualParameterAST temp_9 = this ;
      GGS_string var_cppVarName_46877 = GGS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 992)).getter_string (SOURCE_FILE ("actual-parameters.galgas3", 992)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 992)) ;
      GGS__32_stringlist var_poisonedVarCppNameList_47009 = GGS__32_stringlist::init (inCompiler COMMA_HERE) ;
      const GGS_inputSingleJokerActualParameterAST temp_10 = this ;
      UpEnumerator_lstringlist enumerator_47049 (temp_10.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_47049.hasCurrentObject ()) {
        GGS_string var_targetVariableCppName_47183 ;
        GGS_string var_nameForCheckingFormalParameterUsing_47220 ;
        {
        GGS_unifiedTypeMapEntry joker_47165 ; // Joker input parameter
        extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, enumerator_47049.current_mValue (HERE), joker_47165, var_targetVariableCppName_47183, var_nameForCheckingFormalParameterUsing_47220, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 996)) ;
        }
        var_poisonedVarCppNameList_47009.addAssignOperation (var_targetVariableCppName_47183, var_nameForCheckingFormalParameterUsing_47220  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1002)) ;
        enumerator_47049.gotoNextObject () ;
      }
      ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_46877, var_poisonedVarCppNameList_47009, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1004)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@inputJokerActualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_inputJokerActualParameterAST::getter_isCompatibleWith (const GGS_formalArgumentPassingModeAST constinArgument_inFormalPassingMode,
                                                                     const GGS_string /* constinArgument_inSelector */,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (ComparisonKind::equal, constinArgument_inFormalPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 1031)))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerActualParameterAST enterInActualOutputParameterList'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterInActualOutputParameterList (GGS_actualOutputArgumentList & /* ioArgument_ioActualOutputArgumentList */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerActualParameterAST temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mQualifierLocation (), GGS_string ("a getter does not support input parameter"), fixItArray1  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1037)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GGS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                           const GGS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GGS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GGS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GGS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GGS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GGS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("actual-parameters.galgas3", 1053)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerActualParameterAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GGS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1055)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1055)).add_operation (GGS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1055)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1056)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1056)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1056)), fixItArray2  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1054)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_inputJokerActualParameterAST temp_3 = this ;
    const GGS_inputJokerActualParameterAST temp_4 = this ;
    GGS_string var_cppVarName_50187 = GGS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1058)).getter_string (SOURCE_FILE ("actual-parameters.galgas3", 1058)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1058)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1058)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("actual-parameters.galgas3", 1058)), inCompiler COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1058)) ;
    ioArgument_ioActualParameterListForGeneration.addAssignOperation (GGS_inputJokerParameterForGeneration::init_21__21__21_ (constinArgument_inFormalArgumentType, var_cppVarName_50187, GGS__32_stringlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("actual-parameters.galgas3", 1060)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GGS_galgasGUIComponentListAST constinArgument_inGuiComponentListAST,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GGS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_galgasGUIComponentListAST enumerator_13896 (constinArgument_inGuiComponentListAST) ;
  while (enumerator_13896.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_13896.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 416)) ;
    }
    enumerator_13896.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GGS_galgasGUIComponentListAST_2E_element constinArgument_inGUIComponentAST,
                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                       GGS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GGS_string ("cocoa"))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GGS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 430)) ;
    }
  }
  GGS_guiAnalysisContext var_context_14636 = GGS_guiAnalysisContext::init (inCompiler COMMA_HERE) ;
  var_context_14636.mProperty_mProjectIndexingDescriptorList = constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () ;
  UpEnumerator_lstringlist enumerator_14789 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList ()) ;
  while (enumerator_14789.hasCurrentObject ()) {
    GGS_bool joker_14933_5 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14933_4 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14933_3 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14933_2 ; // Joker input parameter
    GGS_commandLineOptionMap joker_14933_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14789.current_mValue (HERE), joker_14933_5, joker_14933_4, joker_14933_3, joker_14933_2, joker_14933_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 437)) ;
    var_context_14636.mProperty_mImportedOptionComponentList.addAssignOperation (enumerator_14789.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 441)) ;
    enumerator_14789.gotoNextObject () ;
  }
  GGS_bool var_runOptionDefined_15041 = GGS_bool (false) ;
  UpEnumerator_guiSimpleAttributeListAST enumerator_15078 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList ()) ;
  while (enumerator_15078.hasCurrentObject ()) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, enumerator_15078.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("run"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = var_runOptionDefined_15041.boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_15078.current_mKey (HERE).readProperty_location (), GGS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 448)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (ComparisonKind::equal, enumerator_15078.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_15078.current_mValue (HERE).readProperty_location (), GGS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 450)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_context_14636.mProperty_mBuildRunOption = enumerator_15078.current_mValue (HERE).readProperty_string () ;
            var_runOptionDefined_15041 = GGS_bool (true) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::equal, enumerator_15078.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("nibAndMainClass"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          UpEnumerator_stringlist enumerator_15570 (enumerator_15078.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GGS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas3", 456))) ;
          while (enumerator_15570.hasCurrentObject ()) {
            var_context_14636.mProperty_mNibAndClassList.addAssignOperation (enumerator_15570.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 457)) ;
            enumerator_15570.gotoNextObject () ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_15078.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_15078.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 460)).add_operation (GGS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 460)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 460)) ;
      }
    }
    enumerator_15078.gotoNextObject () ;
  }
  UpEnumerator_withLexiqueListAST enumerator_15822 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList ()) ;
  GGS_uint index_15777 (uint32_t (0)) ;
  while (enumerator_15822.hasCurrentObject ()) {
    GGS_terminalMap var_terminalMap_16040 ;
    GGS_lexicalStyleListAST var_lexicalStyleListAST_16073 ;
    GGS_bool joker_16013 ; // Joker input parameter
    GGS_indexingListAST joker_16058_3 ; // Joker input parameter
    GGS_terminalDeclarationListAST joker_16058_2 ; // Joker input parameter
    GGS_lexicalAttributeListAST joker_16058_1 ; // Joker input parameter
    GGS_lexicalListDeclarationListAST joker_16099 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15822.current_mLexiqueFileName (HERE), joker_16013, var_terminalMap_16040, joker_16058_3, joker_16058_2, joker_16058_1, var_lexicalStyleListAST_16073, joker_16099, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 466)) ;
    GGS_stringset var_terminalSymbolSet_16150 = var_terminalMap_16040.getter_keySet (inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 475)) ;
    UpEnumerator_guiLabelListAST enumerator_16235 (enumerator_15822.current_mLabels (HERE)) ;
    while (enumerator_16235.hasCurrentObject ()) {
      UpEnumerator_terminalLabelListAST enumerator_16272 (enumerator_16235.current_mTerminalList (HERE)) ;
      while (enumerator_16272.hasCurrentObject ()) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_terminalSymbolSet_16150.getter_hasKey (enumerator_16272.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas3", 479)).operator_not (SOURCE_FILE ("guiCompilation.galgas3", 479)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_16272.current_mTerminal (HERE).readProperty_location (), GGS_string ("the '$").add_operation (enumerator_16272.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 480)).add_operation (GGS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 481)).add_operation (enumerator_15822.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 482)).add_operation (GGS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 483)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 480)) ;
          }
        }
        enumerator_16272.gotoNextObject () ;
      }
      enumerator_16235.gotoNextObject () ;
    }
    GGS_textMacroList var_textMacroList_16630 = GGS_textMacroList::init (inCompiler COMMA_HERE) ;
    UpEnumerator_guiCompoundAttributeListAST enumerator_16679 (enumerator_15822.current_mCompoundAttributes (HERE)) ;
    while (enumerator_16679.hasCurrentObject ()) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_16679.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("textMacro"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_16679.current_mKey (HERE).readProperty_location (), GGS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 493)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        var_textMacroList_16630.addAssignOperation (enumerator_16679.current_mAttributeName (HERE).readProperty_string (), enumerator_16679.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 495)) ;
      }
      enumerator_16679.gotoNextObject () ;
    }
    GGS_bool var_hasAssociatedExtension_16969 = GGS_bool (false) ;
    GGS_bool var_hasTabViewTitle_17014 = GGS_bool (false) ;
    GGS_bool var_hasBlockComment_17052 = GGS_bool (false) ;
    GGS_string var_tabViewTitle_17092 = GGS_string::makeEmptyString () ;
    GGS_string var_blockComment_17126 = GGS_string::makeEmptyString () ;
    UpEnumerator_guiSimpleAttributeListAST enumerator_17158 (enumerator_15822.current_mSimpleAttributes (HERE)) ;
    while (enumerator_17158.hasCurrentObject ()) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::equal, enumerator_17158.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("fileExtension"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          {
          var_context_14636.mProperty_mExtensionMap.setter_insertKey (enumerator_17158.current_mValue (HERE), enumerator_15822.current_mLexiqueFileName (HERE).readProperty_string (), index_15777, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 506)) ;
          }
          var_hasAssociatedExtension_16969 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = GGS_bool (ComparisonKind::equal, enumerator_17158.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("title"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              test_15 = var_hasTabViewTitle_17014.boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                GenericArray <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_17158.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17158.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 510)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 510)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 510)) ;
              }
            }
            var_hasTabViewTitle_17014 = GGS_bool (true) ;
            var_tabViewTitle_17092 = enumerator_17158.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_14) {
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = GGS_bool (ComparisonKind::equal, enumerator_17158.current_mKey (HERE).readProperty_string ().objectCompare (GGS_string ("blockComment"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = var_hasBlockComment_17052.boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  GenericArray <FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_17158.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17158.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 516)).add_operation (GGS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 516)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 516)) ;
                }
              }
              var_hasBlockComment_17052 = GGS_bool (true) ;
              var_blockComment_17126 = enumerator_17158.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GenericArray <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_17158.current_mKey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_17158.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 521)).add_operation (GGS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 521)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 521)) ;
          }
        }
      }
      enumerator_17158.gotoNextObject () ;
    }
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_16969.operator_not (SOURCE_FILE ("guiCompilation.galgas3", 525)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15822.current_mLexiqueFileName (HERE).readProperty_location (), GGS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 526)) ;
      }
    }
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      test_23 = var_hasTabViewTitle_17014.operator_not (SOURCE_FILE ("guiCompilation.galgas3", 529)).boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_15822.current_mLexiqueFileName (HERE).readProperty_location (), GGS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 530)) ;
      }
    }
    var_context_14636.mProperty_mWithLexiqueList.addAssignOperation (enumerator_15822.current_mLexiqueFileName (HERE).readProperty_string (), index_15777, var_blockComment_17126, var_tabViewTitle_17092, var_textMacroList_16630, enumerator_15822.current_mLabels (HERE), var_lexicalStyleListAST_16073  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 533)) ;
    enumerator_15822.gotoNextObject () ;
    index_15777.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 464)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_14636, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 543)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&swift'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26_swift (const GGS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                      const GGS_string constinArgument_inOutputDirectory,
                                                                      const GGS_bool constinArgument_inQuietOutputByDefault,
                                                                      GGS_stringlist & ioArgument_ioSwiftAllProductFileList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_optionComponentMapForGeneration enumerator_19273 (constinArgument_inOptionComponentMapForGeneration) ;
  while (enumerator_19273.hasCurrentObject ()) {
    GGS_string var_swiftuiFileName_19995 = GGS_string ("gui-swiftui-").add_operation (enumerator_19273.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 576)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 576)) ;
    ioArgument_ioSwiftAllProductFileList.addAssignOperation (var_swiftuiFileName_19995  COMMA_SOURCE_FILE ("guiCompilation.galgas3", 577)) ;
    GGS_string var_swiftui_5F_string_20112 = GGS_string (filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (inCompiler, enumerator_19273.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas3", 578))) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftuiFileName_19995, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_swiftui_5F_string_20112, GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas3", 582)) ;
    }
    enumerator_19273.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swiftui_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_guiGenerationTemplates_swiftui_5F_gui_5F_implementation (Compiler * /* inCompiler */,
                                                                                        const GGS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const GGS_bool & /* in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport SwiftUI\nimport UniformTypeIdentifiers\n\n//--------------------------------------------------------------------------------------------------\n\nextension UTType {\n") ;
  GGS_uint index_212_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_212 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_212.hasCurrentObject ()) {
      result.appendString ("  nonisolated static let ") ;
      result.appendString (enumerator_212.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" = UTType (exportedAs: Bundle.main.bundleIdentifier! + \".") ;
      result.appendString (enumerator_212.current_lkey (HERE).readProperty_string ().getter_lowercased (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("\")\n") ;
      enumerator_212.gotoNextObject () ;
      index_212_.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nextension ProjectDocument {\n  static let readableContentTypes : [UTType] = [") ;
  GGS_uint index_591_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_591 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_591.hasCurrentObject ()) {
      result.appendString (".") ;
      result.appendString (enumerator_591.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 18)).stringValue ()) ;
      enumerator_591.gotoNextObject () ;
      if (enumerator_591.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_591_.increment () ;
    }
  }
  result.appendString ("]\n}\n\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nlet projectFileExtensions = Set ([") ;
  GGS_uint index_969_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_969 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    while (enumerator_969.hasCurrentObject ()) {
      result.appendString (enumerator_969.current_lkey (HERE).readProperty_string ().getter_lowercased (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 30)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 30)).stringValue ()) ;
      enumerator_969.gotoNextObject () ;
      if (enumerator_969.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_969_.increment () ;
    }
  }
  result.appendString ("])\n\n//--------------------------------------------------------------------------------------------------\n//   Scanner for a given extension\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner\? {\n  var result : AbstractScanner\? = nil\n  let fileExtension = inExtension.lowercased ()\n") ;
  GGS_uint index_1538_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    UpEnumerator_extensionMap enumerator_1538 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ()) ;
    const bool nonEmpty_enumerator_1538 = enumerator_1538.hasCurrentObject () ;
    if (nonEmpty_enumerator_1538) {
      result.appendString ("  if") ;
    }
    while (enumerator_1538.hasCurrentObject ()) {
      result.appendString (" fileExtension == ") ;
      result.appendString (enumerator_1538.current_lkey (HERE).readProperty_string ().getter_lowercased (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 44)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (" {\n    result = ScannerFor_") ;
      result.appendString (enumerator_1538.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_1538.gotoNextObject () ;
      if (enumerator_1538.hasCurrentObject ()) {
        result.appendString ("  }else if") ;
      }
      index_1538_.increment () ;
    }
    if (nonEmpty_enumerator_1538) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n// Setting View\n//--------------------------------------------------------------------------------------------------\n\nstruct SettingsView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  enum SidebarItem {\n    case commandLineOptions\n") ;
  GGS_uint index_2224_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_2224 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_2224.hasCurrentObject ()) {
      result.appendString ("    case ") ;
      result.appendString (enumerator_2224.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2224.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 63)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2224.gotoNextObject () ;
      index_2224_.increment () ;
    }
  }
  result.appendString ("    case allocationDebugView\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @State private var mSelection : SidebarItem = .commandLineOptions\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    NavigationSplitView {\n      List(selection: self.$mSelection) {\n        Text (\"Options\").tag (SidebarItem.commandLineOptions)\n\n") ;
  GGS_uint index_2849_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_2849 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_2849.hasCurrentObject ()) {
      result.appendString ("        Text (\"") ;
      result.appendString (enumerator_2849.current_mTitle (HERE).stringValue ()) ;
      result.appendString ("\").tag (SidebarItem.") ;
      result.appendString (enumerator_2849.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2849.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 79)).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_2849.gotoNextObject () ;
      index_2849_.increment () ;
    }
  }
  result.appendString ("        Text (\"Allocation Debug\").tag (SidebarItem.allocationDebugView)\n      }\n      .toolbar (removing: .sidebarToggle)\n    } detail: {\n      switch self.mSelection {\n        case .commandLineOptions : OptionView ()\n") ;
  GGS_uint index_3242_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_3242 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_3242.hasCurrentObject ()) {
      result.appendString ("        case .") ;
      result.appendString (enumerator_3242.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3242.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 88)).stringValue ()) ;
      result.appendString (" : SettingViewFor_") ;
      result.appendString (enumerator_3242.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      enumerator_3242.gotoNextObject () ;
      index_3242_.increment () ;
    }
  }
  result.appendString ("        case .allocationDebugView : AllocationDebugView ()\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n\n") ;
  GGS_uint index_3663_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    UpEnumerator_importedLexiqueList enumerator_3663 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ()) ;
    while (enumerator_3663.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//   Popup list data for '") ;
      result.appendString (enumerator_3663.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("' lexique\n//--------------------------------------------------------------------------------------------------\n\nlet gPopUpData_") ;
      result.appendString (enumerator_3663.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : [[UInt16]] = [\n") ;
      GGS_uint index_4051_ (0) ;
      if (enumerator_3663.current_mLabels (HERE).isValid ()) {
        UpEnumerator_guiLabelListAST enumerator_4051 (enumerator_3663.current_mLabels (HERE)) ;
        while (enumerator_4051.hasCurrentObject ()) {
          result.appendString ("  [") ;
          result.appendString (enumerator_4051.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 107)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GGS_uint index_4200_ (0) ;
          if (enumerator_4051.current_mTerminalList (HERE).isValid ()) {
            UpEnumerator_terminalLabelListAST enumerator_4200 (enumerator_4051.current_mTerminalList (HERE)) ;
            while (enumerator_4200.hasCurrentObject ()) {
              result.appendString ("    ") ;
              result.appendString (enumerator_3663.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_4200.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 109)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_4200.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 109)).stringValue ()) ;
              enumerator_4200.gotoNextObject () ;
              if (enumerator_4200.hasCurrentObject ()) {
                result.appendString (",\n") ;
              }
              index_4200_.increment () ;
            }
          }
          result.appendString ("\n  ]") ;
          enumerator_4051.gotoNextObject () ;
          if (enumerator_4051.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_4051_.increment () ;
        }
      }
      result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//   Block Comment for '") ;
      result.appendString (enumerator_3663.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("' lexique\n//--------------------------------------------------------------------------------------------------\n\nlet gLineComment_") ;
      result.appendString (enumerator_3663.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : String\? = ") ;
      const GalgasBool test_0 = GGS_bool (ComparisonKind::equal, enumerator_3663.current_mBlockComment (HERE).getter_count (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 122)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString (enumerator_3663.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation-swiftui.swift.galgasTemplate", 122)).stringValue ()) ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("\n\n") ;
      enumerator_3663.gotoNextObject () ;
      index_3663_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonterminalCallInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                                     const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                                     GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                     GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_nonTerminalSymbolIndex_4840 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_4863 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4840, joker_4863, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 94)) ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_nonTerminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mNonterminalName (), var_nonTerminalSymbolIndex_4840, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 95)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonterminalCallInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalCallInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                       const GGS_terminalMap /* constinArgument_inTerminalMap */,
                                                                       const GGS_string /* constinArgument_inLexiqueName */,
                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GGS_string /* constinArgument_inComponentName */,
                                                                       const GGS_stringset /* constinArgument_inIndexNameSet */,
                                                                       GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                       GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalLabelMap var_labelMap_6312 ;
  const GGS_nonterminalCallInstruction temp_0 = this ;
  constinArgument_inNonterminalMap.method_searchKey (temp_0.readProperty_mNonterminalName (), var_labelMap_6312, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 117)) ;
  GGS_formalParameterSignature var_signature_6356 ;
  GGS_formalParameterListForGeneration joker_6402 ; // Joker input parameter
  GGS_location joker_6416 ; // Joker input parameter
  var_labelMap_6312.method_searchKey (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-non-terminal.galgas3", 119)), joker_6402, var_signature_6356, joker_6416, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 119)) ;
  GGS_actualParameterListForGeneration var_actualParameterListForGeneration_6862 ;
  const GGS_nonterminalCallInstruction temp_1 = this ;
  const GGS_nonterminalCallInstruction temp_2 = this ;
  const GGS_nonterminalCallInstruction temp_3 = this ;
  extensionMethod_analyzeRoutineArguments (temp_1.readProperty_mActualParameterList (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_2.readProperty_mNonterminalName (), GGS_string ("'<").add_operation (temp_3.readProperty_mNonterminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 127)).add_operation (GGS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 127)), var_signature_6356, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration_6862, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 121)) ;
  const GGS_nonterminalCallInstruction temp_4 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 134)) ;
  const GGS_nonterminalCallInstruction temp_5 = this ;
  const GGS_nonterminalCallInstruction temp_6 = this ;
  const GGS_nonterminalCallInstruction temp_7 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mNonterminalName ().readProperty_string (), GGS_string::makeEmptyString (), var_actualParameterListForGeneration_6862, temp_7.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonterminalInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                             GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_nonterminalInstructionForGeneration::init_21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mNonterminalName (), constinArgument_inPosfix, GGS_actualParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 173)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@nonterminalInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_nonterminalInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_nonterminalInstructionForGeneration var_si_9178 (dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9178.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_nonterminalInstructionForGeneration temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mNonterminalName ().objectCompare (var_si_9178.readProperty_mNonterminalName ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas3", 191)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_nonterminalInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9178.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_3.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 193)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 193)), fixItArray4  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 192)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_9521 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9521.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_nonterminalInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_9521.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (temp_6.readProperty_mNonterminalName (), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 197)).add_operation (GGS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 197)), fixItArray7  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 196)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_nonterminalInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 200)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-non-terminal.galgas3", 203)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_nonterminalInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 204)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@nonterminalInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                           GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GGS_string & ioArgument_ioGeneratedCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist var_parameterCppNameList_10595 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_jokerParametersToReleaseList_10639 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_inputVariableList_10691 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  const GGS_nonterminalInstructionForGeneration temp_0 = this ;
  UpEnumerator_actualParameterListForGeneration enumerator_10733 (temp_0.readProperty_mActualParameterList ()) ;
  while (enumerator_10733.hasCurrentObject ()) {
    GGS_string var_parameterCppName_11026 ;
    callExtensionMethod_generateActualParameter ((cPtr_actualParameterForGeneration *) enumerator_10733.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList_10639, var_inputVariableList_10691, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName_11026, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 223)) ;
    var_parameterCppNameList_10595.addAssignOperation (var_parameterCppName_11026  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 232)) ;
    enumerator_10733.gotoNextObject () ;
  }
  const GGS_nonterminalInstructionForGeneration temp_1 = this ;
  GGS_string var_sdtResultVarName_11134 = GGS_string ("syntaxDirectedTranslationResult_").add_operation (temp_1.readProperty_mInstructionLocation ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 235)).getter_string (SOURCE_FILE ("instruction-non-terminal.galgas3", 235)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 235)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("String ").add_operation (var_sdtResultVarName_11134, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 237)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 237)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 237)) ;
    }
  }
  const GGS_nonterminalInstructionForGeneration temp_3 = this ;
  const GGS_nonterminalInstructionForGeneration temp_4 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("nt_").add_operation (temp_3.readProperty_mNonterminalName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas3", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 239)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 239)).add_operation (temp_4.readProperty_mLabelName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-non-terminal.galgas3", 239)), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 239)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 239)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 239)) ;
  UpEnumerator_stringlist enumerator_11493 (var_parameterCppNameList_10595) ;
  while (enumerator_11493.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_11493.current_mValue (HERE).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 241)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 241)) ;
    enumerator_11493.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioGeneratedCode.plusAssignOperation(var_sdtResultVarName_11134.add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 244)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 244)) ;
    }
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 246)) COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 246)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 247)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 247)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 247)) ;
  const GGS_nonterminalInstructionForGeneration temp_6 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_6.readProperty_mGrammarInstructionSyntaxDirectedTranslationResult ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName_11134, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 248)) ;
  UpEnumerator_stringlist enumerator_12031 (var_jokerParametersToReleaseList_10639) ;
  while (enumerator_12031.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_12031.current_mValue (HERE).add_operation (GGS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-non-terminal.galgas3", 256)) ;
    enumerator_12031.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionAST transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                                      const GGS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                                      GGS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                                      GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_terminalSymbolIndex_7234 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_terminalCheckInstructionAST temp_1 = this ;
    const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element var_entry_7265 = ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioActuallyUsedTerminalSymbolMap.readSubscript__3F_ (temp_1.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      var_terminalSymbolIndex_7234 = var_entry_7265.readProperty_mTerminalIndex () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_terminalSymbolIndex_7234 = ioArgument_ioActuallyUsedTerminalSymbolMap.getter_count (SOURCE_FILE ("instruction-terminal.galgas3", 158)) ;
    {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    ioArgument_ioActuallyUsedTerminalSymbolMap.setter_insertKey (temp_2.readProperty_mTerminalName (), var_terminalSymbolIndex_7234, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 159)) ;
    }
  }
  const GGS_terminalCheckInstructionAST temp_3 = this ;
  const GGS_terminalCheckInstructionAST temp_4 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_terminalInstructionForGrammarAnalysis::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTerminalName (), var_terminalSymbolIndex_7234, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 161)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                        GGS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                        const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                        const GGS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                        const GGS_string /* constinArgument_inComponentName */,
                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        GGS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSentValueList var_sentAttributeList_8567 ;
  const GGS_terminalCheckInstructionAST temp_0 = this ;
  constinArgument_inTerminalMap.method_searchKey (temp_0.readProperty_mTerminalName (), var_sentAttributeList_8567, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 184)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_terminalCheckInstructionAST temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas3", 186)).objectCompare (var_sentAttributeList_8567.getter_count (SOURCE_FILE ("instruction-terminal.galgas3", 186)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_terminalCheckInstructionAST temp_3 = this ;
      const GGS_terminalCheckInstructionAST temp_4 = this ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_sentAttributeList_8567.getter_count (SOURCE_FILE ("instruction-terminal.galgas3", 189)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_terminalCheckInstructionAST temp_7 = this ;
      const GGS_terminalCheckInstructionAST temp_8 = this ;
      GGS_string temp_9 ;
      const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas3", 192)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTerminalName ().readProperty_location (), GGS_string ("naming the '$").add_operation (temp_4.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 188)).add_operation (GGS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 188)).add_operation (var_sentAttributeList_8567.getter_count (SOURCE_FILE ("instruction-terminal.galgas3", 188)).getter_string (SOURCE_FILE ("instruction-terminal.galgas3", 188)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 188)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 188)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 189)).add_operation (GGS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 189)).add_operation (temp_7.readProperty_mActualInputParameterList ().getter_count (SOURCE_FILE ("instruction-terminal.galgas3", 191)).getter_string (SOURCE_FILE ("instruction-terminal.galgas3", 191)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 190)).add_operation (GGS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 191)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 191)), fixItArray11  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 187)) ;
    }
  }
  GGS_terminalCheckAssignementList var_terminalCheckAssignementList_9105 = GGS_terminalCheckAssignementList::init (inCompiler COMMA_HERE) ;
  const GGS_terminalCheckInstructionAST temp_12 = this ;
  UpEnumerator_actualInputParameterListAST enumerator_9194 (temp_12.readProperty_mActualInputParameterList ()) ;
  UpEnumerator_lexicalSentValueList enumerator_9292 (var_sentAttributeList_8567) ;
  while (enumerator_9194.hasCurrentObject () && enumerator_9292.hasCurrentObject ()) {
    callExtensionMethod_analyzeInputParameter ((cPtr_abstractInputParameter *) enumerator_9194.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, enumerator_9292.current_mLexicalType (HERE), enumerator_9292.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList_9105, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 198)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_9292.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_9194.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        GGS_string temp_14 ;
        const GalgasBool test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_9292.current_mLexicalFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          temp_14 = GGS_string (":") ;
        }else if (GalgasBool::boolFalse == test_15) {
          temp_14 = GGS_string::makeEmptyString () ;
        }
        GenericArray <FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_9194.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the actual selector should be '\?").add_operation (enumerator_9292.current_mLexicalFormalSelector (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 207)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 207)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 207)), fixItArray16  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 207)) ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticWarning (enumerator_9292.current_mLexicalFormalSelector (HERE).readProperty_location (), GGS_string ("the formal selector is declared here"), fixItArray17  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 208)) ;
      }
    }
    enumerator_9194.gotoNextObject () ;
    enumerator_9292.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_18 = this ;
  UpEnumerator__32_lstringlist enumerator_9901 (temp_18.readProperty_mIndexingKeyList ()) ;
  while (enumerator_9901.hasCurrentObject ()) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = constinArgument_inIndexNameSet.getter_hasKey (enumerator_9901.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 213)).operator_not (SOURCE_FILE ("instruction-terminal.galgas3", 213)).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GenericArray <FixItDescription> fixItArray20 ;
        appendFixItActions (fixItArray20, EnumFixItKind::fixItReplace, constinArgument_inIndexNameSet) ;
        inCompiler->emitSemanticError (enumerator_9901.current_mValue_30_ (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_9901.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 214)).add_operation (GGS_string ("' indexing name is not declared by the lexique"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 214)), fixItArray20  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 214)) ;
      }
    }
    enumerator_9901.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionAST temp_21 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_21.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 218)) ;
  const GGS_terminalCheckInstructionAST temp_22 = this ;
  callExtensionMethod_analyzeSDT ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_22.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 224)) ;
  const GGS_terminalCheckInstructionAST temp_23 = this ;
  const GGS_terminalCheckInstructionAST temp_24 = this ;
  const GGS_terminalCheckInstructionAST temp_25 = this ;
  const GGS_terminalCheckInstructionAST temp_26 = this ;
  const GGS_terminalCheckInstructionAST temp_27 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_23.readProperty_mInstructionLocation (), temp_24.readProperty_mTerminalName (), constinArgument_inLexiqueName, var_terminalCheckAssignementList_9105, temp_25.readProperty_mIndexingKeyList (), temp_26.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (), temp_27.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 231)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::method_tikzNodeForSyntaxInstruction (GGS_rowList & ioArgument_ioRowList,
                                                                                      const GGS_uint constinArgument_inRow,
                                                                                      GGS_uint & ioArgument_ioColumn,
                                                                                      GGS_string & ioArgument_ioCurrentNode,
                                                                                      GGS_string & ioArgument_ioArrowShape,
                                                                                      GGS_string & ioArgument_ioArrows,
                                                                                      GGS_uint & /* ioArgument_ioMaxUsedRowIndex */,
                                                                                      const GGS_bool /* constinArgument_inDebug */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_nodeName_12362 ;
  {
  const GGS_terminalInstructionForGrammarAnalysis temp_0 = this ;
  extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[terminal] {").add_operation (function_escapeForTex (temp_0.readProperty_mTerminalSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 265)).add_operation (GGS_string ("}"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 265)), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_12362, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 264)) ;
  }
  ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 270)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 270)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 270)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 270)).add_operation (var_nodeName_12362, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 270)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 270)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 270)) ;
  ioArgument_ioCurrentNode = var_nodeName_12362 ;
  ioArgument_ioArrowShape = GGS_string ("--") ;
  ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 273)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalInstructionForGrammarAnalysis::getter_isLinear (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_appendSyntaxSignature (const GGS_string /* constinArgument_inPosfix */,
                                                                               GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_terminalCheckInstructionForGeneration::init_21__21__21__21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTerminalName (), temp_2.readProperty_mLexiqueIdentifier (), GGS_terminalCheckAssignementList::init (inCompiler COMMA_HERE), temp_3.readProperty_mIndexingKeyList (), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 306)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@terminalCheckInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_terminalCheckInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_terminalCheckInstructionForGeneration var_si_14792 (dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_14792.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_terminalCheckInstructionForGeneration temp_1 = this ;
      result_result = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTerminalName ().readProperty_string ().objectCompare (var_si_14792.readProperty_mTerminalName ().readProperty_string ())) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas3", 325)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_14792.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 327)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 327)), fixItArray4  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 326)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_syntaxInstructionForGeneration var_si_15134 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_15134.ptr ()) {
        test_5 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_5) {
        const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_si_15134.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (temp_6.readProperty_mTerminalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 331)).add_operation (GGS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 331)), fixItArray7  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 330)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 334)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = result_result.operator_not (SOURCE_FILE ("instruction-terminal.galgas3", 337)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_terminalCheckInstructionForGeneration temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray12  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 338)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@terminalCheckInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::method_generateInstruction (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_terminalCheckInstructionForGeneration temp_0 = this ;
  UpEnumerator_terminalCheckAssignementList enumerator_16302 (temp_0.readProperty_mTerminalCheckAssignementList ()) ;
  while (enumerator_16302.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_16302.current_mTypeName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (enumerator_16302.current_mTypeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas3", 355)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 355)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 355)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 355)) ;
      }
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16302.current_mTargetVarCppName (HERE).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 358)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 358)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 358)).add_operation (GGS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 358)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 358)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16302.current_mSourceLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas3", 359)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 359)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" () ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 360)) ;
    enumerator_16302.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_2 = this ;
  UpEnumerator__32_lstringlist enumerator_16735 (temp_2.readProperty_mIndexingKeyList ()) ;
  while (enumerator_16735.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 364)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 364)) ;
    const GGS_terminalCheckInstructionForGeneration temp_3 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("->enterIndexing (Lexique_").add_operation (temp_3.readProperty_mLexiqueIdentifier (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 365)).add_operation (GGS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 365)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 365)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(enumerator_16735.current_mValue_30_ (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas3", 366)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 366)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (", ").add_operation (enumerator_16735.current_mValue_31_ (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("instruction-terminal.galgas3", 367)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 367)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 367)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 367)) ;
    enumerator_16735.gotoNextObject () ;
  }
  const GGS_terminalCheckInstructionForGeneration temp_4 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_4.readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->separatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 370)) ;
  const GGS_terminalCheckInstructionForGeneration temp_5 = this ;
  callExtensionMethod_generateCode ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) temp_5.readProperty_mGrammarInstructionSyntaxDirectedTranslationToken ().ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GGS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 376)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 383)) COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 383)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 384)).add_operation (GGS_string ("->acceptTerminal (Lexique_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 384)) ;
  const GGS_terminalCheckInstructionForGeneration temp_6 = this ;
  const GGS_terminalCheckInstructionForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_6.readProperty_mLexiqueIdentifier ().add_operation (GGS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 385)).add_operation (temp_7.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-terminal.galgas3", 385)), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 385)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 385)) ;
  const GGS_terminalCheckInstructionForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(extensionGetter_commaSourceFile (temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 386)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 386)), inCompiler  COMMA_SOURCE_FILE ("instruction-terminal.galgas3", 386)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addedNonTerminalIndex_4481 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 103)) ;
  GGS_branchListForGrammarAnalysis var_selectBranchList_4567 = GGS_branchListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_4649 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_4649.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_4689 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_4649.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_4689, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 108)) ;
    }
    var_selectBranchList_4567.addAssignOperation (var_syntaxInstructionList_4689  COMMA_SOURCE_FILE ("instruction-select.galgas3", 115)) ;
    enumerator_4649.gotoNextObject () ;
  }
  const GGS_selectInstruction temp_1 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_selectInstructionForGrammarAnalysis::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_selectBranchList_4567, var_addedNonTerminalIndex_4481, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas3", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                              const GGS_string constinArgument_inLexiqueName,
                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GGS_string constinArgument_inComponentName,
                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_choiceIndex_6066 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 144)) ;
  {
  extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 146)) ;
  }
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_6216 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstruction temp_0 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_6338 (temp_0.readProperty_mSelectBranchList ()) ;
  while (enumerator_6338.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_instructionList_6790 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_6338.current_mSyntaxInstructionList (HERE), enumerator_6338.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_6790, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 150)) ;
    }
    var_listOfSemanticInstructionListForGeneration_6216.addAssignOperation (var_instructionList_6790, enumerator_6338.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas3", 167)) ;
    enumerator_6338.gotoNextObject () ;
  }
  {
  const GGS_selectInstruction temp_1 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_1.readProperty_mEndOf_5F_select_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 170)) ;
  }
  const GGS_selectInstruction temp_2 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6066, var_listOfSemanticInstructionListForGeneration_6216, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas3", 171)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_8064 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_selectInstructionForGeneration temp_0 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_8180 (temp_0.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_8180.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_8064.addAssignOperation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_8180.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 199)), enumerator_8180.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas3", 198)) ;
    enumerator_8180.gotoNextObject () ;
  }
  const GGS_selectInstructionForGeneration temp_1 = this ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  const GGS_selectInstructionForGeneration temp_3 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_selectInstructionForGeneration::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mSyntaxComponentName (), temp_3.readProperty_mChoiceIndex (), var_listOfSemanticInstructionListForGeneration_8064, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-select.galgas3", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_selectInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_selectInstructionForGeneration var_si_9020 (dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_9020.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_bool (true) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_selectInstructionForGeneration temp_2 = this ;
        test_1 = result_result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas3", 220)).objectCompare (var_si_9020.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas3", 220)))) COMMA_SOURCE_FILE ("instruction-select.galgas3", 220)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_selectInstructionForGeneration temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (var_si_9020.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas3", 223)).getter_string (SOURCE_FILE ("instruction-select.galgas3", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 222)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 223)).add_operation (var_si_9020.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-select.galgas3", 225)).getter_string (SOURCE_FILE ("instruction-select.galgas3", 225)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 224)), fixItArray4  COMMA_SOURCE_FILE ("instruction-select.galgas3", 221)) ;
          result_result = GGS_bool (false) ;
        }
      }
      const GGS_selectInstructionForGeneration temp_5 = this ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9610 (temp_5.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9697 (var_si_9020.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_6 = result_result.isValidAndTrue () ;
      if (enumerator_9610.hasCurrentObject () && enumerator_9697.hasCurrentObject () && bool_6) {
        while (enumerator_9610.hasCurrentObject () && enumerator_9697.hasCurrentObject () && bool_6) {
          result_result = function_compareSyntaxSignature (enumerator_9610.current_mInstructionList (HERE), enumerator_9697.current_mInstructionList (HERE), enumerator_9697.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 230)) ;
          enumerator_9610.gotoNextObject () ;
          enumerator_9697.gotoNextObject () ;
          if (enumerator_9610.hasCurrentObject () && enumerator_9697.hasCurrentObject ()) {
            bool_6 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_syntaxInstructionForGeneration var_si_9924 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_9924.ptr ()) {
        test_7 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (var_si_9924.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction"), fixItArray8  COMMA_SOURCE_FILE ("instruction-select.galgas3", 233)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      const GGS_selectInstructionForGeneration temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray10  COMMA_SOURCE_FILE ("instruction-select.galgas3", 237)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = result_result.operator_not (SOURCE_FILE ("instruction-select.galgas3", 240)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_selectInstructionForGeneration temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray13  COMMA_SOURCE_FILE ("instruction-select.galgas3", 241)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 255)) COMMA_SOURCE_FILE ("instruction-select.galgas3", 255)) ;
  }
  const GGS_selectInstructionForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-select.galgas3", 256)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 256)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 256)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 256)) ;
  const GGS_selectInstructionForGeneration temp_1 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_1.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-select.galgas3", 257)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 257)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 257)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 257)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 257)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 257)) ;
  const GGS_selectInstructionForGeneration temp_2 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11246 (temp_2.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  GGS_uint index_11224 (uint32_t (0)) ;
  while (enumerator_11246.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_11224.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 259)).getter_string (SOURCE_FILE ("instruction-select.galgas3", 259)), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 259)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-select.galgas3", 259)), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 259)) ;
    {
    routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_11246.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 260)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 268)) ;
    enumerator_11246.gotoNextObject () ;
    index_11224.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 258)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 270)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 271)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-select.galgas3", 272)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstruction transformInstructionForGrammarAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_transformInstructionForGrammarAnalysis (GGS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                            const GGS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GGS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                            GGS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addedNonTerminalIndex_4810 = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 109)) ;
  GGS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList_4896 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList_4896, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 112)) ;
  }
  GGS_branchListForGrammarAnalysis var_repeatBranchList_5240 = GGS_branchListForGrammarAnalysis::class_func_listWithValue (var_repeatedInstructionList_4896  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 119)) ;
  const GGS_repeatInstruction temp_1 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_5360 (temp_1.readProperty_mRepeatBranchList ()) ;
  while (enumerator_5360.hasCurrentObject ()) {
    GGS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList_5400 = GGS_syntaxInstructionListForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
    {
    routine_transformInstructionListForGrammarAnalysis_3F__26_usedTerminalMap_3F_nonTerminalSymbolMap_26_addedTerminalIndex_26_ (enumerator_5360.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList_5400, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 123)) ;
    }
    var_repeatBranchList_5240.addAssignOperation (var_syntaxInstructionList_5400  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 130)) ;
    enumerator_5360.gotoNextObject () ;
  }
  const GGS_repeatInstruction temp_2 = this ;
  ioArgument_ioSyntaxInstructionList.addAssignOperation (GGS_repeatInstructionForGrammarAnalysis::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_repeatBranchList_5240, var_addedNonTerminalIndex_4810, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 133)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstruction analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                              const GGS_string constinArgument_inLexiqueName,
                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                              const GGS_string constinArgument_inComponentName,
                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                              GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                              GGS_localVarManager & ioArgument_ioVariableMap,
                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_choiceIndex_6776 = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 160)) ;
  {
  extensionSetter_openOverrideForRepeatBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 162)) ;
  }
  GGS_semanticInstructionListForGeneration var_repeated_5F_instructionList_7328 ;
  {
  const GGS_repeatInstruction temp_0 = this ;
  const GGS_repeatInstruction temp_1 = this ;
  routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, temp_0.readProperty_mRepeatedInstructionList (), temp_1.readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList_7328, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 164)) ;
  }
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_7428 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstruction temp_2 = this ;
  UpEnumerator_listOfSyntaxInstructionList enumerator_7507 (temp_2.readProperty_mRepeatBranchList ()) ;
  while (enumerator_7507.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_instructionList_7959 ;
    {
    routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_7507.current_mSyntaxInstructionList (HERE), enumerator_7507.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList_7959, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 184)) ;
    }
    var_listOfSemanticInstructionListForGeneration_7428.addAssignOperation (var_instructionList_7959, enumerator_7507.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 201)) ;
    enumerator_7507.gotoNextObject () ;
  }
  {
  const GGS_repeatInstruction temp_3 = this ;
  extensionSetter_closeOverride (ioArgument_ioVariableMap, temp_3.readProperty_mEndOf_5F_repeat_5F_instruction (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 204)) ;
  }
  const GGS_repeatInstruction temp_4 = this ;
  const GGS_repeatInstruction temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), constinArgument_inComponentName, var_choiceIndex_6776, var_repeated_5F_instructionList_7328, temp_5.readProperty_mEndOf_5F_repeat_5F_instruction (), var_listOfSemanticInstructionListForGeneration_7428, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 206)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_appendSyntaxSignature (const GGS_string constinArgument_inPosfix,
                                                                        GGS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  GGS_semanticInstructionListForGeneration var_repeated_5F_instructionList_9438 = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, temp_0.readProperty_m_5F_repeated_5F_instructionList (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 236)) ;
  GGS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration_9549 = GGS_listOfSemanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_repeatInstructionForGeneration temp_1 = this ;
  UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_9665 (temp_1.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
  while (enumerator_9665.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration_9549.addAssignOperation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_9665.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 240)), enumerator_9665.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 239)) ;
    enumerator_9665.gotoNextObject () ;
  }
  const GGS_repeatInstructionForGeneration temp_2 = this ;
  const GGS_repeatInstructionForGeneration temp_3 = this ;
  const GGS_repeatInstructionForGeneration temp_4 = this ;
  const GGS_repeatInstructionForGeneration temp_5 = this ;
  ioArgument_ioInstructionListForGeneration.addAssignOperation (GGS_repeatInstructionForGeneration::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mChoiceIndex (), var_repeated_5F_instructionList_9438, temp_5.readProperty_mEndOfRepeatedInstructions (), var_listOfSemanticInstructionListForGeneration_9549, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 244)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@repeatInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_repeatInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration constinArgument_inTestedInstruction,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_repeatInstructionForGeneration var_si_10576 (dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
    if (nullptr == var_si_10576.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_repeatInstructionForGeneration temp_1 = this ;
      result_result = function_compareSyntaxSignature (temp_1.readProperty_m_5F_repeated_5F_instructionList (), var_si_10576.readProperty_m_5F_repeated_5F_instructionList (), var_si_10576.readProperty_mEndOfRepeatedInstructions (), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 261)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_repeatInstructionForGeneration temp_3 = this ;
        test_2 = result_result.operator_and (GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas3", 262)).objectCompare (var_si_10576.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas3", 262)))) COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 262)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_repeatInstructionForGeneration temp_4 = this ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_si_10576.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (temp_4.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas3", 265)).getter_string (SOURCE_FILE ("instruction-repeat.galgas3", 265)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 264)).add_operation (GGS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 265)).add_operation (var_si_10576.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas3", 267)).getter_string (SOURCE_FILE ("instruction-repeat.galgas3", 267)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 266)), fixItArray5  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 263)) ;
          result_result = GGS_bool (false) ;
        }
      }
      const GGS_repeatInstructionForGeneration temp_6 = this ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11281 (temp_6.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_11360 (var_si_10576.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
      bool bool_7 = result_result.isValidAndTrue () ;
      if (enumerator_11281.hasCurrentObject () && enumerator_11360.hasCurrentObject () && bool_7) {
        while (enumerator_11281.hasCurrentObject () && enumerator_11360.hasCurrentObject () && bool_7) {
          result_result = function_compareSyntaxSignature (enumerator_11281.current_mInstructionList (HERE), enumerator_11360.current_mInstructionList (HERE), enumerator_11360.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 271)) ;
          enumerator_11281.gotoNextObject () ;
          enumerator_11360.gotoNextObject () ;
          if (enumerator_11281.hasCurrentObject () && enumerator_11360.hasCurrentObject ()) {
            bool_7 = result_result.isValidAndTrue () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_syntaxInstructionForGeneration var_si_11587 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) ;
      if (nullptr == var_si_11587.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_si_11587.readProperty_mInstructionLocation (), GGS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction"), fixItArray9  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 275)) ;
        result_result = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      const GGS_repeatInstructionForGeneration temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("internal error"), fixItArray11  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 279)) ;
      result_result = GGS_bool (false) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = result_result.operator_not (SOURCE_FILE ("instruction-repeat.galgas3", 282)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_repeatInstructionForGeneration temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("reference syntax instruction is here"), fixItArray14  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 283)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@repeatInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                      GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                      const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_repeatFlagCppName_12658 = GGS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-repeat.galgas3", 297)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 297)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 298)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("bool ").add_operation (var_repeatFlagCppName_12658, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 299)).add_operation (GGS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 299)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 299)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (var_repeatFlagCppName_12658, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 300)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 300)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 300)) ;
  {
  const GGS_repeatInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_m_5F_repeated_5F_instructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 301)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 309)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_repeatInstructionForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mListOfSemanticInstructionListForGeneration ().getter_count (SOURCE_FILE ("instruction-repeat.galgas3", 310)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_repeatInstructionForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (select_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas3", 311)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 311)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 311)) ;
      const GGS_repeatInstructionForGeneration temp_4 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_4.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas3", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 312)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 312)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 312)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 312)).add_operation (GGS_string (") == 2) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 312)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 312)) ;
      const GGS_repeatInstructionForGeneration temp_5 = this ;
      GGS_semanticInstructionListForGeneration var_instructionList_13413 = temp_5.readProperty_mListOfSemanticInstructionListForGeneration ().getter_mInstructionListAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 313)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, var_instructionList_13413, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 314)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 322)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_12658, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 323)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 323)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 323)) ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 324)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_repeatInstructionForGeneration temp_6 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (select_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("instruction-repeat.galgas3", 326)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 326)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 326)) ;
    const GGS_repeatInstructionForGeneration temp_7 = this ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("_").add_operation (temp_7.readProperty_mChoiceIndex ().getter_string (SOURCE_FILE ("instruction-repeat.galgas3", 327)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 327)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 327)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 327)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 327)).add_operation (GGS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 327)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 327)) ;
    const GGS_repeatInstructionForGeneration temp_8 = this ;
    UpEnumerator_listOfSemanticInstructionListForGeneration enumerator_14080 (temp_8.readProperty_mListOfSemanticInstructionListForGeneration ()) ;
    GGS_uint index_14058 (uint32_t (0)) ;
    while (enumerator_14080.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case ").add_operation (index_14058.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 329)).getter_string (SOURCE_FILE ("instruction-repeat.galgas3", 329)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 329)).add_operation (GGS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 329)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 329)) ;
      {
      routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, enumerator_14080.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 330)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 338)) ;
      enumerator_14080.gotoNextObject () ;
      index_14058.increment_operation (inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 328)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("default:\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 340)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (var_repeatFlagCppName_12658, inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 341)).add_operation (GGS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 341)), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 341)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 342)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 343)) ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 345)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-repeat.galgas3", 346)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument&?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                       const GGS_string constinArgument_inInstanceMethodName,
                                                                       const GGS_bool constinArgument_inHasCompilerArgument,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 29)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 30)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 32)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 34)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas3", 28)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument&&?inputArgTypeName?inputArgName?methodName?'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (GGS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                                                                                 GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                 const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                 const GGS_string constinArgument_inInputArgumentName,
                                                                                                                 const GGS_string constinArgument_inInstanceMethodName,
                                                                                                                 const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_2476 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2476, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas3", 47)) ;
  }
  GGS_formalParameterSignature var_argList_2527 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2527.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 49)), var_argumentTypeIndex_2476, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 49)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas3", 49)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 51)), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 52)), var_argList_2527, GGS_location::class_func_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 54)), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas3", 56)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas3", 50)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                              GGS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GGS_string & outArgument_outCppName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputActualParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 34)) ;
  const GGS_outputActualParameterForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 35)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                                   GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GGS_string & /* ioArgument_ioImplementation */,
                                                                                   GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                   GGS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                   GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GGS_string & outArgument_outCppName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_outputInputActualParameterForGeneration temp_0 = this ;
  UpEnumerator_unifiedTypeMapEntryList enumerator_2403 (temp_0.readProperty_mTypeList ()) ;
  while (enumerator_2403.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2403.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 49)) ;
    enumerator_2403.gotoNextObject () ;
  }
  const GGS_outputInputActualParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GGS_outputInputActualParameterForGeneration temp_2 = this ;
  UpEnumerator_lstringlist enumerator_2531 (temp_2.readProperty_mStructAttributeList ()) ;
  while (enumerator_2531.hasCurrentObject ()) {
    outArgument_outCppName.plusAssignOperation(GGS_string (".mProperty_").add_operation (enumerator_2531.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 53)) ;
    enumerator_2531.gotoNextObject () ;
  }
  {
  const GGS_outputInputActualParameterForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 55)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generateActualParameter (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GGS_string & /* ioArgument_ioImplementation */,
                                                                             GGS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                             GGS_stringlist & ioArgument_ioOutputVariableList,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_string & outArgument_outCppName,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputActualParameterForGeneration temp_0 = this ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GGS_inputActualParameterForGeneration temp_1 = this ;
  ioArgument_ioOutputVariableList.addAssignOperation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 69)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 70)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generateActualParameter (GGS_stringset & ioArgument_ioInclusionSet,
                                                                            GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GGS_string & ioArgument_ioImplementation,
                                                                            GGS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                            GGS_stringlist & ioArgument_ioOutputVariableList,
                                                                            GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GGS_string & outArgument_outCppName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_inputJokerParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 83)) ;
  const GGS_inputJokerParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GGS_inputJokerParameterForGeneration temp_2 = this ;
  ioArgument_ioImplementation.plusAssignOperation(GGS_string ("GGS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 85)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 85)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 85)).add_operation (GGS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 85)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 85)) ;
  const GGS_inputJokerParameterForGeneration temp_3 = this ;
  ioArgument_ioJokerParametersToReleaseList.addAssignOperation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 86)) ;
  const GGS_inputJokerParameterForGeneration temp_4 = this ;
  ioArgument_ioOutputVariableList.addAssignOperation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 87)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::method_generateInstruction (GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GGS_string & ioArgument_ioGeneratedCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 97)) ;
  {
  const GGS_semanticBlockInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList_26__3F__26__26__3F__26_ (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 98)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 106)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputInputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument_ioImplementation */,
                                                                                     GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & /* ioArgument_ioImplementation */,
                                                                                GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputJokerParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputJokerParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas3", 128)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputJokerParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 129)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 129)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 129)) ;
      const GGS_inputJokerParameterForGeneration temp_3 = this ;
      UpEnumerator__32_stringlist enumerator_5843 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_5843.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_5843.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 131)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_5843.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 132)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 132)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 132)) ;
        enumerator_5843.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 134)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@inputActualParameterForGeneration generatePoisonedVariables'
//--------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generatePoisonedVariables (GGS_string & ioArgument_ioImplementation,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputActualParameterForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mPoisonedVarNameList ().getter_count (SOURCE_FILE ("semanticInstructionGeneration.galgas3", 143)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputActualParameterForGeneration temp_2 = this ;
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("if (!").add_operation (temp_2.readProperty_mInputActualCppName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 144)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 144)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 144)) ;
      const GGS_inputActualParameterForGeneration temp_3 = this ;
      UpEnumerator__32_stringlist enumerator_6546 (temp_3.readProperty_mPoisonedVarNameList ()) ;
      while (enumerator_6546.hasCurrentObject ()) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (enumerator_6546.current_mValue_31_ (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 146)) ;
        }
        ioArgument_ioImplementation.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_6546.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 147)).add_operation (GGS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 147)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 147)) ;
        enumerator_6546.gotoNextObject () ;
      }
      ioArgument_ioImplementation.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas3", 149)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                                   const GGS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1957 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1957, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 31)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 33)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 34)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 36)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1957, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 39)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 32)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 44)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 45)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 47)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1957, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 50)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 43)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                                   const GGS_string constinArgument_inObsoleteGetterName,
                                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3324 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3324, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 64)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 66)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 67)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 69)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3324, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas3", 72)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 65)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 77)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 78)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 80)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3324, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas3", 83)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 76)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                    GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                    const GGS_string constinArgument_inGetterName,
                                                                                                                                                    const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                    const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                    const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                    const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4491 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4491, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 100)) ;
  }
  GGS_functionSignature var_argList_4535 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_4617 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4617, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 102)) ;
  }
  var_argList_4535.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 103)), var_t_4617, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 103)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 105)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 106)), var_argList_4535, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 108)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4491, GGS_methodQualifier::class_func_isInherited (SOURCE_FILE ("semanticsGetters.galgas3", 111)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 104)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argumentTypeName?argumentName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argumentTypeName_3F_argumentName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                               GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                               const GGS_string constinArgument_inGetterName,
                                                                                                                                               const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                               const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                               const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                               const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_5481 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5481, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 127)) ;
  }
  GGS_functionSignature var_argList_5525 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_5607 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5607, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 129)) ;
  }
  var_argList_5525.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 130)), var_t_5607, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 130)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 132)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 133)), var_argList_5525, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 135)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5481, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 138)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 131)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&??????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                      const GGS_string constinArgument_inGetterName,
                                                                                                                      const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                      const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                      const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                      const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                      const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                      const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_7654 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_7654, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 187)) ;
  }
  GGS_functionSignature var_argList_7698 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_7797 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_7797, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 189)) ;
  }
  var_argList_7698.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 190)), var_t_7797, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 190)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_7797, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 191)) ;
  }
  var_argList_7698.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 192)), var_t_7797, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 192)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 194)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 195)), var_argList_7698, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 197)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_7654, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 200)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 193)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument&&?getterName?obsoleteName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                              GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                              const GGS_string constinArgument_inGetterName,
                                                                                                                              const GGS_string constinArgument_inObsoleteGetterName,
                                                                                                                              const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                              const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_8859 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8859, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 213)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 215)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 216)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 218)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8859, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas3", 221)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 214)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inObsoleteGetterName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inObsoleteGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 226)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 227)), GGS_functionSignature::init (inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 229)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8859, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 232)), constinArgument_inGetterName COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 225)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument&&?getterName?argSelector?argType?argName?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                const GGS_string constinArgument_inGetterName,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_10108 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10108, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 250)) ;
  }
  GGS_functionSignature var_argList_10152 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_10234 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10234, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 252)) ;
  }
  var_argList_10152.addAssignOperation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 253)), var_t_10234, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 253)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 255)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 256)), var_argList_10152, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 258)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10108, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas3", 261)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 254)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument&&?getterName???returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                        GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                        const GGS_string constinArgument_inGetterName,
                                                                                                                        const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                        const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                        const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                        const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_11086 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_11086, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 277)) ;
  }
  GGS_functionSignature var_argList_11130 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_11212 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_11212, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 279)) ;
  }
  var_argList_11130.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 280)), var_t_11212, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 280)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 282)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 283)), var_argList_11130, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 285)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_11086, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 288)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 281)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments&&?getterName?arg1Selector?arg1TypeName?arg1Name?arg2Selector?arg2TypeName?arg2Name?returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                                          const GGS_string constinArgument_inGetterName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_Selector,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_Selector,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                                          const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                                          const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_12261 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_12261, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 308)) ;
  }
  GGS_functionSignature var_argList_12305 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_12404 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_12404, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 310)) ;
  }
  var_argList_12305.addAssignOperation (constinArgument_inArgument_31_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 311)), var_t_12404, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 311)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_12404, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 312)) ;
  }
  var_argList_12305.addAssignOperation (constinArgument_inArgument_32_Selector.getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 313)), var_t_12404, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 313)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 315)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 316)), var_argList_12305, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 318)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_12261, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsGetters.galgas3", 321)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 314)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments&&?getterName?????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                     GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                     const GGS_string constinArgument_inGetterName,
                                                                                                                                     const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                     const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                     const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                     const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                     const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                     const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_13458 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_13458, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 339)) ;
  }
  GGS_functionSignature var_argList_13502 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_13601 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_13601, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 341)) ;
  }
  var_argList_13502.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 342)), var_t_13601, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 342)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_13601, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 343)) ;
  }
  var_argList_13502.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 344)), var_t_13601, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 344)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 346)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 347)), var_argList_13502, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 349)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_13458, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 352)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 345)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments&&????????returnedTypeName?hasCompilerArgument'
//
//--------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (GGS_getterMap & ioArgument_ioGetterMap,
                                                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                   const GGS_string constinArgument_inGetterName,
                                                                                                                                   const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                   const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                   const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                   const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                   const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_14681 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_14681, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 372)) ;
  }
  GGS_functionSignature var_argList_14725 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_14824 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_14824, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 374)) ;
  }
  var_argList_14725.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 375)), var_t_14824, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 375)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_14824, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 376)) ;
  }
  var_argList_14725.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 377)), var_t_14824, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 377)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_14824, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 378)) ;
  }
  var_argList_14725.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas3", 379)), var_t_14824, constinArgument_inArgument_33_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 379)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inGetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 381)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas3", 382)), var_argList_14725, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 384)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_14681, GGS_methodQualifier::class_func_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas3", 387)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 380)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes&!'
//
//--------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes_26__21_ (GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                 GGS_getterMap & outArgument_outMap,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GGS_getterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("description"), GGS_string::makeEmptyString (), GGS_string ("string"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 397)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("staticType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 405)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("dynamicType"), GGS_string::makeEmptyString (), GGS_string ("type"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 413)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GGS_string ("object"), GGS_string::makeEmptyString (), GGS_string ("object"), GGS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas3", 421)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypes???'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypes_3F__3F__3F_ (const GGS_unifiedTypeMapEntry constinArgument_inTargetType,
                                               const GGS_unifiedTypeMapEntry constinArgument_inSourceType,
                                               const GGS_location constinArgument_inErrorLocation,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_sourceType_3353 = constinArgument_inSourceType ;
  GGS_bool var_ok_3391 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3353)) ;
  if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).isValid ()) {
    uint32_t variant_3425 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).uintValue () ;
    bool loop_3425 = true ;
    while (loop_3425) {
      loop_3425 = var_ok_3391.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).operator_and (extensionGetter_definition (var_sourceType_3353, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).isValid () ;
      if (loop_3425) {
        loop_3425 = var_ok_3391.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).operator_and (extensionGetter_definition (var_sourceType_3353, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)).boolValue () ;
      }
      if (loop_3425 && (0 == variant_3425)) {
        loop_3425 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 81)) ;
      }
      if (loop_3425) {
        variant_3425 -= 1 ;
        var_sourceType_3353 = extensionGetter_definition (var_sourceType_3353, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 82)).readProperty_superType () ;
        var_ok_3391 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_3353)) ;
      }
    }
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_ok_3391.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 85)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_typeKindEnum_2E_weakReferenceType var_weakRefType_3615 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 85)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 85)).unwrappedValue () ;
      if (!extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 85)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 85)).isValuated ()) {
        test_0 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_0) {
        var_sourceType_3353 = constinArgument_inSourceType ;
        var_ok_3391 = GGS_bool (ComparisonKind::equal, var_weakRefType_3615.readProperty_referenceType ().objectCompare (var_sourceType_3353)) ;
        if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).isValid ()) {
          uint32_t variant_3771 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).uintValue () ;
          bool loop_3771 = true ;
          while (loop_3771) {
            loop_3771 = var_ok_3391.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).operator_and (extensionGetter_definition (var_sourceType_3353, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).isValid () ;
            if (loop_3771) {
              loop_3771 = var_ok_3391.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).operator_and (extensionGetter_definition (var_sourceType_3353, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)).boolValue () ;
            }
            if (loop_3771 && (0 == variant_3771)) {
              loop_3771 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 88)) ;
            }
            if (loop_3771) {
              variant_3771 -= 1 ;
              var_sourceType_3353 = extensionGetter_definition (var_sourceType_3353, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 89)).readProperty_superType () ;
              var_ok_3391 = GGS_bool (ComparisonKind::equal, var_weakRefType_3615.readProperty_referenceType ().objectCompare (var_sourceType_3353)) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_ok_3391.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 93)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is '@").add_operation (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 95)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 95)).add_operation (GGS_string ("' and cannot be assigned from an '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 95)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 95)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 95)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 95)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 94)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkAssignmentTypeWithImplicitGetterCall???&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (const GGS_unifiedTypeMapEntry constinArgument_inTargetType,
                                                                        const GGS_unifiedTypeMapEntry constinArgument_inSourceType,
                                                                        const GGS_location constinArgument_inErrorLocation,
                                                                        GGS_semanticExpressionForGeneration & ioArgument_ioExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition var_targetTypeDef_4679 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 106)) ;
  GGS_unifiedTypeMapEntry temp_0 ;
  const GalgasBool test_1 = var_targetTypeDef_4679.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 107)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 107)).boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = var_targetTypeDef_4679.readProperty_unwrappedType () ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = constinArgument_inTargetType ;
  }
  GGS_unifiedTypeMapEntry var_targetTypeForBigIntAssignment_4725 = temp_0 ;
  GGS_bool var_handled_4904 = GGS_bool (false) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_literalBigIntExpressionForGeneration var_bigIntSource_4929 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioExpression.ptr ())) ;
    if (nullptr == var_bigIntSource_4929.ptr ()) {
      test_2 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_2) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4725, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 114)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_bigint var_bigIntValue_5074 = var_bigIntSource_4929.readProperty_mValue () ;
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5074.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 116)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5074.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 116)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 116)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5074.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 117)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 117)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 117)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 117)) ;
            }
          }
          ioArgument_ioExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4725, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5074.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 122)), inCompiler COMMA_HERE) ;
          var_handled_4904 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4725, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 125)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_bigint var_bigIntValue_5542 = var_bigIntSource_4929.readProperty_mValue () ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_5542.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 127)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_5542.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 127)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 127)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GenericArray <FixItDescription> fixItArray8 ;
                inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_5542.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 128)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 128)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 128)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 128)) ;
              }
            }
            ioArgument_ioExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4725, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_5542.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 133)), inCompiler COMMA_HERE) ;
            var_handled_4904 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4725, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 136)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GGS_bigint var_bigIntValue_6021 = var_bigIntSource_4929.readProperty_mValue () ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6021.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 138)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6021.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 138)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 138)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  GenericArray <FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6021.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 139)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 139)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 139)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 139)) ;
                }
              }
              ioArgument_ioExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4725, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6021.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 144)), inCompiler COMMA_HERE) ;
              var_handled_4904 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_typeName (var_targetTypeForBigIntAssignment_4725, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 147)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GGS_bigint var_bigIntValue_6497 = var_bigIntSource_4929.readProperty_mValue () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_6497.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 149)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_6497.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 149)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 149)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (ioArgument_ioExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_6497.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 150)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 150)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 150)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 150)) ;
                  }
                }
                ioArgument_ioExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_targetTypeForBigIntAssignment_4725, ioArgument_ioExpression.readProperty_mLocation (), var_bigIntValue_6497.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 155)), inCompiler COMMA_HERE) ;
                var_handled_4904 = GGS_bool (true) ;
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = var_handled_4904.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 161)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_targetTypeDef_4679.readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 162)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 161)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 163)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 163)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 162)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_unifiedTypeMapEntry var_targetUnwrappedType_7119 = var_targetTypeDef_4679.readProperty_unwrappedType () ;
          GGS_unifiedTypeMapEntry var_sourceUnwrappedType_7177 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 165)).readProperty_unwrappedType () ;
          var_handled_4904 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetUnwrappedType_7119, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 166)).objectCompare (extensionGetter_typeName (var_sourceUnwrappedType_7177, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 166)))) ;
        }
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = var_handled_4904.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 169)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 169)).readProperty_unwrappedType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 169)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 169)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GGS_string var_targetUnwrappedTypeName_7463 = extensionGetter_typeName (extensionGetter_definition (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 170)).readProperty_unwrappedType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 170)) ;
        var_handled_4904 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_7463.objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 171)))) ;
        GGS_unifiedTypeMapEntry var_sourceType_7607 = constinArgument_inSourceType ;
        if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).isValid ()) {
          uint32_t variant_7637 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).uintValue () ;
          bool loop_7637 = true ;
          while (loop_7637) {
            loop_7637 = var_handled_4904.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).operator_and (extensionGetter_definition (var_sourceType_7607, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).isValid () ;
            if (loop_7637) {
              loop_7637 = var_handled_4904.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).operator_and (extensionGetter_definition (var_sourceType_7607, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)).boolValue () ;
            }
            if (loop_7637 && (0 == variant_7637)) {
              loop_7637 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 173)) ;
            }
            if (loop_7637) {
              variant_7637 -= 1 ;
              var_sourceType_7607 = extensionGetter_definition (var_sourceType_7607, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 174)).readProperty_superType () ;
              var_handled_4904 = GGS_bool (ComparisonKind::equal, var_targetUnwrappedTypeName_7463.objectCompare (extensionGetter_typeName (var_sourceType_7607, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 175)))) ;
            }
          }
        }
      }
    }
  }
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_handled_4904.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 179)).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_unifiedTypeMapEntry var_sourceType_7913 = constinArgument_inSourceType ;
      GGS_bool var_ok_7947 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (constinArgument_inTargetType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 181)).objectCompare (extensionGetter_typeName (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 181)))) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).isValid ()) {
        uint32_t variant_8003 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).uintValue () ;
        bool loop_8003 = true ;
        while (loop_8003) {
          loop_8003 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).operator_and (extensionGetter_definition (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).isValid () ;
          if (loop_8003) {
            loop_8003 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).operator_and (extensionGetter_definition (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)).boolValue () ;
          }
          if (loop_8003 && (0 == variant_8003)) {
            loop_8003 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 182)) ;
          }
          if (loop_8003) {
            variant_8003 -= 1 ;
            var_sourceType_7913 = extensionGetter_definition (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 183)).readProperty_superType () ;
            var_ok_7947 = GGS_bool (ComparisonKind::equal, constinArgument_inTargetType.objectCompare (var_sourceType_7913)) ;
          }
        }
      }
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 186)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_typeKindEnum_2E_weakReferenceType var_targetWeakRef_8201 = var_targetTypeDef_4679.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 186)).unwrappedValue () ;
          if (!var_targetTypeDef_4679.readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 186)).isValuated ()) {
            test_18 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_18) {
            var_sourceType_7913 = constinArgument_inSourceType ;
            var_ok_7947 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8201.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 188)).objectCompare (extensionGetter_typeName (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 188)))) ;
            if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).isValid ()) {
              uint32_t variant_8375 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).uintValue () ;
              bool loop_8375 = true ;
              while (loop_8375) {
                loop_8375 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).operator_and (extensionGetter_definition (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).isValid () ;
                if (loop_8375) {
                  loop_8375 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).operator_and (extensionGetter_definition (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)).boolValue () ;
                }
                if (loop_8375 && (0 == variant_8375)) {
                  loop_8375 = false ;
                  inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 189)) ;
                }
                if (loop_8375) {
                  variant_8375 -= 1 ;
                  var_sourceType_7913 = extensionGetter_definition (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 190)).readProperty_superType () ;
                  var_ok_7947 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (var_targetWeakRef_8201.readProperty_referenceType (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 191)).objectCompare (extensionGetter_typeName (var_sourceType_7913, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 191)))) ;
                }
              }
            }
          }
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 195)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_propertyMap_2E_element var_prop_8690 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 195)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4679.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
          if (!extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 195)).readProperty_propertyMap ().readSubscript__3F_ (var_targetTypeDef_4679.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
            test_19 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_19) {
            extensionMethod_checkSetAccess (var_prop_8690.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 196)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 196)) ;
            GGS_propertyAccessExpressionForGeneration var_conversionExpression_8848 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_8690.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioExpression, var_targetTypeDef_4679.readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_8848 ;
            var_ok_7947 = GGS_bool (ComparisonKind::equal, var_prop_8690.readProperty_mPropertyType ().objectCompare (constinArgument_inTargetType)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_19) {
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_bool test_21 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 205)) ;
          if (GalgasBool::boolTrue == test_21.boolEnum ()) {
            test_21 = extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 205)).readProperty_getterMap ().getter_hasKey (var_targetTypeDef_4679.readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 205)) ;
          }
          test_20 = test_21.boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GGS_methodKind var_kind_9319 ;
            GGS_functionSignature var_argumentTypeList_9356 ;
            GGS_bool var_hasCompilerArgument_9397 ;
            GGS_unifiedTypeMapEntry var_returnedType_9430 ;
            GGS_location joker_9381 ; // Joker input parameter
            GGS_methodQualifier joker_9451_2 ; // Joker input parameter
            GGS_string joker_9451_1 ; // Joker input parameter
            extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 206)).readProperty_getterMap ().method_searchKey (var_targetTypeDef_4679.readProperty_typeName (), var_kind_9319, var_argumentTypeList_9356, joker_9381, var_hasCompilerArgument_9397, var_returnedType_9430, joker_9451_2, joker_9451_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 206)) ;
            var_ok_7947 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_9356.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 215)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_9430.objectCompare (constinArgument_inTargetType)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 215)) ;
            GGS_getterCallExpressionForGeneration var_conversionExpression_9582 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (constinArgument_inTargetType, constinArgument_inErrorLocation, var_kind_9319, ioArgument_ioExpression, GGS_stringlist::init (inCompiler COMMA_HERE), var_targetTypeDef_4679.readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_9397, inCompiler COMMA_HERE) ;
            ioArgument_ioExpression = var_conversionExpression_9582 ;
          }
        }
      }
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        test_22 = var_ok_7947.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 229)).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("target object type is @").add_operation (var_targetTypeDef_4679.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 231)).add_operation (GGS_string (" and cannot be assigned from an @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 231)).add_operation (extensionGetter_definition (constinArgument_inSourceType, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 232)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 232)).add_operation (GGS_string (" object; this type have no "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 232)).add_operation (var_targetTypeDef_4679.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 233)).add_operation (GGS_string (" getter without argument that returns a @"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 234)).add_operation (var_targetTypeDef_4679.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 235)).add_operation (GGS_string (" object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 236)), fixItArray23  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 230)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkDiadicOperator?operatorIsHandled??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_checkDiadicOperator_3F_operatorIsHandled_3F__3F__26__26_ (const GGS_bool constinArgument_inOperandIsHandled,
                                                                       const GGS_string constinArgument_inOperatorNameForErrorMessage,
                                                                       const GGS_location constinArgument_inErrorLocation,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioLeftExpression,
                                                                       GGS_semanticExpressionForGeneration & ioArgument_ioRightExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_leftResultType_10746 = ioArgument_ioLeftExpression.readProperty_mResultType () ;
  GGS_unifiedTypeMapEntry var_rightResultType_10799 = ioArgument_ioRightExpression.readProperty_mResultType () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inOperandIsHandled.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 251)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type is '@").add_operation (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 253)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 253)).add_operation (GGS_string ("' and does not accept '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 253)).add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 253)).add_operation (GGS_string ("' operator (right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 254)).add_operation (extensionGetter_definition (var_rightResultType_10799, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 255)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 255)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 255)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 252)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntry var_rightType_11184 = var_rightResultType_10799 ;
    GGS_bool var_ok_11226 = GGS_bool (ComparisonKind::equal, var_leftResultType_10746.objectCompare (var_rightType_11184)) ;
    if (GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).isValid ()) {
      uint32_t variant_11263 = GGS_uint::class_func_max (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).uintValue () ;
      bool loop_11263 = true ;
      while (loop_11263) {
        loop_11263 = var_ok_11226.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).operator_and (extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).isValid () ;
        if (loop_11263) {
          loop_11263 = var_ok_11226.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).operator_and (extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).readProperty_superType ().getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)).boolValue () ;
        }
        if (loop_11263 && (0 == variant_11263)) {
          loop_11263 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 259)) ;
        }
        if (loop_11263) {
          variant_11263 -= 1 ;
          var_rightType_11184 = extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 260)).readProperty_superType () ;
          var_ok_11226 = GGS_bool (ComparisonKind::equal, var_leftResultType_10746.objectCompare (var_rightType_11184)) ;
        }
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_ok_11226.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 264)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_11490 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioRightExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_11490.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 265)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_bigint var_bigIntValue_11640 = var_bigIntSource_11490.readProperty_mValue () ;
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_11640.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 267)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_11640.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 267)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 267)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  GenericArray <FixItDescription> fixItArray5 ;
                  inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_11640.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 268)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 268)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 268)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 268)) ;
                }
              }
              ioArgument_ioRightExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10746, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_11640.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 270)), inCompiler COMMA_HERE) ;
              var_ok_11226 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 272)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                GGS_bigint var_bigIntValue_12081 = var_bigIntSource_11490.readProperty_mValue () ;
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12081.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 274)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12081.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 274)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 274)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12081.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 275)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 275)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 275)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 275)) ;
                  }
                }
                ioArgument_ioRightExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_leftResultType_10746, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12081.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 277)), inCompiler COMMA_HERE) ;
                var_ok_11226 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_6) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 279)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_bigint var_bigIntValue_12533 = var_bigIntSource_11490.readProperty_mValue () ;
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12533.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 281)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12533.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 281)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 281)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      GenericArray <FixItDescription> fixItArray11 ;
                      inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12533.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 282)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 282)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 282)) ;
                    }
                  }
                  ioArgument_ioRightExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10746, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12533.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 284)), inCompiler COMMA_HERE) ;
                  var_ok_11226 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 286)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    GGS_bigint var_bigIntValue_12982 = var_bigIntSource_11490.readProperty_mValue () ;
                    GalgasBool test_13 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_13) {
                      test_13 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_12982.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 288)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_12982.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 288)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 288)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_13) {
                        GenericArray <FixItDescription> fixItArray14 ;
                        inCompiler->emitSemanticError (ioArgument_ioRightExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_12982.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 289)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 289)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 289)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 289)) ;
                      }
                    }
                    ioArgument_ioRightExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_leftResultType_10746, ioArgument_ioRightExpression.readProperty_mLocation (), var_bigIntValue_12982.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 291)), inCompiler COMMA_HERE) ;
                    var_ok_11226 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_15 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_15) {
      test_15 = var_ok_11226.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 296)).boolEnum () ;
      if (GalgasBool::boolTrue == test_15) {
        GGS_literalBigIntExpressionForGeneration var_bigIntSource_13431 (dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (ioArgument_ioLeftExpression.ptr ())) ;
        if (nullptr == var_bigIntSource_13431.ptr ()) {
          test_15 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_15) {
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, GGS_string ("uint").objectCompare (extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 297)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              GGS_bigint var_bigIntValue_13575 = var_bigIntSource_13431.readProperty_mValue () ;
              GalgasBool test_17 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_17) {
                test_17 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_13575.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 299)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_13575.objectCompare (GGS_bigint ("4294967296", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 299)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 299)).boolEnum () ;
                if (GalgasBool::boolTrue == test_17) {
                  GenericArray <FixItDescription> fixItArray18 ;
                  inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_13575.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 300)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 300)).add_operation (GGS_string (") does not fit in an @uint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 300)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 300)) ;
                }
              }
              ioArgument_ioLeftExpression = GGS_literalUIntExpressionForGeneration::init_21__21__21_ (var_rightType_11184, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_13575.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 302)), inCompiler COMMA_HERE) ;
              var_ok_11226 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, GGS_string ("sint").objectCompare (extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 304)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_bigint var_bigIntValue_14003 = var_bigIntSource_13431.readProperty_mValue () ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14003.objectCompare (GGS_bigint ("-2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 306)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14003.objectCompare (GGS_bigint ("2147483648", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 306)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 306)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    GenericArray <FixItDescription> fixItArray21 ;
                    inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14003.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 307)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 307)).add_operation (GGS_string (") does not fit in an @sint"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 307)), fixItArray21  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 307)) ;
                  }
                }
                ioArgument_ioLeftExpression = GGS_literalSIntExpressionForGeneration::init_21__21__21_ (var_rightType_11184, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14003.getter_sint (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 309)), inCompiler COMMA_HERE) ;
                var_ok_11226 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                test_22 = GGS_bool (ComparisonKind::equal, GGS_string ("uint64").objectCompare (extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 311)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  GGS_bigint var_bigIntValue_14442 = var_bigIntSource_13431.readProperty_mValue () ;
                  GalgasBool test_23 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_23) {
                    test_23 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14442.objectCompare (GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 313)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14442.objectCompare (GGS_bigint ("18446744073709551616", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 313)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 313)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_23) {
                      GenericArray <FixItDescription> fixItArray24 ;
                      inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14442.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 314)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 314)).add_operation (GGS_string (") does not fit in an @uint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 314)), fixItArray24  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 314)) ;
                    }
                  }
                  ioArgument_ioLeftExpression = GGS_literalUInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11184, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14442.getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 316)), inCompiler COMMA_HERE) ;
                  var_ok_11226 = GGS_bool (true) ;
                }
              }
              if (GalgasBool::boolFalse == test_22) {
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, GGS_string ("sint64").objectCompare (extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 318)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    GGS_bigint var_bigIntValue_14878 = var_bigIntSource_13431.readProperty_mValue () ;
                    GalgasBool test_26 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_26) {
                      test_26 = GGS_bool (ComparisonKind::lowerThan, var_bigIntValue_14878.objectCompare (GGS_bigint ("-9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 320)))).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, var_bigIntValue_14878.objectCompare (GGS_bigint ("9223372036854775808", inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 320)))) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 320)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_26) {
                        GenericArray <FixItDescription> fixItArray27 ;
                        inCompiler->emitSemanticError (ioArgument_ioLeftExpression.readProperty_mLocation (), GGS_string ("literal value (").add_operation (var_bigIntValue_14878.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 321)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 321)).add_operation (GGS_string (") does not fit in an @sint64"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 321)), fixItArray27  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 321)) ;
                      }
                    }
                    ioArgument_ioLeftExpression = GGS_literalSInt_36__34_ExpressionForGeneration::init_21__21__21_ (var_rightType_11184, ioArgument_ioLeftExpression.readProperty_mLocation (), var_bigIntValue_14878.getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 323)), inCompiler COMMA_HERE) ;
                    var_ok_11226 = GGS_bool (true) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_ok_11226.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 328)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_propertyMap_2E_element var_prop_15359 = extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 328)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 328)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
        if (!extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 328)).readProperty_propertyMap ().readSubscript__3F_ (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 328)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
          test_28 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_28) {
          extensionMethod_checkSetAccess (var_prop_15359.readProperty_mAccessControl (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 329)), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 329)) ;
          GGS_propertyAccessExpressionForGeneration var_conversionExpression_15519 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_prop_15359.readProperty_mPropertyType (), constinArgument_inErrorLocation, ioArgument_ioRightExpression, extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 334)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_15519 ;
          var_ok_11226 = GGS_bool (ComparisonKind::equal, var_prop_15359.readProperty_mPropertyType ().objectCompare (var_leftResultType_10746)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        GGS_bool test_30 = var_ok_11226.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 338)) ;
        if (GalgasBool::boolTrue == test_30.boolEnum ()) {
          test_30 = extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 338)).readProperty_getterMap ().getter_hasKey (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 338)).readProperty_typeName ().readProperty_string () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 338)) ;
        }
        test_29 = test_30.boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_methodKind var_kind_16032 ;
          GGS_functionSignature var_argumentTypeList_16069 ;
          GGS_bool var_hasCompilerArgument_16110 ;
          GGS_unifiedTypeMapEntry var_returnedType_16143 ;
          GGS_location joker_16094 ; // Joker input parameter
          GGS_methodQualifier joker_16164_2 ; // Joker input parameter
          GGS_string joker_16164_1 ; // Joker input parameter
          extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 339)).readProperty_getterMap ().method_searchKey (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 340)).readProperty_typeName (), var_kind_16032, var_argumentTypeList_16069, joker_16094, var_hasCompilerArgument_16110, var_returnedType_16143, joker_16164_2, joker_16164_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 339)) ;
          var_ok_11226 = GGS_bool (ComparisonKind::equal, var_argumentTypeList_16069.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 348)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_returnedType_16143.objectCompare (var_leftResultType_10746)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 348)) ;
          GGS_getterCallExpressionForGeneration var_conversionExpression_16297 = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_leftResultType_10746, constinArgument_inErrorLocation, var_kind_16032, ioArgument_ioRightExpression, GGS_stringlist::init (inCompiler COMMA_HERE), extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 356)).readProperty_typeName ().readProperty_string (), GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE), var_hasCompilerArgument_16110, inCompiler COMMA_HERE) ;
          ioArgument_ioRightExpression = var_conversionExpression_16297 ;
        }
      }
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_ok_11226.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 362)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        GenericArray <FixItDescription> fixItArray32 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("left operand type of '").add_operation (constinArgument_inOperatorNameForErrorMessage, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 364)).add_operation (GGS_string ("' operator is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 364)).add_operation (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 364)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 364)).add_operation (GGS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 364)).add_operation (extensionGetter_definition (var_rightType_11184, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 365)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 365)).add_operation (GGS_string ("', it should be either the same, either inherits from left operand type, either have a '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 365)).add_operation (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 367)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 366)).add_operation (GGS_string ("' getter without argument that returns a '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 367)).add_operation (extensionGetter_definition (var_leftResultType_10746, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 367)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 367)).add_operation (GGS_string ("' object"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 367)), fixItArray32  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas3", 363)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 37)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 39)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  result_result = GGS_string ("testForInputUTF32CharRange (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 49)) ;
  result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_result.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 51)) ;
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 52)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_result = GGS_string ("testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 60)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 60)).add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 60)) ;
  result_result.plusAssignOperation(GGS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 61)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 69)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 69)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 69)) ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 70)) ;
  result_result.plusAssignOperation(GGS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 71)) ;
  result_result.plusAssignOperation(constinArgument_inLexiqueAnalysisContext.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 72)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 72)) ;
  const GGS_lexicalStringNotMatchAST temp_1 = this ;
  result_result.plusAssignOperation(temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 73)) ;
  result_result.plusAssignOperation(GGS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 74)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("testForInputUTF32Char (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_result.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 83)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 83)) ;
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 84)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_result = GGS_string ("testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 92)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 92)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_result = GGS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 106)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 106)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mCharacter ().readProperty_char ().getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 113)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_result = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueGeneration.galgas3", 119)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("previousChar ()") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_result = GGS_string ("::scanner_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 133)).add_operation (GGS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 133)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_6093 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_6093.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_6093.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 135)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 135)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 135)) ;
    enumerator_6093.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 137)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateDefaultSendCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_result = GGS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 154)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 154)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 154)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalErrorByDefaultAST temp_0 = this ;
  result_result = GGS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 162)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 162)).add_operation (temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 162)).add_operation (GGS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 162)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_8987 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8979 ; // Joker input parameter
  GGS_bool joker_9003 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8979, var_tokenSortedList_8987, joker_9003, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 197)) ;
  result_result = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_9038 (var_tokenSortedList_8987) ;
  while (enumerator_9038.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 200)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 200)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 200)) ;
    result_result.plusAssignOperation(enumerator_9038.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 201)) ;
    result_result.plusAssignOperation(GGS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 202)) ;
    result_result.plusAssignOperation(GGS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_9038.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas3", 203)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 203)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 203)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 203)) ;
    result_result.plusAssignOperation(GGS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 204)) ;
    result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 205)) ;
    enumerator_9038.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalImplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateLexicalRuleCode (const GGS_string constinArgument_inScannerClassName,
                                                                        const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("if (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 222)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 222)) ;
  result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 223)) ;
  {
  result_result.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 224)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10183 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_10183.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_10183.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 226)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 226)) ;
    enumerator_10183.gotoNextObject () ;
  }
  {
  result_result.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 228)) ;
  }
  result_result.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 229)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_lexicalExplicitRuleAST::getter_lexicalRuleUsesLoopLocalVar (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_10595 (temp_0.readProperty_mInstructionList ()) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas3", 236)).isValidAndTrue () ;
  if (enumerator_10595.hasCurrentObject () && bool_1) {
    while (enumerator_10595.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_10595.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas3", 237)) ;
      enumerator_10595.gotoNextObject () ;
      if (enumerator_10595.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueGeneration.galgas3", 236)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'programFileGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_programFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_programFileGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_programFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_programFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_programFileGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'programFileGenerationTemplate programFileImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (Compiler * inCompiler,
                                                                                        const GGS_string & /* in_COMPONENT_5F_NAME */,
                                                                                        const GGS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST,
                                                                                        const GGS_string & in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING,
                                                                                        const GGS_programRuleList & in_PROGRAM_5F_RULE_5F_LIST,
                                                                                        const GGS_string & in_PROJECT_5F_VERSION_5F_STRING
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#include \"project_header.h\"\n#include \"F_mainForLIBPM.h\"\n#include \"analyzeCommandLineOptions.h\"\n#include \"builtin-command-line-options.h\"\n#include \"C_galgas_CLI_Options.h\"\n#include \"F_verbose_output.h\"\n#include \"LexiqueIntrospection.h\"\n#include \"F_DisplayException.h\"\n") ;
  GGS_uint index_309_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_309 (in_IMPORTED_5F_COMPONENT_5F_LIST) ;
    while (enumerator_309.hasCurrentObject ()) {
      result.appendString ("#include \"") ;
      result.appendString (enumerator_309.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      enumerator_309.gotoNextObject () ;
      index_309_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//                      print_tool_help_message                                                  \n//--------------------------------------------------------------------------------------------------\n\nstatic void print_tool_help_message (void) {\n  gCout.appendCString (\"Compiled with GALGAS revision NUMERO_REVISION_GALGAS\\n\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileExtensions [] = {\n") ;
  GGS_uint index_1113_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_programRuleList enumerator_1113 (in_PROGRAM_5F_RULE_5F_LIST) ;
    while (enumerator_1113.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1113.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_1113.gotoNextObject () ;
      index_1113_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nstatic const char * kSourceFileHelpMessages [] = {\n") ;
  GGS_uint index_1546_ (0) ;
  if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
    UpEnumerator_programRuleList enumerator_1546 (in_PROGRAM_5F_RULE_5F_LIST) ;
    while (enumerator_1546.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1546.current_mSourceFileHelp (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_1546.gotoNextObject () ;
      index_1546_.increment () ;
    }
  }
  result.appendString ("  nullptr\n} ;    \n\n//--------------------------------------------------------------------------------------------------\n\nconst char * projectVersionString (void) {\n  return ") ;
  result.appendString (in_PROJECT_5F_VERSION_5F_STRING.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 43)).stringValue ()) ;
  result.appendString (" ;\n}\n\n") ;
  result.appendString (in_BEFORE_5F_AFTER_5F_RULE_5F_IMPLEMENTATION_5F_STRING.stringValue ()) ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                      M A I N    F O R    L I B P M                                            \n//\n//--------------------------------------------------------------------------------------------------\n\nint mainForLIBPM (int inArgc, const char * inArgv []) {\n//--- Analyze Command Line Options\n  GenericUniqueArray <String> sourceFilesArray ;\n  analyzeCommandLineOptions (inArgc, inArgv,\n                             sourceFilesArray,\n                             kSourceFileExtensions,\n                             kSourceFileHelpMessages,\n                             print_tool_help_message) ;\n//---\n  int returnCode = 0 ; // No error\n//--- Set Execution mode\n  String executionModeOptionErrorMessage ;\n  setExecutionMode (executionModeOptionErrorMessage) ;\n  if (executionModeOptionErrorMessage.length () > 0) {\n    gCout.appendString (executionModeOptionErrorMessage) ;\n    returnCode = 1 ;\n  }else{\n  //--- Common lexique object\n    Compiler * commonCompiler = nullptr ;\n    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;\n    try{\n      routine_before (commonCompiler COMMA_HERE) ;\n      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;\n      const bool verboseOptionOn = verboseOutput () ;\n      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {\n        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;\n        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;\n        const GGS_location location = commonCompiler->here () ;\n        const GGS_lstring sourceFilePath (sfp, location) ;\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_PROGRAM_5F_RULE_5F_LIST.getter_count (SOURCE_FILE ("program-file.cpp.galgasTemplate", 82)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("        int r = 0 ;\n        ") ;
    GGS_uint index_3868_IDX (0) ;
    if (in_PROGRAM_5F_RULE_5F_LIST.isValid ()) {
      UpEnumerator_programRuleList enumerator_3868 (in_PROGRAM_5F_RULE_5F_LIST) ;
      while (enumerator_3868.hasCurrentObject ()) {
        result.appendString ("if (fileExtension == ") ;
        result.appendString (enumerator_3868.current_mSourceFileExtension (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("program-file.cpp.galgasTemplate", 87)).stringValue ()) ;
        result.appendString (") {\n") ;
        const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GGS_string ("programRule_").add_operation (index_3868_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 91)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=lexical-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=syntax-only\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeIndexing :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=indexing\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          case kExecutionModeLatex :\n            commonCompiler->onTheFlyRunTimeError (\"Cannot handle \\\"--mode=latex\\\" option: no grammar in program RULE\" COMMA_HERE) ;\n            break ;\n          }\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("          switch (executionMode ()) {\n          case kExecutionModeNormal :\n            routine_") ;
          result.appendString (GGS_string ("programRule_").add_operation (index_3868_IDX.getter_string (SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)), inCompiler COMMA_SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)).getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 109)).stringValue ()) ;
          result.appendString (" (sourceFilePath, commonCompiler COMMA_HERE) ;\n            break ;\n          case kExecutionModeLexicalAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 112)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeSyntaxAnalysisOnly :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 115)).stringValue ()) ;
          result.appendString ("::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeIndexing :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 118)).stringValue ()) ;
          result.appendString ("::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          case kExecutionModeLatex :\n            cGrammar_") ;
          result.appendString (enumerator_3868.current_mReferenceGrammar (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("program-file.cpp.galgasTemplate", 121)).stringValue ()) ;
          result.appendString ("::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;\n            break ;\n          }\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_3868.gotoNextObject () ;
        if (enumerator_3868.hasCurrentObject ()) {
          result.appendString ("        }else ") ;
        }
        index_3868_IDX.increment () ;
      }
    }
    result.appendString ("        }else{\n          printf (\"*** Error: unhandled extension for file '%s' ***\\n\", sourceFilesArray (i COMMA_HERE).cString ()) ;\n          r = 1 ;\n        }\n        if (r != 0) {\n          returnCode = r ;\n        }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      }\n    //--- Error or warnings \?\n      if (totalErrorCount () > 0) {\n        returnCode = 1 ; // Error code\n      }else if (totalWarningCount () > 0) {\n        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {\n          returnCode = 1 ; // Error code\n          if (verboseOptionOn) {\n            printf (\"** Note: warnings are treated as errors. **\\n\") ;\n          }\n        }\n      }\n    //--- Epilogue\n      routine_after (commonCompiler COMMA_HERE) ;\n    //--- Emit JSON issue file \?\n      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != \"\") {\n        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;\n      }\n    //--- Display error and warnings count\n      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {\n        String message ;\n        if (totalWarningCount () == 0) {\n          message.appendCString (\"No warning\") ;\n        }else if (totalWarningCount () == 1) {\n          message.appendCString (\"1 warning\") ;\n        }else{\n          message.appendSigned (totalWarningCount ()) ;\n          message.appendCString (\" warnings\") ;\n        }\n        message.appendCString (\", \") ;\n        if (totalErrorCount () == 0) {\n          message.appendCString (\"no error\") ;\n        }else if (totalErrorCount () == 1) {\n          message.appendCString (\"1 error\") ;\n        }else{\n          message.appendSigned (totalErrorCount ()) ;\n          message.appendCString (\" errors\") ;\n        }\n        message.appendCString (\".\\n\") ;\n        ggs_printMessage (message COMMA_HERE) ;\n      }\n    }catch (const ::std::exception & e) {\n      F_default_display_exception (e) ;\n      returnCode = 1 ; // Error code\n    }catch (...) {\n      printf (\"**** Unknow exception ****\\n\") ;\n      throw ;\n    }\n    macroDetachSharedObject (commonCompiler) ;\n  }\n  return returnCode ;\n}\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileBeforeClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_prologueEpilogueList constinArgument_inPrologueList,
                                                                    GGS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_2720 = function_beforeNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 60)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_2720, var_usefulnessName_2720, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 61)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_usefulnessName_2720  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 62)) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_2931 = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_prologueEpilogueList enumerator_3035 (constinArgument_inPrologueList) ;
  while (enumerator_3035.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_3370 ;
    {
    GGS_formalParameterListForGeneration joker_3418 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_2720, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_formalParameterListAST::init (inCompiler COMMA_HERE), enumerator_3035.current_mInstructionList (HERE), enumerator_3035.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_3370, joker_3418, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 66)) ;
    }
    var_semanticInstructionListForGeneration_2931.addAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_3370, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 77)) ;
    enumerator_3035.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssignOperation (GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (false), GGS_string ("proc-before"), GGS_string ("before"), GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_2931, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 81)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramRulesGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS_programRuleList constinArgument_inProgramRules,
                                                                    GGS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_ruleIndex_4540 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_programRuleList enumerator_4659 (constinArgument_inProgramRules) ;
  while (enumerator_4659.hasCurrentObject ()) {
    GGS_lstring var_usefulnessName_4711 = function_rootRuleNameForUsefulEntitiesGraph (enumerator_4659.current_mSourceFileExtension (HERE), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 108)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_4711, var_usefulnessName_4711, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 109)) ;
    }
    ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_usefulnessName_4711  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 110)) ;
    GGS_formalParameterListAST temp_0 = GGS_formalParameterListAST::init (inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 112)) ;
    temp_0.plusPlusAssignOperation (GGS_formalParameterListAST_2E_element::init_21__21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("programComponentCompilation.galgas3", 112)), GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("programComponentCompilation.galgas3", 112)), GGS_lstring::init_21__21_ (GGS_string ("lstring"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 112)), inCompiler COMMA_HERE), enumerator_4659.current_mSourceFileVariableName (HERE), enumerator_4659.current_mSourceFileVariableNameIsUnused (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 112)) ;
    GGS_formalParameterListAST var_argumentList_4937 = temp_0 ;
    GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_5303 ;
    GGS_formalParameterListForGeneration var_routineSignature_5351 ;
    {
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_4711, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_argumentList_4937, enumerator_4659.current_mInstructionList (HERE), enumerator_4659.current_mEndOfInstructionList (HERE), var_semanticInstructionListForGeneration_5303, var_routineSignature_5351, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 114)) ;
    }
    ioArgument_ioDecoratedDeclarationListForGeneration.addAssignOperation (GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (false), GGS_string ("proc-programrule"), GGS_string ("programRule_").add_operation (var_ruleIndex_4540.getter_string (SOURCE_FILE ("programComponentCompilation.galgas3", 129)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 129)), var_routineSignature_5351, GGS_bool (true), var_semanticInstructionListForGeneration_5303, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 125)) ;
    var_ruleIndex_4540.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 134)) ;
    enumerator_4659.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAfterClauseGalgas3&&?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_prologueEpilogueList constinArgument_inEpilogueList,
                                                                   GGS_programListForGeneration & ioArgument_ioDecoratedDeclarationListForGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_usefulnessName_6370 = function_afterNameForUsefulEntitiesGraph (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 152)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 152)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_usefulnessName_6370, var_usefulnessName_6370, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 153)) ;
  }
  ioArgument_ioUsefulnessRootEntities.addAssignOperation (var_usefulnessName_6370  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 154)) ;
  GGS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_6617 = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_prologueEpilogueList enumerator_6684 (constinArgument_inEpilogueList) ;
  while (enumerator_6684.hasCurrentObject ()) {
    GGS_semanticInstructionListForGeneration var_blockSemanticInstructionListForGeneration_7019 ;
    {
    GGS_formalParameterListForGeneration joker_7067 ; // Joker input parameter
    routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (var_usefulnessName_6370, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, GGS_formalParameterListAST::init (inCompiler COMMA_HERE), enumerator_6684.current_mInstructionList (HERE), enumerator_6684.current_mEndOfInstructionList (HERE), var_blockSemanticInstructionListForGeneration_7019, joker_7067, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 158)) ;
    }
    var_semanticInstructionListForGeneration_6617.addAssignOperation (GGS_semanticBlockInstructionForGeneration::init_21_ (var_blockSemanticInstructionListForGeneration_7019, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 169)) ;
    enumerator_6684.gotoNextObject () ;
  }
  ioArgument_ioDecoratedDeclarationListForGeneration.addAssignOperation (GGS_routineImplementationForGeneration::init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (GGS_bool (false), GGS_string ("proc-after"), GGS_string ("after"), GGS_formalParameterListForGeneration::init (inCompiler COMMA_HERE), GGS_bool (true), var_semanticInstructionListForGeneration_6617, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 172)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'compileProgramComponentGalgas3&&????&?!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileProgramComponentGalgas_33__26__26__3F__3F__3F__3F__26__3F__21_ (GGS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                    const GGS_prologueEpilogueList constinArgument_inPrologueList,
                                                                                    const GGS_programRuleList constinArgument_inProgramRules,
                                                                                    const GGS_prologueEpilogueList constinArgument_inEpilogueList,
                                                                                    const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    const GGS_string constinArgument_inProjectVersionString,
                                                                                    GGS_programComponentForGeneration & outArgument_outProgramComponentForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProgramComponentForGeneration.drop () ; // Release 'out' argument
  GGS_analysisContext var_analysisContext_8307 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, function_buildPredefinedTypes (ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 202)), GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("programComponentCompilation.galgas3", 204)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_programListForGeneration var_decoratedDeclarationListForGeneration_8582 = GGS_programListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  routine_compileBeforeClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8307, ioArgument_ioTypeMap, constinArgument_inPrologueList, var_decoratedDeclarationListForGeneration_8582, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 209)) ;
  }
  {
  routine_compileAfterClauseGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8307, ioArgument_ioTypeMap, constinArgument_inEpilogueList, var_decoratedDeclarationListForGeneration_8582, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 218)) ;
  }
  {
  routine_compileProgramRulesGalgas_33__26__26__3F__26__3F__26_ (ioArgument_ioUsefulnessRootEntities, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8307, ioArgument_ioTypeMap, constinArgument_inProgramRules, var_decoratedDeclarationListForGeneration_8582, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 227)) ;
  }
  GGS_stringset var_inclusionSet_9331 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_string var_beforeAfterRulesString_9356 = GGS_string::makeEmptyString () ;
  UpEnumerator_programListForGeneration enumerator_9391 (var_decoratedDeclarationListForGeneration_8582) ;
  while (enumerator_9391.hasCurrentObject ()) {
    var_beforeAfterRulesString_9356.plusAssignOperation(callExtensionGetter_appendTypeGenericImplementation ((const cPtr_semanticDeclarationForGeneration *) enumerator_9391.current_mDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 239)), inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 239)) ;
    GGS_string var_code_9610 ;
    callExtensionMethod_appendSpecificImplementation ((cPtr_semanticDeclarationForGeneration *) enumerator_9391.current_mDeclaration (HERE).ptr (), ioArgument_ioTypeMap, var_inclusionSet_9331, var_code_9610, inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 240)) ;
    var_beforeAfterRulesString_9356.plusAssignOperation(var_code_9610, inCompiler  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 241)) ;
    enumerator_9391.gotoNextObject () ;
  }
  UpEnumerator_programRuleList enumerator_9692 (constinArgument_inProgramRules) ;
  while (enumerator_9692.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_9692.current_mReferenceGrammar (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_inclusionSet_9331.plusPlusAssignOperation (GGS_string ("grammar-").add_operation (enumerator_9692.current_mReferenceGrammar (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("programComponentCompilation.galgas3", 245)), inCompiler COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 245))  COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 245)) ;
      }
    }
    enumerator_9692.gotoNextObject () ;
  }
  GGS_string var_cppContents_9863 = GGS_string (filewrapperTemplate_programFileGenerationTemplate_programFileImplementation (inCompiler, GGS_string ("program"), GGS_stringlist::init (inCompiler COMMA_HERE), var_beforeAfterRulesString_9356, constinArgument_inProgramRules, constinArgument_inProjectVersionString COMMA_SOURCE_FILE ("programComponentCompilation.galgas3", 248))) ;
  outArgument_outProgramComponentForGeneration = GGS_programComponentForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21_ (GGS_bool (false), GGS_string ("program"), var_inclusionSet_9331, var_cppContents_9863, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//--------------------------------------------------------------------------------------------------

static GGS_bool onceFunction_generateFewHeaderFiles (Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GGS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//--------------------------------------------------------------------------------------------------

GGS_bool function_generateFewHeaderFiles (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (nullptr,
                                                                  releaseOnceFunctionResult_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_generateFewHeaderFiles [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_generateFewHeaderFiles (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         GGS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GGS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GGS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GGS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GGS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 187)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                   const GGS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GGS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GGS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GGS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionMap var_boolOptionMap_7639 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_uintOptionMap_7689 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_stringOptionMap_7739 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_commandLineOptionMap var_stringListOptionMap_7791 = GGS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_optionNameSet_7825 = GGS_stringset::class_func_emptySet (SOURCE_FILE ("optionCompilation.galgas3", 205)) ;
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  UpEnumerator_commandLineOptionListAST enumerator_7886 (temp_0.readProperty_mOptions ()) ;
  while (enumerator_7886.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_optionNameSet_7825.getter_hasKey (enumerator_7886.current (HERE).readProperty_mOptionInternalName ().readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas3", 207)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7886.current (HERE).readProperty_mOptionInternalName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_7886.current (HERE).readProperty_mOptionInternalName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 209)).add_operation (GGS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 209)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 208)) ;
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, enumerator_7886.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("bool"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          {
          var_boolOptionMap_7639.setter_insertKey (enumerator_7886.current (HERE).readProperty_mOptionInternalName (), enumerator_7886.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7886.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7886.current (HERE).readProperty_mOptionComment ().readProperty_string (), GGS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 213)) ;
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_7886.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 220)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 221)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::equal, enumerator_7886.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("uint"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            {
            GGS_string temp_7 ;
            const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              temp_7 = GGS_string ("0") ;
            }else if (GalgasBool::boolFalse == test_8) {
              temp_7 = enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string () ;
            }
            var_uintOptionMap_7689.setter_insertKey (enumerator_7886.current (HERE).readProperty_mOptionInternalName (), enumerator_7886.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7886.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7886.current (HERE).readProperty_mOptionComment ().readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 226)) ;
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::equal, enumerator_7886.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 233)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                GenericArray <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 234)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_7886.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("string"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              {
              var_stringOptionMap_7739.setter_insertKey (enumerator_7886.current (HERE).readProperty_mOptionInternalName (), enumerator_7886.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7886.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7886.current (HERE).readProperty_mOptionComment ().readProperty_string (), enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 239)) ;
              }
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_7886.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 246)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 247)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = GGS_bool (ComparisonKind::equal, enumerator_7886.current (HERE).readProperty_mOptionTypeName ().readProperty_string ().objectCompare (GGS_string ("stringlist"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                {
                var_stringListOptionMap_7791.setter_insertKey (enumerator_7886.current (HERE).readProperty_mOptionInternalName (), enumerator_7886.current (HERE).readProperty_mOptionInvocationLetter ().readProperty_char (), enumerator_7886.current (HERE).readProperty_mOptionInvocationString ().readProperty_string (), enumerator_7886.current (HERE).readProperty_mOptionComment ().readProperty_string (), enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 252)) ;
                }
                GalgasBool test_15 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_15) {
                  test_15 = GGS_bool (ComparisonKind::notEqual, enumerator_7886.current (HERE).readProperty_mOptionDefaultValueKind ().objectCompare (GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas3", 259)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_15) {
                    GenericArray <FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_7886.current (HERE).readProperty_mOptionDefaultValue ().readProperty_location (), GGS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 260)) ;
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_14) {
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_7886.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 265)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7825.plusPlusAssignOperation (enumerator_7886.current (HERE).readProperty_mOptionInternalName ().readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 269)) ;
    enumerator_7886.gotoNextObject () ;
  }
  {
  const GGS_optionComponentDeclarationAST temp_18 = this ;
  const GGS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_isPredefined (), var_boolOptionMap_7639, var_uintOptionMap_7689, var_stringOptionMap_7739, var_stringListOptionMap_7791, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 272)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GGS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string /* constinArgument_inProductDirectory */,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  const GGS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GGS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_optionComponentDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_11493 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 294)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11493, var_nameForUsefulness_11493, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 295)) ;
  }
  GGS_bool var_optionIsPredefined_11781 ;
  GGS_commandLineOptionMap var_boolOptionMap_11833 ;
  GGS_commandLineOptionMap var_uintOptionMap_11880 ;
  GGS_commandLineOptionMap var_stringOptionMap_11927 ;
  GGS_commandLineOptionMap var_stringListOptionMap_11976 ;
  const GGS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_11781, var_boolOptionMap_11833, var_uintOptionMap_11880, var_stringOptionMap_11927, var_stringListOptionMap_11976, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 297)) ;
  GGS_commandLineOptionSortedList var_boolOptionSortedList_12060 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12107 (var_boolOptionMap_11833) ;
  while (enumerator_12107.hasCurrentObject ()) {
    var_boolOptionSortedList_12060.addAssignOperation (enumerator_12107.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12107.current (HERE).readProperty_mOptionChar (), enumerator_12107.current (HERE).readProperty_mOptionString (), enumerator_12107.current (HERE).readProperty_mComment (), enumerator_12107.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 308)) ;
    enumerator_12107.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_uintOptionSortedList_12350 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12397 (var_uintOptionMap_11880) ;
  while (enumerator_12397.hasCurrentObject ()) {
    var_uintOptionSortedList_12350.addAssignOperation (enumerator_12397.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12397.current (HERE).readProperty_mOptionChar (), enumerator_12397.current (HERE).readProperty_mOptionString (), enumerator_12397.current (HERE).readProperty_mComment (), enumerator_12397.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 317)) ;
    enumerator_12397.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_stringOptionSortedList_12640 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12689 (var_stringOptionMap_11927) ;
  while (enumerator_12689.hasCurrentObject ()) {
    var_stringOptionSortedList_12640.addAssignOperation (enumerator_12689.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12689.current (HERE).readProperty_mOptionChar (), enumerator_12689.current (HERE).readProperty_mOptionString (), enumerator_12689.current (HERE).readProperty_mComment (), enumerator_12689.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 326)) ;
    enumerator_12689.gotoNextObject () ;
  }
  GGS_commandLineOptionSortedList var_stringListOptionSortedList_12936 = GGS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_commandLineOptionMap enumerator_12989 (var_stringListOptionMap_11976) ;
  while (enumerator_12989.hasCurrentObject ()) {
    var_stringListOptionSortedList_12936.addAssignOperation (enumerator_12989.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12989.current (HERE).readProperty_mOptionChar (), enumerator_12989.current (HERE).readProperty_mOptionString (), enumerator_12989.current (HERE).readProperty_mComment (), enumerator_12989.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 335)) ;
    enumerator_12989.gotoNextObject () ;
  }
  const GGS_optionComponentDeclarationAST temp_2 = this ;
  const GGS_optionComponentDeclarationAST temp_3 = this ;
  const GGS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssignOperation (GGS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 344)), GGS_optionComponentForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GGS_bool (true), GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas3", 347)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 347)), var_optionIsPredefined_11781, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionSortedList_12060, var_uintOptionSortedList_12350, var_stringOptionSortedList_12640, var_stringListOptionSortedList_12936, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 343)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_optionComponentForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  const GGS_optionComponentForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result_result ; // Returned variable
  const GGS_optionComponentForGeneration temp_0 = this ;
  GGS_headerKind temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_headerKind::class_func_noHeader (SOURCE_FILE ("optionCompilation.galgas3", 382)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_headerKind::class_func_oneHeader (SOURCE_FILE ("optionCompilation.galgas3", 382)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GGS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outHeader = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_optionComponentForGeneration temp_2 = this ;
    const GGS_optionComponentForGeneration temp_3 = this ;
    const GGS_optionComponentForGeneration temp_4 = this ;
    const GGS_optionComponentForGeneration temp_5 = this ;
    const GGS_optionComponentForGeneration temp_6 = this ;
    outArgument_outHeader = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionSortedList (), temp_4.readProperty_mUIntOptionSortedList (), temp_5.readProperty_mStringOptionSortedList (), temp_6.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas3", 392))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GGS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outImplementation = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_optionComponentForGeneration temp_2 = this ;
    ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas3", 412)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 412))  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 412)) ;
    const GGS_optionComponentForGeneration temp_3 = this ;
    const GGS_optionComponentForGeneration temp_4 = this ;
    const GGS_optionComponentForGeneration temp_5 = this ;
    const GGS_optionComponentForGeneration temp_6 = this ;
    const GGS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionSortedList (), temp_5.readProperty_mUIntOptionSortedList (), temp_6.readProperty_mStringOptionSortedList (), temp_7.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas3", 413))) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GGS_string constinArgument_inProductDirectory,
                                                                    GGS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GGS_stringlist & ioArgument_ioSwiftAppProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("optionCompilation.galgas3", 432)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      const GGS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas3", 432)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.plusPlusAssignOperation (GGS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas3", 434)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 434)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 434))  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 434)) ;
      const GGS_optionComponentForGeneration temp_4 = this ;
      ioArgument_ioSwiftAppProductFileList.addAssignOperation (GGS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas3", 435)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 435)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 435))  COMMA_SOURCE_FILE ("optionCompilation.galgas3", 435)) ;
      {
      const GGS_optionComponentForGeneration temp_5 = this ;
      const GGS_optionComponentForGeneration temp_6 = this ;
      const GGS_optionComponentForGeneration temp_7 = this ;
      const GGS_optionComponentForGeneration temp_8 = this ;
      const GGS_optionComponentForGeneration temp_9 = this ;
      const GGS_optionComponentForGeneration temp_10 = this ;
      const GGS_optionComponentForGeneration temp_11 = this ;
      GGS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GGS_string ("option-").add_operation (temp_5.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas3", 438)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 438)).add_operation (GGS_string ("-swiftui.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 438)), GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), GGS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (inCompiler, GGS_string ("option-").add_operation (temp_6.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas3", 443)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 443)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 443)), temp_7.readProperty_mOptionComponentName (), temp_8.readProperty_mBoolOptionSortedList (), temp_9.readProperty_mUIntOptionSortedList (), temp_10.readProperty_mStringOptionSortedList (), temp_11.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas3", 442))), GGS_string ("\n\n"), GGS_string ("\n\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas3", 436)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (Compiler * /* inCompiler */,
                                                                               const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                               const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                               const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_409_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_409 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_409.hasCurrentObject ()) {
      result.appendString ("extern BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_409.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_409.gotoNextObject () ;
      index_409_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_972_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_972 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_972.hasCurrentObject ()) {
      result.appendString ("extern UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_972.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_972.gotoNextObject () ;
      index_972_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1537_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1537 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1537.hasCurrentObject ()) {
      result.appendString ("extern StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1537.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_1537.gotoNextObject () ;
      index_1537_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2109_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2109 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2109.hasCurrentObject ()) {
      result.appendString ("extern StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2109.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      enumerator_2109.gotoNextObject () ;
      index_2109_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                         const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                         const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                         const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_408_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_408 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_408.hasCurrentObject ()) {
      result.appendString ("BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_408.gotoNextObject () ;
      index_408_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_1389_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1389 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1389.hasCurrentObject ()) {
      result.appendString ("UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1389.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_1389.gotoNextObject () ;
      index_1389_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_2437_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2437 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2437.hasCurrentObject ()) {
      result.appendString ("StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2437.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_2437.gotoNextObject () ;
      index_2437_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_3533_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3533 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3533.hasCurrentObject ()) {
      result.appendString ("StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3533.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      enumerator_3533.gotoNextObject () ;
      index_3533_.increment () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftUI'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftUI (Compiler * inCompiler,
                                                                                      const GGS_string & /* in_OPTION_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                      const GGS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                      const GGS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                      const GGS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nimport SwiftUI\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let SELECTED_COMPILER_TOOL_INDEX_PREFKEY = \"selected.compiler.tool.index\"\n") ;
  GGS_uint index_367_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_367 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_367.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_367.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).add_operation (enumerator_367.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 10)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_367.gotoNextObject () ;
      index_367_.increment () ;
    }
  }
  GGS_uint index_578_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_578 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_578.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_578.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).add_operation (enumerator_578.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 13)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_578.gotoNextObject () ;
      index_578_.increment () ;
    }
  }
  GGS_uint index_791_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_791 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_791.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_791.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).add_operation (enumerator_791.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 16)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_791.gotoNextObject () ;
      index_791_.increment () ;
    }
  }
  GGS_uint index_1009_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_1009 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_1009.hasCurrentObject ()) {
      result.appendString ("fileprivate let ") ;
      result.appendString (enumerator_1009.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY = ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).add_operation (enumerator_1009.current_mOptionIdentifier (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 19)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_1009.gotoNextObject () ;
      index_1009_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//   Options View\n//--------------------------------------------------------------------------------------------------\n\nstruct OptionView : View {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mCompilerTools : [CompilerTool] = compilerTools ()\n  @AppStorage(SELECTED_COMPILER_TOOL_INDEX_PREFKEY) private var mSelectedCompilerIndex = 0\n  @State private var mCommandLine = compilerCommandExplained ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Bool options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2056_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2056 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2056.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2056.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2056.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : Bool = ") ;
      result.appendString (enumerator_2056.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2056.gotoNextObject () ;
      index_2056_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // UInt options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2495_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2495 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2495.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2495.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2495.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : UInt = ") ;
      result.appendString (enumerator_2495.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2495.gotoNextObject () ;
      index_2495_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // String options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_2938_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_2938 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_2938.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_2938.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_2938.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : String = ") ;
      result.appendString (enumerator_2938.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 52)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_2938.gotoNextObject () ;
      index_2938_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // String list options\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3434_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_3434 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_3434.hasCurrentObject ()) {
      result.appendString ("  @AppStorage(") ;
      result.appendString (enumerator_3434.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) private var ") ;
      result.appendString (enumerator_3434.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (" : [String] = ") ;
      result.appendString (enumerator_3434.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_3434.gotoNextObject () ;
      index_3434_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Body\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @ViewBuilder var body : some View {\n    VStack {\n      HStack {\n        Picker(\"Compiler\", selection: self.$mSelectedCompilerIndex) {\n          ForEach (self.mCompilerTools, id: \\.id) { tool in\n            Text (tool.url.lastPathComponent).tag (tool.id)\n          }\n        }.pickerStyle (.automatic)\n        Spacer ()\n      }\n      ScrollView {\n        VStack (alignment: .leading) {\n") ;
  GGS_uint index_4297_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4297 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4297.hasCurrentObject ()) {
      result.appendString ("          Toggle (") ;
      result.appendString (enumerator_4297.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 78)).stringValue ()) ;
      result.appendString (", isOn: self.$") ;
      result.appendString (enumerator_4297.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_4297.gotoNextObject () ;
      index_4297_.increment () ;
    }
  }
  GGS_uint index_4516_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4516 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4516.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_4516.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 81)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", value: self.$") ;
      result.appendString (enumerator_4516.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (", format: .number.precision (.fractionLength (0)))\n") ;
      enumerator_4516.gotoNextObject () ;
      index_4516_.increment () ;
    }
  }
  GGS_uint index_4811_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_4811 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_4811.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_4811.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", text: self.$") ;
      result.appendString (enumerator_4811.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (") }\n") ;
      enumerator_4811.gotoNextObject () ;
      index_4811_.increment () ;
    }
  }
  GGS_uint index_5063_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_5063 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_5063.hasCurrentObject ()) {
      result.appendString ("          HStack { Text (") ;
      result.appendString (enumerator_5063.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 87)).stringValue ()) ;
      result.appendString (") ; TextField (\"\", text: self.$") ;
      result.appendString (enumerator_5063.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_5063.gotoNextObject () ;
      index_5063_.increment () ;
    }
  }
  result.appendString ("        }.padding ()\n      }.background (.white)\n      HStack { Text (\"Build Command\") ; Spacer () }\n      TextEditor (text: .constant (self.mCommandLine))\n      .font (.system (size: 12).monospaced())\n      .frame (height: 64)\n    }.padding ()\n    .onReceive (NotificationCenter.default.publisher (for: UserDefaults.didChangeNotification)) { _ in\n      self.mCommandLine = compilerCommandExplained ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\nprivate func compilerCommandExplained () -> String {\n  let command : CommandLineToolInvocation = commandLineToolInvocation ()\n  var result = command.tool.lastPathComponent\n  for arg in command.arguments {\n    result += \" \" + arg\n  }\n  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\nstruct CommandLineToolInvocation {\n  let tool : URL\n  let arguments : [String]\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc commandLineToolInvocation () -> CommandLineToolInvocation {\n  let ud = UserDefaults.standard\n  let compilerTools : [CompilerTool] = compilerTools ()\n  let selectedCompilerIndex : Int = ud.integer (forKey: SELECTED_COMPILER_TOOL_INDEX_PREFKEY)\n  let tool = compilerTools [selectedCompilerIndex].url\n  var arguments = [String] ()\n") ;
  GGS_uint index_6782_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_6782 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_6782.hasCurrentObject ()) {
      result.appendString ("  if ud.bool (forKey: ") ;
      result.appendString (enumerator_6782.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) {\n    arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_6782.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 133)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (")\n  }\n") ;
      enumerator_6782.gotoNextObject () ;
      index_6782_.increment () ;
    }
  }
  GGS_uint index_7042_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7042 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7042.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : Int = ud.integer (forKey: ") ;
      result.appendString (enumerator_7042.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY)\n    if v != ") ;
      result.appendString (enumerator_7042.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7042.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 140)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 140)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 140)).stringValue ()) ;
      result.appendString (" + String (v))\n    }\n  }\n") ;
      enumerator_7042.gotoNextObject () ;
      index_7042_.increment () ;
    }
  }
  GGS_uint index_7406_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7406 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7406.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : String = ud.string (forKey: ") ;
      result.appendString (enumerator_7406.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) \?\? \"\"\n    if v != ") ;
      result.appendString (enumerator_7406.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 147)).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7406.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 148)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 148)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 148)).stringValue ()) ;
      result.appendString (" + v)\n    }\n  }\n") ;
      enumerator_7406.gotoNextObject () ;
      index_7406_.increment () ;
    }
  }
  GGS_uint index_7815_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    UpEnumerator_commandLineOptionSortedList enumerator_7815 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST) ;
    while (enumerator_7815.hasCurrentObject ()) {
      result.appendString ("  do{\n    let v : String = ud.string (forKey: ") ;
      result.appendString (enumerator_7815.current_mOptionIdentifier (HERE).stringValue ()) ;
      result.appendString ("_PREFKEY) \?\? \"\"\n    if v != ") ;
      result.appendString (enumerator_7815.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 155)).stringValue ()) ;
      result.appendString (" {\n      arguments.append (") ;
      result.appendString (GGS_string ("--").add_operation (enumerator_7815.current_mOptionString (HERE), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 156)).add_operation (GGS_string ("="), inCompiler COMMA_SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 156)).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swiftui.galgasTemplate", 156)).stringValue ()) ;
      result.appendString (" + v)\n    }\n  }\n") ;
      enumerator_7815.gotoNextObject () ;
      index_7815_.increment () ;
    }
  }
  result.appendString ("  return CommandLineToolInvocation (tool: tool, arguments: arguments)\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'groupSyntaxComponentsGalgas3??&'
//
//--------------------------------------------------------------------------------------------------

void routine_groupSyntaxComponentsGalgas_33__3F__3F__26_ (const GGS_galgas_33_SyntaxComponentListAST constinArgument_inAllSyntaxComponents,
                                                          const GGS_syntaxExtensions constinArgument_inSyntaxExtensions,
                                                          GGS_semanticDeclarationListAST & ioArgument_ioDeclarationList,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset var_componentNameSet_1621 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_galgas_33_SyntaxComponentListAST enumerator_1663 (constinArgument_inAllSyntaxComponents) ;
  while (enumerator_1663.hasCurrentObject ()) {
    var_componentNameSet_1621.plusPlusAssignOperation (enumerator_1663.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string ()  COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 33)) ;
    GGS_nonterminalDeclarationListAST var_nonterminalDeclarationList_1759 = enumerator_1663.current (HERE).readProperty_mNonterminalDeclarationList () ;
    GGS_syntaxRuleListAST var_ruleList_1834 = enumerator_1663.current (HERE).readProperty_mRuleList () ;
    UpEnumerator_galgas_33_SyntaxExtensionListAST enumerator_1904 (extensionGetter_listForKey (constinArgument_inSyntaxExtensions, enumerator_1663.current (HERE).readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 36))) ;
    while (enumerator_1904.hasCurrentObject ()) {
      var_nonterminalDeclarationList_1759.plusAssignOperation(enumerator_1904.current_mNonterminalDeclarationList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 37)) ;
      var_ruleList_1834.plusAssignOperation(enumerator_1904.current_mRuleList (HERE), inCompiler  COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 38)) ;
      enumerator_1904.gotoNextObject () ;
    }
    ioArgument_ioDeclarationList.addAssignOperation (GGS_galgas_33_SyntaxComponentAST::init_21_isPredefined_21__21__21__21__21_ (GGS_bool (false), enumerator_1663.current (HERE).readProperty_mSyntaxComponentName (), enumerator_1663.current (HERE).readProperty_mImportedLexiqueFilePath (), var_nonterminalDeclarationList_1759, var_ruleList_1834, enumerator_1663.current (HERE).readProperty_mHasTranslateFeature (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 40)) ;
    enumerator_1663.gotoNextObject () ;
  }
  UpEnumerator_syntaxExtensionsDictionary enumerator_2420 (constinArgument_inSyntaxExtensions.readProperty_dictionary ()) ;
  while (enumerator_2420.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_componentNameSet_1621.getter_hasKey (enumerator_2420.current_key (HERE) COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 50)).operator_not (SOURCE_FILE ("syntaxCompilation.galgas3", 50)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        UpEnumerator_galgas_33_SyntaxExtensionListAST enumerator_2547 (enumerator_2420.current_extensionList (HERE)) ;
        while (enumerator_2547.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_2547.current_mSyntaxComponentName (HERE).readProperty_location (), GGS_string ("there is no '").add_operation (enumerator_2547.current_mSyntaxComponentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 52)).add_operation (GGS_string ("' syntax component"), inCompiler COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 52)), fixItArray1  COMMA_SOURCE_FILE ("syntaxCompilation.galgas3", 52)) ;
          enumerator_2547.gotoNextObject () ;
        }
      }
    }
    enumerator_2420.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'buildLexicalTypeMap'
//
//--------------------------------------------------------------------------------------------------

static GGS_lexicalTypeMap onceFunction_buildLexicalTypeMap (Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTypeMap result_result ; // Returned variable
  result_result = GGS_lexicalTypeMap::init (inCompiler COMMA_HERE) ;
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("string"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 357)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 357)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 357)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("char"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 358)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 358)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 358)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 359)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 359)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 359)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("uint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 360)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 360)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 360)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 361)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 361)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 361)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("sint64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 362)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 362)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 362)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("double"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 363)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 363)) ;
  }
  {
  result_result.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("bigint"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 364)), inCompiler COMMA_HERE), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("lexiqueTypesForAST.galgas3", 364)), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 364)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_buildLexicalTypeMap = false ;
static GGS_lexicalTypeMap gOnceFunctionResult_buildLexicalTypeMap ;

//--------------------------------------------------------------------------------------------------

GGS_lexicalTypeMap function_buildLexicalTypeMap (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_buildLexicalTypeMap) {
    gOnceFunctionResult_buildLexicalTypeMap = onceFunction_buildLexicalTypeMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_buildLexicalTypeMap = true ;
  }
  return gOnceFunctionResult_buildLexicalTypeMap ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_buildLexicalTypeMap (void) {
  gOnceFunctionResult_buildLexicalTypeMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_buildLexicalTypeMap (nullptr,
                                                               releaseOnceFunctionResult_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_buildLexicalTypeMap [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_buildLexicalTypeMap (Compiler * inCompiler,
                                                                 const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                                 const GGS_location & /* inErrorLocation */
                                                                 COMMA_LOCATION_ARGS) {
  return function_buildLexicalTypeMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildLexicalTypeMap ("buildLexicalTypeMap",
                                                                     functionWithGenericHeader_buildLexicalTypeMap,
                                                                     & kTypeDescriptor_GALGAS_lexicalTypeMap,
                                                                     0,
                                                                     functionArgs_buildLexicalTypeMap) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalAttributeMap??&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalAttributeMap_3F__3F__26_ (const GGS_lexicalTypeMap constinArgument_inLexicalTypeMap,
                                                   const GGS_lexicalAttributeListAST constinArgument_inLexicalAttributeList,
                                                   GGS_lexicalAttributeMap & ioArgument_ioLexicalAttributeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_lexicalAttributeListAST enumerator_14099 (constinArgument_inLexicalAttributeList) ;
  while (enumerator_14099.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inLexicalTypeMap.getter_hasKey (enumerator_14099.current_mTypeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 384)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_lexicalTypeEnum var_lexicalType_14258 ;
        constinArgument_inLexicalTypeMap.method_searchKey (enumerator_14099.current_mTypeName (HERE), var_lexicalType_14258, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 385)) ;
        {
        ioArgument_ioLexicalAttributeMap.setter_insertKey (enumerator_14099.current_mName (HERE), var_lexicalType_14258, inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 386)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_m_14360 = GGS_string::makeEmptyString () ;
      var_m_14360.plusAssignOperation(GGS_string ("the @").add_operation (enumerator_14099.current_mTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 389)).add_operation (GGS_string (" type is not a valid lexical attribute type; are allowed:"), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 389)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 389)) ;
      UpEnumerator_lexicalTypeMap enumerator_14476 (constinArgument_inLexicalTypeMap) ;
      while (enumerator_14476.hasCurrentObject ()) {
        var_m_14360.plusAssignOperation(GGS_string (" @").add_operation (enumerator_14476.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 391)), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 391)) ;
        enumerator_14476.gotoNextObject () ;
        if (enumerator_14476.hasCurrentObject ()) {
          var_m_14360.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 393)) ;
        }
      }
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_14099.current_mTypeName (HERE).readProperty_location (), var_m_14360, fixItArray1  COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas3", 395)) ;
    }
    enumerator_14099.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithoutArgument&&?name?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                   GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                   const GGS_string constinArgument_inClassFunctionName,
                                                                                                   const GGS_string constinArgument_inReturnedTypeName,
                                                                                                   const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_1720 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1720, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 30)) ;
  }
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 35)), inCompiler COMMA_HERE), GGS_functionSignature::init (inCompiler COMMA_HERE), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1720 COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWithArgument&&?name?argTypeName?argName?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                          GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                          const GGS_string constinArgument_inClassFunctionName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                          const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                          const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                          const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_2435 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2435, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 52)) ;
  }
  GGS_unifiedTypeMapEntry var_t_2522 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2522, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 53)) ;
  }
  {
  GGS_functionSignature temp_0 = GGS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_functionSignature_2E_element::init_21__21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas3", 56)), var_t_2522, constinArgument_inArgument_31_Name, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 56)) ;
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 55)), inCompiler COMMA_HERE), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2435 COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 54)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith2Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                         GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                         const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                         const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                         const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                         const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_3349 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3349, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 73)) ;
  }
  GGS_functionSignature var_argumentTypeList_3374 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_t_3442 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3442, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 76)) ;
  }
  var_argumentTypeList_3374.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas3", 77)), var_t_3442, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 77)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3442, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 78)) ;
  }
  var_argumentTypeList_3374.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas3", 79)), var_t_3442, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 79)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 81)), inCompiler COMMA_HERE), var_argumentTypeList_3374, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3349 COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 80)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterClassFunctionWith3Arguments&&?name?argTypeName1?argName1?argTypeName2?argName2?argTypeName3?argName3?resultTypeName?hasLexiqueArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (GGS_classFunctionMap & ioArgument_ioClassFunctionMap,
                                                                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                                                           const GGS_string constinArgument_inClassFunctionName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_31_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_32_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_TypeName,
                                                                                                                                                                                                           const GGS_string constinArgument_inArgument_33_Name,
                                                                                                                                                                                                           const GGS_string constinArgument_inReturnedTypeName,
                                                                                                                                                                                                           const GGS_bool constinArgument_inHasLexiqueArgument,
                                                                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_returnedTypeIndex_4567 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4567, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 101)) ;
  }
  GGS_unifiedTypeMapEntry var_t_4654 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4654, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 102)) ;
  }
  GGS_functionSignature var_argumentTypeList_4682 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  var_argumentTypeList_4682.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas3", 104)), var_t_4654, constinArgument_inArgument_31_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 104)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4654, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 105)) ;
  }
  var_argumentTypeList_4682.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas3", 106)), var_t_4654, constinArgument_inArgument_32_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 106)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4654, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 107)) ;
  }
  var_argumentTypeList_4682.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas3", 108)), var_t_4654, constinArgument_inArgument_33_Name, GGS_bool (true)  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 108)) ;
  {
  ioArgument_ioClassFunctionMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inClassFunctionName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 110)), inCompiler COMMA_HERE), var_argumentTypeList_4682, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4567 COMMA_SOURCE_FILE ("semanticsConstructors.galgas3", 109)) ;
  }
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
  result.appendString (in_PROJECT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("+PROJECT.galgas4project.galgasTemplate", 1)).stringValue ()) ;
  result.appendString (" {\n  %makefile-unix\n  %makefile-macosx\n  %makefile-x86linux32-on-macosx\n  %makefile-x86linux64-on-macosx\n  %makefile-arm64-linux-on-macosx\n  %makefile-win32-on-macosx\n  %MacSwiftApp\n  %applicationBundleBase : \"fr.what\"\n  %codeblocks-windows\n  %codeblocks-linux32\n  %codeblocks-linux64\n}\n\n") ;
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
  result.appendString ("_lexique {\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Identifiers and keywords                                                                     \n//-----------------------------------------------------------------------------------------------------------------------\n\n@string tokenString\n\nstyle keywordsStyle -> \"Keywords\"\n\n$identifier$ ! tokenString error message \"an identifier\"\n\n//--- This is the keyword list\nlist keyWordList style keywordsStyle error message \"the '%K' keyword\" {\n  \"begin\",\n  \"end\"\n}\n\nrule 'a'->'z' |  'A'->'Z' {\n  repeat\n    enterCharacterIntoString (!\?tokenString !*)\n  while 'a'->'z' | 'A'->'Z' | '_' | '0'->'9' :\n  end\n  send search tokenString in keyWordList default $identifier$\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Literal decimal integers                                                                     \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle integerStyle -> \"Integer Constants\"\n@uint uint32value\n$integer$ !uint32value style integerStyle error message \"a 32-bit unsigned decimal number\"\n\nmessage decimalNumberTooLarge : \"decimal number too large\"\nmessage internalError : \"internal error\"\n\nrule '0'->'9' {\n  enterCharacterIntoString (!\?tokenString !*)\n  repeat\n  while '0'->'9' :\n    enterCharacterIntoString (!\?tokenString !*)\n  while '_' :\n  end\n  convertDecimalStringIntoUInt (!tokenString !\?uint32value error decimalNumberTooLarge, internalError)\n  send $integer$\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Literal character strings                                                                    \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle stringStyle -> \"String Constants\"\n$\"string\"$ ! tokenString style stringStyle %nonAtomicSelection error message \"a character string constant \\\"...\\\"\"\n\n\nmessage incorrectStringEnd : \"string does not end with '\\\"'\"\n\nrule '\"' {\n  repeat\n   while ' ' | '!' | '#'-> '\\uFFFD' :\n    enterCharacterIntoString (!\?tokenString !*)\n  end\n  select\n  case '\"' :\n    send $\"string\"$\n  default\n    error incorrectStringEnd\n  end\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Delimiters                                                                                   \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle delimitersStyle -> \"Delimiters\"\nlist delimitorsList style delimitersStyle error message \"the '%K' delimitor\" {\n  \":\",    \",\",    \";\",   \"!\",  \"{\",  \"}\", \"->\", \"@\", \"*\", \"-\"\n}\n\nrule list delimitorsList\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Comments                                                                                     \n//-----------------------------------------------------------------------------------------------------------------------\n\nstyle commentStyle -> \"Comments\"\n$comment$ style commentStyle %nonAtomicSelection error message \"a comment\"\nrule \"//\" {\n  repeat\n  while '\\u0001' -> '\\u0009' | '\\u000B' | '\\u000C' | '\\u000E' -> '\\uFFFD' :\n  end\n  drop $comment$\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n//   Separators                                                                                   \n//-----------------------------------------------------------------------------------------------------------------------\n\nrule '\\u0001' -> ' ' {\n}\n\n//-----------------------------------------------------------------------------------------------------------------------\n\n}\n\n") ;
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
  result.appendString ("_options {\n\n// ADD YOUR CODE\n\n}\n") ;
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
  result.appendString ("//--- Prologue routine\nbefore {\n}\n\n//--- 'when' clauses\ncase . \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\"\nmessage \"a source text file with the .") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" extension\"\ngrammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar\n\?sourceFilePath:@lstring inSourceFile {\n  grammar ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("_grammar () in inSourceFile\n}\n\n//--- Epilogue routine\nafter {\n}\n") ;
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
  result.appendString ("\n// ADD YOUR CODE\n\n") ;
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
  result.appendString ("_lexique) {\n\nrule <start_symbol> {\n  // ADD YOUR SYNTAX INSTRUCTIONS\n}\n\n// ADD OTHER RULES\n\n}\n") ;
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
  GGS_string var_projectName_2516 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas3", 47)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_project (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 48))).method_writeToFile (constinArgument_inProjectPath.add_operation (GGS_string ("/+"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 48)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 48)).add_operation (GGS_string (".galgas4project"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 48)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 48)) ;
  GGS_string var_galgas_5F_sources_5F_DIR_2736 = constinArgument_inProjectPath.add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 50)) ;
  var_galgas_5F_sources_5F_DIR_2736.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 51)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_cocoa (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 52))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 52)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 52)).add_operation (GGS_string ("-cocoa.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 52)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 52)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_grammar (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 53))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 53)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 53)).add_operation (GGS_string ("-grammar.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 53)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_lexique (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 54))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 54)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 54)).add_operation (GGS_string ("-lexique.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 54)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_options (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 55))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 55)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 55)).add_operation (GGS_string ("-options.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 55)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 55)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_program (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 56))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 56)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 56)).add_operation (GGS_string ("-program.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 56)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 56)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_semantics (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 57))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 57)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 57)).add_operation (GGS_string ("-semantics.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 57)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 57)) ;
  GGS_string (filewrapperTemplate_projectCreationFileWrapper_PROJECT_5F_syntax (inCompiler, var_projectName_2516 COMMA_SOURCE_FILE ("projectCreation.galgas3", 58))).method_writeToFile (var_galgas_5F_sources_5F_DIR_2736.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 58)).add_operation (var_projectName_2516, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 58)).add_operation (GGS_string ("-syntax.galgas"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 58)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 58)) ;
  {
  routine_println_3F_ (GGS_string ("*** DONE ***"), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas3", 60)) ;
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
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inProjectPath.getter_count (SOURCE_FILE ("projectCreation.galgas3", 66)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_println_3F_ (GGS_string ("*** PERFORM PROJECT CREATION (--create-project=").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 67)).add_operation (GGS_string (" option) ***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 67)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas3", 67)) ;
      }
      GGS_string var_projectName_4247 = constinArgument_inProjectPath.getter_lastPathComponent (SOURCE_FILE ("projectCreation.galgas3", 69)) ;
      GGS_bool var_ok_4307 = var_projectName_4247.getter_characterAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 70)).getter_isalpha (SOURCE_FILE ("projectCreation.galgas3", 70)) ;
      GGS_uint var_idx_4368 = GGS_uint (uint32_t (1U)) ;
      if (var_projectName_4247.getter_count (SOURCE_FILE ("projectCreation.galgas3", 72)).isValid ()) {
        uint32_t variant_4380 = var_projectName_4247.getter_count (SOURCE_FILE ("projectCreation.galgas3", 72)).uintValue () ;
        bool loop_4380 = true ;
        while (loop_4380) {
          loop_4380 = GGS_bool (ComparisonKind::lowerThan, var_idx_4368.objectCompare (var_projectName_4247.getter_count (SOURCE_FILE ("projectCreation.galgas3", 73)))).operator_and (var_ok_4307 COMMA_SOURCE_FILE ("projectCreation.galgas3", 73)).isValid () ;
          if (loop_4380) {
            loop_4380 = GGS_bool (ComparisonKind::lowerThan, var_idx_4368.objectCompare (var_projectName_4247.getter_count (SOURCE_FILE ("projectCreation.galgas3", 73)))).operator_and (var_ok_4307 COMMA_SOURCE_FILE ("projectCreation.galgas3", 73)).boolValue () ;
          }
          if (loop_4380 && (0 == variant_4380)) {
            loop_4380 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("projectCreation.galgas3", 72)) ;
          }
          if (loop_4380) {
            variant_4380 -= 1 ;
            GGS_char var_c_4465 = var_projectName_4247.getter_characterAtIndex (var_idx_4368, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 74)) ;
            var_ok_4307 = var_c_4465.getter_isalnum (SOURCE_FILE ("projectCreation.galgas3", 75)).operator_or (GGS_bool (ComparisonKind::equal, var_c_4465.objectCompare (GGS_char (utf32 (95)))) COMMA_SOURCE_FILE ("projectCreation.galgas3", 75)) ;
            var_idx_4368.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas3", 76)) ;
          }
        }
      }
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_ok_4307.operator_not (SOURCE_FILE ("projectCreation.galgas3", 78)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          routine_println_3F_ (GGS_string ("** Cannot create GALGAS project: the project name '").add_operation (var_projectName_4247, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 79)).add_operation (GGS_string ("' should begin by a letter followed by zero, one or more letters, digits and underscore character."), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas3", 79)) ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_ok_4307.boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_ok_4307 = constinArgument_inProjectPath.getter_directoryExists (SOURCE_FILE ("projectCreation.galgas3", 84)).operator_not (SOURCE_FILE ("projectCreation.galgas3", 84)) ;
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_ok_4307.operator_not (SOURCE_FILE ("projectCreation.galgas3", 85)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              routine_println_3F_ (GGS_string ("*** Cannot create GALGAS project: '").add_operation (constinArgument_inProjectPath, inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 86)).add_operation (GGS_string ("' directory already exists.***"), inCompiler COMMA_SOURCE_FILE ("projectCreation.galgas3", 86)), inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas3", 86)) ;
              }
            }
          }
        }
      }
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_ok_4307.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          {
          routine_performProjectCreation_3F_ (constinArgument_inProjectPath, inCompiler  COMMA_SOURCE_FILE ("projectCreation.galgas3", 90)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'syntaxSignatureOfInstructionList'
//
//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration function_syntaxSignatureOfInstructionList (const GGS_string & constinArgument_inPosfix,
                                                                                    const GGS_semanticInstructionListForGeneration & constinArgument_inInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration result_result ; // Returned variable
  result_result = GGS_semanticInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2048 (constinArgument_inInstructionList) ;
  while (enumerator_2048.hasCurrentObject ()) {
    callExtensionMethod_appendSyntaxSignature ((cPtr_semanticInstructionForGeneration *) enumerator_2048.current_mInstruction (HERE).ptr (), constinArgument_inPosfix, result_result, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 43)) ;
    enumerator_2048.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_syntaxSignatureOfInstructionList [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_syntaxSignatureOfInstructionList (Compiler * inCompiler,
                                                                              const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                              const GGS_location & /* inErrorLocation */
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_string operand0 = GGS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                         inCompiler
                                                         COMMA_THERE) ;
  const GGS_semanticInstructionListForGeneration operand1 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
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

GGS_bool function_compareSyntaxSignature (const GGS_semanticInstructionListForGeneration & constinArgument_inReferenceSignature,
                                          const GGS_semanticInstructionListForGeneration & constinArgument_inTestedSignature,
                                          const GGS_location & constinArgument_inErrorLocation,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2934 (constinArgument_inReferenceSignature) ;
  UpEnumerator_semanticInstructionListForGeneration enumerator_2978 (constinArgument_inTestedSignature) ;
  bool bool_0 = result_result.isValidAndTrue () ;
  if (enumerator_2934.hasCurrentObject () && enumerator_2978.hasCurrentObject () && bool_0) {
    while (enumerator_2934.hasCurrentObject () && enumerator_2978.hasCurrentObject () && bool_0) {
      result_result = callExtensionGetter_compareInstructionSyntaxSignature ((const cPtr_semanticInstructionForGeneration *) enumerator_2934.current_mInstruction (HERE).ptr (), enumerator_2978.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 70)) ;
      enumerator_2934.gotoNextObject () ;
      enumerator_2978.gotoNextObject () ;
      if (enumerator_2934.hasCurrentObject () && enumerator_2978.hasCurrentObject ()) {
        bool_0 = result_result.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_result.operator_and (GGS_bool (ComparisonKind::lowerThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas3", 72)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas3", 72)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 72)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_semanticInstructionForGeneration var_instruction_3242 = constinArgument_inTestedSignature.getter_mInstructionAtIndex (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas3", 73)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 73)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_syntaxInstructionForGeneration var_si_3335 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3242.ptr ())) ;
        if (nullptr == var_si_3335.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_si_3335.readProperty_mInstructionLocation (), GGS_string ("syntax signature error, exceeding instruction; this branch has more syntax instructions than reference branch"), fixItArray3  COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 75)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray4  COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 78)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = result_result.operator_and (GGS_bool (ComparisonKind::greaterThan, constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas3", 80)).objectCompare (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas3", 80)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 80)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("syntax signature error, missing instruction; this branch has less syntax instructions than reference branch"), fixItArray6  COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 81)) ;
        GGS_semanticInstructionForGeneration var_instruction_3877 = constinArgument_inReferenceSignature.getter_mInstructionAtIndex (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("syntaxSignature.galgas3", 83)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 83)) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          GGS_syntaxInstructionForGeneration var_si_3970 (dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (var_instruction_3877.ptr ())) ;
          if (nullptr == var_si_3970.ptr ()) {
            test_7 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_7) {
            GenericArray <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (var_si_3970.readProperty_mInstructionLocation (), GGS_string ("this is the syntax instruction in reference branch that corresponds to the first missing instruction"), fixItArray8  COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 85)) ;
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("internal error"), fixItArray9  COMMA_SOURCE_FILE ("syntaxSignature.galgas3", 88)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_compareSyntaxSignature [4] = {
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration,
  & kTypeDescriptor_GALGAS_location,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_compareSyntaxSignature (Compiler * inCompiler,
                                                                    const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                    const GGS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_semanticInstructionListForGeneration operand0 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GGS_semanticInstructionListForGeneration operand1 = GGS_semanticInstructionListForGeneration::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GGS_location operand2 = GGS_location::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
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
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
                                                                                    const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
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
  result_result = GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 314)) ;
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
  result_result = GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 321)) ;
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
  result_result = GGS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 328)) ;
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
  result_result = GGS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 335)) ;
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
  result_result = GGS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 342)) ;
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
  result_result = GGS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 349)) ;
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
  result_result = GGS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 356)) ;
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
  result_result = GGS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 363)) ;
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
  result_result = GGS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 369)) ;
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
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 393)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_extensionGetterMapForType var_extensionGetterMapForType_16289 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_16289, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 394)) ;
      UpEnumerator_extensionGetterMapForType enumerator_16372 (var_extensionGetterMapForType_16289) ;
      while (enumerator_16372.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_16444 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_16502 (enumerator_16372.current_mInputFormalParameterList (HERE)) ;
        while (enumerator_16502.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_16612 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16502.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_16612, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 398)) ;
          }
          var_formalArgumentList_16444.addAssignOperation (enumerator_16502.current (HERE).readProperty_mFormalSelector (), var_typeIndex_16612, enumerator_16502.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_16502.current (HERE).readProperty_mIsConstant ()  COMMA_SOURCE_FILE ("semanticContext.galgas3", 399)) ;
          enumerator_16502.gotoNextObject () ;
        }
        GGS_unifiedTypeMapEntry var_returnedType_16883 ;
        {
        extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_16372.current_mResultTypeName (HERE), var_returnedType_16883, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 405)) ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::equal, enumerator_16372.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas3", 406)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16372.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 407)).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas3", 408)), enumerator_16372.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 408)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, enumerator_16372.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas3", 410)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GalgasBool test_4 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_hasKey (enumerator_16372.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 411)).boolEnum () ;
                if (GalgasBool::boolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas3", 412)), enumerator_16372.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 412)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_16372.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas3", 414)))) COMMA_SOURCE_FILE ("semanticContext.galgas3", 414)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_16372.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas3", 417)), var_formalArgumentList_16444, enumerator_16372.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_16883, GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas3", 422)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 415)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_16372.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas3", 428)), var_formalArgumentList_16444, enumerator_16372.current_lkey (HERE).readProperty_location (), GGS_bool (true), var_returnedType_16883, enumerator_16372.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 426)) ;
              }
            }
          }
        }
        enumerator_16372.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 440)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GGS_extensionMethodMapForType var_extensionMethodMapForType_18100 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_18100, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 441)) ;
      UpEnumerator_extensionMethodMapForType enumerator_18162 (var_extensionMethodMapForType_18100) ;
      while (enumerator_18162.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_18215 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_18288 (enumerator_18162.current_mFormalParameterList (HERE)) ;
        while (enumerator_18288.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_18424 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_18288.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_18424, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 445)) ;
          }
          var_formalArgumentList_18215.addAssignOperation (enumerator_18288.current (HERE).readProperty_mFormalSelector (), var_typeIndex_18424, enumerator_18288.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_18288.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas3", 449)) ;
          enumerator_18288.gotoNextObject () ;
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (ComparisonKind::equal, enumerator_18162.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas3", 455)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            GalgasBool test_8 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18162.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 456)).boolEnum () ;
              if (GalgasBool::boolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas3", 457)), enumerator_18162.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 457)) ;
                }
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_7) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, enumerator_18162.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas3", 459)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_18162.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 460)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GGS_methodQualifier::class_func_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas3", 461)), enumerator_18162.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 461)) ;
                  }
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GGS_bool (ComparisonKind::equal, enumerator_18162.current_mQualifier (HERE).objectCompare (GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas3", 463)))) COMMA_SOURCE_FILE ("semanticContext.galgas3", 463)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18162.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas3", 466)), var_formalArgumentList_18215, enumerator_18162.current_lkey (HERE).readProperty_location (), GGS_bool (true), GGS_methodQualifier::class_func_isVirtual (SOURCE_FILE ("semanticContext.galgas3", 470)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 464)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_18162.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas3", 476)), var_formalArgumentList_18215, enumerator_18162.current_lkey (HERE).readProperty_location (), GGS_bool (true), enumerator_18162.current_mQualifier (HERE), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 474)) ;
              }
            }
          }
        }
        enumerator_18162.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 487)).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_extensionSetterMapForType var_extensionSetterMapForType_19784 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_19784, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 488)) ;
      UpEnumerator_extensionSetterMapForType enumerator_19825 (var_extensionSetterMapForType_19784) ;
      while (enumerator_19825.hasCurrentObject ()) {
        GGS_formalParameterSignature var_formalArgumentList_19915 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalParameterListAST enumerator_19963 (enumerator_19825.current_mFormalParameterList (HERE)) ;
        while (enumerator_19963.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_20059 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_19963.current (HERE).readProperty_mFormalArgumentTypeName (), var_typeIndex_20059, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 492)) ;
          }
          var_formalArgumentList_19915.addAssignOperation (enumerator_19963.current (HERE).readProperty_mFormalSelector (), var_typeIndex_20059, enumerator_19963.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_19963.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas3", 493)) ;
          enumerator_19963.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_19825.current_lkey (HERE), GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("semanticContext.galgas3", 501)), var_formalArgumentList_19915, GGS_bool (true), GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticContext.galgas3", 504)), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 499)) ;
        }
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas3", 507)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_19825.current_lkey (HERE).readProperty_location (), GGS_string ("a class does not accept any setter; use method instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas3", 508)) ;
          }
        }
        enumerator_19825.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inExtensionInitializerMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 513)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_extensionInitializerMapForType var_initializerMapForType_20811 ;
      constinArgument_inExtensionInitializerMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_initializerMapForType_20811, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 514)) ;
      UpEnumerator_extensionInitializerMapForType enumerator_20848 (var_initializerMapForType_20811) ;
      while (enumerator_20848.hasCurrentObject ()) {
        GGS_functionSignature var_formalArgumentList_20927 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
        UpEnumerator_formalInputParameterListAST enumerator_21024 (enumerator_20848.current_mFormalParameterList (HERE)) ;
        while (enumerator_21024.hasCurrentObject ()) {
          GGS_unifiedTypeMapEntry var_typeIndex_21124 ;
          {
          extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_21024.current_mFormalArgumentTypeName (HERE), var_typeIndex_21124, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 518)) ;
          }
          var_formalArgumentList_20927.addAssignOperation (enumerator_21024.current_mFormalSelector (HERE), var_typeIndex_21124, enumerator_21024.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_21024.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas3", 519)) ;
          enumerator_21024.gotoNextObject () ;
        }
        {
        ioArgument_ioInitializerMap.setter_insertKey (enumerator_20848.current_lkey (HERE), var_formalArgumentList_20927, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 529)) ;
        }
        enumerator_20848.gotoNextObject () ;
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
  GGS_uint var_currentDirectoryIndex_22496 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 557)) ;
  GGS_stringlist var_files_22624 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas3", 559)) ;
  outArgument_outWrapperFileMap = GGS_wrapperFileMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_22708 (var_files_22624) ;
  while (enumerator_22708.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_22708.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas3", 562)) COMMA_SOURCE_FILE ("semanticContext.galgas3", 562)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_absoluteFilePath_22812 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 563)).add_operation (enumerator_22708.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 563)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_22708.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 565)), inCompiler COMMA_HERE), var_absoluteFilePath_22812, GGS_bool (true), var_currentDirectoryIndex_22496, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 564)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 571)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_22708.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas3", 572)) COMMA_SOURCE_FILE ("semanticContext.galgas3", 572)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_absoluteFilePath_23187 = constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 573)).add_operation (enumerator_22708.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 573)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_22708.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 575)), inCompiler COMMA_HERE), var_absoluteFilePath_23187, GGS_bool (false), var_currentDirectoryIndex_22496, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 574)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 581)) ;
        }
      }
    }
    enumerator_22708.gotoNextObject () ;
  }
  GGS_stringlist var_directories_23545 = constinArgument_inAbsoluteSourcePath.getter_directories (GGS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas3", 585)) ;
  outArgument_outWrapperDirectoryMap = GGS_wrapperDirectoryMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_stringlist enumerator_23639 (var_directories_23545) ;
  while (enumerator_23639.hasCurrentObject ()) {
    GGS_uint var_theDirectoryIndex_23679 = ioArgument_ioWrapperDirectoryIndex ;
    GGS_wrapperFileMap var_internalWrapperFileMap_23915 ;
    GGS_wrapperDirectoryMap var_internalWrapperDirectoryMap_23949 ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (constinArgument_inAbsoluteSourcePath.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 590)).add_operation (enumerator_23639.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 590)), constinArgument_inPathInWrapper.add_operation (enumerator_23639.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 591)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 591)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_23915, var_internalWrapperDirectoryMap_23949, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 589)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_23639.current_mValue (HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 600)), inCompiler COMMA_HERE), var_internalWrapperFileMap_23915, var_internalWrapperDirectoryMap_23949, var_theDirectoryIndex_23679, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 599)) ;
    }
    enumerator_23639.gotoNextObject () ;
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
  GGS_filewrapperTemplateMap var_filewrapperTemplateMap_24984 = GGS_filewrapperTemplateMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_0 = this ;
  UpEnumerator_filewrapperTemplateListAST enumerator_25070 (temp_0.readProperty_mFilewrapperTemplateList ()) ;
  while (enumerator_25070.hasCurrentObject ()) {
    GGS_functionSignature var_templateSignature_25176 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalTemplateInputParameterListAST enumerator_25221 (enumerator_25070.current_mFilewrapperTemplateFormalInputParameters (HERE)) ;
    while (enumerator_25221.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_parameterTypeIndex_25335 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_25221.current (HERE).readProperty_mFormalArgumentTypeName (), var_parameterTypeIndex_25335, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 624)) ;
      }
      var_templateSignature_25176.addAssignOperation (enumerator_25221.current (HERE).readProperty_mFormalTemplateSelector (), var_parameterTypeIndex_25335, enumerator_25221.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_25221.current (HERE).readProperty_mIsUnused ()  COMMA_SOURCE_FILE ("semanticContext.galgas3", 625)) ;
      enumerator_25221.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_24984.setter_insertKey (enumerator_25070.current_mFilewrapperTemplateName (HERE), var_templateSignature_25176, enumerator_25070.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 631)) ;
    }
    enumerator_25070.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_textExtensionMap_25740 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_1 = this ;
  UpEnumerator_lstringlist enumerator_25770 (temp_1.readProperty_mFilewrapperTextFileExtensionList ()) ;
  while (enumerator_25770.hasCurrentObject ()) {
    {
    var_textExtensionMap_25740.setter_insertKey (enumerator_25770.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 640)) ;
    }
    enumerator_25770.gotoNextObject () ;
  }
  GGS_wrapperExtensionMap var_binaryFileExtensionMap_25937 = GGS_wrapperExtensionMap::init (inCompiler COMMA_HERE) ;
  const GGS_filewrapperDeclarationAST temp_2 = this ;
  UpEnumerator_lstringlist enumerator_25973 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList ()) ;
  while (enumerator_25973.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = var_textExtensionMap_25740.getter_hasKey (enumerator_25973.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas3", 645)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_25973.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_25973.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 646)).add_operation (GGS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 646)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas3", 646)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      {
      var_binaryFileExtensionMap_25937.setter_insertKey (enumerator_25973.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 648)) ;
      }
    }
    enumerator_25973.gotoNextObject () ;
  }
  GGS_wrapperFileMap var_regularRootFileMap_26294 ;
  GGS_wrapperDirectoryMap var_wrapperDirectoryMap_26340 ;
  GGS_string var_absoluteSourcePath_26374 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_filewrapperDeclarationAST temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas3", 655)).objectCompare (GGS_char (utf32 (47)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_filewrapperDeclarationAST temp_7 = this ;
      var_absoluteSourcePath_26374 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_filewrapperDeclarationAST temp_8 = this ;
    const GGS_filewrapperDeclarationAST temp_9 = this ;
    var_absoluteSourcePath_26374 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_deletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas3", 658)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 658)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 658)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_absoluteSourcePath_26374.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas3", 660)).operator_not (SOURCE_FILE ("semanticContext.galgas3", 660)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_filewrapperDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GGS_string ("The '").add_operation (var_absoluteSourcePath_26374, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 661)).add_operation (GGS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 661)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas3", 661)) ;
      var_regularRootFileMap_26294.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_26340.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GGS_uint var_wrapperFileIndex_26882 = GGS_uint (uint32_t (0U)) ;
    GGS_uint var_wrapperDirectoryIndex_26917 = GGS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories_3F__3F__3F__3F__21__21__26__26_ (var_absoluteSourcePath_26374, GGS_string ("/"), var_textExtensionMap_25740, var_binaryFileExtensionMap_25937, var_regularRootFileMap_26294, var_wrapperDirectoryMap_26340, var_wrapperFileIndex_26882, var_wrapperDirectoryIndex_26917, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas3", 667)) ;
    }
  }
  {
  const GGS_filewrapperDeclarationAST temp_13 = this ;
  const GGS_filewrapperDeclarationAST temp_14 = this ;
  const GGS_filewrapperDeclarationAST temp_15 = this ;
  const GGS_filewrapperDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_26294, var_wrapperDirectoryMap_26340, var_filewrapperTemplateMap_24984, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 679)) ;
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
  GGS_functionSignature var_functionSignature_28238 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  UpEnumerator_formalInputParameterListAST enumerator_28331 (temp_0.readProperty_mFormalArgumentList ()) ;
  while (enumerator_28331.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterTypeIndex_28432 ;
    {
    extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_28331.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_28432, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 703)) ;
    }
    var_functionSignature_28238.addAssignOperation (enumerator_28331.current_mFormalSelector (HERE), var_parameterTypeIndex_28432, enumerator_28331.current_mFormalArgumentTypeName (HERE).readProperty_string (), enumerator_28331.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticContext.galgas3", 704)) ;
    enumerator_28331.gotoNextObject () ;
  }
  GGS_unifiedTypeMapEntry var_resultTypeIndex_28635 ;
  {
  const GGS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_28635, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 707)) ;
  }
  {
  const GGS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_28238, var_resultTypeIndex_28635, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 709)) ;
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
  GGS_unifiedTypeMapEntry var_resultTypeIndex_29641 ;
  {
  const GGS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_29641, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 728)) ;
  }
  {
  const GGS_onceFunctionDeclarationAST temp_1 = this ;
  const GGS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GGS_functionSignature::init (inCompiler COMMA_HERE), var_resultTypeIndex_29641, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 730)) ;
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
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 744)) ;
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
  GGS_grammarLabelMap var_grammarLabelMap_31509 = GGS_grammarLabelMap::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  UpEnumerator_nonTerminalLabelListAST enumerator_31569 (temp_0.readProperty_mStartSymbolLabelList ()) ;
  while (enumerator_31569.hasCurrentObject ()) {
    GGS_formalParameterSignature var_formalArgumentList_31665 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
    UpEnumerator_formalParameterListAST enumerator_31786 (enumerator_31569.current_mFormalArgumentList (HERE)) ;
    while (enumerator_31786.hasCurrentObject ()) {
      GGS_unifiedTypeMapEntry var_argumentType_31875 ;
      {
      extensionSetter_makeEntry (ioArgument_ioTypeMap, enumerator_31786.current_mFormalArgumentTypeName (HERE), var_argumentType_31875, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 770)) ;
      }
      var_formalArgumentList_31665.addAssignOperation (enumerator_31786.current_mFormalSelector (HERE), var_argumentType_31875, enumerator_31786.current_mFormalArgumentPassingMode (HERE), enumerator_31786.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas3", 771)) ;
      enumerator_31786.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_31509.setter_insertKey (enumerator_31569.current_mLabelName (HERE), var_formalArgumentList_31665, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 777)) ;
    }
    enumerator_31569.gotoNextObject () ;
  }
  {
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_grammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_31509, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 783)) ;
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
  GGS_lstring var_key_33611 = GGS_lstring::init_21__21_ (GGS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 815)), temp_1.readProperty_mGrammarComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_33611, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 816)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_3 = this ;
  UpEnumerator_lstringlist enumerator_33768 (temp_3.readProperty_mSyntaxComponents ()) ;
  while (enumerator_33768.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_33611, GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (enumerator_33768.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 818)), enumerator_33768.current_mValue (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas3", 818)) ;
    }
    enumerator_33768.gotoNextObject () ;
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
  GGS_lstring var_key_34628 = GGS_lstring::init_21__21_ (GGS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 832)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_34628, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 833)) ;
  }
  {
  const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34628, GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 834)), temp_4.readProperty_mLexiqueName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas3", 834)) ;
  }
  const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
  UpEnumerator_syntaxRuleListAST enumerator_34907 (temp_5.readProperty_mRuleList ()) ;
  while (enumerator_34907.hasCurrentObject ()) {
    UpEnumerator_syntaxRuleLabelListAST enumerator_34972 (enumerator_34907.current_mLabelList (HERE)) ;
    while (enumerator_34972.hasCurrentObject ()) {
      UpEnumerator_formalParameterListAST enumerator_35058 (enumerator_34972.current_mFormalArguments (HERE)) ;
      while (enumerator_35058.hasCurrentObject ()) {
        switch (enumerator_35058.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_34628, GGS_lstring::init_21__21_ (GGS_string ("@").add_operation (enumerator_35058.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas3", 839)), enumerator_35058.current_mFormalArgumentTypeName (HERE).readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticContext.galgas3", 839)) ;
            }
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          break ;
        }
        enumerator_35058.gotoNextObject () ;
      }
      enumerator_34972.gotoNextObject () ;
    }
    enumerator_34907.gotoNextObject () ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas3", 857)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas3", 870)) ;
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
  ioArgument_ioExtensionOverrideDefinitionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas3", 883)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument&&?argTypeName?argName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                            GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                            const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                            const GGS_string constinArgument_inInputArgumentName,
                                                                                                            const GGS_string constinArgument_inSetterName,
                                                                                                            const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_1754 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1754, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 31)) ;
  }
  GGS_formalParameterSignature var_argList_1805 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_1805.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas3", 33)), var_argumentTypeIndex_1754, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas3", 33)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 33)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 35)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas3", 36)), var_argList_1805, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas3", 39)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments&&?outputArgTypeName?outputArgName?inputArgTypeName?inputArgName?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                                      GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inOutputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentTypeName,
                                                                                                                                                                      const GGS_string constinArgument_inInputArgumentName,
                                                                                                                                                                      const GGS_string constinArgument_inSetterName,
                                                                                                                                                                      const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_outputArgumentTypeIndex_2696 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2696, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 54)) ;
  }
  GGS_unifiedTypeMapEntry var_inputArgumentTypeIndex_2793 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2793, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 55)) ;
  }
  GGS_formalParameterSignature var_argList_2849 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2849.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas3", 57)), var_outputArgumentTypeIndex_2696, GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("semanticsSetters.galgas3", 57)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 57)) ;
  var_argList_2849.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas3", 58)), var_inputArgumentTypeIndex_2793, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas3", 58)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 58)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 60)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas3", 61)), var_argList_2849, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas3", 64)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 59)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments&&?arg1TypeName?arg1Name?arg2TypeName?arg2Name?setterName?compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                                                                                                           GGS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_31_Name,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_TypeName,
                                                                                                                                                           const GGS_string constinArgument_inInputArgument_32_Name,
                                                                                                                                                           const GGS_string constinArgument_inSetterName,
                                                                                                                                                           const GGS_bool constinArgument_inHasCompilerArgument,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterSignature var_argList_3764 = GGS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GGS_unifiedTypeMapEntry var_argumentTypeIndex_3868 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3868, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 80)) ;
  }
  var_argList_3764.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas3", 81)), var_argumentTypeIndex_3868, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas3", 81)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 81)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3868, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 82)) ;
  }
  var_argList_3764.addAssignOperation (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas3", 83)), var_argumentTypeIndex_3868, GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas3", 83)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 83)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 85)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas3", 86)), var_argList_3764, constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas3", 89)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 84)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument&??compilerArg'
//
//--------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (GGS_setterMap & ioArgument_ioSetterMap,
                                                                  const GGS_string constinArgument_inSetterName,
                                                                  const GGS_bool constinArgument_inHasCompilerArgument,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GGS_lstring::init_21__21_ (constinArgument_inSetterName, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 100)), inCompiler COMMA_HERE), GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas3", 101)), GGS_formalParameterSignature::init (inCompiler COMMA_HERE), constinArgument_inHasCompilerArgument, GGS_methodQualifier::class_func_isBasic (SOURCE_FILE ("semanticsSetters.galgas3", 104)), GGS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas3", 99)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'routineMangledName'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring function_routineMangledName (const GGS_lstring & constinArgument_inRoutineName,
                                         const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring result_result ; // Returned variable
  GGS_string var_str_1470 = constinArgument_inRoutineName.readProperty_string () ;
  UpEnumerator_formalParameterSignature enumerator_1516 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_1516.hasCurrentObject ()) {
    switch (enumerator_1516.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_str_1470.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 29)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_str_1470.plusAssignOperation(GGS_string ("&"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 31)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_str_1470.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 33)) ;
      }
      break ;
    }
    var_str_1470.plusAssignOperation(enumerator_1516.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 35)) ;
    enumerator_1516.gotoNextObject () ;
  }
  result_result = GGS_lstring::init_21__21_ (var_str_1470, constinArgument_inRoutineName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineMangledName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineMangledName (Compiler * inCompiler,
                                                                const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                const GGS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_lstring operand0 = GGS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GGS_formalParameterSignature operand1 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineMangledName (operand0,
                                      operand1,
                                      inCompiler
                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineMangledName ("routineMangledName",
                                                                    functionWithGenericHeader_routineMangledName,
                                                                    & kTypeDescriptor_GALGAS_lstring,
                                                                    2,
                                                                    functionArgs_routineMangledName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'routineArgumentFromFormalParameters'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_routineArgumentFromFormalParameters (const GGS_formalParameterSignature & constinArgument_inRoutineFormalParameters,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("(") ;
  UpEnumerator_formalParameterSignature enumerator_2086 (constinArgument_inRoutineFormalParameters) ;
  while (enumerator_2086.hasCurrentObject ()) {
    switch (enumerator_2086.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        result_result.plusAssignOperation(GGS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 48)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        result_result.plusAssignOperation(GGS_string ("!\?"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 50)) ;
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        result_result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 52)) ;
      }
      break ;
    }
    result_result.plusAssignOperation(enumerator_2086.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("routineMap.galgas3", 54)), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 54)) ;
    enumerator_2086.gotoNextObject () ;
    if (enumerator_2086.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 56)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("routineMap.galgas3", 58)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_routineArgumentFromFormalParameters [2] = {
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_routineArgumentFromFormalParameters (Compiler * inCompiler,
                                                                                 const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                                                 const GGS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_formalParameterSignature operand0 = GGS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_routineArgumentFromFormalParameters (operand0,
                                                       inCompiler
                                                       COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_routineArgumentFromFormalParameters ("routineArgumentFromFormalParameters",
                                                                                     functionWithGenericHeader_routineArgumentFromFormalParameters,
                                                                                     & kTypeDescriptor_GALGAS_string,
                                                                                     1,
                                                                                     functionArgs_routineArgumentFromFormalParameters) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'lexicalUnicodeTestFunctionAnalysis!'
//
//--------------------------------------------------------------------------------------------------

void routine_lexicalUnicodeTestFunctionAnalysis_21_ (GGS_stringset & outArgument_outUnicodeTestFunctions,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnicodeTestFunctions.drop () ; // Release 'out' argument
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas3", 31)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("lexicalUnicodeTestFunctions.galgas3", 31)) ;
  outArgument_outUnicodeTestFunctions = temp_0 ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 37)) ;
  result_result.plusAssignOperation(GGS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 38)) ;
  const GGS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 39)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 39)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  result_outGeneratedCode = GGS_string ("self.testForInputFromChar (") ;
  const GGS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 49)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 49)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 49)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 50)) ;
  const GGS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 51)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 51)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 51)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 52)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 60)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 61)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.notTestForInputString (") ;
  const GGS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 70)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 70)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 71)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.testForInputChar (") ;
  const GGS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 80)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 80)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 81)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GGS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("self.testForChar_").add_operation (temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 88)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 88)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 100)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 107)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 107)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 113)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("self.previousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 127)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 127)) ;
  const GGS_lexicalFunctionInputArgumentAST temp_1 = this ;
  UpEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_5991 (temp_1.readProperty_mFunctionActualArgumentList ()) ;
  while (enumerator_5991.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_5991.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 129)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 129)) ;
    enumerator_5991.gotoNextObject () ;
    if (enumerator_5991.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 130)) ;
    }
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 132)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string constinArgument_inScannerClassName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  const GGS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GGS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 146)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 146)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 146)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 146)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 146)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GGS_string /* constinArgument_inScannerClassName */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  GGS_tokenSortedlist var_tokenSortedList_8241 ;
  const GGS_lexicalImplicitRuleAST temp_0 = this ;
  GGS_lexicalExplicitTokenListMap joker_8233 ; // Joker input parameter
  GGS_bool joker_8257 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_8233, var_tokenSortedList_8241, joker_8257, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 179)) ;
  result_outGeneratedCode = GGS_string::makeEmptyString () ;
  DownEnumerator_tokenSortedlist enumerator_8302 (var_tokenSortedList_8241) ;
  while (enumerator_8302.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(GGS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 182)) ;
    result_outGeneratedCode.plusAssignOperation(enumerator_8302.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 183)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 183)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 184)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 185)).add_operation (GGS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 185)).add_operation (enumerator_8302.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 185)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 185)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 185)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 185)) ;
    result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 186)) ;
    enumerator_8302.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GGS_string constinArgument_inScannerClassName,
                                                                       const GGS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GGS_string ("if scanningOk && (") ;
  const GGS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 197)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 197)) ;
  result_outGeneratedCode.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 198)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 199)) ;
  }
  const GGS_lexicalExplicitRuleAST temp_1 = this ;
  UpEnumerator_lexicalInstructionListAST enumerator_9181 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_9181.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssignOperation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9181.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 201)) ;
    enumerator_9181.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 203)) ;
  }
  result_outGeneratedCode.plusAssignOperation(GGS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas3", 204)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'templateCodeGenerationForListInstruction?&&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (const GGS_templateInstructionListForGeneration constinArgument_inInstructionList,
                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                               GGS_stringset & ioArgument_ioInclusionSet,
                                                                               GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GGS_bool & ioArgument_ioUseColumnMarker,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_templateInstructionListForGeneration enumerator_2260 (constinArgument_inInstructionList) ;
  while (enumerator_2260.hasCurrentObject ()) {
    callExtensionMethod_templateCodeGeneration ((cPtr_templateInstructionForGeneration *) enumerator_2260.current_mInstruction (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 42)) ;
    enumerator_2260.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionStringForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                 GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GGS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionStringForGeneration temp_0 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (temp_0.readProperty_mTemplateString ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("templateCodeGeneration.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 60)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 60)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                     GGS_stringset & ioArgument_ioInclusionSet,
                                                                                     GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GGS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_cppName_3499 ;
  const GGS_templateInstructionExpressionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName_3499, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 72)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendString (").add_operation (var_cppName_3499, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 73)).add_operation (GGS_string (".stringValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 73)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 73)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                GGS_stringset & ioArgument_ioInclusionSet,
                                                                                GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_indendationVarCppName_4088 ;
  const GGS_templateBlockInstructionForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 85)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 86)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 86)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 86)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (int32_t (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 87)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 87)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 87)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 88)) ;
  {
  const GGS_templateBlockInstructionForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mBlockInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 89)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 97)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 97)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 97)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  result.incIndentation (- int32_t (").add_operation (var_indendationVarCppName_4088, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 98)).add_operation (GGS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 98)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 98)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 99)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGetColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                            GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                            GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionGotoColumnLocationForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                             GGS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                             GGS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                             GGS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GGS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionIfForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                             GGS_stringset & ioArgument_ioInclusionSet,
                                                                             GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GGS_bool & ioArgument_ioUseColumnMarker,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateInstructionIfForGeneration temp_0 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_6326 (temp_0.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_6326.hasCurrentObject ()) {
    GGS_string var_ifVarCppName_6570 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_6326.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName_6570, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 136)) ;
    GGS_string var_testVar_6597 = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 143)) ;
    ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 144)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GalgasBool ").add_operation (var_testVar_6597, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)).add_operation (var_ifVarCppName_6570, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 145)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("switch (").add_operation (var_testVar_6597, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 146)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 146)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolTrue : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (enumerator_6326.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 149)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("} break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 157)) ;
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 158)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolFalse : {\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 159)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 160)) ;
    }
    enumerator_6326.gotoNextObject () ;
  }
  {
  const GGS_templateInstructionIfForGeneration temp_1 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 163)) ;
  }
  const GGS_templateInstructionIfForGeneration temp_2 = this ;
  UpEnumerator_templateInstructionIfBranchListForGeneration enumerator_7579 (temp_2.readProperty_mTemplateInstructionIfBranchList ()) ;
  while (enumerator_7579.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 172)) ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  } break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 173)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("case GalgasBool::boolNotValid :\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 174)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 175)) ;
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas3", 176)) ;
    enumerator_7579.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::method_templateInstructionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GGS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_expression_7604 ;
  const GGS_templateInstructionForeachAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_expression_7604, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 219)) ;
  GGS_enumerationDescriptorList var_enumerationDescriptor_7726 = extensionGetter_definition (var_expression_7604.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 227)).readProperty_enumerationDescriptorList () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_enumerationDescriptor_7726.getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 228)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_expression_7604.readProperty_mLocation (), GGS_string ("expression of '@").add_operation (extensionGetter_definition (var_expression_7604.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 229)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 229)).add_operation (GGS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 229)), fixItArray2  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 229)) ;
    }
  }
  GGS_templateInstructionListForGeneration var_beforeInstructionList_8024 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_3 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_3.readProperty_mBeforeInstructionList (), var_beforeInstructionList_8024, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 233)) ;
  }
  const GGS_templateInstructionForeachAST temp_4 = this ;
  GGS_string var_enumeratorCppName_8319 = GGS_string ("enumerator_").add_operation (temp_4.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 242)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 242)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 242)) ;
  GGS_templateVariableMap var_doVariableMap_8418 = constinArgument_inAnalysisContext.readProperty_mTemplateVariableMap () ;
  const GGS_templateInstructionForeachAST temp_5 = this ;
  const GGS_templateInstructionForeachAST temp_6 = this ;
  GGS_string var_cppIndexVarName_8479 = GGS_string ("index_").add_operation (temp_5.readProperty_mIndexIdentifier ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 244)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 244)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 244)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 244)).add_operation (temp_6.readProperty_mIndexIdentifier ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas3", 245)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 245)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_templateInstructionForeachAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mIndexIdentifier ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      {
      const GGS_templateInstructionForeachAST temp_9 = this ;
      var_doVariableMap_8418.setter_insertKey (temp_9.readProperty_mIndexIdentifier (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mUIntType (), var_cppIndexVarName_8479, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 247)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    const GGS_templateInstructionForeachAST temp_11 = this ;
    test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 249)).objectCompare (var_enumerationDescriptor_7726.getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 249)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_templateInstructionForeachAST temp_12 = this ;
      const GGS_templateInstructionForeachAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfProperties (), var_enumerationDescriptor_7726.getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 251)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 251)).add_operation (GGS_string (" variables are required here ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 251)).add_operation (temp_13.readProperty_mEnumeration ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 252)).getter_string (SOURCE_FILE ("template-for-instruction.galgas3", 251)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 251)).add_operation (GGS_string (" provided)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 252)), fixItArray14  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 250)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_templateInstructionForeachAST temp_15 = this ;
    UpEnumerator_enumerationDescriptorList enumerator_9051 (var_enumerationDescriptor_7726) ;
    UpEnumerator_lstringlist enumerator_9103 (temp_15.readProperty_mEnumeration ()) ;
    while (enumerator_9051.hasCurrentObject () && enumerator_9103.hasCurrentObject ()) {
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = GGS_bool (ComparisonKind::notEqual, enumerator_9103.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          {
          var_doVariableMap_8418.setter_insertKey (enumerator_9103.current_mValue (HERE), enumerator_9051.current_mEnumeratedType (HERE), var_enumeratorCppName_8319.add_operation (GGS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 260)).add_operation (enumerator_9051.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("template-for-instruction.galgas3", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 260)).add_operation (GGS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 260)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 257)) ;
          }
        }
      }
      enumerator_9051.gotoNextObject () ;
      enumerator_9103.gotoNextObject () ;
    }
  }
  GGS_templateAnalysisContext var_doAnalysisContext_9453 = GGS_templateAnalysisContext::init_21__21__21_ (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inAnalysisContext.readProperty_mPredefinedTypes (), var_doVariableMap_8418, inCompiler COMMA_HERE) ;
  GGS_templateInstructionListForGeneration var_doInstructionList_9606 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_17 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_doAnalysisContext_9453, ioArgument_ioTypeMap, temp_17.readProperty_mDoInstructionList (), var_doInstructionList_9606, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 270)) ;
  }
  GGS_templateInstructionListForGeneration var_betweenInstructionList_9894 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_18 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_18.readProperty_mBetweenInstructionList (), var_betweenInstructionList_9894, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 280)) ;
  }
  GGS_templateInstructionListForGeneration var_afterInstructionList_10195 = GGS_templateInstructionListForGeneration::init (inCompiler COMMA_HERE) ;
  {
  const GGS_templateInstructionForeachAST temp_19 = this ;
  routine_templateInstructionListAnalysis_3F__26__3F__26__3F__26_ (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, temp_19.readProperty_mAfterInstructionList (), var_afterInstructionList_10195, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 290)) ;
  }
  const GGS_templateInstructionForeachAST temp_20 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_templateInstructionForeachForGeneration::init_21__21__21__21__21__21__21__21_ (temp_20.readProperty_mIsAscending (), var_expression_7604, var_enumeratorCppName_8319, var_beforeInstructionList_8024, var_doInstructionList_9606, var_cppIndexVarName_8479, var_betweenInstructionList_9894, var_afterInstructionList_10195, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 299)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'
//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::method_templateCodeGeneration (GGS_string & ioArgument_ioGeneratedCode,
                                                                                  GGS_stringset & ioArgument_ioInclusionSet,
                                                                                  GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GGS_bool & ioArgument_ioUseColumnMarker,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_foreachVarCppName_11994 ;
  const GGS_templateInstructionForeachForGeneration temp_0 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_0.readProperty_mExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName_11994, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 335)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_templateInstructionForeachForGeneration temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 337)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateInstructionForeachForGeneration temp_3 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_uint ").add_operation (temp_3.readProperty_mIndexCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 338)).add_operation (GGS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 338)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 338)) ;
    }
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (var_foreachVarCppName_11994, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 341)).add_operation (GGS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 341)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 341)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 342)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_4 = this ;
  GGS_string temp_5 ;
  const GalgasBool test_6 = temp_4.readProperty_mIsAscending ().boolEnum () ;
  if (GalgasBool::boolTrue == test_6) {
    temp_5 = GGS_string ("Up") ;
  }else if (GalgasBool::boolFalse == test_6) {
    temp_5 = GGS_string ("Down") ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_5, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 343)) ;
  const GGS_templateInstructionForeachForGeneration temp_7 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("Enumerator_").add_operation (extensionGetter_identifierRepresentation (temp_7.readProperty_mExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 344)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 344)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 344)) ;
  const GGS_templateInstructionForeachForGeneration temp_8 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 345)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 345)).add_operation (var_foreachVarCppName_11994, inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 345)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 345)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 345)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_templateInstructionForeachForGeneration temp_10 = this ;
    const GGS_templateInstructionForeachForGeneration temp_11 = this ;
    test_9 = GGS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 347)).add_operation (temp_11.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 347)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 347)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_templateInstructionForeachForGeneration temp_12 = this ;
      const GGS_templateInstructionForeachForGeneration temp_13 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const bool nonEmpty_").add_operation (temp_12.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 348)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 348)).add_operation (temp_13.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 348)).add_operation (GGS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 348)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 348)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    const GGS_templateInstructionForeachForGeneration temp_15 = this ;
    test_14 = GGS_bool (ComparisonKind::greaterThan, temp_15.readProperty_mBeforeInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 350)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_templateInstructionForeachForGeneration temp_16 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_16.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 351)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 351)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 351)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 352)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_17 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_17.readProperty_mBeforeInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 353)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 361)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 362)) ;
    }
  }
  const GGS_templateInstructionForeachForGeneration temp_18 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("while (").add_operation (temp_18.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 364)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 364)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 364)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 365)) ;
  }
  {
  const GGS_templateInstructionForeachForGeneration temp_19 = this ;
  routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_19.readProperty_mDoInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 367)) ;
  }
  const GGS_templateInstructionForeachForGeneration temp_20 = this ;
  ioArgument_ioGeneratedCode.plusAssignOperation(temp_20.readProperty_mEnumeratorCppName ().add_operation (GGS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 376)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 376)) ;
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    const GGS_templateInstructionForeachForGeneration temp_22 = this ;
    test_21 = GGS_bool (ComparisonKind::greaterThan, temp_22.readProperty_mBetweenInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 378)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_templateInstructionForeachForGeneration temp_23 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (").add_operation (temp_23.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 379)).add_operation (GGS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 379)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 379)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 380)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_24 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_24.readProperty_mBetweenInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 381)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 389)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 390)) ;
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    const GGS_templateInstructionForeachForGeneration temp_26 = this ;
    test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mIndexCppName ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 393)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_templateInstructionForeachForGeneration temp_27 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(temp_27.readProperty_mIndexCppName ().add_operation (GGS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 394)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 394)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 396)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 397)) ;
  GalgasBool test_28 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_28) {
    const GGS_templateInstructionForeachForGeneration temp_29 = this ;
    test_28 = GGS_bool (ComparisonKind::greaterThan, temp_29.readProperty_mAfterInstructionList ().getter_count (SOURCE_FILE ("template-for-instruction.galgas3", 399)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_templateInstructionForeachForGeneration temp_30 = this ;
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nonEmpty_").add_operation (temp_30.readProperty_mEnumeratorCppName (), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 400)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 400)), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 400)) ;
      {
      ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 401)) ;
      }
      {
      const GGS_templateInstructionForeachForGeneration temp_31 = this ;
      routine_templateCodeGenerationForListInstruction_3F__26__26__26__26__26_ (temp_31.readProperty_mAfterInstructionList (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 402)) ;
      }
      {
      ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 410)) ;
      }
      ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 411)) ;
    }
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 414)) ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("template-for-instruction.galgas3", 415)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterTemplateString&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterTemplateString_26_ (GGS_templateInstructionListAST & ioArgument_outResultingInstructionList,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_s_21711 = GGS_string::class_func_retrieveAndResetTemplateString (inCompiler  COMMA_SOURCE_FILE ("templateSyntax.galgas3", 605)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, var_s_21711.getter_count (SOURCE_FILE ("templateSyntax.galgas3", 606)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_outResultingInstructionList.addAssignOperation (GGS_templateInstructionStringAST::init_21_ (var_s_21711, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("templateSyntax.galgas3", 607)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@templateGetterCallInExpressionAST templateExpressionAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::method_templateExpressionAnalysis (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GGS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticExpressionForGeneration var_receiverExpression_3850 ;
  const GGS_templateGetterCallInExpressionAST temp_0 = this ;
  callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) temp_0.readProperty_mReceiverExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_receiverExpression_3850, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 77)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3900 = var_receiverExpression_3850.readProperty_mResultType () ;
  GGS_string var_receiverTypeName_3952 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 85)).readProperty_typeName ().readProperty_string () ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_bool test_2 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 87)).readProperty_typeKind ().getter_isStructType (SOURCE_FILE ("templateAnalysis.galgas3", 87)) ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      test_2 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 87)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("templateAnalysis.galgas3", 87)) ;
    }
    test_1 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateGetterCallInExpressionAST temp_3 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 88)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_templateGetterCallInExpressionAST temp_4 = this ;
        test_1 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 89)).readProperty_propertyMap ().getter_hasKey (temp_4.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 89)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_templateGetterCallInExpressionAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead og getter call"), fixItArray6  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 90)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_getterMap var_getterMap_4427 = extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 93)).readProperty_getterMap () ;
    GGS_functionSignature var_getterFormalArgumentTypeList_4526 ;
    GGS_methodKind var_kind_4575 ;
    GGS_bool var_hasCompilerArgument_4594 ;
    GGS_unifiedTypeMapEntry var_returnedType_4643 ;
    GGS_stringlist var_fieldList_4664 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
    const GGS_templateGetterCallInExpressionAST temp_7 = this ;
    GGS_string var_actualGetterName_4699 = temp_7.readProperty_mGetterName ().readProperty_string () ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_templateGetterCallInExpressionAST temp_9 = this ;
      test_8 = var_getterMap_4427.getter_hasKey (temp_9.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GGS_string var_actualGetterNameString_4981 ;
        const GGS_templateGetterCallInExpressionAST temp_10 = this ;
        GGS_location joker_4903 ; // Joker input parameter
        GGS_methodQualifier joker_4965 ; // Joker input parameter
        var_getterMap_4427.method_searchKey (temp_10.readProperty_mGetterName (), var_kind_4575, var_getterFormalArgumentTypeList_4526, joker_4903, var_hasCompilerArgument_4594, var_returnedType_4643, joker_4965, var_actualGetterNameString_4981, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 102)) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, var_actualGetterNameString_4981.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_templateGetterCallInExpressionAST temp_12 = this ;
            GenericArray <FixItDescription> fixItArray13 ;
            appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, var_actualGetterName_4699) ;
            inCompiler->emitSemanticError (temp_12.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray13  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 112)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GGS_uint var_matchingReaderCount_5174 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 116)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("templateAnalysis.galgas3", 116)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          var_getterFormalArgumentTypeList_4526 = GGS_functionSignature::init (inCompiler COMMA_HERE) ;
          var_hasCompilerArgument_4594 = GGS_bool (true) ;
          var_returnedType_4643 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("templateAnalysis.galgas3", 119)) ;
          var_kind_4575 = GGS_methodKind::class_func_definedAsMember (SOURCE_FILE ("templateAnalysis.galgas3", 120)) ;
          UpEnumerator_typedPropertyList enumerator_5491 (extensionGetter_definition (var_receiverType_3900, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 121)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_5491.hasCurrentObject ()) {
            GGS_getterMap var_aMap_5574 = extensionGetter_definition (enumerator_5491.current_typeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 122)).readProperty_getterMap () ;
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_templateGetterCallInExpressionAST temp_16 = this ;
              const GGS_getterMap_2E_element var_entry_5638 = var_aMap_5574.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_5574.readSubscript__3F_ (temp_16.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_15 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_15) {
                var_matchingReaderCount_5174.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 124)) ;
                var_getterFormalArgumentTypeList_4526 = var_entry_5638.readProperty_mArgumentTypeList () ;
                var_hasCompilerArgument_4594 = var_entry_5638.readProperty_mHasCompilerArgument () ;
                var_returnedType_4643 = var_entry_5638.readProperty_mReturnedType () ;
                var_kind_4575 = var_entry_5638.readProperty_mKind () ;
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = GGS_bool (ComparisonKind::notEqual, var_entry_5638.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    var_actualGetterName_4699 = var_entry_5638.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
                var_fieldList_4664.addAssignOperation (enumerator_5491.current_name (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 132)) ;
              }
            }
            enumerator_5491.gotoNextObject () ;
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            test_18 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_5174.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              const GGS_templateGetterCallInExpressionAST temp_19 = this ;
              const GGS_templateGetterCallInExpressionAST temp_20 = this ;
              GenericArray <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (temp_19.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)).add_operation (temp_20.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)).add_operation (GGS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 137)), fixItArray21  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 136)) ;
              var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
              var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
              var_returnedType_4643.drop () ; // Release error dropped variable
              var_kind_4575.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_22 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_22) {
              test_22 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_5174.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_22) {
                GGS_string var_s_6555 = GGS_string::makeEmptyString () ;
                UpEnumerator_stringlist enumerator_6577 (var_fieldList_4664) ;
                while (enumerator_6577.hasCurrentObject ()) {
                  var_s_6555.plusAssignOperation(enumerator_6577.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 143)) ;
                  enumerator_6577.gotoNextObject () ;
                  if (enumerator_6577.hasCurrentObject ()) {
                    var_s_6555.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 144)) ;
                  }
                }
                const GGS_templateGetterCallInExpressionAST temp_23 = this ;
                const GGS_templateGetterCallInExpressionAST temp_24 = this ;
                GenericArray <FixItDescription> fixItArray25 ;
                inCompiler->emitSemanticError (temp_23.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (temp_24.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (GGS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 147)).add_operation (var_s_6555, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 148)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 148)), fixItArray25  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 146)) ;
                var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
                var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
                var_returnedType_4643.drop () ; // Release error dropped variable
                var_kind_4575.drop () ; // Release error dropped variable
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = GGS_bool (ComparisonKind::equal, var_getterMap_4427.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 151)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            const GGS_templateGetterCallInExpressionAST temp_27 = this ;
            GenericArray <FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (temp_27.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 153)).add_operation (GGS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 153)), fixItArray28  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 152)) ;
            var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
            var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
            var_returnedType_4643.drop () ; // Release error dropped variable
            var_kind_4575.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_26) {
          const GGS_templateGetterCallInExpressionAST temp_29 = this ;
          const GGS_templateGetterCallInExpressionAST temp_30 = this ;
          GenericArray <FixItDescription> fixItArray31 ;
          appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, var_getterMap_4427.getter_keyList (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 159))) ;
          inCompiler->emitSemanticError (temp_29.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)).add_operation (temp_30.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)).add_operation (GGS_string ("' getter"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 157)), fixItArray31  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 156)) ;
          var_getterFormalArgumentTypeList_4526.drop () ; // Release error dropped variable
          var_hasCompilerArgument_4594.drop () ; // Release error dropped variable
          var_returnedType_4643.drop () ; // Release error dropped variable
          var_kind_4575.drop () ; // Release error dropped variable
        }
      }
    }
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_templateGetterCallInExpressionAST temp_33 = this ;
      test_32 = GGS_bool (ComparisonKind::notEqual, temp_33.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 163)).objectCompare (var_getterFormalArgumentTypeList_4526.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 163)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        const GGS_templateGetterCallInExpressionAST temp_34 = this ;
        const GGS_templateGetterCallInExpressionAST temp_35 = this ;
        const GGS_templateGetterCallInExpressionAST temp_36 = this ;
        GenericArray <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (temp_34.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_35.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (GGS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (var_receiverTypeName_3952, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (var_getterFormalArgumentTypeList_4526.getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 165)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 165)).add_operation (temp_36.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("templateAnalysis.galgas3", 166)).getter_string (SOURCE_FILE ("templateAnalysis.galgas3", 166)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 165)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 166)), fixItArray37  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 164)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      GGS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_7984 = GGS_semanticExpressionListForGeneration::init (inCompiler COMMA_HERE) ;
      const GGS_templateGetterCallInExpressionAST temp_38 = this ;
      UpEnumerator_templateExpressionListAST enumerator_8063 (temp_38.readProperty_mExpressionList ()) ;
      UpEnumerator_functionSignature enumerator_8162 (var_getterFormalArgumentTypeList_4526) ;
      while (enumerator_8063.hasCurrentObject () && enumerator_8162.hasCurrentObject ()) {
        GalgasBool test_39 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_39) {
          test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_8162.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_8063.current_mActualSelector (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_39) {
            GGS_string temp_40 ;
            const GalgasBool test_41 = GGS_bool (ComparisonKind::notEqual, enumerator_8162.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_41) {
              temp_40 = enumerator_8162.current_mFormalSelector (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 172)) ;
            }else if (GalgasBool::boolFalse == test_41) {
              temp_40 = GGS_string::makeEmptyString () ;
            }
            GGS_string var_s_8287 = GGS_string ("!").add_operation (temp_40, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 172)) ;
            GenericArray <FixItDescription> fixItArray42 ;
            appendFixItActions (fixItArray42, EnumFixItKind::fixItReplace, var_s_8287) ;
            inCompiler->emitSemanticError (enumerator_8063.current_mActualSelector (HERE).readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_8287, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 173)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 173)), fixItArray42  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 173)) ;
          }
        }
        GGS_semanticExpressionForGeneration var_exp_8693 ;
        callExtensionMethod_templateExpressionAnalysis ((cPtr_templateExpressionAST *) enumerator_8063.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, var_exp_8693, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 175)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_8162.current_mFormalArgumentType (HERE), var_exp_8693.readProperty_mResultType (), enumerator_8063.current_mEndOfExpressionLocation (HERE), var_exp_8693, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 182)) ;
        }
        var_constructorEffectiveParameterList_7984.addAssignOperation (var_exp_8693  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 183)) ;
        enumerator_8063.gotoNextObject () ;
        enumerator_8162.gotoNextObject () ;
      }
      GalgasBool test_43 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_43) {
        const GGS_templateGetterCallInExpressionAST temp_44 = this ;
        test_43 = GGS_bool (ComparisonKind::notEqual, var_actualGetterName_4699.objectCompare (temp_44.readProperty_mGetterName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_43) {
          const GGS_templateGetterCallInExpressionAST temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          appendFixItActions (fixItArray46, EnumFixItKind::fixItReplace, var_actualGetterName_4699) ;
          inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete getter"), fixItArray46  COMMA_SOURCE_FILE ("templateAnalysis.galgas3", 186)) ;
        }
      }
      const GGS_templateGetterCallInExpressionAST temp_47 = this ;
      outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_4643, temp_47.readProperty_mGetterName ().readProperty_location (), var_kind_4575, var_receiverExpression_3850, var_fieldList_4664, var_actualGetterName_4699, var_constructorEffectiveParameterList_7984, var_hasCompilerArgument_4594, inCompiler COMMA_HERE) ;
    }
  }
}

